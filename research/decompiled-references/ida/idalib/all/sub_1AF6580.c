char *__fastcall sub_1AF6580(__int64 *a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  char *v6; // r12
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  char *v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // r13
  unsigned __int64 v16; // r14
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // r14
  __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  int v27; // r10d
  __int64 v28; // rsi
  __int64 i; // rdx
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r13
  __int64 v34; // rax
  char *v35; // [rsp+8h] [rbp-50h]
  __int64 v36; // [rsp+8h] [rbp-50h]
  char *v37; // [rsp+8h] [rbp-50h]
  char *v38; // [rsp+10h] [rbp-48h]
  int v39; // [rsp+18h] [rbp-40h]

  v6 = a2;
  v9 = *((unsigned int *)a1 + 2);
  v10 = *a1;
  v11 = *((unsigned int *)a1 + 3);
  v12 = 8 * v9;
  v13 = &a2[-v10];
  v14 = v9 + a3;
  v15 = v10 + 8 * v9;
  if ( v6 == (char *)v15 )
  {
    if ( v14 > v11 )
    {
      v37 = v13;
      sub_2237220(a1, a1 + 2, v14, 8);
      v10 = *a1;
      v9 = *((unsigned int *)a1 + 2);
      v13 = v37;
      v15 = *a1 + 8 * v9;
    }
    if ( a3 )
    {
      v22 = 0;
      do
        *(_QWORD *)(v15 + 8 * v22++) = a4;
      while ( a3 != v22 );
      v10 = *a1;
      LODWORD(v9) = *((_DWORD *)a1 + 2);
    }
    v6 = &v13[v10];
    *((_DWORD *)a1 + 2) = v9 + a3;
  }
  else
  {
    if ( v14 > v11 )
    {
      v35 = v13;
      sub_2237220(a1, a1 + 2, v14, 8);
      v9 = *((unsigned int *)a1 + 2);
      v10 = *a1;
      v13 = v35;
      v12 = 8 * v9;
      v15 = *a1 + 8 * v9;
      v6 = &v35[*a1];
    }
    v16 = (v12 - (__int64)v13) >> 3;
    if ( v16 >= a3 )
    {
      v23 = 8 * (v9 - a3);
      v24 = v10 + v23;
      v25 = (v12 - v23) >> 3;
      v26 = v25 + v9;
      v27 = v25;
      v28 = v15;
      if ( v26 > *((unsigned int *)a1 + 3) )
      {
        v39 = v27;
        v38 = v13;
        v36 = 8 * (v9 - a3);
        sub_2237220(a1, a1 + 2, v26, 8);
        v9 = *((unsigned int *)a1 + 2);
        v27 = v39;
        v13 = v38;
        v28 = *a1 + 8 * v9;
        v23 = v36;
      }
      if ( v24 != v15 )
      {
        for ( i = 0; ; ++i )
        {
          *(_QWORD *)(v28 + 8 * i) = *(_QWORD *)(v24 + 8 * i);
          if ( (unsigned __int64)(v15 - 8 - v24) >> 3 == i )
            break;
        }
        LODWORD(v9) = *((_DWORD *)a1 + 2);
      }
      v30 = v23 - (_QWORD)v13;
      *((_DWORD *)a1 + 2) = v27 + v9;
      v31 = v30 >> 3;
      if ( v30 > 0 )
      {
        v32 = v24 - 8 * v31;
        v33 = -8 * v31 + v15;
        do
        {
          *(_QWORD *)(v33 + 8 * v31 - 8) = *(_QWORD *)(v32 + 8 * v31 - 8);
          --v31;
        }
        while ( v31 );
      }
      if ( a3 )
      {
        v34 = 0;
        do
          *(_QWORD *)&v6[8 * v34++] = a4;
        while ( a3 != v34 );
      }
    }
    else
    {
      v17 = a3 + v9;
      *((_DWORD *)a1 + 2) = v17;
      if ( (char *)v15 != v6 )
        memcpy((void *)(v10 + 8LL * v17 - (v12 - (_QWORD)v13)), v6, v12 - (_QWORD)v13);
      v18 = 0;
      if ( v16 )
      {
        do
          *(_QWORD *)&v6[8 * v18++] = a4;
        while ( v16 != v18 );
      }
      v19 = a3 - v16;
      v20 = 0;
      do
        *(_QWORD *)(v15 + 8 * v20++) = a4;
      while ( v19 != v20 );
    }
  }
  return v6;
}
