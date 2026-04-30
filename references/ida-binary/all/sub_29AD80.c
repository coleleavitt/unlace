unsigned __int64 __fastcall sub_29AD80(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 (__fastcall *v3)(__int64); // rax
  unsigned __int64 v4; // r12
  const char *v5; // rsi
  const char *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 i; // rbp
  __int64 (__fastcall *v19)(__int64); // rax
  __int64 v21; // rbp
  unsigned __int64 v22; // r14
  __int64 v23; // rdx
  __int64 *v24; // rax
  __int64 v25; // rdi
  unsigned __int64 v26; // r15
  __int64 v27; // rdx
  __int64 *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  int *v38; // [rsp+0h] [rbp-58h] BYREF
  __int128 v39; // [rsp+8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+18h] [rbp-40h]

  v1 = *a1;
  v40 = __readfsqword(0x28u);
  v3 = *(__int64 (__fastcall **)(__int64))(v1 + 56);
  if ( v3 == interactive_graph_t__::vfunc_7 )
    v4 = *((int *)a1 + 46);
  else
    v4 = (int)v3((__int64)a1);
  sub_2904C0(a1 + 25, a1 + 19);
  v5 = (const char *)(a1 + 16);
  sub_2904C0(a1 + 22, a1 + 16);
  v9 = a1[26];
  if ( v4 != v9 )
  {
    v38 = nullptr;
    v39 = 0;
    if ( v4 < v9 )
    {
      v26 = v4;
      do
      {
        v27 = a1[25];
        v28 = (__int64 *)(v27 + 24 * v26);
        v29 = *v28;
        if ( *v28 )
        {
          v28[1] = 0;
          qfree(v29, v5, v27, v6, v7, v8, v38, v39);
        }
        ++v26;
      }
      while ( v26 < v9 );
      a1[26] = v4;
    }
    else
    {
      v5 = (const char *)a1[25];
      v10 = a1[27];
      if ( &v38 < (int **)v5 || (v6 = &v5[24 * v10], &v38 >= (int **)v6) )
      {
        if ( v10 < v4 )
        {
          v34 = qvector_reserve(a1 + 25, v5, v4, 24);
          v9 = a1[26];
          a1[25] = v34;
        }
        if ( v9 < v4 )
        {
          v11 = 24 * v9;
          do
          {
            ++v9;
            v12 = v11 + a1[25];
            v11 += 24;
            *(_QWORD *)v12 = 0;
            *(_OWORD *)(v12 + 8) = 0;
          }
          while ( v4 != v9 );
        }
      }
      else
      {
        if ( v10 < v4 )
        {
          v37 = qvector_reserve(a1 + 25, v5, v4, 24);
          v9 = a1[26];
          a1[25] = v37;
        }
        if ( v9 < v4 )
        {
          v30 = 24 * v9;
          do
          {
            ++v9;
            v31 = v30 + a1[25];
            v30 += 24;
            *(_QWORD *)v31 = 0;
            *(_OWORD *)(v31 + 8) = 0;
          }
          while ( v4 != v9 );
        }
      }
      a1[26] = v4;
    }
  }
  v13 = a1[23];
  if ( v4 != v13 )
  {
    v38 = nullptr;
    v39 = 0;
    if ( v4 < v13 )
    {
      v22 = v4;
      do
      {
        v23 = a1[22];
        v24 = (__int64 *)(v23 + 24 * v22);
        v25 = *v24;
        if ( *v24 )
        {
          v24[1] = 0;
          qfree(v25, v5, v23, v6, v7, v8, v38, v39);
        }
        ++v22;
      }
      while ( v22 < v13 );
      a1[23] = v4;
    }
    else
    {
      v14 = a1[22];
      v15 = a1[24];
      if ( (unsigned __int64)&v38 < v14 || (unsigned __int64)&v38 >= v14 + 24 * v15 )
      {
        if ( v15 < v4 )
        {
          v35 = qvector_reserve(a1 + 22, v14, v4, 24);
          v13 = a1[23];
          a1[22] = v35;
        }
        if ( v13 < v4 )
        {
          v16 = 24 * v13;
          do
          {
            ++v13;
            v17 = v16 + a1[22];
            v16 += 24;
            *(_QWORD *)v17 = 0;
            *(_OWORD *)(v17 + 8) = 0;
          }
          while ( v4 != v13 );
        }
      }
      else
      {
        if ( v15 < v4 )
        {
          v36 = qvector_reserve(a1 + 22, v14, v4, 24);
          v13 = a1[23];
          a1[22] = v36;
        }
        if ( v13 < v4 )
        {
          v32 = 24 * v13;
          do
          {
            ++v13;
            v33 = v32 + a1[22];
            v32 += 24;
            *(_QWORD *)v33 = 0;
            *(_OWORD *)(v33 + 8) = 0;
          }
          while ( v4 != v13 );
        }
      }
      a1[23] = v4;
    }
  }
  for ( i = 0; ; ++i )
  {
    v19 = *(__int64 (__fastcall **)(__int64))(*a1 + 56LL);
    if ( v19 == interactive_graph_t__::vfunc_7 )
    {
      if ( i >= *((int *)a1 + 46) )
        return v40 - __readfsqword(0x28u);
    }
    else if ( i >= (int)v19((__int64)a1) )
    {
      return v40 - __readfsqword(0x28u);
    }
    if ( (*(_BYTE *)(a1[13] + (int)i) & 1) != 0 )
      break;
  }
  v21 = 0;
  if ( v4 )
  {
    do
    {
      if ( *(int *)(a1[10] + 4LL * (int)v21) < 0 )
      {
        v38 = nullptr;
        v39 = 0;
        sub_29A260((__int64)a1, (__int64 *)&v38, v21);
        sub_29A920(a1, &v38, v21);
        if ( v38 )
        {
          *(_QWORD *)&v39 = 0;
          qfree(v38, (const char *)&v38);
        }
      }
      ++v21;
    }
    while ( v4 != v21 );
  }
  return v40 - __readfsqword(0x28u);
}
