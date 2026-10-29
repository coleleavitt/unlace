void __fastcall sub_2D2220(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 *v3; // r13
  __int64 v4; // rax
  __int64 *v5; // r12
  __int64 *v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi
  void *v11; // rdi
  _QWORD *v12; // rbx
  _QWORD *v13; // r13
  void (__fastcall ***v14)(_QWORD); // r12
  __int64 v15; // rax
  __int64 v16; // rax
  char *v17; // r13
  __int64 v18; // rax
  __int64 v19; // rbx
  char *v20; // r12
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(_QWORD *)(v1 + 4432);
    if ( v2 )
      sub_186B220((void *)(v2 - 8));
    v3 = *(__int64 **)(v1 + 4424);
    if ( v3 )
    {
      v4 = *((unsigned int *)v3 - 1);
      if ( (_DWORD)v4 )
      {
        v5 = &v3[2 * v4];
        do
        {
          v6 = (__int64 *)v3[1];
          if ( v6 )
          {
            v7 = &v6[*((unsigned int *)v6 - 1)];
            if ( v6 >= v7 )
              goto LABEL_15;
            do
            {
              while ( 1 )
              {
                v8 = *v6;
                if ( *v6 )
                {
                  v9 = *v3;
                  if ( (*(_DWORD *)(v8 + 8))-- == 1 )
                    break;
                }
                if ( ++v6 >= v7 )
                  goto LABEL_14;
              }
              sub_15D7BC0(v9, v8);
              ++v6;
            }
            while ( v6 < v7 );
LABEL_14:
            v6 = (__int64 *)v3[1];
            if ( v6 )
LABEL_15:
              sub_186B220(v6 - 1);
          }
          v3 += 2;
        }
        while ( v3 != v5 );
        v3 = *(__int64 **)(v1 + 4424);
      }
      sub_186B220(v3 - 1);
    }
    v11 = *(void **)(v1 + 4400);
    if ( v11 )
      sub_186B220(v11);
    v12 = *(_QWORD **)(v1 + 4392);
    if ( v12 )
    {
      v13 = &v12[*((unsigned int *)v12 - 1)];
      if ( v12 == v13 )
        goto LABEL_27;
      do
      {
        v14 = (void (__fastcall ***)(_QWORD))*v12;
        if ( *v12 )
        {
          (**v14)(*v12);
          sub_186B220(v14);
        }
        ++v12;
      }
      while ( v13 != v12 );
      v13 = *(_QWORD **)(v1 + 4392);
      if ( v13 )
      {
LABEL_27:
        *((_DWORD *)v13 - 1) = 0;
        sub_186B220(v13 - 1);
      }
    }
    v15 = *(_QWORD *)(v1 + 4376);
    if ( v15 )
      sub_186B220((void *)(v15 - 8));
    v16 = *(_QWORD *)(v1 + 4368);
    if ( v16 )
      sub_186B220((void *)(v16 - 8));
    v17 = *(char **)(v1 + 4344);
    if ( v17 )
    {
      v18 = *(unsigned int *)(v1 + 4352);
      if ( (_DWORD)v18 )
      {
        v19 = *(_QWORD *)(v1 + 4344);
        v20 = &v17[32 * v18];
        do
        {
          while ( 1 )
          {
            v21 = *(_QWORD *)(v19 + 16);
            if ( v21 )
              sub_186B220((void *)(v21 - 8));
            v22 = *(_QWORD *)(v19 + 8);
            if ( !v22 )
              break;
            v19 += 32;
            sub_186B220((void *)(v22 - 8));
            if ( (char *)v19 == v20 )
              goto LABEL_39;
          }
          v19 += 32;
        }
        while ( (char *)v19 != v20 );
      }
LABEL_39:
      sub_186B220(v17);
    }
    v23 = *(_QWORD *)(v1 + 4336);
    if ( v23 )
    {
      v24 = *(unsigned int *)(v23 - 4);
      if ( (_DWORD)v24 )
      {
        v25 = v23 + 16 * v24;
        do
        {
          while ( 1 )
          {
            v26 = *(_QWORD *)(v23 + 8);
            if ( !v26 )
              break;
            v23 += 16;
            sub_186B220((void *)(v26 - 8));
            if ( v25 == v23 )
              goto LABEL_45;
          }
          v23 += 16;
        }
        while ( v23 != v25 );
LABEL_45:
        v23 = *(_QWORD *)(v1 + 4336);
      }
      sub_186B220((void *)(v23 - 8));
    }
    v27 = *(_QWORD *)(v1 + 4328);
    if ( v27 )
    {
      v28 = *(unsigned int *)(v27 - 4);
      if ( (_DWORD)v28 )
      {
        v29 = v27 + 32 * v28;
        do
        {
          while ( 1 )
          {
            v30 = *(_QWORD *)(v27 + 16);
            if ( !v30 )
              break;
            v27 += 32;
            sub_186B220((void *)(v30 - 8));
            if ( v29 == v27 )
              goto LABEL_52;
          }
          v27 += 32;
        }
        while ( v27 != v29 );
LABEL_52:
        v27 = *(_QWORD *)(v1 + 4328);
      }
      sub_186B220((void *)(v27 - 8));
    }
    v31 = *(_QWORD *)(v1 + 4312);
    if ( v31 )
      sub_186B220((void *)(v31 - 8));
    v32 = *(_QWORD *)(v1 + 4304);
    if ( v32 )
      sub_186B220((void *)(v32 - 8));
    v33 = *(_QWORD *)(v1 + 4296);
    if ( v33 )
      sub_186B220((void *)(v33 - 8));
    v34 = *(_QWORD *)(v1 + 4288);
    if ( v34 )
      sub_186B220((void *)(v34 - 8));
    v35 = *(_QWORD *)(v1 + 4280);
    if ( v35 )
      sub_186B220((void *)(v35 - 8));
    v36 = *(_QWORD *)(v1 + 4272);
    if ( v36 )
      sub_186B220((void *)(v36 - 8));
    sub_11C05E0(v1 + 8);
    sub_186B220((void *)v1);
  }
}

