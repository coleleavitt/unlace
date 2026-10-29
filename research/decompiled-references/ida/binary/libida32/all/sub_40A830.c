unsigned __int64 __fastcall sub_40A830(__int64 a1)
{
  __int64 v1; // r15
  unsigned int i; // ebx
  __int16 v4; // cx
  __int16 v5; // r14
  unsigned __int8 v6; // bp
  int v7; // ebp
  unsigned int v8; // eax
  __m128i v9; // xmm1
  __int64 v10; // rax
  unsigned __int8 v11; // bp
  __int32 v12; // eax
  __int16 v13; // ax
  __int16 v14; // [rsp+8h] [rbp-A0h]
  unsigned __int8 v15; // [rsp+15h] [rbp-93h] BYREF
  unsigned __int16 v16; // [rsp+16h] [rbp-92h]
  unsigned int v17; // [rsp+18h] [rbp-90h]
  int v18; // [rsp+1Ch] [rbp-8Ch]
  int v19; // [rsp+20h] [rbp-88h] BYREF
  __m128i si128; // [rsp+24h] [rbp-84h]
  int v21; // [rsp+34h] [rbp-74h]
  _BYTE v22[40]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 1480);
  v23 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_79B370(a1, v1 + 2356) )
  {
    v21 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23836A0);
    for ( i = sub_79B7E0(v1 + 2356, a1, 83); i != -1; i = sub_79B840(v1 + 2356, a1, i, 83) )
    {
      if ( sub_79B5C0(v1 + 2356, a1, i, &v15, 11, 83) == 11 )
      {
        v11 = v15;
        LOBYTE(v4) = v15 & 0xF;
        if ( (v15 & 0xF) == 0xF )
        {
          v13 = sub_79B3A0(v1 + 2356, a1, i, 67);
          if ( v13 <= 0 )
          {
            node2ea(i);
            sub_365330();
          }
          v4 = v13 | 0x8000;
          v11 = v15;
          v5 = v13 | 0x8000;
        }
        else if ( (_BYTE)v4 )
        {
          v4 = (unsigned __int8)v4;
          v5 = (unsigned __int8)v4;
        }
        else
        {
          v5 = 13;
          v4 = 13;
        }
        v6 = v11 >> 4;
        si128.m128i_i32[0] = v6;
        v7 = v6 & 1;
        if ( v7 )
        {
          v14 = v4;
          v12 = netnode_altval(*(unsigned int *)(v1 + 2356), i, 65);
          v4 = v14;
          si128.m128i_i32[1] = v12;
        }
        v8 = v16;
        v9 = _mm_cvtsi32_si128(v17);
        LOWORD(v19) = v4;
        if ( v16 == 0xFFFF )
          v8 = -1;
        v21 = v18;
        si128.m128i_i64[1] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), v9).m128i_u64[0];
        v10 = sub_408EB0((__int64)v22, 28, &v19);
        sub_79B440(v1 + 2356, a1, i, v22, v10, 83);
        if ( v5 < 0 )
          sub_79B4D0(v1 + 2356, a1, i, 67);
        if ( (_BYTE)v7 )
          sub_79B4D0(v1 + 2356, a1, i, 65);
      }
    }
  }
  return v23 - __readfsqword(0x28u);
}

