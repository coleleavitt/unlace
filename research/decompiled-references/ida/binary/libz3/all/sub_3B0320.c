void __fastcall sub_3B0320(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 *v2; // rbx
  __int64 *v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  void *v7; // rdi
  void *v8; // rdi
  char *v9; // rdi
  char *v10; // rbp
  _QWORD *v11; // rax
  unsigned __int64 v12; // rbx
  _QWORD *v13; // r15
  void *v14; // rdi
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r13
  _QWORD *v17; // r12
  void *v18; // rdi
  __int64 v19; // rdi
  void *v20; // rdi
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r15
  _QWORD *v23; // r14
  void *v24; // rdi
  char *v25; // rax
  void *v26; // rdi
  void *v27; // rdi
  void *v28; // rdi
  void *v29; // rdi
  __int64 v30; // rax
  _QWORD *v31; // rdi
  char *v32; // [rsp+8h] [rbp-60h]
  unsigned __int64 v33; // [rsp+10h] [rbp-58h]
  _QWORD *ptr; // [rsp+18h] [rbp-50h]
  _QWORD *v35; // [rsp+20h] [rbp-48h]

  v1 = (_QWORD *)a1[6];
  *a1 = &off_1C4E3B0;
  v35 = v1;
  if ( v1 )
  {
    sub_64D370(v1 + 33);
    v2 = (__int64 *)v1[32];
    if ( v2 )
    {
      v3 = &v2[*((unsigned int *)v2 - 1)];
      if ( v2 >= v3 )
        goto LABEL_10;
      do
      {
        while ( 1 )
        {
          v4 = *v2;
          if ( *v2 )
          {
            v5 = v35[31];
            v6 = (*(_DWORD *)(v4 + 8))-- == 1;
            if ( v6 )
              break;
          }
          if ( ++v2 >= v3 )
            goto LABEL_9;
        }
        sub_15D7BC0(v5, v4);
        ++v2;
      }
      while ( v2 < v3 );
LABEL_9:
      v2 = (__int64 *)v35[32];
      if ( v2 )
LABEL_10:
        sub_186B220(v2 - 1);
    }
    v7 = (void *)v35[28];
    if ( v7 )
      sub_186B220(v7);
    v8 = (void *)v35[25];
    if ( v8 )
      sub_186B220(v8);
    v9 = (char *)v35[21];
    v10 = v9;
    v32 = &v9[24 * *((unsigned int *)v35 + 44)];
    if ( v9 != v32 )
    {
      while ( *((_DWORD *)v10 + 1) != 2 )
      {
        v10 += 24;
        if ( v32 == v10 )
          goto LABEL_62;
      }
      if ( v32 != v10 )
      {
        do
        {
          v11 = *((_QWORD **)v10 + 2);
          ptr = v11;
          if ( v11 )
          {
            v12 = v11[2];
            if ( v12 )
            {
              v33 = v12 + 8LL * *(unsigned int *)(v12 - 4);
              if ( v12 >= v33 )
                goto LABEL_40;
              do
              {
                while ( 1 )
                {
                  v13 = *(_QWORD **)v12;
                  v6 = (*(_DWORD *)(*(_QWORD *)v12 + 32LL))-- == 1;
                  if ( v6 )
                    break;
                  v12 += 8LL;
                  if ( v12 >= v33 )
                    goto LABEL_39;
                }
                v14 = (void *)v13[9];
                if ( v14 )
                  sub_186B220(v14);
                v15 = v13[3];
                if ( v15 )
                {
                  v16 = v15 + 8LL * *(unsigned int *)(v15 - 4);
                  if ( v15 >= v16 )
                    goto LABEL_37;
                  do
                  {
                    while ( 1 )
                    {
                      v17 = *(_QWORD **)v15;
                      v6 = (*(_DWORD *)(*(_QWORD *)v15 + 32LL))-- == 1;
                      if ( v6 )
                        break;
                      v15 += 8LL;
                      if ( v15 >= v16 )
                        goto LABEL_36;
                    }
                    v18 = (void *)v17[9];
                    if ( v18 )
                      sub_186B220(v18);
                    v15 += 8LL;
                    sub_3B2C00(v17 + 2);
                    sub_186B220(v17);
                  }
                  while ( v15 < v16 );
LABEL_36:
                  v15 = v13[3];
                  if ( v15 )
LABEL_37:
                    sub_186B220((void *)(v15 - 8));
                }
                v12 += 8LL;
                sub_186B220(v13);
              }
              while ( v12 < v33 );
LABEL_39:
              v12 = ptr[2];
              if ( v12 )
LABEL_40:
                *(_DWORD *)(v12 - 4) = 0;
            }
            sub_1829A00(ptr + 4);
            v19 = ptr[80];
            if ( v19 )
              sub_186B220((void *)(v19 - 8));
            v20 = (void *)ptr[77];
            if ( v20 )
              sub_186B220(v20);
            sub_18299D0(ptr + 4);
            v21 = ptr[2];
            if ( v21 )
            {
              v22 = v21 + 8LL * *(unsigned int *)(v21 - 4);
              if ( v21 >= v22 )
                goto LABEL_54;
              do
              {
                while ( 1 )
                {
                  v23 = *(_QWORD **)v21;
                  v6 = (*(_DWORD *)(*(_QWORD *)v21 + 32LL))-- == 1;
                  if ( v6 )
                    break;
                  v21 += 8LL;
                  if ( v21 >= v22 )
                    goto LABEL_53;
                }
                v24 = (void *)v23[9];
                if ( v24 )
                  sub_186B220(v24);
                v21 += 8LL;
                sub_3B2C00(v23 + 2);
                sub_186B220(v23);
              }
              while ( v21 < v22 );
LABEL_53:
              v21 = ptr[2];
              if ( v21 )
LABEL_54:
                sub_186B220((void *)(v21 - 8));
            }
            sub_186B220(ptr);
          }
          v25 = v10 + 24;
          if ( v32 == v10 + 24 )
            break;
          while ( 1 )
          {
            v10 = v25;
            if ( *((_DWORD *)v25 + 1) == 2 )
              break;
            v25 += 24;
            if ( v32 == v25 )
              goto LABEL_61;
          }
        }
        while ( v32 != v25 );
LABEL_61:
        v9 = (char *)v35[21];
      }
    }
LABEL_62:
    if ( v9 )
      sub_186B220(v9);
    v26 = (void *)v35[20];
    v35[14] = &off_1C62200;
    if ( v26 )
      sub_186B220(v26);
    v27 = (void *)v35[17];
    if ( v27 )
      sub_186B220(v27);
    v28 = (void *)v35[13];
    v35[7] = &off_1C62200;
    if ( v28 )
      sub_186B220(v28);
    v29 = (void *)v35[10];
    if ( v29 )
      sub_186B220(v29);
    v30 = v35[6];
    if ( v30 )
      sub_186B220((void *)(v30 - 8));
    sub_186B220(v35);
  }
  v31 = (_QWORD *)a1[2];
  *a1 = qword_1C65108;
  if ( v31 != a1 + 4 )
    operator delete(v31, a1[4] + 1LL);
}

