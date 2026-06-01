unsigned __int64 __fastcall sub_4FDD70(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 *v9; // rbx
  char *v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v14; // rax
  char *v15; // rbp
  int v16; // eax
  int v17; // eax
  char v18; // dl
  _BYTE *v19; // rax
  bool v20; // dl
  char *v21; // rdx
  char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r13
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 i; // r13
  char *v30; // rbp
  int v31; // eax
  int v32; // eax
  char v33; // dl
  _BYTE *v34; // rax
  bool v35; // dl
  char *v36; // rdx
  char *v37; // rsi
  __int64 v38; // rax
  __m128i v39; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+18h] [rbp-40h]

  v3 = *(unsigned int *)(a2 + 4);
  v40 = __readfsqword(0x28u);
  v39 = _mm_unpacklo_epi64(
          (__m128i)*(unsigned __int64 *)(a2 + 8),
          (__m128i)(unsigned __int64)(*(_QWORD *)(a2 + 8) + v3));
  v5 = unpack_dd(&v39);
  v6 = *(_QWORD *)(a1 + 1576);
  if ( !*(_BYTE *)(v6 + 144) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v7 = v5 - *(_DWORD *)(*(_QWORD *)(v6 + 8) + 68LL);
  if ( v7 >= *(_QWORD *)(v6 + 40) )
    sub_4FC970();
  v8 = v7 << 6;
  *(_DWORD *)(*(_QWORD *)(v6 + 32) + v8 + 56) = v5;
  v9 = (__int64 *)(*(_QWORD *)(v6 + 32) + v8);
  v10 = (char *)*v9;
  if ( *v9 )
  {
    v9[1] = 0;
    qfree(v10);
    *v9 = 0;
    v9[2] = 0;
  }
  if ( a3 )
  {
    v23 = unpack_dq(&v39, v39.m128i_i64[1]);
    v24 = v39.m128i_i64[1];
    v25 = v23;
    if ( v23 )
    {
      v26 = 0;
      do
      {
        unpack_dd(&v39);
        unpack_dd(&v39);
        unpack_dd(&v39);
        v24 = v39.m128i_i64[1];
        v27 = v39.m128i_i64[0];
        if ( v39.m128i_i64[0] < (unsigned __int64)v39.m128i_i64[1] )
        {
          if ( (unsigned __int64)(v39.m128i_i64[0] + 1) >= v39.m128i_i64[1] )
            v27 = v39.m128i_i64[0] + 1;
          else
            v27 = v39.m128i_i64[0] + 2;
        }
        ++v26;
        v39.m128i_i64[0] = v27;
      }
      while ( v26 != v25 );
    }
    v28 = unpack_dq(&v39, v24);
    if ( v28 )
    {
      for ( i = 0; i != v28; ++i )
      {
        v36 = (char *)v9[1];
        v37 = (char *)*v9;
        if ( v9[2] < (unsigned __int64)(v36 + 1) )
        {
          v38 = qvector_reserve(v9, v37, v36 + 1, 17);
          v36 = (char *)v9[1];
          *v9 = v38;
          v37 = (char *)v38;
        }
        v30 = &v37[17 * (_QWORD)v36];
        *(_QWORD *)v30 = 0;
        v30[16] = 0;
        ++v9[1];
        v31 = unpack_dd(&v39);
        *(_DWORD *)v30 = v31;
        *((_DWORD *)v30 + 1) = unpack_dd(&v39) + v31;
        v32 = unpack_dd(&v39);
        v33 = 0;
        *((_DWORD *)v30 + 2) = v32;
        v34 = (_BYTE *)v39.m128i_i64[0];
        if ( v39.m128i_i64[0] < (unsigned __int64)v39.m128i_i64[1] )
        {
          v33 = *(_BYTE *)v39.m128i_i64[0];
          v34 = (_BYTE *)(v39.m128i_i64[0] + 1);
        }
        v30[12] = v33;
        v35 = 0;
        v39.m128i_i64[0] = (__int64)v34;
        if ( (unsigned __int64)v34 < v39.m128i_i64[1] )
          v35 = *v34++ != 0;
        v39.m128i_i64[0] = (__int64)v34;
        v30[16] = v35;
      }
    }
  }
  else
  {
    v11 = 0;
    v12 = unpack_dq(&v39, v39.m128i_i64[1]);
    if ( v12 )
    {
      do
      {
        v21 = (char *)v9[1];
        v22 = (char *)*v9;
        if ( v9[2] < (unsigned __int64)(v21 + 1) )
        {
          v14 = qvector_reserve(v9, v22, v21 + 1, 17);
          v21 = (char *)v9[1];
          *v9 = v14;
          v22 = (char *)v14;
        }
        v15 = &v22[17 * (_QWORD)v21];
        *(_QWORD *)v15 = 0;
        v15[16] = 0;
        ++v9[1];
        v16 = unpack_dd(&v39);
        *(_DWORD *)v15 = v16;
        *((_DWORD *)v15 + 1) = unpack_dd(&v39) + v16;
        v17 = unpack_dd(&v39);
        v18 = 0;
        *((_DWORD *)v15 + 2) = v17;
        v19 = (_BYTE *)v39.m128i_i64[0];
        if ( v39.m128i_i64[0] < (unsigned __int64)v39.m128i_i64[1] )
        {
          v18 = *(_BYTE *)v39.m128i_i64[0];
          v19 = (_BYTE *)(v39.m128i_i64[0] + 1);
        }
        v15[12] = v18;
        v20 = 0;
        v39.m128i_i64[0] = (__int64)v19;
        if ( (unsigned __int64)v19 < v39.m128i_i64[1] )
          v20 = *v19++ != 0;
        ++v11;
        v39.m128i_i64[0] = (__int64)v19;
        v15[16] = v20;
      }
      while ( v11 != v12 );
    }
  }
  return v40 - __readfsqword(0x28u);
}

