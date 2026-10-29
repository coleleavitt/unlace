__int64 __fastcall sub_BA6850(_BYTE *a1, const __m128i *a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int8 (*v5)(void); // rcx
  __int64 (*v6)(); // rcx
  unsigned int v7; // r13d
  __int32 v8; // eax
  __int64 *v9; // r12
  const __m128i *v10; // rbx
  __int64 v11; // r15
  __m128i v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 (*v16)(); // rdx
  __int64 (*v17)(); // rdx
  __m128i v18; // [rsp+0h] [rbp-58h] BYREF
  __int64 v19; // [rsp+10h] [rbp-48h]
  __int64 v20; // [rsp+18h] [rbp-40h]

  v4 = *(_QWORD *)a1;
  v5 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 240LL);
  if ( (char *)v5 != (char *)sub_BA1BD0 )
  {
    if ( !v5() )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  v6 = *(__int64 (**)())(v4 + 7992);
  if ( v6 != sub_BA3B10 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, const __m128i *, __int64))v6)(a1, a2, a3) )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  if ( a1[9] )
  {
    v16 = *(__int64 (**)())(v4 + 232);
    if ( v16 != sub_BA1BC0 )
    {
      if ( !((unsigned __int8 (__fastcall *)(_BYTE *, const __m128i *))v16)(a1, a2) )
        return 0;
      v4 = *(_QWORD *)a1;
    }
    v17 = *(__int64 (**)())(v4 + 6976);
    if ( v17 != sub_BA36E0 )
    {
      if ( !((unsigned __int8 (__fastcall *)(_BYTE *, const __m128i *))v17)(a1, a2) )
        return 0;
      v4 = *(_QWORD *)a1;
    }
  }
  v7 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(v4 + 120))(a1, a2[2].m128i_i64[0]);
  if ( !(_BYTE)v7 )
    return 0;
  v8 = a2[1].m128i_i32[1];
  if ( v8 )
  {
    v9 = (__int64 *)(a3 + 16);
    v10 = a2 + 3;
    v11 = a3 + 8LL * (unsigned int)(v8 - 1) + 24;
    while ( 1 )
    {
      v12 = _mm_loadu_si128(v10);
      v13 = v10[1].m128i_i64[0];
      v20 = *v9;
      v14 = *(_QWORD *)a1;
      v18 = v12;
      v19 = v13;
      if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, __m128i *))(v14 + 112))(a1, &v18) )
        break;
      ++v9;
      v10 = (const __m128i *)((char *)v10 + 24);
      if ( v9 == (__int64 *)v11 )
        return v7;
    }
    return 0;
  }
  return v7;
}

