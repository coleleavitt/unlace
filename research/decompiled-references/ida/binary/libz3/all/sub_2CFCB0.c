void __fastcall sub_2CFCB0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rax
  char v5; // dl
  char v6; // al
  void (__fastcall ***v7)(_QWORD); // r12
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r14
  void *v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rsi
  _QWORD *v18; // rax
  _QWORD *v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rdi
  void *v23; // rdi
  void (****v24)(void); // rax
  void (****v25)(void); // rdx
  void (***v26)(void); // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rdi
  _QWORD *v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdi
  _QWORD *v37; // rdx
  _QWORD *v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // [rsp+0h] [rbp-80h]
  void *ptrc; // [rsp+8h] [rbp-78h]
  _QWORD *ptrd; // [rsp+8h] [rbp-78h]
  _QWORD *ptre; // [rsp+8h] [rbp-78h]
  char *ptr; // [rsp+8h] [rbp-78h]
  _QWORD *ptra; // [rsp+8h] [rbp-78h]
  _QWORD *ptrb; // [rsp+8h] [rbp-78h]
  _QWORD *v54; // [rsp+10h] [rbp-70h]
  void (****v55)(void); // [rsp+10h] [rbp-70h]
  char *v56; // [rsp+10h] [rbp-70h]
  char *v57; // [rsp+10h] [rbp-70h]
  _QWORD *v58; // [rsp+10h] [rbp-70h]
  _QWORD *v59; // [rsp+10h] [rbp-70h]
  _QWORD *v60; // [rsp+18h] [rbp-68h]
  void (****v61)(void); // [rsp+18h] [rbp-68h]
  char *v62; // [rsp+18h] [rbp-68h]
  _QWORD *v63; // [rsp+20h] [rbp-60h]
  char v64[8]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v65; // [rsp+30h] [rbp-50h] BYREF
  char *v66; // [rsp+38h] [rbp-48h]
  _BYTE v67[64]; // [rsp+40h] [rbp-40h] BYREF

  if ( *(_QWORD *)(a1 + 280) )
    return;
  v2 = sub_186B270(0xB8u);
  *(_QWORD *)v2 = &off_1C4CDC0;
  *(_QWORD *)(v2 + 8) = a1;
  sub_DFBCB0(a1);
  v3 = *(_QWORD *)(a1 + 296);
  *(_QWORD *)(v2 + 16) = v3;
  sub_16669D0(v2 + 24, v3);
  v4 = *(_QWORD *)(v2 + 16);
  *(_BYTE *)(v2 + 82) = 0;
  *(_QWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 40) = v4;
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 64) = v4;
  *(_QWORD *)(v2 + 72) = 0;
  *(_WORD *)(v2 + 80) = 1;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 128) = 0;
  *(_QWORD *)(v2 + 136) = 0;
  *(_QWORD *)(v2 + 160) = v4;
  *(_QWORD *)(v2 + 168) = 0;
  *(_QWORD *)(v2 + 176) = v4;
  *(_OWORD *)(v2 + 88) = 0;
  *(_OWORD *)(v2 + 112) = 0;
  *(_OWORD *)(v2 + 144) = 0;
  sub_17F9A60(v64, "solver");
  v66 = v64;
  sub_17F9A60(v67, "solver");
  *(_BYTE *)(v2 + 81) = sub_1859630(v66, "proof.save", v67, 0);
  *(_BYTE *)(v2 + 82) = sub_1859630(v66, "proof.trim", v67, 0);
  v5 = sub_1859630(v66, "proof.check", v67, 1);
  v6 = *(_BYTE *)(v2 + 82);
  if ( v5 )
  {
    if ( !v6 )
    {
      if ( !*(_BYTE *)(v2 + 81) )
        v6 = *(_QWORD *)(v2 + 128) == 0;
      *(_BYTE *)(v2 + 80) = v6;
      goto LABEL_7;
    }
    *(_BYTE *)(v2 + 80) = 0;
LABEL_13:
    v8 = *(_QWORD *)(v2 + 104);
    v47 = v8 + 8;
    if ( !v8 )
    {
      v9 = sub_186B270(0x1168u);
      v10 = *(_QWORD *)(v2 + 8);
      v11 = v9;
      sub_DFBCB0(v10);
      v12 = *(void **)(v10 + 296);
      v47 = v11 + 8;
      *(_QWORD *)v11 = v12;
      ptrc = v12;
      sub_17F9A60(&v65, "sat");
      sub_118B450(v11 + 8, &v65, ptrc);
      sub_18572D0(&v65);
      sub_7F80F0(v11 + 4384, *(_QWORD *)v11);
      *(_BYTE *)(v11 + 4448) = 0;
      *(_QWORD *)(v11 + 4440) = 0;
      *(_OWORD *)(v11 + 4424) = 0;
      sub_180C5A0(&v65, "rup");
      v13 = *(_QWORD *)(v2 + 104);
      *(_QWORD *)(v11 + 4440) = v65;
      if ( v11 != v13 )
      {
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 4432);
          if ( v14 )
            sub_186B220((void *)(v14 - 8));
          v15 = *(_QWORD **)(v13 + 4424);
          v16 = v15;
          if ( v15 )
          {
            v17 = *((unsigned int *)v15 - 1);
            v63 = &v15[2 * v17];
            if ( (_DWORD)v17 )
            {
              do
              {
                v18 = (_QWORD *)v16[1];
                if ( v18 )
                {
                  v19 = &v18[*((unsigned int *)v18 - 1)];
                  if ( v18 >= v19 )
                    goto LABEL_30;
                  do
                  {
                    v20 = *v18;
                    if ( *v18 )
                    {
                      v21 = *v16;
                      if ( (*(_DWORD *)(v20 + 8))-- == 1 )
                      {
                        v60 = v18;
                        v54 = v19;
                        ptrd = v16;
                        sub_15D7BC0(v21, v20);
                        v18 = v60;
                        v19 = v54;
                        v16 = ptrd;
                      }
                    }
                    ++v18;
                  }
                  while ( v18 < v19 );
                  v18 = (_QWORD *)v16[1];
                  if ( v18 )
                  {
LABEL_30:
                    ptre = v16;
                    sub_186B220(v18 - 1);
                    v16 = ptre;
                  }
                }
                v16 += 2;
              }
              while ( v16 != v63 );
              v15 = *(_QWORD **)(v13 + 4424);
            }
            sub_186B220(v15 - 1);
          }
          v23 = *(void **)(v13 + 4400);
          if ( v23 )
            sub_186B220(v23);
          v24 = *(void (*****)(void))(v13 + 4392);
          if ( v24 )
          {
            v25 = &v24[*((unsigned int *)v24 - 1)];
            if ( v24 == v25 )
              goto LABEL_42;
            do
            {
              v26 = *v24;
              if ( *v24 )
              {
                v61 = v25;
                v55 = v24;
                (**v26)();
                sub_186B220(v26);
                v25 = v61;
                v24 = v55;
              }
              ++v24;
            }
            while ( v25 != v24 );
            v25 = *(void (*****)(void))(v13 + 4392);
            if ( v25 )
            {
LABEL_42:
              *((_DWORD *)v25 - 1) = 0;
              sub_186B220(v25 - 1);
            }
          }
          v27 = *(_QWORD *)(v13 + 4376);
          if ( v27 )
            sub_186B220((void *)(v27 - 8));
          v28 = *(_QWORD *)(v13 + 4368);
          if ( v28 )
            sub_186B220((void *)(v28 - 8));
          v62 = *(char **)(v13 + 4344);
          if ( v62 )
          {
            v29 = *(unsigned int *)(v13 + 4352);
            if ( (_DWORD)v29 )
            {
              ptr = &v62[32 * v29];
              v30 = *(char **)(v13 + 4344);
              do
              {
                while ( 1 )
                {
                  v31 = *((_QWORD *)v30 + 2);
                  if ( v31 )
                  {
                    v56 = v30;
                    sub_186B220((void *)(v31 - 8));
                    v30 = v56;
                  }
                  v32 = *((_QWORD *)v30 + 1);
                  if ( !v32 )
                    break;
                  v57 = v30;
                  sub_186B220((void *)(v32 - 8));
                  v30 = v57 + 32;
                  if ( v57 + 32 == ptr )
                    goto LABEL_54;
                }
                v30 += 32;
              }
              while ( v30 != ptr );
            }
LABEL_54:
            sub_186B220(v62);
          }
          v33 = *(_QWORD **)(v13 + 4336);
          v34 = v33;
          if ( v33 )
          {
            v35 = *((unsigned int *)v33 - 1);
            ptra = &v33[2 * v35];
            if ( (_DWORD)v35 )
            {
              do
              {
                while ( 1 )
                {
                  v36 = v34[1];
                  if ( !v36 )
                    break;
                  v58 = v34;
                  sub_186B220((void *)(v36 - 8));
                  v34 = v58 + 2;
                  if ( ptra == v58 + 2 )
                    goto LABEL_59;
                }
                v34 += 2;
              }
              while ( v34 != ptra );
LABEL_59:
              v33 = *(_QWORD **)(v13 + 4336);
            }
            sub_186B220(v33 - 1);
          }
          v37 = *(_QWORD **)(v13 + 4328);
          v38 = v37;
          if ( v37 )
          {
            v39 = *((unsigned int *)v37 - 1);
            ptrb = &v37[4 * v39];
            if ( (_DWORD)v39 )
            {
              do
              {
                while ( 1 )
                {
                  v40 = v38[2];
                  if ( !v40 )
                    break;
                  v59 = v38;
                  sub_186B220((void *)(v40 - 8));
                  v38 = v59 + 4;
                  if ( ptrb == v59 + 4 )
                    goto LABEL_65;
                }
                v38 += 4;
              }
              while ( v38 != ptrb );
LABEL_65:
              v37 = *(_QWORD **)(v13 + 4328);
            }
            sub_186B220(v37 - 1);
          }
          v41 = *(_QWORD *)(v13 + 4312);
          if ( v41 )
            sub_186B220((void *)(v41 - 8));
          v42 = *(_QWORD *)(v13 + 4304);
          if ( v42 )
            sub_186B220((void *)(v42 - 8));
          v43 = *(_QWORD *)(v13 + 4296);
          if ( v43 )
            sub_186B220((void *)(v43 - 8));
          v44 = *(_QWORD *)(v13 + 4288);
          if ( v44 )
            sub_186B220((void *)(v44 - 8));
          v45 = *(_QWORD *)(v13 + 4280);
          if ( v45 )
            sub_186B220((void *)(v45 - 8));
          v46 = *(_QWORD *)(v13 + 4272);
          if ( v46 )
            sub_186B220((void *)(v46 - 8));
          sub_11C05E0(v13 + 8);
          sub_186B220((void *)v13);
        }
        *(_QWORD *)(v2 + 104) = v11;
      }
    }
    sub_11B7290(v47, v64);
    goto LABEL_7;
  }
  *(_BYTE *)(v2 + 80) = 0;
  if ( v6 )
    goto LABEL_13;
LABEL_7:
  sub_18572D0(v67);
  sub_18572D0(v64);
  v7 = *(void (__fastcall ****)(_QWORD))(a1 + 280);
  if ( (void (__fastcall ***)(_QWORD))v2 != v7 )
  {
    if ( v7 )
    {
      (**v7)(*(_QWORD *)(a1 + 280));
      sub_186B220(v7);
    }
    *(_QWORD *)(a1 + 280) = v2;
  }
}

