void __fastcall sub_8AA260(__int64 *a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // r14d
  __int16 *v4; // rax
  __int64 v5; // rbp
  __int16 v6; // r12
  __int64 v7; // rax
  bool v8; // zf
  _QWORD *v9; // r13
  _QWORD *v10; // rbp
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rax
  _QWORD *v13; // r14
  _QWORD *v14; // rbx
  _QWORD *v15; // rdi
  void *v16; // rdi
  _QWORD *v17; // rbx
  _QWORD *v18; // rdi
  __int64 v19; // rdx
  _BYTE *v20; // r13
  __int64 v21; // r15
  __int16 *v22; // rax
  int v23; // ecx
  __int64 v24; // rbp
  _BYTE *v25; // rbp
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rax
  _QWORD *v28; // r12
  unsigned __int64 v29; // rax
  _QWORD *v30; // r14
  _QWORD *v31; // rdi
  void *v32; // rdi
  _QWORD *v33; // r14
  _QWORD *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 *v37; // rbx
  __int64 v38; // rax
  _QWORD *v39; // r13
  unsigned __int64 v40; // r12
  unsigned __int64 v41; // rax
  _QWORD *v42; // r14
  _QWORD *v43; // rbx
  _QWORD *v44; // rdi
  void *v45; // rdi
  _QWORD *v46; // rbx
  _QWORD *v47; // rdi
  __int64 v48; // rdx
  __int64 v50; // [rsp+20h] [rbp-168h]
  int v51; // [rsp+28h] [rbp-160h]
  __int16 v52; // [rsp+2Eh] [rbp-15Ah]
  __int64 v53; // [rsp+30h] [rbp-158h] BYREF
  char v54; // [rsp+38h] [rbp-150h]
  _BYTE *v55; // [rsp+40h] [rbp-148h] BYREF
  __int64 v56; // [rsp+48h] [rbp-140h]
  _BYTE v57[312]; // [rsp+50h] [rbp-138h] BYREF

  v2 = *a1;
  v55 = v57;
  v3 = *(_DWORD *)(v2 + 948);
  v56 = 0x800000000LL;
  v4 = *(__int16 **)(v2 + 24);
  v5 = *((_QWORD *)v4 + 1);
  v6 = *v4;
  *((_QWORD *)v4 + 1) = &v55;
  *(_DWORD *)(v2 + 948) = *(_DWORD *)(v2 + 40) + 1;
  sub_8A87B0(a1, *(_QWORD *)(a2 + 40));
  v7 = *(_QWORD *)(v2 + 24);
  v8 = (_DWORD)v56 == 0;
  *(_WORD *)v7 = v6;
  *(_QWORD *)(v7 + 8) = v5;
  *(_DWORD *)(v2 + 948) = v3;
  if ( v8 )
    goto LABEL_2;
  v20 = v55;
  v21 = *a1;
  v22 = *(__int16 **)(*a1 + 24);
  v52 = *v22;
  v50 = *((_QWORD *)v22 + 1);
  v23 = *(_DWORD *)(*a1 + 948);
  *((_QWORD *)v22 + 1) = &v55;
  v24 = (unsigned int)v56;
  v51 = v23;
  *(_DWORD *)(v21 + 948) = *(_DWORD *)(v21 + 40) + 1;
  v25 = &v20[32 * v24];
  while ( v20 != v25 )
  {
    while ( 1 )
    {
      v26 = *((_QWORD *)v25 - 3);
      v25 -= 32;
      if ( !v26 )
        break;
      v27 = *((_QWORD *)v25 + 2);
      if ( !v27 )
        break;
      if ( v26 >= v27 && v27 + 14848 >= v26 )
      {
        v36 = *(unsigned int *)(v27 + 14976);
        *(_DWORD *)(v27 + 14976) = v36 + 1;
        *(_QWORD *)(v27 + 8 * v36 + 14848) = v26;
      }
      else
      {
        v28 = *(_QWORD **)(v26 + 528);
        v29 = (unsigned __int64)*(unsigned int *)(v26 + 536) << 6;
        v30 = (_QWORD *)((char *)v28 + v29);
        if ( v28 != (_QWORD *)((char *)v28 + v29) )
        {
          do
          {
            v30 -= 8;
            v31 = (_QWORD *)v30[3];
            if ( v31 != v30 + 5 )
              operator delete(v31, v30[5] + 1LL);
          }
          while ( v28 != v30 );
          v30 = *(_QWORD **)(v26 + 528);
        }
        if ( v30 != (_QWORD *)(v26 + 544) )
          free(v30);
        v32 = *(void **)(v26 + 416);
        if ( v32 != (void *)(v26 + 432) )
          free(v32);
        v33 = (_QWORD *)(v26 + 400);
        do
        {
          v34 = (_QWORD *)*(v33 - 2);
          if ( v33 != v34 )
            operator delete(v34, *v33 + 1LL);
          v33 -= 4;
        }
        while ( v33 != (_QWORD *)(v26 + 80) );
        operator delete((void *)v26, 0x3A0u);
      }
      *((_QWORD *)v25 + 1) = 0;
      if ( v20 == v25 )
        goto LABEL_49;
    }
  }
LABEL_49:
  LODWORD(v56) = 0;
  sub_8A87B0(a1, *(_QWORD *)(a2 + 32));
  v35 = *(_QWORD *)(v21 + 24);
  if ( !(_DWORD)v56 )
  {
    *(_WORD *)v35 = v52;
    *(_QWORD *)(v35 + 8) = v50;
    *(_DWORD *)(v21 + 948) = v51;
LABEL_2:
    v9 = v55;
    v10 = &v55[32 * (unsigned int)v56];
    if ( v55 == (_BYTE *)v10 )
      goto LABEL_24;
    do
    {
      v11 = *(v10 - 3);
      v10 -= 4;
      if ( v11 )
      {
        v12 = v10[2];
        if ( v12 )
        {
          if ( v11 >= v12 && v12 + 14848 >= v11 )
          {
            v19 = *(unsigned int *)(v12 + 14976);
            *(_DWORD *)(v12 + 14976) = v19 + 1;
            *(_QWORD *)(v12 + 8 * v19 + 14848) = v11;
          }
          else
          {
            v13 = *(_QWORD **)(v11 + 528);
            v14 = &v13[8 * (unsigned __int64)*(unsigned int *)(v11 + 536)];
            if ( v13 != v14 )
            {
              do
              {
                v14 -= 8;
                v15 = (_QWORD *)v14[3];
                if ( v15 != v14 + 5 )
                  operator delete(v15, v14[5] + 1LL);
              }
              while ( v13 != v14 );
              v14 = *(_QWORD **)(v11 + 528);
            }
            if ( v14 != (_QWORD *)(v11 + 544) )
              free(v14);
            v16 = *(void **)(v11 + 416);
            if ( v16 != (void *)(v11 + 432) )
              free(v16);
            v17 = (_QWORD *)(v11 + 400);
            do
            {
              v18 = (_QWORD *)*(v17 - 2);
              if ( v18 != v17 )
                operator delete(v18, *v17 + 1LL);
              v17 -= 4;
            }
            while ( (_QWORD *)(v11 + 80) != v17 );
            operator delete((void *)v11, 0x3A0u);
          }
          v10[1] = 0;
        }
      }
    }
    while ( v9 != v10 );
    goto LABEL_23;
  }
  *(_WORD *)v35 = v52;
  *(_QWORD *)(v35 + 8) = v50;
  *(_DWORD *)(v21 + 948) = v51;
  v37 = (__int64 *)sub_A2E130(*a1, a2, 2194, 0);
  v38 = sub_AC7B80(a2);
  if ( v37 )
  {
    v53 = v38;
    v54 = 1;
    sub_839C90(v37, &v53);
  }
  v39 = v55;
  v10 = &v55[32 * (unsigned int)v56];
  if ( v55 != (_BYTE *)v10 )
  {
    do
    {
      v40 = *(v10 - 3);
      v10 -= 4;
      if ( v40 )
      {
        v41 = v10[2];
        if ( v41 )
        {
          if ( v40 >= v41 && v41 + 14848 >= v40 )
          {
            v48 = *(unsigned int *)(v41 + 14976);
            *(_DWORD *)(v41 + 14976) = v48 + 1;
            *(_QWORD *)(v41 + 8 * v48 + 14848) = v40;
          }
          else
          {
            v42 = *(_QWORD **)(v40 + 528);
            v43 = &v42[8 * (unsigned __int64)*(unsigned int *)(v40 + 536)];
            if ( v42 != v43 )
            {
              do
              {
                v43 -= 8;
                v44 = (_QWORD *)v43[3];
                if ( v44 != v43 + 5 )
                  operator delete(v44, v43[5] + 1LL);
              }
              while ( v42 != v43 );
              v43 = *(_QWORD **)(v40 + 528);
            }
            if ( v43 != (_QWORD *)(v40 + 544) )
              free(v43);
            v45 = *(void **)(v40 + 416);
            if ( v45 != (void *)(v40 + 432) )
              free(v45);
            v46 = (_QWORD *)(v40 + 400);
            do
            {
              v47 = (_QWORD *)*(v46 - 2);
              if ( v46 != v47 )
                operator delete(v47, *v46 + 1LL);
              v46 -= 4;
            }
            while ( (_QWORD *)(v40 + 80) != v46 );
            operator delete((void *)v40, 0x3A0u);
          }
          v10[1] = 0;
        }
      }
    }
    while ( v39 != v10 );
LABEL_23:
    v10 = v55;
  }
LABEL_24:
  if ( v10 != (_QWORD *)v57 )
    free(v10);
}

