void __fastcall sub_2017B90(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8,
        __int64 a9,
        __int64 *a10,
        __int64 *a11,
        __int64 *a12,
        _QWORD *a13,
        _QWORD *a14)
{
  _QWORD *v16; // r8
  int v17; // esi
  _QWORD *v18; // r11
  __int64 v19; // r10
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int128 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r9
  __int64 v27; // rdi
  void *v28; // rcx
  void *v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rax
  __m128 v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  void *v40; // rdx
  void *v41; // rdx
  __int64 v42; // rdx
  void *v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  void *v46; // rdx
  void *v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rbp
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  void *v55; // rdi
  void *v56; // rdi
  _QWORD *v57; // rax
  __int64 v58; // rdx
  __int64 *v59; // rbp
  __int64 v60; // rdx
  __int64 v61; // rdx
  _QWORD *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rdx
  _QWORD *v65; // r14
  _QWORD *v66; // r12
  _QWORD *v67; // rbp
  _QWORD *v68; // rdi
  _QWORD *v69; // rdi
  _QWORD *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 *v73; // r13
  __int64 v74; // r14
  __int64 v75; // rbx
  void **v76; // r12
  void **v77; // rbp
  _QWORD *v78; // r12
  _QWORD *v79; // rbp
  _QWORD *v80; // rdi
  __int128 v81; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v82; // [rsp+10h] [rbp-D8h]
  __int64 v83; // [rsp+18h] [rbp-D0h]
  __int64 v84; // [rsp+20h] [rbp-C8h]
  __int64 v85; // [rsp+28h] [rbp-C0h]
  void *v86[2]; // [rsp+30h] [rbp-B8h]
  __int64 v87; // [rsp+40h] [rbp-A8h]
  void *v88; // [rsp+48h] [rbp-A0h]
  __int64 v89; // [rsp+50h] [rbp-98h]
  __int64 v90; // [rsp+58h] [rbp-90h]
  void *v91; // [rsp+60h] [rbp-88h]
  void *v92; // [rsp+68h] [rbp-80h]
  __int64 v93; // [rsp+70h] [rbp-78h]
  __int64 v94; // [rsp+78h] [rbp-70h] BYREF
  __int64 v95; // [rsp+80h] [rbp-68h]
  __int64 v96; // [rsp+88h] [rbp-60h]
  __int64 v97; // [rsp+90h] [rbp-58h] BYREF
  __int64 v98; // [rsp+98h] [rbp-50h]
  __int64 v99; // [rsp+A0h] [rbp-48h]
  _QWORD *v100; // [rsp+F0h] [rbp+8h]
  _QWORD *v101; // [rsp+F8h] [rbp+10h]
  __int64 v102; // [rsp+100h] [rbp+18h]

  *(_DWORD *)(a1 + 12) = a2;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v16 = a7;
  *(_QWORD *)(a1 + 48) = 0;
  v17 = *(_DWORD *)(a5 + 8);
  v18 = a8;
  v19 = a9;
  *(_QWORD *)a1 = &off_2BE4EE8;
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  if ( v17 )
  {
    v82 = a6;
    DWORD2(v81) = a4;
    LODWORD(v81) = a3;
    sub_20178E0((char ***)(a1 + 40), (char ***)a5);
    v19 = a9;
    a6 = v82;
    v18 = a8;
    v16 = a7;
    a4 = DWORD2(v81);
    a3 = v81;
  }
  *(_DWORD *)(a1 + 56) = a3;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 60) = a4;
  *(_QWORD *)a1 = &off_2BE4F08;
  *(_QWORD *)(a1 + 64) = a1 + 80;
  if ( *(_DWORD *)(a6 + 8) )
  {
    v102 = v19;
    v101 = v18;
    v100 = v16;
    sub_2017A30(a1 + 64, a6);
    v19 = v102;
    v18 = v101;
    v16 = v100;
  }
  v20 = *v16;
  v21 = v16[1];
  *(_QWORD *)(a1 + 80) = 0;
  v22 = v18[1];
  v23 = a10[1];
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)&v81 = v21;
  *(_QWORD *)&v24 = v20;
  *((_QWORD *)&v24 + 1) = *v18;
  v85 = v20;
  v25 = a11[1];
  *((_QWORD *)&v81 + 1) = v22;
  v26 = *a10;
  v84 = v25;
  v27 = *a11;
  v82 = v23;
  v28 = *(void **)(v19 + 8);
  *(_QWORD *)(a1 + 96) = 0;
  v29 = *(void **)v19;
  *(_QWORD *)(a1 + 104) = 0;
  v83 = v27;
  if ( v24 != v81 || v28 != v29 || v82 != v26 || v83 != v84 )
  {
    *(_QWORD *)&v24 = *((_QWORD *)&v81 + 1);
    v30 = v16[2];
    v88 = *((void **)&v24 + 1);
    v16[2] = 0;
    v89 = v24;
    v31 = v18[2];
    v32 = _mm_loadh_ps((const double *)&v81);
    v87 = v30;
    v90 = v31;
    v33 = *(_QWORD *)(v19 + 16);
    *(__m128 *)v86 = v32;
    v93 = v33;
    v34 = v82;
    *(_OWORD *)a11 = 0;
    v95 = v34;
    v35 = a10[2];
    *(_OWORD *)v16 = 0;
    v96 = v35;
    v36 = v83;
    *(_OWORD *)v18 = 0;
    v97 = v36;
    v37 = v84;
    v18[2] = 0;
    v91 = v29;
    v92 = v28;
    *(_OWORD *)v19 = 0;
    *(_QWORD *)(v19 + 16) = 0;
    v94 = v26;
    *(_OWORD *)a10 = 0;
    a10[2] = 0;
    v98 = v37;
    v38 = a11[2];
    a11[2] = 0;
    v99 = v38;
    v39 = (_QWORD *)operator new(0x78u);
    v40 = v86[0];
    v86[0] = nullptr;
    *v39 = v40;
    v41 = v86[1];
    v86[1] = nullptr;
    v39[1] = v41;
    v42 = v87;
    v87 = 0;
    v39[2] = v42;
    v43 = v88;
    v88 = nullptr;
    v39[3] = v43;
    v44 = v89;
    v89 = 0;
    v39[4] = v44;
    v45 = v90;
    v90 = 0;
    v39[5] = v45;
    v46 = v91;
    v91 = nullptr;
    v39[6] = v46;
    v47 = v92;
    v92 = nullptr;
    v39[7] = v47;
    v48 = v93;
    v93 = 0;
    v39[8] = v48;
    v49 = v94;
    v94 = 0;
    v39[9] = v49;
    v39[10] = v95;
    v95 = 0;
    v50 = *(_QWORD *)(a1 + 80);
    v51 = v96;
    *(_QWORD *)(a1 + 80) = v39;
    v96 = 0;
    v39[11] = v51;
    v52 = v97;
    v97 = 0;
    v39[12] = v52;
    v53 = v98;
    v98 = 0;
    v39[13] = v53;
    v54 = v99;
    v99 = 0;
    v39[14] = v54;
    if ( v50 )
    {
      sub_2017550(v50 + 96);
      sub_2017550(v50 + 72);
      v55 = *(void **)(v50 + 48);
      if ( v55 )
        operator delete(v55);
      v56 = *(void **)(v50 + 24);
      if ( v56 )
        operator delete(v56);
      if ( *(_QWORD *)v50 )
        operator delete(*(void **)v50);
      operator delete((void *)v50, 0x78u);
    }
    sub_2017550((__int64)&v97);
    sub_2017550((__int64)&v94);
    if ( v91 )
      operator delete(v91);
    if ( v88 )
      operator delete(v88);
    if ( v86[0] )
      operator delete(v86[0]);
  }
  if ( a12[1] != *a12 )
  {
    v57 = (_QWORD *)operator new(0x18u);
    v58 = *a12;
    v59 = *(__int64 **)(a1 + 88);
    *(_QWORD *)(a1 + 88) = v57;
    *v57 = v58;
    v60 = a12[1];
    *(_OWORD *)a12 = 0;
    v57[1] = v60;
    v61 = a12[2];
    a12[2] = 0;
    v57[2] = v61;
    if ( v59 )
    {
      sub_20175B0(v59);
      operator delete(v59, 0x18u);
    }
  }
  if ( a13[1] != *a13 )
  {
    v62 = (_QWORD *)operator new(0x18u);
    *v62 = *a13;
    v63 = a13[1];
    *(_OWORD *)a13 = 0;
    v62[1] = v63;
    v64 = a13[2];
    a13[2] = 0;
    v65 = *(_QWORD **)(a1 + 96);
    v62[2] = v64;
    *(_QWORD *)(a1 + 96) = v62;
    if ( v65 )
    {
      v66 = (_QWORD *)v65[1];
      v67 = (_QWORD *)*v65;
      if ( v66 != (_QWORD *)*v65 )
      {
        do
        {
          while ( 1 )
          {
            v68 = (_QWORD *)v67[9];
            if ( v68 != v67 + 11 )
              free(v68);
            v69 = (_QWORD *)v67[1];
            if ( v69 == v67 + 3 )
              break;
            free(v69);
            v67 += 17;
            if ( v66 == v67 )
              goto LABEL_30;
          }
          v67 += 17;
        }
        while ( v66 != v67 );
LABEL_30:
        v67 = (_QWORD *)*v65;
      }
      if ( v67 )
        operator delete(v67);
      operator delete(v65, 0x18u);
    }
  }
  if ( a14[1] != *a14 )
  {
    v70 = (_QWORD *)operator new(0x18u);
    *v70 = *a14;
    v71 = a14[1];
    *(_OWORD *)a14 = 0;
    v70[1] = v71;
    v72 = a14[2];
    a14[2] = 0;
    v73 = *(__int64 **)(a1 + 104);
    v70[2] = v72;
    *(_QWORD *)(a1 + 104) = v70;
    if ( v73 )
    {
      v74 = v73[1];
      v75 = *v73;
      if ( v74 != *v73 )
      {
        do
        {
          while ( 1 )
          {
            v76 = *(void ***)(v75 + 96);
            v77 = *(void ***)(v75 + 88);
            if ( v76 != v77 )
            {
              do
              {
                while ( *v77 )
                {
                  operator delete(*v77);
                  v77 += 3;
                  if ( v77 == v76 )
                    goto LABEL_40;
                }
                v77 += 3;
              }
              while ( v76 != v77 );
LABEL_40:
              v77 = *(void ***)(v75 + 88);
            }
            if ( v77 )
              operator delete(v77);
            v78 = *(_QWORD **)(v75 + 72);
            v79 = *(_QWORD **)(v75 + 64);
            if ( v78 != v79 )
            {
              do
              {
                while ( 1 )
                {
                  v80 = (_QWORD *)v79[1];
                  if ( v80 == v79 + 3 )
                    break;
                  free(v80);
                  v79 += 9;
                  if ( v79 == v78 )
                    goto LABEL_46;
                }
                v79 += 9;
              }
              while ( v78 != v79 );
LABEL_46:
              v79 = *(_QWORD **)(v75 + 64);
            }
            if ( v79 )
              operator delete(v79);
            if ( *(_QWORD *)v75 == v75 + 24 )
              break;
            free(*(void **)v75);
            v75 += 112;
            if ( v75 == v74 )
              goto LABEL_51;
          }
          v75 += 112;
        }
        while ( v74 != v75 );
LABEL_51:
        v75 = *v73;
      }
      if ( v75 )
        operator delete((void *)v75);
      operator delete(v73, 0x18u);
    }
  }
}
