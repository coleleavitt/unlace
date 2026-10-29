__int64 __fastcall sub_E46F30(_QWORD *a1)
{
  __int64 v2; // rdi
  void (*v3)(void); // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  void (__fastcall ***v6)(void *); // rbp
  bool v7; // zf
  void (__fastcall ***v8)(void *); // rbp
  void (__fastcall ***v9)(void *); // rbp
  __int64 v10; // rdi
  __int64 *v11; // rbp
  __int64 *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 *v15; // rbp
  __int64 *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 *v20; // rbp
  __int64 *v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdi
  void (__fastcall ***v24)(void *); // rbp
  __int64 result; // rax
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 *v28; // rbp
  __int64 *v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rdi

  *a1 = &off_1C767A0;
  a1[9] = off_1C769B0;
  v2 = a1[22];
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 88LL);
    if ( v3 != nullsub_92 )
      v3();
  }
  v4 = a1[27];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[26];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = (void (__fastcall ***)(void *))a1[23];
  if ( v6 )
  {
    v7 = (*((_DWORD *)v6 + 2))-- == 1;
    if ( v7 )
    {
      (**v6)(v6);
      sub_186B220(v6);
    }
  }
  v8 = (void (__fastcall ***)(void *))a1[22];
  if ( v8 )
  {
    v7 = (*((_DWORD *)v8 + 2))-- == 1;
    if ( v7 )
    {
      (**v8)(v8);
      sub_186B220(v8);
    }
  }
  v9 = (void (__fastcall ***)(void *))a1[21];
  if ( v9 )
  {
    v7 = (*((_DWORD *)v9 + 12))-- == 1;
    if ( v7 )
    {
      (**v9)(v9);
      sub_186B220(v9);
    }
  }
  v10 = a1[20];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = (__int64 *)a1[18];
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 >= v12 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = a1[17];
          v7 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v11 >= v12 )
          goto LABEL_26;
      }
      sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( v11 < v12 );
LABEL_26:
    v11 = (__int64 *)a1[18];
    if ( v11 )
LABEL_27:
      sub_186B220(v11 - 1);
  }
  v15 = (__int64 *)a1[16];
  if ( v15 )
  {
    v16 = &v15[*((unsigned int *)v15 - 1)];
    if ( v15 >= v16 )
      goto LABEL_36;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = a1[15];
          v7 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v15 >= v16 )
          goto LABEL_35;
      }
      sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( v15 < v16 );
LABEL_35:
    v15 = (__int64 *)a1[16];
    if ( v15 )
LABEL_36:
      sub_186B220(v15 - 1);
  }
  v19 = a1[14];
  *a1 = qword_1C75FB0;
  a1[9] = qword_1C76160;
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  v20 = (__int64 *)a1[13];
  if ( v20 )
  {
    v21 = &v20[*((unsigned int *)v20 - 1)];
    if ( v20 >= v21 )
      goto LABEL_47;
    do
    {
      while ( 1 )
      {
        v22 = *v20;
        if ( *v20 )
        {
          v23 = a1[12];
          v7 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v20 >= v21 )
          goto LABEL_46;
      }
      sub_15D7BC0(v23, v22);
      ++v20;
    }
    while ( v20 < v21 );
LABEL_46:
    v20 = (__int64 *)a1[13];
    if ( v20 )
LABEL_47:
      sub_186B220(v20 - 1);
  }
  a1[9] = qword_1C77178;
  *a1 = qword_1C76FE8;
  sub_18572D0(a1 + 10);
  v24 = (void (__fastcall ***)(void *))a1[7];
  result = (__int64)qword_1C63FB0;
  *a1 = qword_1C63FB0;
  if ( v24 )
  {
    v7 = (*((_DWORD *)v24 + 2))-- == 1;
    if ( v7 )
    {
      (**v24)(v24);
      result = sub_186B220(v24);
    }
  }
  v26 = a1[4];
  if ( v26 )
  {
    v27 = a1[5];
    v7 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v7 )
      result = sub_15D7BC0(v27, v26);
  }
  v28 = (__int64 *)a1[3];
  if ( v28 )
  {
    result = *((unsigned int *)v28 - 1);
    v29 = &v28[result];
    if ( v28 >= v29 )
      return sub_186B220(v28 - 1);
    do
    {
      while ( 1 )
      {
        v30 = *v28;
        if ( *v28 )
        {
          v31 = a1[2];
          v7 = (*(_DWORD *)(v30 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v28 >= v29 )
          goto LABEL_61;
      }
      result = sub_15D7BC0(v31, v30);
      ++v28;
    }
    while ( v28 < v29 );
LABEL_61:
    v28 = (__int64 *)a1[3];
    if ( v28 )
      return sub_186B220(v28 - 1);
  }
  return result;
}

