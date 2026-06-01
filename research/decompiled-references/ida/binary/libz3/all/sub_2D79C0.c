__int64 __fastcall sub_2D79C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rdi
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  char v14; // dl
  char v15; // al
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // r14
  void *v21; // rdx
  __int64 v22; // r15
  __int64 v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rsi
  _QWORD *v27; // rax
  _QWORD *v28; // r8
  __int64 v29; // rsi
  __int64 v30; // rdi
  void *v32; // rdi
  void (****v33)(void); // rax
  void (****v34)(void); // rdx
  void (***v35)(void); // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  char *v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rdi
  _QWORD *v42; // rdx
  _QWORD *v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rdi
  _QWORD *v46; // rdx
  _QWORD *v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  void *ptra; // [rsp+0h] [rbp-80h]
  void *ptr; // [rsp+0h] [rbp-80h]
  void *v58; // [rsp+8h] [rbp-78h]
  _QWORD *v59; // [rsp+8h] [rbp-78h]
  _QWORD *v60; // [rsp+8h] [rbp-78h]
  char *v61; // [rsp+8h] [rbp-78h]
  _QWORD *v62; // [rsp+8h] [rbp-78h]
  _QWORD *v63; // [rsp+8h] [rbp-78h]
  _QWORD *v64; // [rsp+10h] [rbp-70h]
  void (****v65)(void); // [rsp+10h] [rbp-70h]
  char *v66; // [rsp+10h] [rbp-70h]
  char *v67; // [rsp+10h] [rbp-70h]
  _QWORD *v68; // [rsp+10h] [rbp-70h]
  _QWORD *v69; // [rsp+10h] [rbp-70h]
  _QWORD *v70; // [rsp+18h] [rbp-68h]
  void (****v71)(void); // [rsp+18h] [rbp-68h]
  char *v72; // [rsp+18h] [rbp-68h]
  _QWORD *v73; // [rsp+20h] [rbp-60h]
  char v74[8]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v75; // [rsp+30h] [rbp-50h] BYREF
  char *v76; // [rsp+38h] [rbp-48h]
  _BYTE v77[64]; // [rsp+40h] [rbp-40h] BYREF

  v8 = *(_QWORD *)(a2 + 280);
  if ( v8 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
  v11 = sub_186B270(0xB8u);
  *(_QWORD *)v11 = &off_1C4CDC0;
  *(_QWORD *)(v11 + 8) = a2;
  sub_DFBCB0(a2);
  v12 = *(_QWORD *)(a2 + 296);
  *(_QWORD *)(v11 + 16) = v12;
  sub_16669D0(v11 + 24, v12);
  v13 = *(_QWORD *)(v11 + 16);
  *(_BYTE *)(v11 + 82) = 0;
  *(_QWORD *)(v11 + 48) = 0;
  *(_QWORD *)(v11 + 40) = v13;
  *(_QWORD *)(v11 + 56) = 0;
  *(_QWORD *)(v11 + 64) = v13;
  *(_QWORD *)(v11 + 72) = 0;
  *(_WORD *)(v11 + 80) = 1;
  *(_QWORD *)(v11 + 104) = 0;
  *(_QWORD *)(v11 + 128) = 0;
  *(_QWORD *)(v11 + 136) = 0;
  *(_QWORD *)(v11 + 160) = v13;
  *(_QWORD *)(v11 + 168) = 0;
  *(_QWORD *)(v11 + 176) = v13;
  *(_OWORD *)(v11 + 88) = 0;
  *(_OWORD *)(v11 + 112) = 0;
  *(_OWORD *)(v11 + 144) = 0;
  sub_17F9A60(v74, "solver");
  v76 = v74;
  sub_17F9A60(v77, "solver");
  *(_BYTE *)(v11 + 81) = sub_1859630(v76, "proof.save", v77, 0);
  *(_BYTE *)(v11 + 82) = sub_1859630(v76, "proof.trim", v77, 0);
  v14 = sub_1859630(v76, "proof.check", v77, 1);
  v15 = *(_BYTE *)(v11 + 82);
  if ( v14 )
  {
    if ( !v15 )
    {
      if ( !*(_BYTE *)(v11 + 81) )
        v15 = *(_QWORD *)(v11 + 128) == 0;
      *(_BYTE *)(v11 + 80) = v15;
      goto LABEL_8;
    }
    *(_BYTE *)(v11 + 80) = 0;
LABEL_14:
    v17 = *(_QWORD *)(v11 + 104);
    ptr = (void *)(v17 + 8);
    if ( !v17 )
    {
      v18 = sub_186B270(0x1168u);
      v19 = *(_QWORD *)(v11 + 8);
      v20 = v18;
      sub_DFBCB0(v19);
      v21 = *(void **)(v19 + 296);
      ptr = (void *)(v20 + 8);
      *(_QWORD *)v20 = v21;
      v58 = v21;
      sub_17F9A60(&v75, "sat");
      sub_118B450(v20 + 8, &v75, v58);
      sub_18572D0(&v75);
      sub_7F80F0(v20 + 4384, *(_QWORD *)v20);
      *(_BYTE *)(v20 + 4448) = 0;
      *(_QWORD *)(v20 + 4440) = 0;
      *(_OWORD *)(v20 + 4424) = 0;
      sub_180C5A0(&v75, "rup");
      v22 = *(_QWORD *)(v11 + 104);
      *(_QWORD *)(v20 + 4440) = v75;
      if ( v20 != v22 )
      {
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 4432);
          if ( v23 )
            sub_186B220((void *)(v23 - 8));
          v24 = *(_QWORD **)(v22 + 4424);
          v25 = v24;
          if ( v24 )
          {
            v26 = *((unsigned int *)v24 - 1);
            v73 = &v24[2 * v26];
            if ( (_DWORD)v26 )
            {
              do
              {
                v27 = (_QWORD *)v25[1];
                if ( v27 )
                {
                  v28 = &v27[*((unsigned int *)v27 - 1)];
                  if ( v27 >= v28 )
                    goto LABEL_31;
                  do
                  {
                    v29 = *v27;
                    if ( *v27 )
                    {
                      v30 = *v25;
                      if ( (*(_DWORD *)(v29 + 8))-- == 1 )
                      {
                        v70 = v27;
                        v64 = v28;
                        v59 = v25;
                        sub_15D7BC0(v30, v29);
                        v27 = v70;
                        v28 = v64;
                        v25 = v59;
                      }
                    }
                    ++v27;
                  }
                  while ( v27 < v28 );
                  v27 = (_QWORD *)v25[1];
                  if ( v27 )
                  {
LABEL_31:
                    v60 = v25;
                    sub_186B220(v27 - 1);
                    v25 = v60;
                  }
                }
                v25 += 2;
              }
              while ( v25 != v73 );
              v24 = *(_QWORD **)(v22 + 4424);
            }
            sub_186B220(v24 - 1);
          }
          v32 = *(void **)(v22 + 4400);
          if ( v32 )
            sub_186B220(v32);
          v33 = *(void (*****)(void))(v22 + 4392);
          if ( v33 )
          {
            v34 = &v33[*((unsigned int *)v33 - 1)];
            if ( v33 == v34 )
              goto LABEL_43;
            do
            {
              v35 = *v33;
              if ( *v33 )
              {
                v71 = v34;
                v65 = v33;
                (**v35)();
                sub_186B220(v35);
                v34 = v71;
                v33 = v65;
              }
              ++v33;
            }
            while ( v34 != v33 );
            v34 = *(void (*****)(void))(v22 + 4392);
            if ( v34 )
            {
LABEL_43:
              *((_DWORD *)v34 - 1) = 0;
              sub_186B220(v34 - 1);
            }
          }
          v36 = *(_QWORD *)(v22 + 4376);
          if ( v36 )
            sub_186B220((void *)(v36 - 8));
          v37 = *(_QWORD *)(v22 + 4368);
          if ( v37 )
            sub_186B220((void *)(v37 - 8));
          v72 = *(char **)(v22 + 4344);
          if ( v72 )
          {
            v38 = *(unsigned int *)(v22 + 4352);
            if ( (_DWORD)v38 )
            {
              v61 = &v72[32 * v38];
              v39 = *(char **)(v22 + 4344);
              do
              {
                while ( 1 )
                {
                  v40 = *((_QWORD *)v39 + 2);
                  if ( v40 )
                  {
                    v66 = v39;
                    sub_186B220((void *)(v40 - 8));
                    v39 = v66;
                  }
                  v41 = *((_QWORD *)v39 + 1);
                  if ( !v41 )
                    break;
                  v67 = v39;
                  sub_186B220((void *)(v41 - 8));
                  v39 = v67 + 32;
                  if ( v67 + 32 == v61 )
                    goto LABEL_55;
                }
                v39 += 32;
              }
              while ( v39 != v61 );
            }
LABEL_55:
            sub_186B220(v72);
          }
          v42 = *(_QWORD **)(v22 + 4336);
          v43 = v42;
          if ( v42 )
          {
            v44 = *((unsigned int *)v42 - 1);
            v62 = &v42[2 * v44];
            if ( (_DWORD)v44 )
            {
              do
              {
                while ( 1 )
                {
                  v45 = v43[1];
                  if ( !v45 )
                    break;
                  v68 = v43;
                  sub_186B220((void *)(v45 - 8));
                  v43 = v68 + 2;
                  if ( v62 == v68 + 2 )
                    goto LABEL_60;
                }
                v43 += 2;
              }
              while ( v43 != v62 );
LABEL_60:
              v42 = *(_QWORD **)(v22 + 4336);
            }
            sub_186B220(v42 - 1);
          }
          v46 = *(_QWORD **)(v22 + 4328);
          v47 = v46;
          if ( v46 )
          {
            v48 = *((unsigned int *)v46 - 1);
            v63 = &v46[4 * v48];
            if ( (_DWORD)v48 )
            {
              do
              {
                while ( 1 )
                {
                  v49 = v47[2];
                  if ( !v49 )
                    break;
                  v69 = v47;
                  sub_186B220((void *)(v49 - 8));
                  v47 = v69 + 4;
                  if ( v63 == v69 + 4 )
                    goto LABEL_66;
                }
                v47 += 4;
              }
              while ( v47 != v63 );
LABEL_66:
              v46 = *(_QWORD **)(v22 + 4328);
            }
            sub_186B220(v46 - 1);
          }
          v50 = *(_QWORD *)(v22 + 4312);
          if ( v50 )
            sub_186B220((void *)(v50 - 8));
          v51 = *(_QWORD *)(v22 + 4304);
          if ( v51 )
            sub_186B220((void *)(v51 - 8));
          v52 = *(_QWORD *)(v22 + 4296);
          if ( v52 )
            sub_186B220((void *)(v52 - 8));
          v53 = *(_QWORD *)(v22 + 4288);
          if ( v53 )
            sub_186B220((void *)(v53 - 8));
          v54 = *(_QWORD *)(v22 + 4280);
          if ( v54 )
            sub_186B220((void *)(v54 - 8));
          v55 = *(_QWORD *)(v22 + 4272);
          if ( v55 )
            sub_186B220((void *)(v55 - 8));
          sub_11C05E0(v22 + 8);
          sub_186B220((void *)v22);
        }
        *(_QWORD *)(v11 + 104) = v20;
      }
    }
    sub_11B7290(ptr, v74);
    goto LABEL_8;
  }
  *(_BYTE *)(v11 + 80) = 0;
  if ( v15 )
    goto LABEL_14;
LABEL_8:
  sub_18572D0(v77);
  sub_18572D0(v74);
  v16 = *(_QWORD *)(a2 + 280);
  if ( v11 != v16 )
  {
    if ( v16 )
    {
      ptra = *(void **)(a2 + 280);
      (**(void (***)(void))v16)();
      sub_186B220(ptra);
    }
    *(_QWORD *)(a2 + 280) = v11;
    v16 = v11;
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
}

