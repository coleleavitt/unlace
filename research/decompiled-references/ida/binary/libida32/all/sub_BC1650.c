__int64 __fastcall sub_BC1650(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  unsigned int v14; // ebp
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // r12
  _QWORD *v19; // rbx
  __int64 *v21; // [rsp+8h] [rbp-60h] BYREF
  __m128i v22; // [rsp+10h] [rbp-58h]
  __int64 v23; // [rsp+20h] [rbp-48h]
  __m128i v24; // [rsp+30h] [rbp-38h] BYREF
  __int64 v25; // [rsp+40h] [rbp-28h]

  v21 = a1;
  if ( !(unsigned __int8)sub_BA5AC0(&v21, a2) )
    return 0;
  v3 = v21;
  v4 = *v21;
  v5 = *(__int64 (**)())(*v21 + 1248);
  if ( v5 != sub_BA1DD0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(v21, a2) )
      return 0;
    v3 = v21;
    v4 = *v21;
  }
  v6 = *(__int64 (**)())(v4 + 1272);
  if ( v6 != sub_BA1E00 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(v3, a2) )
      return 0;
    v3 = v21;
    v4 = *v21;
  }
  v7 = *(_QWORD *)(a2 + 64);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD))(v4 + 88))(v3, v7, *(_QWORD *)(a2 + 72)) )
  {
    v10 = *(unsigned int *)(a2 + 24);
    v11 = *(_QWORD *)(a2 + 80);
    v24.m128i_i64[0] = *(_QWORD *)(a2 + 40);
    v24.m128i_i32[2] = v10;
    v12 = _mm_load_si128(&v24);
    v25 = v11;
    v23 = v11;
    v13 = *v21;
    v22 = v12;
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(v13 + 64))(
            v21,
            v7,
            v10,
            v24.m128i_i64[0],
            v8,
            v9,
            v12.m128i_i64[0],
            v12.m128i_i64[1],
            v23);
    if ( (_BYTE)v14 )
    {
      if ( !sub_B6A370(a2) || (v15 = sub_B69600(a2)) == 0 || (unsigned __int8)sub_BABBC0(&v21, v15) )
      {
        v16 = sub_9A4B10(a2);
        v18 = v17;
        v19 = (_QWORD *)v16;
        if ( (_QWORD *)v16 == v17 )
          return v14;
        while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v21 + 32))(v21, *v19) )
        {
          if ( v18 == ++v19 )
            return v14;
        }
      }
    }
  }
  return 0;
}

