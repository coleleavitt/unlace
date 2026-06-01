unsigned __int64 __fastcall sub_565040(_QWORD *a1, unsigned __int64 *a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  char *v11; // rbx
  __int64 v12; // rdi
  char *v13; // rbx
  int v14; // r15d
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  void (__fastcall **v19)(_QWORD); // rbx
  void (__fastcall **i)(_QWORD); // r15
  __int64 v21; // r12
  int *v22; // rbx
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  void (__fastcall *v26)(_QWORD, int *, _QWORD, _QWORD); // r8
  void (__fastcall **v28)(_QWORD); // rbx
  void (__fastcall **j)(_QWORD); // rbp
  char *v30; // rdi
  char *v32; // rax
  char *v33; // r12
  char *v34; // rbx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  void (__fastcall *v38)(_QWORD, char *, _QWORD, _QWORD); // r8
  __m128i v39; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v41; // [rsp+18h] [rbp-50h]
  unsigned __int64 v42; // [rsp+28h] [rbp-40h]

  v6 = *a2;
  v42 = __readfsqword(0x28u);
  v8 = a2[1];
  v41 = 0;
  ptr = nullptr;
  v9 = v6 + v8;
  v39 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)(v6 + v8));
LABEL_2:
  if ( v6 < v9 )
  {
    do
    {
      v10 = v41;
      v11 = (char *)ptr;
      v12 = v41 + 1;
      if ( *((_QWORD *)&v41 + 1) < (unsigned __int64)(v41 + 1) )
      {
        v32 = (char *)qvector_reserve(&ptr, ptr, v41 + 1, 16);
        v10 = v41;
        ptr = v32;
        v11 = v32;
        v12 = v41 + 1;
      }
      *(_QWORD *)&v41 = v12;
      v13 = &v11[16 * v10];
      v14 = unpack_dd(&v39);
      v15 = unpack_dd(&v39);
      if ( v15 )
      {
        v16 = v39.m128i_i64[0];
        v17 = v39.m128i_i64[0] + v15;
        if ( v39.m128i_i64[1] < v17 || v17 < v39.m128i_i64[0] || (v39.m128i_i64[0] += v15, !v16) )
        {
          if ( !under_debugger )
            interr(1677);
          BUG();
        }
        if ( !v13 )
        {
LABEL_34:
          v9 = v39.m128i_u64[1];
          v6 = v39.m128i_i64[0];
          goto LABEL_2;
        }
      }
      else
      {
        v16 = 0;
        if ( !v13 )
          goto LABEL_34;
      }
      *(_DWORD *)v13 = v14;
      *((_DWORD *)v13 + 1) = v15;
      v18 = v39.m128i_i64[0];
      *((_QWORD *)v13 + 1) = v16;
    }
    while ( v18 < v39.m128i_i64[1] );
  }
  if ( (a3 & 4) != 0 && !a4 )
  {
    v30 = (char *)ptr;
    v33 = (char *)ptr + 16 * v41;
    if ( v33 == ptr )
      goto LABEL_30;
    goto LABEL_38;
  }
  v19 = (void (__fastcall **)(_QWORD))a1[8];
  for ( i = &v19[a1[9]]; i != v19; ++v19 )
    (*v19)(a3 | 2);
  sub_375980(0x55u, a4, &ptr, (a3 & 1) == 0);
  if ( !a3 )
  {
    v21 = v41 - 1;
    if ( (__int64)v41 - 1 >= 0 )
    {
      do
      {
        v22 = (int *)((char *)ptr + 16 * v21);
        v23 = *v22;
        if ( v23 < a1[6] )
        {
          v24 = a1[5];
          v25 = v24 + 16 * v23;
          v26 = *(void (__fastcall **)(_QWORD, int *, _QWORD, _QWORD))v25;
          if ( *(_QWORD *)v25 )
          {
            if ( !*v22 )
            {
              *((_DWORD *)a1 + 29) = 1;
              *((_BYTE *)a1 + 120) = 0;
              v25 = v24 + 16LL * *v22;
            }
            v26(*a1, v22, 0, *(_QWORD *)(v25 + 8));
            if ( !*v22 )
            {
              *((_DWORD *)a1 + 29) = 2;
              *((_BYTE *)a1 + 120) = 0;
            }
          }
        }
      }
      while ( v21-- != 0 );
    }
    goto LABEL_24;
  }
  v30 = (char *)ptr;
  v33 = (char *)ptr + 16 * v41;
  if ( v33 != ptr )
  {
LABEL_38:
    v34 = v30;
    do
    {
      v35 = *(int *)v34;
      if ( v35 < a1[6] )
      {
        v36 = a1[5];
        v37 = v36 + 16 * v35;
        v38 = *(void (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))v37;
        if ( *(_QWORD *)v37 )
        {
          if ( !*(_DWORD *)v34 )
          {
            *((_DWORD *)a1 + 29) = 1;
            *((_BYTE *)a1 + 120) = 0;
            v37 = v36 + 16LL * *(int *)v34;
          }
          v38(*a1, v34, a3, *(_QWORD *)(v37 + 8));
          if ( !*(_DWORD *)v34 )
          {
            *((_DWORD *)a1 + 29) = 2;
            *((_BYTE *)a1 + 120) = 0;
          }
        }
      }
      v34 += 16;
    }
    while ( v33 != v34 );
  }
LABEL_24:
  if ( a4 )
  {
    v28 = (void (__fastcall **)(_QWORD))a1[8];
    for ( j = &v28[a1[9]]; j != v28; ++v28 )
      (*v28)(a3 | 4);
    if ( (a3 & 2) != 0 )
      sub_375980(0x55u, a4, &ptr, (a3 & 1) == 0);
    else
      sub_375980(0x56u, a4, (a3 & 1) == 0);
  }
  v30 = (char *)ptr;
LABEL_30:
  if ( v30 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v30);
  }
  return v42 - __readfsqword(0x28u);
}

