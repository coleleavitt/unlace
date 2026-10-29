void __fastcall sub_8B8500(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  int v5; // r14d
  __int16 *v6; // rax
  __int64 v7; // rbp
  __int16 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rax
  bool v11; // zf
  _QWORD *v12; // r13
  _QWORD *v13; // rbp
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rax
  _QWORD *v16; // r14
  _QWORD *v17; // rbx
  _QWORD *v18; // rdi
  void *v19; // rdi
  _QWORD *v20; // rbx
  _QWORD *v21; // rdi
  __int64 v22; // rdx
  _BYTE *v23; // r13
  __int64 v24; // r15
  __int16 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rbp
  _BYTE *v28; // rbp
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rax
  _QWORD *v31; // r12
  unsigned __int64 v32; // rax
  _QWORD *v33; // r14
  _QWORD *v34; // rdi
  void *v35; // rdi
  _QWORD *v36; // r14
  _QWORD *v37; // rdi
  __int64 v38; // rax
  __int64 *v39; // rbx
  __int64 v40; // rax
  _QWORD *v41; // r13
  unsigned __int64 v42; // r12
  unsigned __int64 v43; // rax
  _QWORD *v44; // r14
  _QWORD *v45; // rbx
  _QWORD *v46; // rdi
  void *v47; // rdi
  _QWORD *v48; // rbx
  _QWORD *v49; // rdi
  __int64 v50; // rdx
  __int64 v52; // [rsp+20h] [rbp-168h]
  int v53; // [rsp+28h] [rbp-160h]
  __int16 v54; // [rsp+2Eh] [rbp-15Ah]
  __int64 v55; // [rsp+30h] [rbp-158h] BYREF
  char v56; // [rsp+38h] [rbp-150h]
  _BYTE *v57; // [rsp+40h] [rbp-148h] BYREF
  __int64 v58; // [rsp+48h] [rbp-140h]
  _BYTE v59[312]; // [rsp+50h] [rbp-138h] BYREF

  v4 = *a1;
  v57 = v59;
  v5 = *(_DWORD *)(v4 + 948);
  v58 = 0x800000000LL;
  v6 = *(__int16 **)(v4 + 24);
  v7 = *((_QWORD *)v6 + 1);
  v8 = *v6;
  *((_QWORD *)v6 + 1) = &v57;
  *(_DWORD *)(v4 + 948) = *(_DWORD *)(v4 + 40) + 1;
  sub_8B6C50(a1, *(_QWORD *)(a2 + 40), a3, a4);
  v10 = *(_QWORD *)(v4 + 24);
  v11 = (_DWORD)v58 == 0;
  *(_WORD *)v10 = v8;
  *(_QWORD *)(v10 + 8) = v7;
  *(_DWORD *)(v4 + 948) = v5;
  if ( v11 )
    goto LABEL_2;
  v23 = v57;
  v24 = *a1;
  v25 = *(__int16 **)(*a1 + 24);
  v54 = *v25;
  v52 = *((_QWORD *)v25 + 1);
  v26 = *(unsigned int *)(*a1 + 948);
  *((_QWORD *)v25 + 1) = &v57;
  v27 = (unsigned int)v58;
  v53 = v26;
  *(_DWORD *)(v24 + 948) = *(_DWORD *)(v24 + 40) + 1;
  v28 = &v23[32 * v27];
  while ( v23 != v28 )
  {
    while ( 1 )
    {
      v29 = *((_QWORD *)v28 - 3);
      v28 -= 32;
      if ( !v29 )
        break;
      v30 = *((_QWORD *)v28 + 2);
      if ( !v30 )
        break;
      if ( v29 >= v30 && v30 + 14848 >= v29 )
      {
        v9 = *(unsigned int *)(v30 + 14976);
        v26 = (unsigned int)(v9 + 1);
        *(_DWORD *)(v30 + 14976) = v26;
        *(_QWORD *)(v30 + 8 * v9 + 14848) = v29;
      }
      else
      {
        v31 = *(_QWORD **)(v29 + 528);
        v32 = (unsigned __int64)*(unsigned int *)(v29 + 536) << 6;
        v33 = (_QWORD *)((char *)v31 + v32);
        if ( v31 != (_QWORD *)((char *)v31 + v32) )
        {
          do
          {
            v33 -= 8;
            v34 = (_QWORD *)v33[3];
            if ( v34 != v33 + 5 )
              operator delete(v34, v33[5] + 1LL);
          }
          while ( v31 != v33 );
          v33 = *(_QWORD **)(v29 + 528);
        }
        if ( v33 != (_QWORD *)(v29 + 544) )
          free(v33);
        v35 = *(void **)(v29 + 416);
        if ( v35 != (void *)(v29 + 432) )
          free(v35);
        v36 = (_QWORD *)(v29 + 400);
        do
        {
          v37 = (_QWORD *)*(v36 - 2);
          if ( v36 != v37 )
            operator delete(v37, *v36 + 1LL);
          v36 -= 4;
        }
        while ( v36 != (_QWORD *)(v29 + 80) );
        operator delete((void *)v29, 0x3A0u);
      }
      *((_QWORD *)v28 + 1) = 0;
      if ( v23 == v28 )
        goto LABEL_49;
    }
  }
LABEL_49:
  LODWORD(v58) = 0;
  sub_8B6C50(a1, *(_QWORD *)(a2 + 32), v9, v26);
  v38 = *(_QWORD *)(v24 + 24);
  if ( !(_DWORD)v58 )
  {
    *(_WORD *)v38 = v54;
    *(_QWORD *)(v38 + 8) = v52;
    *(_DWORD *)(v24 + 948) = v53;
LABEL_2:
    v12 = v57;
    v13 = &v57[32 * (unsigned int)v58];
    if ( v57 == (_BYTE *)v13 )
      goto LABEL_24;
    do
    {
      v14 = *(v13 - 3);
      v13 -= 4;
      if ( v14 )
      {
        v15 = v13[2];
        if ( v15 )
        {
          if ( v14 >= v15 && v15 + 14848 >= v14 )
          {
            v22 = *(unsigned int *)(v15 + 14976);
            *(_DWORD *)(v15 + 14976) = v22 + 1;
            *(_QWORD *)(v15 + 8 * v22 + 14848) = v14;
          }
          else
          {
            v16 = *(_QWORD **)(v14 + 528);
            v17 = &v16[8 * (unsigned __int64)*(unsigned int *)(v14 + 536)];
            if ( v16 != v17 )
            {
              do
              {
                v17 -= 8;
                v18 = (_QWORD *)v17[3];
                if ( v18 != v17 + 5 )
                  operator delete(v18, v17[5] + 1LL);
              }
              while ( v16 != v17 );
              v17 = *(_QWORD **)(v14 + 528);
            }
            if ( v17 != (_QWORD *)(v14 + 544) )
              free(v17);
            v19 = *(void **)(v14 + 416);
            if ( v19 != (void *)(v14 + 432) )
              free(v19);
            v20 = (_QWORD *)(v14 + 400);
            do
            {
              v21 = (_QWORD *)*(v20 - 2);
              if ( v21 != v20 )
                operator delete(v21, *v20 + 1LL);
              v20 -= 4;
            }
            while ( (_QWORD *)(v14 + 80) != v20 );
            operator delete((void *)v14, 0x3A0u);
          }
          v13[1] = 0;
        }
      }
    }
    while ( v12 != v13 );
    goto LABEL_23;
  }
  *(_WORD *)v38 = v54;
  *(_QWORD *)(v38 + 8) = v52;
  *(_DWORD *)(v24 + 948) = v53;
  v39 = (__int64 *)sub_A2E130(*a1, a2, 2194, 0);
  v40 = sub_AC7B80(a2);
  if ( v39 )
  {
    v55 = v40;
    v56 = 1;
    sub_839C90(v39, &v55);
  }
  v41 = v57;
  v13 = &v57[32 * (unsigned int)v58];
  if ( v57 != (_BYTE *)v13 )
  {
    do
    {
      v42 = *(v13 - 3);
      v13 -= 4;
      if ( v42 )
      {
        v43 = v13[2];
        if ( v43 )
        {
          if ( v42 >= v43 && v43 + 14848 >= v42 )
          {
            v50 = *(unsigned int *)(v43 + 14976);
            *(_DWORD *)(v43 + 14976) = v50 + 1;
            *(_QWORD *)(v43 + 8 * v50 + 14848) = v42;
          }
          else
          {
            v44 = *(_QWORD **)(v42 + 528);
            v45 = &v44[8 * (unsigned __int64)*(unsigned int *)(v42 + 536)];
            if ( v44 != v45 )
            {
              do
              {
                v45 -= 8;
                v46 = (_QWORD *)v45[3];
                if ( v46 != v45 + 5 )
                  operator delete(v46, v45[5] + 1LL);
              }
              while ( v44 != v45 );
              v45 = *(_QWORD **)(v42 + 528);
            }
            if ( v45 != (_QWORD *)(v42 + 544) )
              free(v45);
            v47 = *(void **)(v42 + 416);
            if ( v47 != (void *)(v42 + 432) )
              free(v47);
            v48 = (_QWORD *)(v42 + 400);
            do
            {
              v49 = (_QWORD *)*(v48 - 2);
              if ( v48 != v49 )
                operator delete(v49, *v48 + 1LL);
              v48 -= 4;
            }
            while ( (_QWORD *)(v42 + 80) != v48 );
            operator delete((void *)v42, 0x3A0u);
          }
          v13[1] = 0;
        }
      }
    }
    while ( v41 != v13 );
LABEL_23:
    v13 = v57;
  }
LABEL_24:
  if ( v13 != (_QWORD *)v59 )
    free(v13);
}

