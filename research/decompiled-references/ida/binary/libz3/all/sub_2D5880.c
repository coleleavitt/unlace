__int64 __fastcall sub_2D5880(int a1, __int64 a2, __int64 a3, int a4, int a5, int a6, void *a7, __int64 a8)
{
  __int64 v9; // rdi
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rax
  char v15; // dl
  char v16; // al
  __int64 v17; // r15
  __int64 v18; // r15
  void *v19; // rdx
  unsigned int *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rsi
  _QWORD *v25; // rax
  _QWORD *v26; // r8
  __int64 v27; // rsi
  __int64 v28; // rdi
  void *v30; // rdi
  void (****v31)(void); // rax
  void (****v32)(void); // rdx
  void (***v33)(void); // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  char *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rdi
  _QWORD *v40; // rdx
  _QWORD *v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rdi
  _QWORD *v44; // rdx
  _QWORD *v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  void *ptra; // [rsp+0h] [rbp-88h]
  void *ptr; // [rsp+0h] [rbp-88h]
  _QWORD *ptrb; // [rsp+0h] [rbp-88h]
  unsigned int *v57; // [rsp+8h] [rbp-80h]
  void *v58; // [rsp+10h] [rbp-78h]
  _QWORD *v59; // [rsp+10h] [rbp-78h]
  _QWORD *v60; // [rsp+10h] [rbp-78h]
  char *v61; // [rsp+10h] [rbp-78h]
  _QWORD *v62; // [rsp+10h] [rbp-78h]
  _QWORD *v63; // [rsp+10h] [rbp-78h]
  _QWORD *v64; // [rsp+18h] [rbp-70h]
  void (****v65)(void); // [rsp+18h] [rbp-70h]
  char *v66; // [rsp+18h] [rbp-70h]
  char *v67; // [rsp+18h] [rbp-70h]
  _QWORD *v68; // [rsp+18h] [rbp-70h]
  _QWORD *v69; // [rsp+18h] [rbp-70h]
  _QWORD *v70; // [rsp+20h] [rbp-68h]
  void (****v71)(void); // [rsp+20h] [rbp-68h]
  char *v72; // [rsp+20h] [rbp-68h]
  _QWORD *v73; // [rsp+28h] [rbp-60h]
  char v74[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v75; // [rsp+38h] [rbp-50h] BYREF
  char *v76; // [rsp+40h] [rbp-48h]
  _BYTE v77[64]; // [rsp+48h] [rbp-40h] BYREF

  v9 = *(_QWORD *)(a2 + 280);
  if ( v9 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, a3);
  v12 = sub_186B270(0xB8u);
  *(_QWORD *)v12 = &off_1C4CDC0;
  *(_QWORD *)(v12 + 8) = a2;
  sub_DFBCB0(a2);
  v13 = *(_QWORD *)(a2 + 296);
  *(_QWORD *)(v12 + 16) = v13;
  sub_16669D0(v12 + 24, v13);
  v14 = *(_QWORD *)(v12 + 16);
  *(_BYTE *)(v12 + 82) = 0;
  *(_QWORD *)(v12 + 48) = 0;
  *(_QWORD *)(v12 + 40) = v14;
  *(_QWORD *)(v12 + 56) = 0;
  *(_QWORD *)(v12 + 64) = v14;
  *(_QWORD *)(v12 + 72) = 0;
  *(_WORD *)(v12 + 80) = 1;
  *(_QWORD *)(v12 + 104) = 0;
  *(_QWORD *)(v12 + 128) = 0;
  *(_QWORD *)(v12 + 136) = 0;
  *(_QWORD *)(v12 + 160) = v14;
  *(_QWORD *)(v12 + 168) = 0;
  *(_QWORD *)(v12 + 176) = v14;
  *(_OWORD *)(v12 + 88) = 0;
  *(_OWORD *)(v12 + 112) = 0;
  *(_OWORD *)(v12 + 144) = 0;
  sub_17F9A60(v74, "solver");
  v76 = v74;
  sub_17F9A60(v77, "solver");
  *(_BYTE *)(v12 + 81) = sub_1859630(v76, "proof.save", v77, 0);
  *(_BYTE *)(v12 + 82) = sub_1859630(v76, "proof.trim", v77, 0);
  v15 = sub_1859630(v76, "proof.check", v77, 1);
  v16 = *(_BYTE *)(v12 + 82);
  if ( v15 )
  {
    if ( !v16 )
    {
      if ( !*(_BYTE *)(v12 + 81) )
        v16 = *(_QWORD *)(v12 + 128) == 0;
      *(_BYTE *)(v12 + 80) = v16;
      goto LABEL_8;
    }
    *(_BYTE *)(v12 + 80) = 0;
LABEL_13:
    v17 = *(_QWORD *)(v12 + 104);
    ptr = (void *)(v17 + 8);
    if ( !v17 )
    {
      v18 = sub_186B270(0x1168u);
      ptrb = *(_QWORD **)(v12 + 8);
      sub_DFBCB0(ptrb);
      v19 = (void *)ptrb[37];
      ptr = (void *)(v18 + 8);
      *(_QWORD *)v18 = v19;
      v58 = v19;
      sub_17F9A60(&v75, "sat");
      sub_118B450(v18 + 8, &v75, v58);
      sub_18572D0(&v75);
      sub_7F80F0(v18 + 4384, *(_QWORD *)v18);
      *(_BYTE *)(v18 + 4448) = 0;
      *(_QWORD *)(v18 + 4440) = 0;
      *(_OWORD *)(v18 + 4424) = 0;
      sub_180C5A0(&v75, "rup");
      *(_QWORD *)(v18 + 4440) = v75;
      v20 = *(unsigned int **)(v12 + 104);
      v57 = v20;
      if ( (unsigned int *)v18 != v20 )
      {
        if ( v20 )
        {
          v21 = *((_QWORD *)v20 + 554);
          if ( v21 )
            sub_186B220((void *)(v21 - 8));
          v22 = *((_QWORD **)v57 + 553);
          v23 = v22;
          if ( v22 )
          {
            v24 = *((unsigned int *)v22 - 1);
            v73 = &v22[2 * v24];
            if ( (_DWORD)v24 )
            {
              do
              {
                v25 = (_QWORD *)v23[1];
                if ( v25 )
                {
                  v26 = &v25[*((unsigned int *)v25 - 1)];
                  if ( v25 >= v26 )
                    goto LABEL_30;
                  do
                  {
                    v27 = *v25;
                    if ( *v25 )
                    {
                      v28 = *v23;
                      if ( (*(_DWORD *)(v27 + 8))-- == 1 )
                      {
                        v70 = v25;
                        v64 = v26;
                        v59 = v23;
                        sub_15D7BC0(v28, v27);
                        v25 = v70;
                        v26 = v64;
                        v23 = v59;
                      }
                    }
                    ++v25;
                  }
                  while ( v25 < v26 );
                  v25 = (_QWORD *)v23[1];
                  if ( v25 )
                  {
LABEL_30:
                    v60 = v23;
                    sub_186B220(v25 - 1);
                    v23 = v60;
                  }
                }
                v23 += 2;
              }
              while ( v23 != v73 );
              v22 = *((_QWORD **)v57 + 553);
            }
            sub_186B220(v22 - 1);
          }
          v30 = *((void **)v57 + 550);
          if ( v30 )
            sub_186B220(v30);
          v31 = *((void (*****)(void))v57 + 549);
          if ( v31 )
          {
            v32 = &v31[*((unsigned int *)v31 - 1)];
            if ( v31 == v32 )
              goto LABEL_42;
            do
            {
              v33 = *v31;
              if ( *v31 )
              {
                v71 = v32;
                v65 = v31;
                (**v33)();
                sub_186B220(v33);
                v32 = v71;
                v31 = v65;
              }
              ++v31;
            }
            while ( v32 != v31 );
            v32 = *((void (*****)(void))v57 + 549);
            if ( v32 )
            {
LABEL_42:
              *((_DWORD *)v32 - 1) = 0;
              sub_186B220(v32 - 1);
            }
          }
          v34 = *((_QWORD *)v57 + 547);
          if ( v34 )
            sub_186B220((void *)(v34 - 8));
          v35 = *((_QWORD *)v57 + 546);
          if ( v35 )
            sub_186B220((void *)(v35 - 8));
          v72 = *((char **)v57 + 543);
          if ( v72 )
          {
            v36 = v57[1088];
            if ( (_DWORD)v36 )
            {
              v61 = &v72[32 * v36];
              v37 = *((char **)v57 + 543);
              do
              {
                while ( 1 )
                {
                  v38 = *((_QWORD *)v37 + 2);
                  if ( v38 )
                  {
                    v66 = v37;
                    sub_186B220((void *)(v38 - 8));
                    v37 = v66;
                  }
                  v39 = *((_QWORD *)v37 + 1);
                  if ( !v39 )
                    break;
                  v67 = v37;
                  sub_186B220((void *)(v39 - 8));
                  v37 = v67 + 32;
                  if ( v67 + 32 == v61 )
                    goto LABEL_54;
                }
                v37 += 32;
              }
              while ( v37 != v61 );
            }
LABEL_54:
            sub_186B220(v72);
          }
          v40 = *((_QWORD **)v57 + 542);
          v41 = v40;
          if ( v40 )
          {
            v42 = *((unsigned int *)v40 - 1);
            v62 = &v40[2 * v42];
            if ( (_DWORD)v42 )
            {
              do
              {
                while ( 1 )
                {
                  v43 = v41[1];
                  if ( !v43 )
                    break;
                  v68 = v41;
                  sub_186B220((void *)(v43 - 8));
                  v41 = v68 + 2;
                  if ( v62 == v68 + 2 )
                    goto LABEL_59;
                }
                v41 += 2;
              }
              while ( v41 != v62 );
LABEL_59:
              v40 = *((_QWORD **)v57 + 542);
            }
            sub_186B220(v40 - 1);
          }
          v44 = *((_QWORD **)v57 + 541);
          v45 = v44;
          if ( v44 )
          {
            v46 = *((unsigned int *)v44 - 1);
            v63 = &v44[4 * v46];
            if ( (_DWORD)v46 )
            {
              do
              {
                while ( 1 )
                {
                  v47 = v45[2];
                  if ( !v47 )
                    break;
                  v69 = v45;
                  sub_186B220((void *)(v47 - 8));
                  v45 = v69 + 4;
                  if ( v63 == v69 + 4 )
                    goto LABEL_65;
                }
                v45 += 4;
              }
              while ( v45 != v63 );
LABEL_65:
              v44 = *((_QWORD **)v57 + 541);
            }
            sub_186B220(v44 - 1);
          }
          v48 = *((_QWORD *)v57 + 539);
          if ( v48 )
            sub_186B220((void *)(v48 - 8));
          v49 = *((_QWORD *)v57 + 538);
          if ( v49 )
            sub_186B220((void *)(v49 - 8));
          v50 = *((_QWORD *)v57 + 537);
          if ( v50 )
            sub_186B220((void *)(v50 - 8));
          v51 = *((_QWORD *)v57 + 536);
          if ( v51 )
            sub_186B220((void *)(v51 - 8));
          v52 = *((_QWORD *)v57 + 535);
          if ( v52 )
            sub_186B220((void *)(v52 - 8));
          v53 = *((_QWORD *)v57 + 534);
          if ( v53 )
            sub_186B220((void *)(v53 - 8));
          sub_11C05E0(v57 + 2);
          sub_186B220(v57);
        }
        *(_QWORD *)(v12 + 104) = v18;
      }
    }
    sub_11B7290(ptr, v74);
    goto LABEL_8;
  }
  *(_BYTE *)(v12 + 80) = 0;
  if ( v16 )
    goto LABEL_13;
LABEL_8:
  sub_18572D0(v77);
  sub_18572D0(v74);
  v9 = *(_QWORD *)(a2 + 280);
  if ( v12 != v9 )
  {
    if ( v9 )
    {
      ptra = *(void **)(a2 + 280);
      (**(void (***)(void))v9)();
      sub_186B220(ptra);
    }
    *(_QWORD *)(a2 + 280) = v12;
    v9 = v12;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, a3);
}

