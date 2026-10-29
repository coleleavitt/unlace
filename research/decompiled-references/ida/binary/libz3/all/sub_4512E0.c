__int64 __fastcall sub_4512E0(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 *v7; // rbx
  __int64 *v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 *v11; // rbx
  __int64 *v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rdi
  void (__fastcall ***v15)(_QWORD); // rbx
  __int64 result; // rax
  __int64 v17; // rdi
  __int64 *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r15
  __int64 v22; // r15
  void *v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 *v26; // rbx
  __int64 *v27; // rbp
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 *v30; // r13
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // r15
  __int64 v34; // r15
  void *v35; // r14
  __int64 v36; // rsi
  __int64 *v37; // [rsp+8h] [rbp-40h]
  __int64 *v38; // [rsp+8h] [rbp-40h]

  v2 = (__int64 *)a1[29];
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = a1[28];
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = (__int64 *)a1[29];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = (__int64 *)a1[27];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = a1[26];
          v6 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_17;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_17:
    v7 = (__int64 *)a1[27];
    if ( v7 )
LABEL_18:
      sub_186B220(v7 - 1);
  }
  v11 = (__int64 *)a1[25];
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
          v14 = a1[24];
          v6 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v6 )
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
    v11 = (__int64 *)a1[25];
    if ( v11 )
LABEL_27:
      sub_186B220(v11 - 1);
  }
  v15 = (void (__fastcall ***)(_QWORD))a1[23];
  result = (__int64)&off_1C4E928;
  a1[17] = &off_1C4E928;
  if ( v15 )
  {
    (**v15)(v15);
    result = sub_186B220(v15);
  }
  v17 = a1[22];
  if ( v17 )
    result = sub_186B220((void *)(v17 - 8));
  v18 = (__int64 *)a1[21];
  if ( v18 )
  {
    v19 = *((unsigned int *)v18 - 1);
    if ( (_DWORD)v19 )
    {
      v37 = &v18[v19];
      do
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = *(unsigned int *)(v20 - 4);
          if ( (_DWORD)v21 )
          {
            v22 = v20 + 32 * v21;
            do
            {
              v23 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v20);
              v24 = v20 + 16;
              v20 += 32;
              sub_182CBA0(v23, v24);
            }
            while ( v20 != v22 );
            v20 = *v18;
          }
          sub_186B220((void *)(v20 - 8));
        }
        ++v18;
      }
      while ( v18 != v37 );
      v18 = (__int64 *)a1[21];
    }
    result = sub_186B220(v18 - 1);
  }
  v25 = a1[16];
  if ( v25 )
    result = sub_186B220((void *)(v25 - 8));
  v26 = (__int64 *)a1[15];
  if ( v26 )
  {
    result = *((unsigned int *)v26 - 1);
    v27 = &v26[result];
    if ( v26 >= v27 )
      goto LABEL_54;
    do
    {
      while ( 1 )
      {
        v28 = *v26;
        if ( *v26 )
        {
          v29 = a1[14];
          v6 = (*(_DWORD *)(v28 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v26 >= v27 )
          goto LABEL_53;
      }
      result = sub_15D7BC0(v29, v28);
      ++v26;
    }
    while ( v26 < v27 );
LABEL_53:
    v26 = (__int64 *)a1[15];
    if ( v26 )
LABEL_54:
      result = sub_186B220(v26 - 1);
  }
  v30 = (__int64 *)a1[13];
  if ( v30 )
  {
    v31 = *((unsigned int *)v30 - 1);
    if ( (_DWORD)v31 )
    {
      v38 = &v30[v31];
      do
      {
        v32 = *v30;
        if ( *v30 )
        {
          v33 = *(unsigned int *)(v32 - 4);
          if ( (_DWORD)v33 )
          {
            v34 = v32 + 32 * v33;
            do
            {
              v35 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v32);
              v36 = v32 + 16;
              v32 += 32;
              sub_182CBA0(v35, v36);
            }
            while ( v32 != v34 );
            v32 = *v30;
          }
          sub_186B220((void *)(v32 - 8));
        }
        ++v30;
      }
      while ( v30 != v38 );
      v30 = (__int64 *)a1[13];
    }
    return sub_186B220(v30 - 1);
  }
  return result;
}

