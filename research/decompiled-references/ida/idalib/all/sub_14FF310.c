__int64 __fastcall sub_14FF310(__int64 a1, __int64 *a2, int a3, __int64 a4, __m128i a5, __m128 a6)
{
  __int64 *v6; // r14
  __int64 v8; // rbx
  bool v9; // zf
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  unsigned __int16 v16; // bp
  char v17; // al
  __int64 v18; // rax
  int v19; // r8d
  char v20; // dl
  __int64 v22; // rdi
  __int64 v23; // rax
  char v24; // dl
  __int64 v25; // rdx
  __int64 v26; // r13
  unsigned __int64 v27; // rbx
  __int64 v28; // r14
  __int64 *v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // r14
  __int16 v32; // ax
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rdi
  char v40; // al
  __int64 v41; // r14
  __int16 v42; // ax
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  __int64 *v45; // r9
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // [rsp+0h] [rbp-C48h]
  __int64 v50; // [rsp+0h] [rbp-C48h]
  __int64 v51; // [rsp+0h] [rbp-C48h]
  __int64 *v52; // [rsp+0h] [rbp-C48h]
  __int64 v53; // [rsp+0h] [rbp-C48h]
  char v54; // [rsp+Fh] [rbp-C39h]
  __int64 v56; // [rsp+18h] [rbp-C30h]
  __int64 v57; // [rsp+18h] [rbp-C30h]
  int v58; // [rsp+20h] [rbp-C28h]
  __int64 *v59; // [rsp+20h] [rbp-C28h]
  int v60; // [rsp+28h] [rbp-C20h]
  int v61; // [rsp+2Ch] [rbp-C1Ch]
  _BYTE *v62; // [rsp+30h] [rbp-C18h] BYREF
  char v63; // [rsp+38h] [rbp-C10h]
  __int64 v64; // [rsp+40h] [rbp-C08h]
  int v65; // [rsp+48h] [rbp-C00h]
  __int16 v66; // [rsp+4Ch] [rbp-BFCh]
  __int64 (__fastcall *v67)(__int64); // [rsp+50h] [rbp-BF8h]
  __int64 v68; // [rsp+58h] [rbp-BF0h]
  __int64 v69; // [rsp+60h] [rbp-BE8h]
  _DWORD v70[10]; // [rsp+70h] [rbp-BD8h] BYREF
  void *v71; // [rsp+98h] [rbp-BB0h]
  __int64 v72; // [rsp+A8h] [rbp-BA0h] BYREF
  __int64 v73; // [rsp+B8h] [rbp-B90h] BYREF
  void *ptr; // [rsp+C0h] [rbp-B88h]
  __int64 v75; // [rsp+D0h] [rbp-B78h] BYREF
  void *v76; // [rsp+F0h] [rbp-B58h]
  int v77; // [rsp+FCh] [rbp-B4Ch]
  __int64 v78; // [rsp+110h] [rbp-B38h]
  __int64 *v79; // [rsp+190h] [rbp-AB8h]
  _QWORD v80[2]; // [rsp+1A0h] [rbp-AA8h] BYREF
  __int128 v81; // [rsp+1B0h] [rbp-A98h]
  __int64 v82; // [rsp+1C0h] [rbp-A88h]
  __int64 v83; // [rsp+1C8h] [rbp-A80h]
  __int64 v84; // [rsp+1D0h] [rbp-A78h]
  int v85; // [rsp+1D8h] [rbp-A70h]
  __int64 v86; // [rsp+1E0h] [rbp-A68h]
  __int64 v87; // [rsp+1F0h] [rbp-A58h]
  __int64 v88; // [rsp+1F8h] [rbp-A50h]
  int v89; // [rsp+200h] [rbp-A48h]
  __int64 v90; // [rsp+208h] [rbp-A40h]
  __int64 v91; // [rsp+210h] [rbp-A38h]
  int v92; // [rsp+218h] [rbp-A30h]
  __int64 *v93; // [rsp+220h] [rbp-A28h]
  __int64 v94; // [rsp+228h] [rbp-A20h]
  __int64 v95; // [rsp+230h] [rbp-A18h] BYREF
  __int16 v96; // [rsp+470h] [rbp-7D8h]
  _QWORD v97[3]; // [rsp+478h] [rbp-7D0h] BYREF
  __int64 v98; // [rsp+490h] [rbp-7B8h] BYREF
  __int64 v99; // [rsp+4A0h] [rbp-7A8h] BYREF
  _QWORD *v100; // [rsp+4A8h] [rbp-7A0h] BYREF
  __int64 v101; // [rsp+4B0h] [rbp-798h]
  _QWORD v102[242]; // [rsp+4B8h] [rbp-790h] BYREF

  v6 = a2;
  v8 = a1;
  v9 = *(_WORD *)(a1 + 32) == 22;
  v62 = (_BYTE *)(a1 + 1952);
  v63 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v64 = a1;
  v65 = 1507350;
  v66 = 63;
  v67 = sub_146A990;
  v68 = 0;
  v69 = 0;
  if ( v9 )
  {
    if ( (unsigned int)*(unsigned __int16 *)(a1 + 88) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
      sub_1568800(&v62);
    else
      LODWORD(v69) = sub_146A990(a1);
  }
  v10 = sub_18957D0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL));
  v54 = *(_BYTE *)(a1 + 2065);
  *(_BYTE *)(a1 + 2065) = v10 != 0;
  if ( v10 )
    sub_1A865F0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), v10);
  sub_14F5250(a1, (__int64)a2, a3);
  v60 = *(_DWORD *)(a1 + 16);
  if ( sub_147F1B0(a1) )
    goto LABEL_13;
  if ( sub_10CCDE0(*(_WORD *)(a1 + 32)) )
  {
LABEL_50:
    v16 = *(_WORD *)(v8 + 32);
    v49 = 0;
    goto LABEL_24;
  }
  v15 = *(_QWORD *)(a1 + 2048);
  if ( v15 )
  {
    v16 = *(_WORD *)(a1 + 32);
    v17 = sub_141A630(v16);
    if ( v16 == 1 || v17 )
    {
      v49 = 0;
      goto LABEL_24;
    }
    goto LABEL_11;
  }
  a2 = (__int64 *)"instancetype";
  v38 = sub_6F3470(*(_QWORD *)(a1 + 8) + 552LL, "instancetype", 0xCu);
  v39 = *(unsigned __int16 *)(a1 + 32);
  *(_QWORD *)(v8 + 2048) = v38;
  v15 = v38;
  v40 = sub_141A630(v39);
  if ( (_WORD)v39 != 1 && !v40 )
  {
LABEL_11:
    v18 = *(_QWORD *)(v8 + 24);
    goto LABEL_12;
  }
  v18 = 0;
