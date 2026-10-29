void __fastcall sub_CCDE20(_QWORD *a1)
{
  __int64 *v1; // rbx
  _QWORD *v2; // rbp
  __int64 v3; // rdx
  __int64 (__fastcall *v4)(); // rax
  __int64 v5; // rax
  unsigned int v6; // r13d
  _QWORD *v7; // r12
  _QWORD *v8; // r15
  __int64 v9; // rbp
  __int64 v10; // r14
  unsigned int *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 *v14; // r15
  __int64 v15; // rsi
  __int64 v16; // r8
  bool v17; // zf
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 *v21; // rbp
  void *v22; // rdi
  _QWORD *v23; // rbp
  __int64 v24; // rax
  _QWORD *v25; // r13
  void *v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // r13
  __int64 v29; // r14
  unsigned int *v30; // rdx
  __int64 *v31; // rbp
  _QWORD *v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 *v38; // r13
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 (__fastcall *v41)(); // rax
  unsigned int v42; // eax
  unsigned int v43; // [rsp+8h] [rbp-60h]
  _QWORD *v44; // [rsp+8h] [rbp-60h]
  unsigned int v45; // [rsp+14h] [rbp-54h]
  _QWORD *v46; // [rsp+18h] [rbp-50h]
  _QWORD *v47; // [rsp+20h] [rbp-48h]

  v1 = (__int64 *)a1[2];
  *a1 = off_1C595F0;
  if ( v1 )
  {
    v2 = (_QWORD *)v1[1];
    v3 = *v2;
    v4 = *(__int64 (__fastcall **)())(*v2 + 56LL);
    if ( v4 != sub_CD0230 )
    {
      v45 = ((__int64 (__fastcall *)(__int64))v4)(v1[1]);
      if ( v45 )
      {
        v2 = (_QWORD *)v1[1];
        v3 = *v2;
        v41 = *(__int64 (__fastcall **)())(*v2 + 56LL);
        if ( v41 != sub_CD0230 )
        {
          v42 = ((__int64 (__fastcall *)(__int64))v41)(v1[1]);
          v2 = (_QWORD *)v1[1];
          v6 = v42;
          v3 = *v2;
          goto LABEL_6;
        }
        v5 = v2[8];
        v6 = 0;
        if ( !v5 )
          goto LABEL_6;
LABEL_5:
        v6 = *(_DWORD *)(v5 - 4);
LABEL_6:
        v7 = v1 + 2;
        (*(void (__fastcall **)(_QWORD *, _QWORD))(v3 + 40))(v2, v45);
        v43 = 0;
        v8 = (_QWORD *)v1[68];
LABEL_7:
        if ( !v8 )
          goto LABEL_55;
        while ( 1 )
        {
          while ( v6 >= *((_DWORD *)v8 - 1) )
          {
            ++v43;
            --v6;
            if ( v43 >= v45 )
            {
              if ( *((_DWORD *)v8 - 1) )
                goto LABEL_41;
              goto LABEL_55;
            }
          }
          v9 = v8[v6];
          v46 = &v8[v6];
          if ( v9 )
          {
            v10 = v9 + 8LL * *(unsigned int *)(v9 - 4);
            if ( v9 != v10 )
            {
              do
              {
                v11 = *(unsigned int **)(v10 - 8);
                v10 -= 8;
                v12 = v1[67] + 16LL * *v11;
                v13 = *(_QWORD **)(v12 + 8);
                v14 = (__int64 *)v12;
                v15 = *v13;
                if ( *v13 )
                {
                  v16 = *v1;
                  v17 = (*(_DWORD *)(v15 + 8))-- == 1;
                  if ( v17 )
                  {
                    sub_15D7BC0(v16, v15);
                    v13 = (_QWORD *)v14[1];
                  }
                }
                v18 = v13[2];
                v14[1] = v18;
                if ( !v18 )
                {
                  v19 = *v14;
                  if ( *v14 )
                  {
                    v20 = *v1;
                    v17 = (*(_DWORD *)(v19 + 8))-- == 1;
                    if ( v17 )
                    {
                      v47 = v13;
                      sub_15D7BC0(v20, v19);
                      v13 = v47;
                    }
                  }
                  *v14 = 0;
                }
                sub_17E9C40(v1 + 2, 24, v13);
              }
              while ( v9 != v10 );
              v8 = (_QWORD *)v1[68];
              if ( *v46 )
                *(_DWORD *)(*v46 - 4LL) = 0;
              ++v43;
              --v6;
              if ( v43 < v45 )
                goto LABEL_7;
LABEL_39:
              if ( v8 )
              {
LABEL_40:
                if ( *((_DWORD *)v8 - 1) )
                {
LABEL_41:
                  v28 = *v8;
                  if ( *v8 )
                  {
                    v29 = v28 + 8LL * *(unsigned int *)(v28 - 4);
                    if ( v28 == v29 )
                      goto LABEL_70;
                    do
                    {
                      v30 = *(unsigned int **)(v29 - 8);
                      v29 -= 8;
                      v31 = (__int64 *)(v1[67] + 16LL * *v30);
                      v32 = (_QWORD *)v31[1];
                      v33 = *v32;
                      if ( *v32 )
                      {
                        v34 = *v1;
                        v17 = (*(_DWORD *)(v33 + 8))-- == 1;
                        if ( v17 )
                        {
                          sub_15D7BC0(v34, v33);
                          v32 = (_QWORD *)v31[1];
                        }
                      }
                      v35 = v32[2];
                      v31[1] = v35;
                      if ( !v35 )
                      {
                        v36 = *v31;
                        if ( *v31 )
                        {
                          v37 = *v1;
                          v17 = (*(_DWORD *)(v36 + 8))-- == 1;
                          if ( v17 )
                          {
                            v44 = v32;
                            sub_15D7BC0(v37, v36);
                            v32 = v44;
                          }
                        }
                        *v31 = 0;
                      }
                      sub_17E9C40(v7, 24, v32);
                    }
                    while ( v28 != v29 );
                    v29 = *v8;
                    if ( *v8 )
LABEL_70:
                      *(_DWORD *)(v29 - 4) = 0;
                  }
                }
              }
LABEL_55:
              v2 = (_QWORD *)v1[1];
              if ( v2 )
              {
                v3 = *v2;
                goto LABEL_57;
              }
              goto LABEL_58;
            }
            *(_DWORD *)(v9 - 4) = 0;
          }
          ++v43;
          --v6;
          if ( v43 >= v45 )
            goto LABEL_39;
        }
      }
LABEL_76:
      v8 = (_QWORD *)v1[68];
      v7 = v1 + 2;
      goto LABEL_39;
    }
    v5 = v2[8];
    if ( v5 )
    {
      v45 = *(_DWORD *)(v5 - 4);
      if ( v45 )
        goto LABEL_5;
      goto LABEL_76;
    }
    v8 = (_QWORD *)v1[68];
    v7 = v1 + 2;
    if ( v8 )
      goto LABEL_40;
LABEL_57:
    (*(void (__fastcall **)(_QWORD *))v3)(v2);
    sub_186B220(v2);
LABEL_58:
    sub_14476A0(v1 + 77);
    v21 = (__int64 *)v1[76];
    v1[70] = (__int64)&off_1C59570;
    if ( v21 )
    {
      v38 = &v21[*((unsigned int *)v21 - 1)];
      if ( v21 >= v38 )
        goto LABEL_22;
      do
      {
        v39 = *v21;
        if ( *v21 )
        {
          v40 = v1[75];
          v17 = (*(_DWORD *)(v39 + 8))-- == 1;
          if ( v17 )
            sub_15D7BC0(v40, v39);
        }
        ++v21;
      }
      while ( v21 < v38 );
      v21 = (__int64 *)v1[76];
      if ( v21 )
LABEL_22:
        sub_186B220(v21 - 1);
    }
    v22 = (void *)v1[72];
    v1[70] = (__int64)&off_1C59548;
    if ( v22 )
      sub_186B220(v22);
    v23 = (_QWORD *)v1[68];
    if ( v23 )
    {
      v24 = *((unsigned int *)v23 - 1);
      if ( (_DWORD)v24 )
      {
        v25 = &v23[v24];
        do
        {
          while ( *v23 )
          {
            v26 = (void *)(*v23++ - 8LL);
            sub_186B220(v26);
            if ( v23 == v25 )
              goto LABEL_30;
          }
          ++v23;
        }
        while ( v23 != v25 );
LABEL_30:
        v23 = (_QWORD *)v1[68];
      }
      sub_186B220(v23 - 1);
    }
    v27 = v1[67];
    if ( v27 )
      sub_186B220((void *)(v27 - 8));
    sub_17E9B80(v7);
    sub_186B220(v1);
  }
  sub_18572D0(a1 + 3);
}

