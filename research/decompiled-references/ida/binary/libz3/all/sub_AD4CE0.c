__m128i *__fastcall sub_AD4CE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __m128i *result; // rax
  __int64 **v10; // rbx
  __int64 **v11; // r13
  __int64 *v12; // rbp
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r15
  _DWORD *v17; // r9
  __int64 v18; // rax
  __m128i **v19; // rcx
  __m128i *v20; // rbp
  unsigned int v21; // edx
  __m128i *v22; // rsi
  int v23; // edi
  __int64 v24; // rdx
  __m128i **v25; // r8
  __int64 v26; // rdx
  void *v27; // rdi
  __int64 v28; // [rsp+0h] [rbp-58h]
  int v29; // [rsp+Ch] [rbp-4Ch]
  __m128i *v30; // [rsp+10h] [rbp-48h] BYREF
  int v31; // [rsp+18h] [rbp-40h]

  v6 = sub_ACDB80(
         a3,
         a3 + 120,
         *(_QWORD *)(a1 + 16),
         *(_DWORD *)(a1 + 24),
         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned int *)(a1 + 24) + 48));
  v7 = *(_QWORD *)(a4 + 8696);
  v28 = v6;
  v8 = **(_DWORD **)(a1 + 16) + 0x80000000;
  if ( v7 && (unsigned int)v8 < *(_DWORD *)(v7 - 4) )
    result = (__m128i *)(v7 + 8 * v8);
  else
    result = (__m128i *)(a4 + 8704);
  v10 = (__int64 **)result->m128i_i64[0];
  if ( !result->m128i_i64[0] )
    return result;
  result = (__m128i *)*((unsigned int *)v10 - 1);
  v11 = &v10[(_QWORD)result];
  if ( v11 == v10 )
    return result;
  do
  {
    v12 = *v10;
    v13 = **v10;
    if ( (unsigned int)sub_8E7030(a4) )
    {
      result = (__m128i *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a4 + 7488) + 56LL))(
                            *(_QWORD *)(a4 + 7488),
                            v13);
      if ( !(_BYTE)result )
        goto LABEL_25;
    }
    v14 = v28;
    do
    {
      v15 = v14;
      v14 = *(_QWORD *)(v14 + 8);
    }
    while ( v14 );
    v16 = *(_QWORD *)(v15 + 56);
    v17 = (_DWORD *)v12[*(unsigned int *)(a1 + 24) + 14];
    v18 = *(unsigned int *)(v16 + 16);
    v19 = *(__m128i ***)(v16 + 8);
    v20 = *(__m128i **)v17;
    v21 = v18 - 1;
    v18 *= 16;
    v22 = (__m128i *)((char *)v19 + v18);
    v23 = *(_DWORD *)(*(_QWORD *)v17 + 12LL);
    v24 = 16LL * (v23 & v21);
    v25 = &v19[(unsigned __int64)v24 / 8];
    if ( v24 != v18 )
    {
      for ( result = (__m128i *)&v19[(unsigned __int64)v24 / 8]; v22 != result; ++result )
      {
        v26 = result->m128i_i64[0];
        if ( result->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v26 + 12) == v23 && v20 == (__m128i *)v26 )
            goto LABEL_25;
        }
        else if ( !v26 )
        {
          goto LABEL_17;
        }
      }
    }
    if ( v19 == v25 )
    {
LABEL_17:
      v29 = v17[9];
      if ( v20->m128i_i16[2] )
        goto LABEL_21;
LABEL_18:
      result = *(__m128i **)(v20[1].m128i_i64[0] + 24);
      if ( !result || result->m128i_i32[0] != 3 || result->m128i_i32[1] )
      {
        if ( v20[1].m128i_i32[2] )
          goto LABEL_21;
        goto LABEL_24;
      }
      goto LABEL_25;
    }
    while ( 1 )
    {
      result = *v19;
      if ( (unsigned __int64)*v19 <= 1 )
        break;
      if ( result->m128i_i32[3] == v23 && v20 == result )
        goto LABEL_25;
LABEL_31:
      v19 += 2;
      if ( v25 == v19 )
        goto LABEL_17;
    }
    if ( result )
      goto LABEL_31;
    v29 = v17[9];
    if ( !v20->m128i_i16[2] )
      goto LABEL_18;
LABEL_21:
    v27 = *(void **)(v16 + 72);
    if ( v27 )
      memset(v27, 0, 4LL * *(unsigned int *)(v16 + 68));
    *(_DWORD *)(v16 + 64) = 0;
    sub_AC7030(v16 + 56, v20);
LABEL_24:
    ++v20->m128i_i32[2];
    v30 = v20;
    v31 = v29;
    result = sub_A3A380(v16 + 8, &v30);
LABEL_25:
    ++v10;
  }
  while ( v11 != v10 );
  return result;
}

