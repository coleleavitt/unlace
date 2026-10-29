unsigned __int64 __fastcall sub_FBA20(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  unsigned int v3; // ebp
  const __m128i *v4; // r12
  __int64 v5; // rsi
  int v6; // r13d
  int v7; // edx
  int v8; // eax
  _QWORD *v10; // rax
  __int64 v11; // r11
  __int64 v12; // rax
  __m128i v13; // [rsp+0h] [rbp-58h] BYREF
  __m128i v14; // [rsp+10h] [rbp-48h]
  __int64 v15; // [rsp+20h] [rbp-38h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 8);
  v16 = __readfsqword(0x28u);
  v2 = sub_15D8D0(v1 + 440);
  v3 = *(__int16 *)(v2 + 30);
  v4 = (const __m128i *)v2;
  v5 = v3 + 1;
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
  if ( v6 <= (int)v5 || !(unsigned __int8)sub_FB7B0(a1, v5, v2, 1) )
  {
    v7 = 0;
    v8 = -1030792151
       * (((__int64)(*(_QWORD *)(a1 + 288) - *(_QWORD *)(a1 + 296)) >> 3)
        + ((__int64)(*(_QWORD *)(a1 + 272) - *(_QWORD *)(a1 + 256)) >> 3))
       + 2
       * ((*(_QWORD *)(a1 + 312) == 0)
        + (unsigned int)((__int64)(*(_QWORD *)(a1 + 312) - *(_QWORD *)(a1 + 280)) >> 3)
        - 1)
       - *(_DWORD *)(a1 + 320);
    if ( v6 >= 0 )
      v7 = v6;
    if ( v8 > v7 )
      v8 = v7;
    if ( v3 == v8 - 1 && (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 920LL) & 2) != 0 )
    {
      v10 = (_QWORD *)sub_FB160(a1, v3);
      if ( v10 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v10 + 80LL))(*v10, *(_QWORD *)(v11 + 760)) )
        {
          v12 = v4[2].m128i_i64[0];
          v13 = _mm_loadu_si128(v4);
          v15 = v12;
          v14 = _mm_loadu_si128(v4 + 1);
          v14.m128i_i16[6] = tag_strlen();
          sub_FB7B0(a1, v3, (__int64)&v13, 1);
        }
      }
    }
  }
  return v16 - __readfsqword(0x28u);
}

