void __fastcall sub_2D3080(__int64 a1, __int64 a2)
{
  char v4; // dl
  char v5; // al
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r13
  void *v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rax
  char *v17; // rax
  char *v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rdi
  void *v22; // rdi
  void (****v23)(void); // rax
  void (****v24)(void); // rdx
  void (***v25)(void); // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  char *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdi
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  void *ptrc; // [rsp+0h] [rbp-78h]
  _QWORD *ptrd; // [rsp+0h] [rbp-78h]
  _QWORD *ptre; // [rsp+0h] [rbp-78h]
  char *ptr; // [rsp+0h] [rbp-78h]
  _QWORD *ptra; // [rsp+0h] [rbp-78h]
  _QWORD *ptrb; // [rsp+0h] [rbp-78h]
  unsigned __int64 v50; // [rsp+8h] [rbp-70h]
  void (****v51)(void); // [rsp+8h] [rbp-70h]
  char *v52; // [rsp+8h] [rbp-70h]
  char *v53; // [rsp+8h] [rbp-70h]
  _QWORD *v54; // [rsp+8h] [rbp-70h]
  _QWORD *v55; // [rsp+8h] [rbp-70h]
  char *v56; // [rsp+10h] [rbp-68h]
  void (****v57)(void); // [rsp+10h] [rbp-68h]
  char *v58; // [rsp+10h] [rbp-68h]
  _QWORD *v59; // [rsp+18h] [rbp-60h]
  __int64 v60; // [rsp+28h] [rbp-50h] BYREF
  __int64 v61; // [rsp+30h] [rbp-48h]
  _BYTE v62[64]; // [rsp+38h] [rbp-40h] BYREF

  v61 = a2;
  sub_17F9A60(v62, "solver");
  *(_BYTE *)(a1 + 81) = sub_1859630(a2, "proof.save", v62, 0);
  *(_BYTE *)(a1 + 82) = sub_1859630(v61, "proof.trim", v62, 0);
  v4 = sub_1859630(v61, "proof.check", v62, 1);
  v5 = *(_BYTE *)(a1 + 82);
  if ( !v4 )
  {
    *(_BYTE *)(a1 + 80) = 0;
    if ( !v5 )
      goto LABEL_6;
    v6 = *(_QWORD *)(a1 + 104);
    v7 = v6 + 8;
    if ( !v6 )
      goto LABEL_11;
    goto LABEL_9;
  }
  if ( v5 )
  {
    v8 = *(_QWORD *)(a1 + 104);
    *(_BYTE *)(a1 + 80) = 0;
    v7 = v8 + 8;
    if ( !v8 )
    {
LABEL_11:
      v9 = sub_186B270(0x1168u);
      v10 = *(_QWORD *)(a1 + 8);
      v11 = v9;
      sub_DFBCB0(v10);
      v12 = *(void **)(v10 + 296);
      v7 = v11 + 8;
      *(_QWORD *)v11 = v12;
      ptrc = v12;
      sub_17F9A60(&v60, "sat");
      sub_118B450(v11 + 8, &v60, ptrc);
      sub_18572D0(&v60);
      sub_7F80F0(v11 + 4384, *(_QWORD *)v11);
      *(_BYTE *)(v11 + 4448) = 0;
      *(_QWORD *)(v11 + 4440) = 0;
      *(_OWORD *)(v11 + 4424) = 0;
      sub_180C5A0(&v60, "rup");
      v13 = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(v11 + 4440) = v60;
      if ( v11 != v13 )
      {
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 4432);
          if ( v14 )
            sub_186B220((void *)(v14 - 8));
          v15 = *(_QWORD **)(v13 + 4424);
          if ( v15 )
          {
            v16 = *((unsigned int *)v15 - 1);
            if ( (_DWORD)v16 )
            {
              v59 = &v15[2 * v16];
              do
              {
                v17 = (char *)v15[1];
                if ( v17 )
                {
                  v18 = &v17[8 * *((unsigned int *)v17 - 1)];
                  if ( v17 >= v18 )
                    goto LABEL_26;
                  do
                  {
                    while ( 1 )
                    {
                      v19 = *(_QWORD *)v17;
                      if ( *(_QWORD *)v17 )
                      {
                        v20 = *v15;
                        if ( (*(_DWORD *)(v19 + 8))-- == 1 )
                          break;
                      }
                      v17 += 8;
                      if ( v17 >= v18 )
                        goto LABEL_25;
                    }
                    v56 = v17;
                    v50 = (unsigned __int64)v18;
                    ptrd = v15;
                    sub_15D7BC0(v20, v19);
                    v18 = (char *)v50;
                    v15 = ptrd;
                    v17 = v56 + 8;
                  }
                  while ( (unsigned __int64)(v56 + 8) < v50 );
LABEL_25:
                  v17 = (char *)v15[1];
                  if ( v17 )
                  {
LABEL_26:
                    ptre = v15;
                    sub_186B220(v17 - 8);
                    v15 = ptre;
                  }
                }
                v15 += 2;
              }
              while ( v15 != v59 );
              v15 = *(_QWORD **)(v13 + 4424);
            }
            sub_186B220(v15 - 1);
          }
          v22 = *(void **)(v13 + 4400);
          if ( v22 )
            sub_186B220(v22);
          v23 = *(void (*****)(void))(v13 + 4392);
          if ( v23 )
          {
            v24 = &v23[*((unsigned int *)v23 - 1)];
            if ( v23 == v24 )
              goto LABEL_38;
            do
            {
              v25 = *v23;
              if ( *v23 )
              {
                v57 = v24;
                v51 = v23;
                (**v25)();
                sub_186B220(v25);
                v24 = v57;
                v23 = v51;
              }
              ++v23;
            }
            while ( v24 != v23 );
            v24 = *(void (*****)(void))(v13 + 4392);
            if ( v24 )
            {
LABEL_38:
              *((_DWORD *)v24 - 1) = 0;
              sub_186B220(v24 - 1);
            }
          }
          v26 = *(_QWORD *)(v13 + 4376);
          if ( v26 )
            sub_186B220((void *)(v26 - 8));
          v27 = *(_QWORD *)(v13 + 4368);
          if ( v27 )
            sub_186B220((void *)(v27 - 8));
          v58 = *(char **)(v13 + 4344);
          if ( v58 )
          {
            v28 = *(unsigned int *)(v13 + 4352);
            if ( (_DWORD)v28 )
            {
              ptr = &v58[32 * v28];
              v29 = *(char **)(v13 + 4344);
              do
              {
                while ( 1 )
                {
                  v30 = *((_QWORD *)v29 + 2);
                  if ( v30 )
                  {
                    v52 = v29;
                    sub_186B220((void *)(v30 - 8));
                    v29 = v52;
                  }
                  v31 = *((_QWORD *)v29 + 1);
                  if ( !v31 )
                    break;
                  v53 = v29;
                  sub_186B220((void *)(v31 - 8));
                  v29 = v53 + 32;
                  if ( v53 + 32 == ptr )
                    goto LABEL_50;
                }
                v29 += 32;
              }
              while ( v29 != ptr );
            }
LABEL_50:
            sub_186B220(v58);
          }
          v32 = *(_QWORD **)(v13 + 4336);
          if ( v32 )
          {
            v33 = *((unsigned int *)v32 - 1);
            if ( (_DWORD)v33 )
            {
              ptra = &v32[2 * v33];
              do
              {
                while ( 1 )
                {
                  v34 = v32[1];
                  if ( !v34 )
                    break;
                  v54 = v32;
                  sub_186B220((void *)(v34 - 8));
                  v32 = v54 + 2;
                  if ( ptra == v54 + 2 )
                    goto LABEL_56;
                }
                v32 += 2;
              }
              while ( v32 != ptra );
LABEL_56:
              v32 = *(_QWORD **)(v13 + 4336);
            }
            sub_186B220(v32 - 1);
          }
          v35 = *(_QWORD **)(v13 + 4328);
          if ( v35 )
          {
            v36 = *((unsigned int *)v35 - 1);
            if ( (_DWORD)v36 )
            {
              ptrb = &v35[4 * v36];
              do
              {
                while ( 1 )
                {
                  v37 = v35[2];
                  if ( !v37 )
                    break;
                  v55 = v35;
                  sub_186B220((void *)(v37 - 8));
                  v35 = v55 + 4;
                  if ( ptrb == v55 + 4 )
                    goto LABEL_63;
                }
                v35 += 4;
              }
              while ( v35 != ptrb );
LABEL_63:
              v35 = *(_QWORD **)(v13 + 4328);
            }
            sub_186B220(v35 - 1);
          }
          v38 = *(_QWORD *)(v13 + 4312);
          if ( v38 )
            sub_186B220((void *)(v38 - 8));
          v39 = *(_QWORD *)(v13 + 4304);
          if ( v39 )
            sub_186B220((void *)(v39 - 8));
          v40 = *(_QWORD *)(v13 + 4296);
          if ( v40 )
            sub_186B220((void *)(v40 - 8));
          v41 = *(_QWORD *)(v13 + 4288);
          if ( v41 )
            sub_186B220((void *)(v41 - 8));
          v42 = *(_QWORD *)(v13 + 4280);
          if ( v42 )
            sub_186B220((void *)(v42 - 8));
          v43 = *(_QWORD *)(v13 + 4272);
          if ( v43 )
            sub_186B220((void *)(v43 - 8));
          sub_11C05E0(v13 + 8);
          sub_186B220((void *)v13);
        }
        *(_QWORD *)(a1 + 104) = v11;
      }
    }
LABEL_9:
    sub_11B7290(v7, a2);
    goto LABEL_6;
  }
  if ( !*(_BYTE *)(a1 + 81) )
    v5 = *(_QWORD *)(a1 + 128) == 0;
  *(_BYTE *)(a1 + 80) = v5;
LABEL_6:
  sub_18572D0(v62);
}

