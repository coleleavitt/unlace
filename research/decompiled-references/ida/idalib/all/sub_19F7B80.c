char *__fastcall sub_19F7B80(__int64 *a1, char *a2, char *a3, char *a4)
{
  __int64 *v4; // r8
  signed __int64 v5; // r10
  unsigned __int64 v7; // r13
  char *v8; // rbp
  char *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r11
  unsigned __int64 v12; // r12
  __int64 v13; // rdi
  char *v14; // r9
  unsigned __int64 v15; // rdx
  char *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rcx
  unsigned __int64 v19; // r12
  unsigned int v20; // r13d
  __int64 j; // rax
  __int64 v23; // r11
  char *v24; // r12
  __int64 v25; // rsi
  __int64 v26; // r15
  unsigned __int64 v27; // rdx
  __int64 i; // rax
  __int64 v29; // r11
  __int64 v30; // rax
  char *v31; // r12
  char *v32; // r14
  __int64 v33; // rax
  __int64 *v34; // [rsp+0h] [rbp-58h]
  char *v35; // [rsp+0h] [rbp-58h]
  __int64 *v36; // [rsp+0h] [rbp-58h]
  __int64 *v37; // [rsp+0h] [rbp-58h]
  char *v38; // [rsp+8h] [rbp-50h]
  __int64 *v39; // [rsp+8h] [rbp-50h]
  char *v40; // [rsp+8h] [rbp-50h]
  char *v41; // [rsp+8h] [rbp-50h]
  signed __int64 v42; // [rsp+10h] [rbp-48h]
  signed __int64 v43; // [rsp+10h] [rbp-48h]
  __int64 v44; // [rsp+10h] [rbp-48h]
  signed __int64 v45; // [rsp+18h] [rbp-40h]

  v4 = a1;
  v5 = a4 - a3;
  v7 = (a4 - a3) >> 3;
  v8 = a3;
  v9 = a2;
  v10 = *((unsigned int *)a1 + 2);
  v11 = *a1;
  v12 = *((unsigned int *)a1 + 3);
  v13 = 8 * v10;
  v14 = &a2[-v11];
  v15 = v10 + v7;
  v16 = (char *)(v11 + 8 * v10);
  if ( a2 == v16 )
  {
    if ( v15 > v12 )
    {
      v36 = v4;
      v43 = v5;
      v40 = &a2[-v11];
      sub_2237220(v4, v4 + 2, v15, 8);
      v4 = v36;
      v5 = v43;
      v14 = v40;
      v11 = *v36;
      v10 = *((unsigned int *)v36 + 2);
    }
    if ( v8 != a4 )
    {
      v39 = v4;
      v35 = v14;
      memcpy((void *)(v11 + 8 * v10), v8, v5);
      v4 = v39;
      v14 = v35;
      v11 = *v39;
      LODWORD(v10) = *((_DWORD *)v39 + 2);
    }
    v9 = &v14[v11];
    *((_DWORD *)v4 + 2) = v7 + v10;
  }
  else
  {
    v17 = v11;
    v18 = v10;
    if ( v15 > v12 )
    {
      v34 = v4;
      v42 = v5;
      v38 = v14;
      sub_2237220(v4, v4 + 2, v15, 8);
      v4 = v34;
      v14 = v38;
      v5 = v42;
      v18 = *((unsigned int *)v34 + 2);
      v17 = *v34;
      v13 = 8 * v18;
      v9 = &v38[*v34];
      v16 = (char *)(*v34 + 8 * v18);
    }
    v19 = (v13 - (__int64)v14) >> 3;
    if ( v19 >= v7 )
    {
      v23 = v13 - v5;
      v24 = (char *)(v17 + v13 - v5);
      v25 = (__int64)v16;
      v26 = v5 >> 3;
      v27 = (v5 >> 3) + v18;
      if ( v27 > *((unsigned int *)v4 + 3) )
      {
        v37 = v4;
        v45 = v5;
        v44 = v13 - v5;
        v41 = v14;
        sub_2237220(v4, v4 + 2, v27, 8);
        v4 = v37;
        v5 = v45;
        v23 = v44;
        v14 = v41;
        v18 = *((unsigned int *)v37 + 2);
        v25 = *v37 + 8 * v18;
      }
      if ( v24 != v16 )
      {
        for ( i = 0; ; ++i )
        {
          *(_QWORD *)(v25 + 8 * i) = *(_QWORD *)&v24[8 * i];
          if ( (unsigned __int64)(v16 - 8 - v24) >> 3 == i )
            break;
        }
        LODWORD(v18) = *((_DWORD *)v4 + 2);
      }
      v29 = v23 - (_QWORD)v14;
      *((_DWORD *)v4 + 2) = v18 + v26;
      v30 = v29 >> 3;
      if ( v29 > 0 )
      {
        v31 = &v24[-8 * v30];
        v32 = &v16[-8 * v30];
        do
        {
          *(_QWORD *)&v32[8 * v30 - 8] = *(_QWORD *)&v31[8 * v30 - 8];
          --v30;
        }
        while ( v30 );
      }
      if ( v5 > 0 )
      {
        v33 = 0;
        do
        {
          *(_QWORD *)&v9[8 * v33] = *(_QWORD *)&v8[8 * v33];
          ++v33;
        }
        while ( (__int64)(v7 - v33) > 0 );
      }
    }
    else
    {
      v20 = v18 + v7;
      *((_DWORD *)v4 + 2) = v20;
      if ( v16 != v9 )
        memcpy((void *)(v17 + 8LL * v20 - (v13 - (_QWORD)v14)), v9, v13 - (_QWORD)v14);
      if ( v19 )
      {
        for ( j = 0; j != v19; ++j )
          *(_QWORD *)&v9[8 * j] = *(_QWORD *)&v8[8 * j];
        v8 += 8 * v19;
      }
      if ( a4 != v8 )
        memcpy(v16, v8, a4 - v8);
    }
  }
  return v9;
}
