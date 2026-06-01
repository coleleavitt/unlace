__int64 (__fastcall **__fastcall sub_B22E20(_QWORD *a1))()
{
  void **v2; // rbp
  void **v3; // r14
  __int64 **v4; // r13
  __int64 *v5; // r15
  __int64 *v6; // rbx
  __int64 *v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 *v13; // r15
  __int64 *v14; // rbx
  __int64 *v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 *v20; // r15
  __int64 *v21; // rbx
  __int64 *v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 *v26; // rbx
  __int64 *v27; // rbp
  __int64 v28; // rsi
  __int64 v29; // rdi
  void *v30; // rdi
  void *v31; // rdi
  __int64 *v32; // rbx
  __int64 *v33; // rbp
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 *v36; // rbx
  __int64 *v37; // rbp
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v42; // rdi
  unsigned __int64 v43; // [rsp+8h] [rbp-40h]
  unsigned __int64 v44; // [rsp+8h] [rbp-40h]
  unsigned __int64 v45; // [rsp+8h] [rbp-40h]

  *a1 = off_1C71F78;
  sub_B22AC0((__int64)a1);
  v2 = (void **)a1[25];
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 == v3 )
      goto LABEL_46;
    do
    {
      v4 = (__int64 **)*v2;
      if ( *v2 )
      {
        v5 = *v4;
        if ( *v4 )
        {
          v6 = (__int64 *)v5[4];
          if ( v6 )
          {
            v7 = &v6[*((unsigned int *)v6 - 1)];
            if ( v6 >= v7 )
              goto LABEL_13;
            do
            {
              while ( 1 )
              {
                v8 = *v6;
                if ( *v6 )
                {
                  v9 = v5[3];
                  v10 = (*(_DWORD *)(v8 + 8))-- == 1;
                  if ( v10 )
                    break;
                }
                if ( ++v6 >= v7 )
                  goto LABEL_12;
              }
              v43 = (unsigned __int64)v7;
              ++v6;
              sub_15D7BC0(v9, v8);
              v7 = (__int64 *)v43;
            }
            while ( (unsigned __int64)v6 < v43 );
LABEL_12:
            v6 = (__int64 *)v5[4];
            if ( v6 )
LABEL_13:
              sub_186B220(v6 - 1);
          }
          v11 = *v5;
          if ( *v5 )
          {
            v12 = v5[1];
            v10 = (*(_DWORD *)(v11 + 8))-- == 1;
            if ( v10 )
              sub_15D7BC0(v12, v11);
          }
          sub_186B220(v5);
        }
        v13 = v4[1];
        if ( v13 )
        {
          v14 = (__int64 *)v13[4];
          if ( v14 )
          {
            v15 = &v14[*((unsigned int *)v14 - 1)];
            if ( v14 >= v15 )
              goto LABEL_27;
            do
            {
              while ( 1 )
              {
                v16 = *v14;
                if ( *v14 )
                {
                  v17 = v13[3];
                  v10 = (*(_DWORD *)(v16 + 8))-- == 1;
                  if ( v10 )
                    break;
                }
                if ( ++v14 >= v15 )
                  goto LABEL_26;
              }
              v44 = (unsigned __int64)v15;
              ++v14;
              sub_15D7BC0(v17, v16);
              v15 = (__int64 *)v44;
            }
            while ( (unsigned __int64)v14 < v44 );
LABEL_26:
            v14 = (__int64 *)v13[4];
            if ( v14 )
LABEL_27:
              sub_186B220(v14 - 1);
          }
          v18 = *v13;
          if ( *v13 )
          {
            v19 = v13[1];
            v10 = (*(_DWORD *)(v18 + 8))-- == 1;
            if ( v10 )
              sub_15D7BC0(v19, v18);
          }
          sub_186B220(v13);
        }
        v20 = v4[2];
        if ( v20 )
        {
          v21 = (__int64 *)v20[1];
          if ( v21 )
          {
            v22 = &v21[*((unsigned int *)v21 - 1)];
            if ( v21 >= v22 )
              goto LABEL_41;
            do
            {
              while ( 1 )
              {
                v23 = *v21;
                if ( *v21 )
                {
                  v24 = *v20;
                  v10 = (*(_DWORD *)(v23 + 8))-- == 1;
                  if ( v10 )
                    break;
                }
                if ( ++v21 >= v22 )
                  goto LABEL_40;
              }
              v45 = (unsigned __int64)v22;
              ++v21;
              sub_15D7BC0(v24, v23);
              v22 = (__int64 *)v45;
            }
            while ( (unsigned __int64)v21 < v45 );
LABEL_40:
            v21 = (__int64 *)v20[1];
            if ( v21 )
LABEL_41:
              sub_186B220(v21 - 1);
          }
          sub_186B220(v20);
        }
        sub_186B220(v4);
      }
      ++v2;
    }
    while ( v3 != v2 );
    v3 = (void **)a1[25];
    if ( v3 )
    {
LABEL_46:
      *((_DWORD *)v3 - 1) = 0;
      sub_186B220(v3 - 1);
    }
  }
  v25 = a1[23];
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  v26 = (__int64 *)a1[22];
  if ( v26 )
  {
    v27 = &v26[*((unsigned int *)v26 - 1)];
    if ( v26 >= v27 )
      goto LABEL_57;
    do
    {
      while ( 1 )
      {
        v28 = *v26;
        if ( *v26 )
        {
          v29 = a1[21];
          v10 = (*(_DWORD *)(v28 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v26 >= v27 )
          goto LABEL_56;
      }
      sub_15D7BC0(v29, v28);
      ++v26;
    }
    while ( v26 < v27 );
LABEL_56:
    v26 = (__int64 *)a1[22];
    if ( v26 )
LABEL_57:
      sub_186B220(v26 - 1);
  }
  v30 = (void *)a1[18];
  if ( v30 )
    sub_186B220(v30);
  v31 = (void *)a1[15];
  if ( v31 )
    sub_186B220(v31);
  v32 = (__int64 *)a1[14];
  if ( v32 )
  {
    v33 = &v32[*((unsigned int *)v32 - 1)];
    if ( v32 >= v33 )
      goto LABEL_70;
    do
    {
      while ( 1 )
      {
        v34 = *v32;
        if ( *v32 )
        {
          v35 = a1[13];
          v10 = (*(_DWORD *)(v34 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v32 >= v33 )
          goto LABEL_69;
      }
      sub_15D7BC0(v35, v34);
      ++v32;
    }
    while ( v32 < v33 );
LABEL_69:
    v32 = (__int64 *)a1[14];
    if ( v32 )
LABEL_70:
      sub_186B220(v32 - 1);
  }
  v36 = (__int64 *)a1[12];
  if ( v36 )
  {
    v37 = &v36[*((unsigned int *)v36 - 1)];
    if ( v36 >= v37 )
      goto LABEL_79;
    do
    {
      while ( 1 )
      {
        v38 = *v36;
        if ( *v36 )
        {
          v39 = a1[11];
          v10 = (*(_DWORD *)(v38 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v36 >= v37 )
          goto LABEL_78;
      }
      sub_15D7BC0(v39, v38);
      ++v36;
    }
    while ( v36 < v37 );
LABEL_78:
    v36 = (__int64 *)a1[12];
    if ( v36 )
LABEL_79:
      sub_186B220(v36 - 1);
  }
  v40 = a1[5];
  result = off_1C70148;
  *a1 = off_1C70148;
  if ( v40 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v40 - 8));
  v42 = a1[4];
  if ( v42 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v42 - 8));
  return result;
}

