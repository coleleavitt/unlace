__int64 __fastcall sub_B34370(_QWORD *a1)
{
  void (***v2)(void); // rdi
  void (*v3)(void); // rax
  void *v4; // rdi
  __int64 *v5; // r13
  __int64 v6; // rax
  __int64 *v7; // r12
  __int64 *v8; // rbx
  __int64 *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rax
  __int64 *v14; // rbx
  __int64 *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 *v19; // rbx
  __int64 *v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rbx
  __int64 v26; // rax
  _QWORD *v27; // r12
  void *v28; // rdi
  __int64 v29; // rax
  _QWORD *v30; // rbx
  __int64 v31; // rax
  _QWORD *v32; // r12
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdi
  void *v37; // rdi
  __int64 v38; // rax
  void (__fastcall *v39)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v40)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v41)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v42)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v43)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v44)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v45)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v46)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v47)(_QWORD *, _QWORD *, __int64); // rax
  __int64 v48; // rax
  __int64 result; // rax

  *a1 = off_1C72390;
  a1[7] = off_1C72540;
  v2 = (void (***)(void))a1[45];
  if ( v2 )
  {
    v3 = **v2;
    if ( v3 != nullsub_409 )
      v3();
    sub_186B220(v2);
  }
  v4 = (void *)a1[67];
  if ( v4 )
    sub_186B220(v4);
  v5 = (__int64 *)a1[65];
  if ( v5 )
  {
    v6 = *((unsigned int *)v5 - 1);
    if ( (_DWORD)v6 )
    {
      v7 = &v5[2 * v6];
      do
      {
        v8 = (__int64 *)v5[1];
        if ( v8 )
        {
          v9 = &v8[*((unsigned int *)v8 - 1)];
          if ( v8 >= v9 )
            goto LABEL_18;
          do
          {
            while ( 1 )
            {
              v10 = *v8;
              if ( *v8 )
              {
                v11 = *v5;
                v12 = (*(_DWORD *)(v10 + 8))-- == 1;
                if ( v12 )
                  break;
              }
              if ( ++v8 >= v9 )
                goto LABEL_17;
            }
            sub_15D7BC0(v11, v10);
            ++v8;
          }
          while ( v8 < v9 );
LABEL_17:
          v8 = (__int64 *)v5[1];
          if ( v8 )
LABEL_18:
            sub_186B220(v8 - 1);
        }
        v5 += 2;
      }
      while ( v5 != v7 );
      v5 = (__int64 *)a1[65];
    }
    sub_186B220(v5 - 1);
  }
  v13 = a1[61];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = (__int64 *)a1[60];
  if ( v14 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    if ( v14 >= v15 )
      goto LABEL_32;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = a1[59];
          v12 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_31;
      }
      sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_31:
    v14 = (__int64 *)a1[60];
    if ( v14 )
LABEL_32:
      sub_186B220(v14 - 1);
  }
  v18 = a1[57];
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = (__int64 *)a1[56];
  if ( v19 )
  {
    v20 = &v19[*((unsigned int *)v19 - 1)];
    if ( v19 >= v20 )
      goto LABEL_43;
    do
    {
      while ( 1 )
      {
        v21 = *v19;
        if ( *v19 )
        {
          v22 = a1[55];
          v12 = (*(_DWORD *)(v21 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v19 >= v20 )
          goto LABEL_42;
      }
      sub_15D7BC0(v22, v21);
      ++v19;
    }
    while ( v19 < v20 );
LABEL_42:
    v19 = (__int64 *)a1[56];
    if ( v19 )
LABEL_43:
      sub_186B220(v19 - 1);
  }
  v23 = a1[53];
  if ( v23 )
    sub_186B220((void *)(v23 - 8));
  v24 = a1[52];
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = (_QWORD *)a1[50];
  if ( v25 )
  {
    v26 = *((unsigned int *)v25 - 1);
    if ( (_DWORD)v26 )
    {
      v27 = &v25[v26];
      do
      {
        while ( *v25 )
        {
          v28 = (void *)(*v25++ - 8LL);
          sub_186B220(v28);
          if ( v27 == v25 )
          {
            v25 = (_QWORD *)a1[50];
            goto LABEL_54;
          }
        }
        ++v25;
      }
      while ( v25 != v27 );
      v25 = (_QWORD *)a1[50];
    }
LABEL_54:
    sub_186B220(v25 - 1);
  }
  v29 = a1[49];
  if ( v29 )
    sub_186B220((void *)(v29 - 8));
  v30 = (_QWORD *)a1[48];
  if ( v30 )
  {
    v31 = *((unsigned int *)v30 - 1);
    if ( (_DWORD)v31 )
    {
      v32 = &v30[6 * v31];
      do
      {
        while ( 1 )
        {
          v33 = v30[4];
          if ( v33 )
            sub_186B220((void *)(v33 - 8));
          v34 = v30[3];
          if ( v34 )
            sub_186B220((void *)(v34 - 8));
          v35 = v30[1];
          if ( v35 )
          {
            v36 = v30[2];
            v12 = (*(_DWORD *)(v35 + 8))-- == 1;
            if ( v12 )
              sub_15D7BC0(v36, v35);
          }
          if ( !*v30 )
            break;
          v37 = (void *)(*v30 - 8LL);
          v30 += 6;
          sub_186B220(v37);
          if ( v32 == v30 )
          {
            v30 = (_QWORD *)a1[48];
            goto LABEL_70;
          }
        }
        v30 += 6;
      }
      while ( v30 != v32 );
      v30 = (_QWORD *)a1[48];
    }
LABEL_70:
    sub_186B220(v30 - 1);
  }
  v38 = a1[47];
  if ( v38 )
    sub_186B220((void *)(v38 - 8));
  v39 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[43];
  if ( v39 )
    v39(a1 + 41, a1 + 41, 3);
  v40 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[39];
  if ( v40 )
    v40(a1 + 37, a1 + 37, 3);
  v41 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[35];
  if ( v41 )
    v41(a1 + 33, a1 + 33, 3);
  v42 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[31];
  if ( v42 )
    v42(a1 + 29, a1 + 29, 3);
  v43 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[27];
  if ( v43 )
    v43(a1 + 25, a1 + 25, 3);
  v44 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[23];
  if ( v44 )
    v44(a1 + 21, a1 + 21, 3);
  v45 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[19];
  if ( v45 )
    v45(a1 + 17, a1 + 17, 3);
  v46 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[15];
  if ( v46 )
    v46(a1 + 13, a1 + 13, 3);
  v47 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[11];
  if ( v47 )
    v47(a1 + 9, a1 + 9, 3);
  *a1 = off_1C70148;
  v48 = a1[5];
  if ( v48 )
    sub_186B220((void *)(v48 - 8));
  result = a1[4];
  if ( result )
    return sub_186B220((void *)(result - 8));
  return result;
}

