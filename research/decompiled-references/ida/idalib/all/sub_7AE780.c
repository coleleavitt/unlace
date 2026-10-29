void *__fastcall sub_7AE780(_QWORD *a1, unsigned __int64 a2, const void *a3, size_t a4)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rsi
  size_t v10; // r14
  __int64 *v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rsi
  unsigned __int64 v15; // r15
  unsigned __int64 v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // rax
  __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r14
  __int64 v27; // rdx
  void *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // [rsp+8h] [rbp-60h]
  __int64 v32; // [rsp+10h] [rbp-58h] BYREF
  __int128 v33; // [rsp+18h] [rbp-50h]
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v6 = a1[740];
  v34 = __readfsqword(0x28u);
  v8 = a1[741];
  v9 = v6;
  if ( a2 >= v8 )
  {
    v15 = a2 + 1;
    v32 = 0;
    v33 = 0;
    if ( a2 + 1 < v8 )
    {
      v26 = a2 + 1;
      do
      {
        v27 = v6 + 24 * v26;
        v28 = *(void **)v27;
        if ( *(_QWORD *)v27 )
        {
          *(_QWORD *)(v27 + 8) = 0;
          v31 = v8;
          qfree(v28);
          v6 = a1[740];
          v8 = v31;
        }
        ++v26;
      }
      while ( v26 < v8 );
      a1[741] = v15;
      v9 = v6;
    }
    else if ( v8 < v15 )
    {
      v17 = a1[742];
      v18 = a1 + 740;
      if ( (unsigned __int64)&v32 < v6 || (unsigned __int64)&v32 >= v6 + 24 * v17 )
      {
        if ( v17 >= v15 || (v29 = qvector_reserve(v18, v6, a2 + 1, 24), v8 = a1[741], a1[740] = v29, v9 = v29, v8 < v15) )
        {
          v23 = 24 * v8;
          do
          {
            v24 = v23 + v9;
            v25 = v8;
            v23 += 24;
            ++v8;
            *(_QWORD *)v24 = 0;
            *(_OWORD *)(v24 + 8) = 0;
            v9 = a1[740];
          }
          while ( a2 != v25 );
        }
      }
      else if ( v17 >= v15
             || (v30 = qvector_reserve(v18, v6, a2 + 1, 24), v8 = a1[741], a1[740] = v30, v9 = v30, v8 < v15) )
      {
        v19 = 24 * v8;
        do
        {
          v20 = v19 + v9;
          v21 = v8;
          v19 += 24;
          ++v8;
          *(_QWORD *)v20 = 0;
          *(_OWORD *)(v20 + 8) = 0;
          v9 = a1[740];
        }
        while ( a2 != v21 );
      }
      a1[741] = v15;
    }
  }
  v10 = a4;
  v11 = (__int64 *)(v9 + 24 * a2);
  v12 = v11[1];
  if ( v12 )
  {
    --v12;
    v10 = a4 + v12;
  }
  v13 = *v11;
  if ( v11[2] < v10 + 1 )
  {
    v22 = qvector_reserve(v11, v13, v10 + 1, 1);
    *v11 = v22;
    v13 = v22;
  }
  v11[1] = v10 + 1;
  *(_BYTE *)(v13 + v10) = 0;
  return memmove((void *)(v12 + *v11), a3, a4);
}
