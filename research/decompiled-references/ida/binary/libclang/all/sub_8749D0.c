void __fastcall sub_8749D0(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r13
  int v7; // r14d
  __int16 *v8; // rax
  __int64 v9; // rbp
  __int16 v10; // r12
  __int64 *v11; // rdx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  bool v15; // zf
  _QWORD *v16; // r13
  _QWORD *v17; // rbp
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rax
  _QWORD *v20; // r14
  _QWORD *v21; // rbx
  _QWORD *v22; // rdi
  void *v23; // rdi
  _QWORD *v24; // rbx
  _QWORD *v25; // rdi
  __int64 v26; // rdx
  _BYTE *v27; // r13
  __int64 v28; // r15
  __int16 *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbp
  _BYTE *v32; // rbp
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rax
  _QWORD *v35; // r12
  unsigned __int64 v36; // rax
  _QWORD *v37; // r14
  _QWORD *v38; // rdi
  void *v39; // rdi
  _QWORD *v40; // r14
  _QWORD *v41; // rdi
  __int64 v42; // rax
  __int64 *v43; // rbx
  __int64 v44; // rax
  _QWORD *v45; // r13
  unsigned __int64 v46; // r12
  unsigned __int64 v47; // rax
  _QWORD *v48; // r14
  _QWORD *v49; // rbx
  _QWORD *v50; // rdi
  void *v51; // rdi
  _QWORD *v52; // rbx
  _QWORD *v53; // rdi
  __int64 v54; // rdx
  __int64 v56; // [rsp+20h] [rbp-168h]
  int v57; // [rsp+28h] [rbp-160h]
  __int16 v58; // [rsp+2Eh] [rbp-15Ah]
  __int64 v59; // [rsp+30h] [rbp-158h] BYREF
  char v60; // [rsp+38h] [rbp-150h]
  _BYTE *v61; // [rsp+40h] [rbp-148h] BYREF
  __int64 v62; // [rsp+48h] [rbp-140h]
  _BYTE v63[312]; // [rsp+50h] [rbp-138h] BYREF

  v6 = *a1;
  v61 = v63;
  v7 = *(_DWORD *)(v6 + 948);
  v62 = 0x800000000LL;
  v8 = *(__int16 **)(v6 + 24);
  v9 = *((_QWORD *)v8 + 1);
  v10 = *v8;
  *((_QWORD *)v8 + 1) = &v61;
  *(_DWORD *)(v6 + 948) = *(_DWORD *)(v6 + 40) + 1;
  sub_871080((__int64)a1, *(_QWORD *)(a2 + 40), a3, a4, a5, a6);
  v14 = *(_QWORD *)(v6 + 24);
  v15 = (_DWORD)v62 == 0;
  *(_WORD *)v14 = v10;
  *(_QWORD *)(v14 + 8) = v9;
  *(_DWORD *)(v6 + 948) = v7;
  if ( v15 )
    goto LABEL_2;
  v27 = v61;
  v28 = *a1;
  v29 = *(__int16 **)(*a1 + 24LL);
  v58 = *v29;
  v56 = *((_QWORD *)v29 + 1);
  v30 = *(unsigned int *)(*a1 + 948LL);
  *((_QWORD *)v29 + 1) = &v61;
  v31 = (unsigned int)v62;
  v57 = v30;
  *(_DWORD *)(v28 + 948) = *(_DWORD *)(v28 + 40) + 1;
  v32 = &v27[32 * v31];
  while ( v27 != v32 )
  {
    while ( 1 )
    {
      v33 = *((_QWORD *)v32 - 3);
      v32 -= 32;
      if ( !v33 )
        break;
      v34 = *((_QWORD *)v32 + 2);
      if ( !v34 )
        break;
      if ( v33 >= v34 && v34 + 14848 >= v33 )
      {
        v11 = (__int64 *)*(unsigned int *)(v34 + 14976);
        v30 = (unsigned int)((_DWORD)v11 + 1);
        *(_DWORD *)(v34 + 14976) = v30;
        *(_QWORD *)(v34 + 8LL * (_QWORD)v11 + 14848) = v33;
      }
      else
      {
        v35 = *(_QWORD **)(v33 + 528);
        v36 = (unsigned __int64)*(unsigned int *)(v33 + 536) << 6;
        v37 = (_QWORD *)((char *)v35 + v36);
        if ( v35 != (_QWORD *)((char *)v35 + v36) )
        {
          do
          {
            v37 -= 8;
            v38 = (_QWORD *)v37[3];
            if ( v38 != v37 + 5 )
              operator delete(v38, v37[5] + 1LL);
          }
          while ( v35 != v37 );
          v37 = *(_QWORD **)(v33 + 528);
        }
        if ( v37 != (_QWORD *)(v33 + 544) )
          free(v37);
        v39 = *(void **)(v33 + 416);
        if ( v39 != (void *)(v33 + 432) )
          free(v39);
        v40 = (_QWORD *)(v33 + 400);
        do
        {
          v41 = (_QWORD *)*(v40 - 2);
          if ( v40 != v41 )
            operator delete(v41, *v40 + 1LL);
          v40 -= 4;
        }
        while ( v40 != (_QWORD *)(v33 + 80) );
        operator delete((void *)v33, 0x3A0u);
      }
      *((_QWORD *)v32 + 1) = 0;
      if ( v27 == v32 )
        goto LABEL_49;
    }
  }
LABEL_49:
  LODWORD(v62) = 0;
  sub_871080((__int64)a1, *(_QWORD *)(a2 + 32), v11, v30, v12, v13);
  v42 = *(_QWORD *)(v28 + 24);
  if ( !(_DWORD)v62 )
  {
    *(_WORD *)v42 = v58;
    *(_QWORD *)(v42 + 8) = v56;
    *(_DWORD *)(v28 + 948) = v57;
LABEL_2:
    v16 = v61;
    v17 = &v61[32 * (unsigned int)v62];
    if ( v61 == (_BYTE *)v17 )
      goto LABEL_24;
    do
    {
      v18 = *(v17 - 3);
      v17 -= 4;
      if ( v18 )
      {
        v19 = v17[2];
        if ( v19 )
        {
          if ( v18 >= v19 && v19 + 14848 >= v18 )
          {
            v26 = *(unsigned int *)(v19 + 14976);
            *(_DWORD *)(v19 + 14976) = v26 + 1;
            *(_QWORD *)(v19 + 8 * v26 + 14848) = v18;
          }
          else
          {
            v20 = *(_QWORD **)(v18 + 528);
            v21 = &v20[8 * (unsigned __int64)*(unsigned int *)(v18 + 536)];
            if ( v20 != v21 )
            {
              do
              {
                v21 -= 8;
                v22 = (_QWORD *)v21[3];
                if ( v22 != v21 + 5 )
                  operator delete(v22, v21[5] + 1LL);
              }
              while ( v20 != v21 );
              v21 = *(_QWORD **)(v18 + 528);
            }
            if ( v21 != (_QWORD *)(v18 + 544) )
              free(v21);
            v23 = *(void **)(v18 + 416);
            if ( v23 != (void *)(v18 + 432) )
              free(v23);
            v24 = (_QWORD *)(v18 + 400);
            do
            {
              v25 = (_QWORD *)*(v24 - 2);
              if ( v25 != v24 )
                operator delete(v25, *v24 + 1LL);
              v24 -= 4;
            }
            while ( (_QWORD *)(v18 + 80) != v24 );
            operator delete((void *)v18, 0x3A0u);
          }
          v17[1] = 0;
        }
      }
    }
    while ( v16 != v17 );
    goto LABEL_23;
  }
  *(_WORD *)v42 = v58;
  *(_QWORD *)(v42 + 8) = v56;
  *(_DWORD *)(v28 + 948) = v57;
  v43 = (__int64 *)sub_A2E130(*a1, a2, 2194, 0);
  v44 = sub_AC7B80(a2);
  if ( v43 )
  {
    v59 = v44;
    v60 = 1;
    sub_839C90(v43, &v59);
  }
  v45 = v61;
  v17 = &v61[32 * (unsigned int)v62];
  if ( v61 != (_BYTE *)v17 )
  {
    do
    {
      v46 = *(v17 - 3);
      v17 -= 4;
      if ( v46 )
      {
        v47 = v17[2];
        if ( v47 )
        {
          if ( v46 >= v47 && v47 + 14848 >= v46 )
          {
            v54 = *(unsigned int *)(v47 + 14976);
            *(_DWORD *)(v47 + 14976) = v54 + 1;
            *(_QWORD *)(v47 + 8 * v54 + 14848) = v46;
          }
          else
          {
            v48 = *(_QWORD **)(v46 + 528);
            v49 = &v48[8 * (unsigned __int64)*(unsigned int *)(v46 + 536)];
            if ( v48 != v49 )
            {
              do
              {
                v49 -= 8;
                v50 = (_QWORD *)v49[3];
                if ( v50 != v49 + 5 )
                  operator delete(v50, v49[5] + 1LL);
              }
              while ( v48 != v49 );
              v49 = *(_QWORD **)(v46 + 528);
            }
            if ( v49 != (_QWORD *)(v46 + 544) )
              free(v49);
            v51 = *(void **)(v46 + 416);
            if ( v51 != (void *)(v46 + 432) )
              free(v51);
            v52 = (_QWORD *)(v46 + 400);
            do
            {
              v53 = (_QWORD *)*(v52 - 2);
              if ( v52 != v53 )
                operator delete(v53, *v52 + 1LL);
              v52 -= 4;
            }
            while ( (_QWORD *)(v46 + 80) != v52 );
            operator delete((void *)v46, 0x3A0u);
          }
          v17[1] = 0;
        }
      }
    }
    while ( v45 != v17 );
LABEL_23:
    v17 = v61;
  }
LABEL_24:
  if ( v17 != (_QWORD *)v63 )
    free(v17);
}

