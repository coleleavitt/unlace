void *__fastcall sub_78E0C0(_QWORD *a1, unsigned int a2, const void *a3, size_t a4)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  size_t v14; // r13
  __int64 *v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // r13
  __int64 v23; // rcx
  void *v24; // rax
  unsigned __int64 v25; // [rsp+8h] [rbp-60h]
  __int64 v26; // [rsp+10h] [rbp-58h] BYREF
  __int128 v27; // [rsp+18h] [rbp-50h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v6 = a1[737];
  v7 = a1[736];
  v28 = __readfsqword(0x28u);
  v9 = v7;
  if ( a2 >= v6 )
  {
    v10 = a2 + 1;
    if ( v6 != v10 )
    {
      v26 = 0;
      v27 = 0;
      if ( v10 < v6 )
      {
        v22 = a2 + 1;
        do
        {
          v23 = v7 + 24 * v22;
          v24 = *(void **)v23;
          if ( *(_QWORD *)v23 )
          {
            *(_QWORD *)(v23 + 8) = 0;
            v25 = v10;
            qfree(v24);
            v7 = a1[736];
            v10 = v25;
          }
          ++v22;
        }
        while ( v22 < v6 );
        a1[737] = v10;
        v9 = v7;
      }
      else
      {
        v11 = a1[738];
        if ( (unsigned __int64)&v26 < v7 || (unsigned __int64)&v26 >= v7 + 24 * v11 )
        {
          if ( v11 < v10 )
          {
            v9 = qvector_reserve(a1 + 736, v7, v10, 24);
            v6 = a1[737];
            v10 = a2 + 1;
            a1[736] = v9;
          }
          if ( v6 < v10 )
          {
            v12 = 24 * v6;
            do
            {
              v13 = v12 + v9;
              ++v6;
              v12 += 24;
              *(_QWORD *)v13 = 0;
              *(_OWORD *)(v13 + 8) = 0;
              v9 = a1[736];
            }
            while ( v10 != v6 );
          }
        }
        else
        {
          if ( v11 < v10 )
          {
            v9 = qvector_reserve(a1 + 736, v7, v10, 24);
            v6 = a1[737];
            v10 = a2 + 1;
            a1[736] = v9;
          }
          if ( v6 < v10 )
          {
            v20 = 24 * v6;
            do
            {
              v21 = v20 + v9;
              ++v6;
              v20 += 24;
              *(_QWORD *)v21 = 0;
              *(_OWORD *)(v21 + 8) = 0;
              v9 = a1[736];
            }
            while ( v10 != v6 );
          }
        }
        a1[737] = v10;
      }
    }
  }
  v14 = a4;
  v15 = (__int64 *)(v9 + 24LL * a2);
  v16 = v15[1];
  if ( v16 )
  {
    --v16;
    v14 = a4 + v16;
  }
  v17 = *v15;
  if ( v15[2] < v14 + 1 )
  {
    v19 = qvector_reserve(v15, v17, v14 + 1, 1);
    *v15 = v19;
    v17 = v19;
  }
  v15[1] = v14 + 1;
  *(_BYTE *)(v17 + v14) = 0;
  return memmove((void *)(v16 + *v15), a3, a4);
}

