__int64 __fastcall sub_ACC3A0(_QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *i; // r13
  void (__fastcall ***v4)(_QWORD); // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  void ***v8; // r13
  void **v9; // rbx
  void **v10; // r12
  __int64 *v11; // r15
  __int64 *v12; // r13
  __int64 *v13; // r14
  __int64 v14; // rsi
  __int64 *v15; // rax
  __int64 v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 result; // rax
  __int64 v25; // rdi
  _QWORD **v26; // rbx
  _QWORD **v27; // r13
  _QWORD *v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  void *v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdi

  v2 = (_QWORD *)a1[14];
  *a1 = &off_1C56BE0;
  if ( v2 )
  {
    for ( i = &v2[*((unsigned int *)v2 - 1)]; v2 != i; ++v2 )
    {
      v4 = (void (__fastcall ***)(_QWORD))*v2;
      if ( *v2 )
      {
        (**v4)(*v2);
        sub_186B220(v4);
      }
    }
  }
  v5 = a1[9];
  if ( v5 )
  {
    v6 = a1[10];
    v7 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v6, v5);
  }
  v8 = (void ***)a1[15];
  a1[9] = 0;
  if ( !v8 )
    goto LABEL_39;
  v9 = *v8;
  if ( !*v8 )
    goto LABEL_37;
  v10 = &v9[*((unsigned int *)v9 - 1)];
  if ( v9 == v10 )
    goto LABEL_36;
  do
  {
    v11 = (__int64 *)*v9;
    if ( !*v9 )
      goto LABEL_33;
    v12 = (__int64 *)v11[1];
    v13 = &v12[2 * *((unsigned int *)v11 + 4)];
    if ( v12 != v13 )
    {
      while ( (unsigned __int64)*v12 <= 1 )
      {
        v12 += 2;
        if ( v13 == v12 )
          goto LABEL_26;
      }
      if ( v13 != v12 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          while ( 1 )
          {
            v16 = *v11;
            v7 = (*(_DWORD *)(v14 + 8))-- == 1;
            if ( !v7 )
              break;
            sub_15D7BC0(v16, v14);
            v15 = v12 + 2;
            if ( v13 == v12 + 2 )
              goto LABEL_26;
LABEL_22:
            while ( 1 )
            {
              v14 = *v15;
              v12 = v15;
              if ( (unsigned __int64)*v15 > 1 )
                break;
              v15 += 2;
              if ( v13 == v15 )
                goto LABEL_26;
            }
            if ( v13 == v15 )
              goto LABEL_26;
          }
        }
        v15 = v12 + 2;
        if ( v13 == v12 + 2 )
          goto LABEL_26;
        goto LABEL_22;
      }
    }
LABEL_26:
    v17 = (void *)v11[9];
    if ( v17 )
      sub_186B220(v17);
    v18 = (void *)v11[4];
    if ( v18 )
      sub_186B220(v18);
    v19 = (void *)v11[1];
    if ( v19 )
      sub_186B220(v19);
    sub_186B220(v11);
LABEL_33:
    ++v9;
  }
  while ( v10 != v9 );
  v8 = (void ***)a1[15];
  if ( v8 )
  {
    v9 = *v8;
    if ( *v8 )
LABEL_36:
      sub_186B220(v9 - 1);
LABEL_37:
    sub_186B220(v8);
  }
  a1[15] = 0;
LABEL_39:
  v20 = a1[14];
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  v21 = a1[12];
  if ( v21 )
  {
    v22 = a1[13];
    v7 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v22, v21);
  }
  v23 = a1[9];
  result = (__int64)&off_1C612D0;
  *a1 = &off_1C612D0;
  if ( v23 )
  {
    v25 = a1[10];
    v7 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v7 )
      result = sub_15D7BC0(v25, v23);
  }
  v26 = (_QWORD **)a1[8];
  if ( v26 )
  {
    result = *((unsigned int *)v26 - 1);
    v27 = &v26[result];
    if ( v26 == v27 )
      goto LABEL_59;
    do
    {
      v28 = *v26;
      if ( *v26 )
      {
        v29 = v28[3];
        if ( v29 )
        {
          v30 = v28[4];
          v7 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v30, v29);
        }
        v31 = v28[1];
        if ( v31 )
        {
          v32 = v28[2];
          v7 = (*(_DWORD *)(v31 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v32, v31);
        }
        result = sub_186B220(v28);
      }
      ++v26;
    }
    while ( v27 != v26 );
    v27 = (_QWORD **)a1[8];
    if ( v27 )
    {
LABEL_59:
      *((_DWORD *)v27 - 1) = 0;
      result = sub_186B220(v27 - 1);
    }
  }
  v33 = (void *)a1[5];
  if ( v33 )
    result = sub_186B220(v33);
  v34 = a1[2];
  if ( v34 )
  {
    v35 = a1[3];
    v7 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v7 )
      return sub_15D7BC0(v35, v34);
  }
  return result;
}