LABEL_12:
  if ( v18 != v15 )
    goto LABEL_50;
LABEL_13:
  sub_147A4A0((__int64)v70, v8 + 504);
  v19 = 10;
  v79 = v6;
  if ( a3 != 2 )
    v19 = 0;
  sub_148B330(v8, (__int64)v70, 0, 3u, v19, a5, a6);
  if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
  {
    qword_2CD8AE0[0] = 0;
    qword_2CD8AE0[1] = &qword_2CD8AE0[3];
    qword_2CD8AE0[2] = 0x200000000LL;
    __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
    __cxa_guard_release(&qword_2CD8AC8);
  }
  v81 = 0;
  v88 = v78;
  v93 = &v95;
  v94 = 0x400000000LL;
  v102[2] = qword_2CD8AE0;
  v80[0] = v70;
  v80[1] = 0;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  LOBYTE(v96) = (((v70[0] >> 12) & 0x7F) == 69) | v96 & 0xFE;
  v97[1] = &v98;
  v99 = v73;
  v97[2] = 0x200000000LL;
  v100 = v102;
  v101 = 0x200000000LL;
  v86 = 0;
  v87 = 0;
  v89 = a3;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v96 &= 0xFC01u;
  v97[0] = 0;
  memset(&v102[3], 0, 40);
  v102[232] = 0;
  sub_147E3E0(v8, (__int64)v80);
  v49 = 0;
  if ( (v96 & 1) == 0 && ((*(_DWORD *)v80[0] >> 12) & 0x7F) != 0x45 )
  {
    v22 = *(_QWORD *)(v8 + 96);
    if ( (*(_BYTE *)v6 & 0x40) != 0 )
    {
      v30 = (*((_WORD *)v6 + 1) >> 7) & 3;
      if ( (_DWORD)v94 )
      {
        v61 = *((_DWORD *)v6 + 1);
        v59 = v93;
        v51 = sub_1E61BD0(v22, v30);
        v41 = sub_15D92D0(v99, 80);
        v42 = sub_F963B0(v51, 0, 8);
        *(_QWORD *)(v41 + 56) &= 0x7F800000uLL;
        *(_QWORD *)(v41 + 8) = 0;
        *(_QWORD *)v41 = v51;
        *(_BYTE *)(v41 + 35) &= 0xFCu;
        *(_DWORD *)(v41 + 24) = v61;
        *(_DWORD *)(v41 + 28) = v61;
        *(_QWORD *)(v41 + 16) = 0;
        *(_WORD *)(v41 + 32) = v42;
        *(_BYTE *)(v41 + 34) = -8;
        *(_QWORD *)(v41 + 40) = 0;
        *(_QWORD *)(v41 + 48) = 0;
        v43 = sub_15D7D80(v41);
        v44 = HIDWORD(v101);
        v45 = v59;
        *(_QWORD *)(v41 + 72) = v43;
        v46 = (unsigned int)v101;
        v47 = (unsigned int)v101 + 1LL;
        if ( v47 > v44 )
        {
          sub_2237220(&v100, v102, v47, 8);
          v46 = (unsigned int)v101;
          v45 = v59;
        }
        v100[v46] = v41;
        LODWORD(v101) = v101 + 1;
        v48 = *((unsigned int *)v45 + 8);
        if ( v48 + 1 > (unsigned __int64)*((unsigned int *)v45 + 9) )
        {
          v52 = v45;
          sub_2237220(v45 + 3, v45 + 5, v48 + 1, 8);
          v45 = v52;
          v48 = *((unsigned int *)v52 + 8);
        }
        *(_QWORD *)(v45[3] + 8 * v48) = v41;
        ++*((_DWORD *)v45 + 8);
      }
      else
      {
        v58 = *((_DWORD *)v6 + 1);
        v57 = v80[0];
        v50 = sub_1E61BD0(v22, v30);
        v31 = sub_15D92D0(*(_QWORD *)(v57 + 72), 80);
        v32 = sub_F963B0(v50, 0, 8);
        *(_QWORD *)(v31 + 56) &= 0x7F800000uLL;
        *(_QWORD *)(v31 + 8) = 0;
        *(_QWORD *)v31 = v50;
        *(_BYTE *)(v31 + 35) &= 0xFCu;
        *(_DWORD *)(v31 + 24) = v58;
        *(_DWORD *)(v31 + 28) = v58;
        *(_QWORD *)(v31 + 16) = 0;
        *(_WORD *)(v31 + 32) = v32;
        *(_BYTE *)(v31 + 34) = -8;
        *(_QWORD *)(v31 + 40) = 0;
        *(_QWORD *)(v31 + 48) = 0;
        v33 = sub_15D7D80(v31);
        v34 = v57;
        *(_QWORD *)(v31 + 72) = v33;
        v35 = *(unsigned int *)(v57 + 88);
        if ( v35 + 1 > (unsigned __int64)*(unsigned int *)(v57 + 92) )
        {
          sub_2237220(v57 + 80, v57 + 96, v35 + 1, 8);
          v34 = v57;
          v35 = *(unsigned int *)(v57 + 88);
        }
        *(_QWORD *)(*(_QWORD *)(v34 + 80) + 8 * v35) = v31;
        v36 = *(unsigned int *)(v34 + 48);
        v37 = *(unsigned int *)(v34 + 52);
        ++*(_DWORD *)(v34 + 88);
        if ( v36 + 1 > v37 )
        {
          v53 = v34;
          sub_2237220(v34 + 40, v34 + 56, v36 + 1, 8);
          v34 = v53;
          v36 = *(unsigned int *)(v53 + 48);
        }
        *(_QWORD *)(*(_QWORD *)(v34 + 40) + 8 * v36) = v31;
        ++*(_DWORD *)(v34 + 48);
      }
      v22 = *(_QWORD *)(v8 + 96);
    }
    v23 = sub_1E85500(v22, v80);
    v9 = v24 == 0;
    v25 = 0;
    if ( v9 )
      v25 = v23;
    v49 = v25;
    if ( a3 == 3 )
    {
      sub_15D8C50(a4 + 40, &v99);
      v26 = v80[0];
      LODWORD(v101) = 0;
      sub_15D8C50(a4 + 40, v80[0] + 72LL);
      *(_DWORD *)(v26 + 88) = 0;
      sub_14F3760(a4, v80[0] + 32LL);
      sub_14F3760(a4, (__int64)v97);
      if ( (_DWORD)v94 )
      {
        v56 = v8;
        v27 = 0;
        v28 = 16 * (9LL * (unsigned int)(v94 - 1) + 9);
        do
        {
          v29 = &v93[v27 / 8];
          v27 += 144LL;
          sub_14F3760(a4, (__int64)(v29 + 2));
        }
        while ( v27 != v28 );
        v8 = v56;
      }
    }
  }
  sub_147A7A0((char *)v80);
  if ( v77 )
    free(v76);
  a2 = &v73;
  sub_15DCED0(v73, &v73);
  if ( ptr != &v75 )
    free(ptr);
  if ( v71 != &v72 )
    free(v71);
  v16 = *(_WORD *)(v8 + 32);
LABEL_24:
  if ( v16 != 23 && v60 == *(_DWORD *)(v8 + 16) )
  {
    sub_1564840(v80, v8, v8 + 16, 1657);
    sub_AEA040((__int64)v80);
    LOWORD(v80[0]) = 23;
    sub_15680D0(v8, v80, 1, 1);
  }
  else
  {
    sub_14808E0((__int64)&v62, a2, v11, v12, v13, v14);
  }
  if ( v10 )
    sub_1A86610(*(_QWORD *)(*(_QWORD *)(v8 + 96) + 736LL), v10);
  v20 = v63;
  *(_BYTE *)(v8 + 2065) = v54;
  *v62 = v20;
  return v49;
}
