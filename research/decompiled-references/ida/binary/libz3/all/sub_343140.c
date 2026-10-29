__int64 __fastcall sub_343140(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 *v4; // rbp
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  void **v9; // rbp
  void **v10; // r13
  void (__fastcall ***v11)(void *); // r12
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r14
  void *v15; // r13
  void *v16; // r13
  void *v17; // r13
  __int64 v18; // rsi
  __int64 v19; // rdi
  void (__fastcall ***v20)(void *); // rbp
  _QWORD *v21; // rdi
  _QWORD *v22; // rdi
  __int64 v23; // rdi
  __int64 *v24; // rbp
  __int64 *v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdi
  void (__fastcall ***v28)(void *); // rbp
  __int64 result; // rax
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 *v32; // rbp
  __int64 *v33; // r12
  __int64 v34; // rsi
  __int64 v35; // rdi

  *a1 = &off_1C64788;
  a1[9] = off_1C64940;
  v2 = a1[123];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[122];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (__int64 *)a1[120];
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = a1[119];
          v8 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_12;
      }
      sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_12:
    v4 = (__int64 *)a1[120];
    if ( v4 )
LABEL_13:
      sub_186B220(v4 - 1);
  }
  v9 = (void **)a1[118];
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v11 = (void (__fastcall ***)(void *))*v9;
        if ( *v9 )
        {
          v8 = (*((_DWORD *)v11 + 4))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_21;
      }
      ++v9;
      (**v11)(v11);
      sub_186B220(v11);
    }
    while ( v9 < v10 );
LABEL_21:
    v9 = (void **)a1[118];
    if ( v9 )
LABEL_22:
      sub_186B220(v9 - 1);
  }
  v12 = a1[117];
  if ( v12 )
  {
    v13 = *(unsigned int *)(v12 - 4);
    if ( (_DWORD)v13 )
    {
      v14 = v12 + 96 * v13;
      do
      {
        v15 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v12 + 64);
        sub_182CBA0(v15, v12 + 80);
        v16 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v12 + 32);
        sub_182CBA0(v16, v12 + 48);
        v17 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v12);
        v18 = v12 + 16;
        v12 += 96;
        sub_182CBA0(v17, v18);
      }
      while ( v12 != v14 );
      v12 = a1[117];
    }
    sub_186B220((void *)(v12 - 8));
  }
  v19 = a1[116];
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  v20 = (void (__fastcall ***)(void *))a1[115];
  if ( v20 )
  {
    v8 = (*((_DWORD *)v20 + 4))-- == 1;
    if ( v8 )
    {
      (**v20)(v20);
      sub_186B220(v20);
    }
  }
  sub_8E4B60(a1 + 110);
  v21 = (_QWORD *)a1[32];
  if ( v21 != a1 + 34 )
    operator delete(v21, a1[34] + 1LL);
  v22 = (_QWORD *)a1[28];
  if ( v22 != a1 + 30 )
    operator delete(v22, a1[30] + 1LL);
  v23 = a1[14];
  *a1 = qword_1C75FB0;
  a1[9] = qword_1C76160;
  if ( v23 )
    sub_186B220((void *)(v23 - 8));
  v24 = (__int64 *)a1[13];
  if ( v24 )
  {
    v25 = &v24[*((unsigned int *)v24 - 1)];
    if ( v24 >= v25 )
      goto LABEL_48;
    do
    {
      while ( 1 )
      {
        v26 = *v24;
        if ( *v24 )
        {
          v27 = a1[12];
          v8 = (*(_DWORD *)(v26 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v24 >= v25 )
          goto LABEL_47;
      }
      sub_15D7BC0(v27, v26);
      ++v24;
    }
    while ( v24 < v25 );
LABEL_47:
    v24 = (__int64 *)a1[13];
    if ( v24 )
LABEL_48:
      sub_186B220(v24 - 1);
  }
  a1[9] = qword_1C77178;
  *a1 = qword_1C76FE8;
  sub_18572D0(a1 + 10);
  v28 = (void (__fastcall ***)(void *))a1[7];
  result = (__int64)qword_1C63FB0;
  *a1 = qword_1C63FB0;
  if ( v28 )
  {
    v8 = (*((_DWORD *)v28 + 2))-- == 1;
    if ( v8 )
    {
      (**v28)(v28);
      result = sub_186B220(v28);
    }
  }
  v30 = a1[4];
  if ( v30 )
  {
    v31 = a1[5];
    v8 = (*(_DWORD *)(v30 + 8))-- == 1;
    if ( v8 )
      result = sub_15D7BC0(v31, v30);
  }
  v32 = (__int64 *)a1[3];
  if ( v32 )
  {
    result = *((unsigned int *)v32 - 1);
    v33 = &v32[result];
    if ( v32 >= v33 )
      return sub_186B220(v32 - 1);
    do
    {
      while ( 1 )
      {
        v34 = *v32;
        if ( *v32 )
        {
          v35 = a1[2];
          v8 = (*(_DWORD *)(v34 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v32 >= v33 )
          goto LABEL_62;
      }
      result = sub_15D7BC0(v35, v34);
      ++v32;
    }
    while ( v32 < v33 );
LABEL_62:
    v32 = (__int64 *)a1[3];
    if ( v32 )
      return sub_186B220(v32 - 1);
  }
  return result;
}

