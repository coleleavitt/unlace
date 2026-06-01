__int64 __fastcall sub_1F6F0F0(__int64 a1, unsigned int **a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 *v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  _BOOL8 v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // rax
  unsigned int *v21; // rbp
  unsigned int *j; // r13
  __int64 v23; // rbx
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 *i; // [rsp+0h] [rbp-58h]
  unsigned int *v27; // [rsp+8h] [rbp-50h]
  unsigned int *v28; // [rsp+10h] [rbp-48h]

  sub_9B9C90(*(_QWORD *)(a1 + 16), *((unsigned int *)a2 + 2));
  v27 = *a2;
  result = (__int64)&(*a2)[34 * *((unsigned int *)a2 + 2)];
  v28 = (unsigned int *)result;
  if ( (unsigned int *)result != *a2 )
  {
    do
    {
      v3 = *(_QWORD *)(a1 + 16);
      v4 = *v27;
      v5 = *(unsigned int *)(v3 + 8);
      if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v3 + 12) )
      {
        sub_2237220(*(_QWORD *)(a1 + 16), v3 + 16, v5 + 1, 8);
        v5 = *(unsigned int *)(v3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v3 + 8 * v5) = v4;
      ++*(_DWORD *)(v3 + 8);
      v6 = *(_QWORD *)(a1 + 16);
      v7 = v27[4];
      v8 = *(unsigned int *)(v6 + 8);
      if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(v6 + 12) )
      {
        sub_2237220(*(_QWORD *)(a1 + 16), v6 + 16, v8 + 1, 8);
        v8 = *(unsigned int *)(v6 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v6 + 8 * v8) = v7;
      ++*(_DWORD *)(v6 + 8);
      v9 = *((__int64 **)v27 + 1);
      for ( i = &v9[7 * v27[4]]; i != v9; v9 += 7 )
      {
        v10 = *(_QWORD *)(a1 + 16);
        v11 = *((unsigned int *)v9 + 2);
        v12 = *(unsigned int *)(v10 + 8);
        if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(v10 + 12) )
        {
          sub_2237220(*(_QWORD *)(a1 + 16), v10 + 16, v12 + 1, 8);
          v12 = *(unsigned int *)(v10 + 8);
        }
        *(_QWORD *)(*(_QWORD *)v10 + 8 * v12) = v11;
        ++*(_DWORD *)(v10 + 8);
        v13 = *(_QWORD *)(a1 + 16);
        v14 = *(unsigned int *)(v13 + 8);
        v15 = *v9 != 0;
        if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(v13 + 12) )
        {
          sub_2237220(*(_QWORD *)(a1 + 16), v13 + 16, v14 + 1, 8);
          v14 = *(unsigned int *)(v13 + 8);
        }
        *(_QWORD *)(*(_QWORD *)v13 + 8 * v14) = v15;
        ++*(_DWORD *)(v13 + 8);
        v16 = *v9;
        if ( *v9 )
        {
          v17 = *(unsigned int *)(a1 + 32);
          if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
          {
            sub_2237220(a1 + 24, a1 + 40, v17 + 1, 8);
            v17 = *(unsigned int *)(a1 + 32);
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v17) = v16;
          ++*(_DWORD *)(a1 + 32);
        }
        v18 = *(_QWORD *)(a1 + 16);
        v19 = *((unsigned int *)v9 + 6);
        v20 = *(unsigned int *)(v18 + 8);
        if ( v20 + 1 > (unsigned __int64)*(unsigned int *)(v18 + 12) )
        {
          sub_2237220(*(_QWORD *)(a1 + 16), v18 + 16, v20 + 1, 8);
          v20 = *(unsigned int *)(v18 + 8);
        }
        *(_QWORD *)(*(_QWORD *)v18 + 8 * v20) = v19;
        v21 = (unsigned int *)v9[2];
        ++*(_DWORD *)(v18 + 8);
        for ( j = &v21[6 * *((unsigned int *)v9 + 6)]; j != v21; ++*(_DWORD *)(v23 + 8) )
        {
          while ( 1 )
          {
            v23 = *(_QWORD *)(a1 + 16);
            v24 = *v21;
            v25 = *(unsigned int *)(v23 + 8);
            if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(v23 + 12) )
              break;
            v21 += 6;
            *(_QWORD *)(*(_QWORD *)v23 + 8 * v25) = v24;
            ++*(_DWORD *)(v23 + 8);
            if ( j == v21 )
              goto LABEL_22;
          }
          v21 += 6;
          sub_2237220(*(_QWORD *)(a1 + 16), v23 + 16, v25 + 1, 8);
          *(_QWORD *)(*(_QWORD *)v23 + 8LL * *(unsigned int *)(v23 + 8)) = v24;
        }
LABEL_22:
        ;
      }
      v27 += 34;
      result = (__int64)v27;
    }
    while ( v28 != v27 );
  }
  return result;
}
