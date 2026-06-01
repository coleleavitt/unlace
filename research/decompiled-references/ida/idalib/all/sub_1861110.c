unsigned __int64 __fastcall sub_1861110(
        __int64 a1,
        __int64 *a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 *a6,
        unsigned int a7,
        __int64 a8)
{
  __int64 v10; // r12
  __int64 v11; // r13
  unsigned __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r10
  __int64 i; // rdi
  char v18; // al
  __int64 j; // rdx
  unsigned __int64 v20; // r13
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v31; // rax
  char v32; // cl
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 *v37; // rbx
  __int64 k; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  char v50; // al
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r14
  __int64 v56; // rax
  _QWORD *v57; // rax
  unsigned __int64 v60; // [rsp+8h] [rbp-260h]
  unsigned __int64 v61; // [rsp+8h] [rbp-260h]
  unsigned __int64 v62; // [rsp+10h] [rbp-258h]
  __int64 v63; // [rsp+10h] [rbp-258h]
  unsigned __int64 v64; // [rsp+10h] [rbp-258h]
  __int64 v65; // [rsp+18h] [rbp-250h]
  unsigned __int64 v66; // [rsp+20h] [rbp-248h]
  __int64 v67[2]; // [rsp+28h] [rbp-240h] BYREF
  __int64 v68; // [rsp+38h] [rbp-230h] BYREF
  __int64 v69[2]; // [rsp+40h] [rbp-228h] BYREF
  __int64 v70; // [rsp+50h] [rbp-218h]
  unsigned __int8 *v71; // [rsp+60h] [rbp-208h] BYREF
  char v72; // [rsp+B8h] [rbp-1B0h]
  unsigned int v73; // [rsp+C0h] [rbp-1A8h]
  char v74; // [rsp+C4h] [rbp-1A4h]
  __int64 v75; // [rsp+D0h] [rbp-198h] BYREF
  __int64 *v76; // [rsp+D8h] [rbp-190h]
  __int64 v77; // [rsp+E0h] [rbp-188h]
  _OWORD v78[5]; // [rsp+E8h] [rbp-180h] BYREF
  __int64 v79; // [rsp+138h] [rbp-130h]
  __int64 v80; // [rsp+140h] [rbp-128h]
  __int64 v81; // [rsp+148h] [rbp-120h]
  unsigned int v82; // [rsp+150h] [rbp-118h]
  __int64 v83; // [rsp+158h] [rbp-110h] BYREF
  __m128i si128; // [rsp+160h] [rbp-108h]
  __int64 v85; // [rsp+170h] [rbp-F8h]
  __int64 v86; // [rsp+180h] [rbp-E8h] BYREF
  __int64 *v87; // [rsp+188h] [rbp-E0h]
  __int64 v88; // [rsp+190h] [rbp-D8h]
  __int64 v89; // [rsp+198h] [rbp-D0h] BYREF
  void *v90[2]; // [rsp+1D8h] [rbp-90h]
  __int64 v91; // [rsp+1E8h] [rbp-80h]
  __int64 v92; // [rsp+1F0h] [rbp-78h]
  __int64 v93; // [rsp+1F8h] [rbp-70h]
  unsigned int v94; // [rsp+200h] [rbp-68h]
  __int64 v95; // [rsp+208h] [rbp-60h] BYREF
  __int128 v96; // [rsp+210h] [rbp-58h]
  __int64 v97; // [rsp+220h] [rbp-48h]

  v10 = a8;
  v80 = a1;
  v76 = (__int64 *)v78;
  v77 = 0x800000000LL;
  v67[0] = a5;
  v78[4] = 0;
  v82 = a7;
  v75 = 0;
  v79 = 0;
  v81 = a8;
  sub_B85890(&v83, a8);
  v85 = 0x101010000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA840);
  sub_1A395A0(&v75);
  sub_1A5D3E0(a1, (unsigned int)&v75, (_DWORD)a2, (_DWORD)a6, 0, 0, 0);
  if ( (_DWORD)v75 == 5 )
  {
    v20 = 0;
    goto LABEL_19;
  }
  if ( (_DWORD)v77 || (unsigned __int8)sub_18604E0(a1, (__int64)&v75, (int)a2, a6, v10) )
  {
    v11 = *v76;
    v93 = v67[0];
    v87 = &v89;
    v88 = 0x800000000LL;
    v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
    *(_OWORD *)v90 = 0;
    v94 = a4;
    v86 = 0;
    v91 = 0;
    v92 = a1;
    sub_B85890(&v95, v67[0]);
    v97 = 65537;
    v96 = 0;
    sub_1A395A0(&v86);
    sub_1A49A10(a1, &v86, a2, 0, 0);
    if ( (_DWORD)v86 == 2 )
    {
      v31 = sub_16C47B0(*v87 & 0xFFFFFFFFFFFFFFF8LL);
      v32 = *(_BYTE *)(v31 + 28) & 0x7F;
      if ( ((v32 + 61) & 0x7Fu) <= 1 || v32 == 47 )
      {
        sub_1CC2540(a1, a4, v31, 0);
        LODWORD(v86) = 0;
        LODWORD(v88) = 0;
        if ( v90[0] )
          sub_1A39780(v90[0]);
        BYTE6(v97) = 0;
        *(_OWORD *)v90 = 0;
      }
    }
    sub_17A32D0(a1, (int *)&v86, *(_QWORD *)(a1 + 544), a2, 0, 0);
    if ( (_DWORD)v86 != 2 )
      goto LABEL_16;
    v16 = *v87 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v16 + 28) & 0x7F) != 0x4D )
    {
      if ( (*(_BYTE *)(v16 + 8) & 6) != 0 )
      {
        v64 = *v87 & 0xFFFFFFFFFFFFFFF8LL;
        v50 = sub_1A427C0(a1, v64, 0);
        v16 = v64;
        if ( !v50 )
          goto LABEL_16;
      }
      v61 = v16;
      v49 = sub_16C47B0(v16);
      sub_168B9F0((__int64)v69, (__int64 *)(a1 + 8), a4, 2 * ((*(_BYTE *)(v49 + 28) & 0x7F) != 24) + 4902, 0);
      sub_169D880((__int64)v69, v67);
      sub_15F7200(v69);
      sub_168B9F0((__int64)v69, (__int64 *)(a1 + 8), *(_DWORD *)(v61 + 24), 0x71u, 0);
      goto LABEL_32;
    }
    for ( i = *(_QWORD *)(v16 + 88); (*(_BYTE *)(i + 28) & 0x7F) == 0x4D; i = *(_QWORD *)(i + 88) )
      ;
    if ( v12 )
    {
      v18 = *(_BYTE *)(v12 + 28) & 0x7F;
      if ( v18 == 77 )
      {
        for ( j = *(_QWORD *)(v12 + 88); (*(_BYTE *)(j + 28) & 0x7F) == 0x4D; j = *(_QWORD *)(j + 88) )
          ;
LABEL_26:
        v66 = *v87 & 0xFFFFFFFFFFFFFFF8LL;
        v65 = j;
        v63 = sub_B91570(i + 48, (__int64)&v86, j, v13, v14, v15);
        v36 = sub_B91570(v65 + 48, (__int64)&v86, v65, v33, v34, v35);
        v16 = v66;
        if ( v63 == v36 )
        {
          sub_18F5260(a1, v12, (unsigned int)&a7, 1, 0, 0, 0, 0, 0);
          v43 = sub_15AB9E0((__int64)a6, *(_QWORD **)(a1 + 248), v39, v40, v41, v42);
          v20 = sub_B99B00(*(_QWORD *)(a1 + 248), *(_QWORD *)(a1 + 544), a3, a4, v67[0], a7, v43, v44, v12);
          sub_1846EE0((_QWORD *)(v20 + 48), v66, v45, v46, v47, v48);
          goto LABEL_17;
        }
        goto LABEL_27;
      }
      j = v12;
      if ( v18 == 24 )
        goto LABEL_26;
    }
LABEL_27:
    if ( (*(_BYTE *)(v16 + 8) & 6) != 0 )
    {
      v62 = v16;
      v21 = sub_1A427C0(a1, v16, 0);
      v16 = v62;
      if ( !v21 )
      {
LABEL_16:
        sub_18F5260(a1, v12, (unsigned int)&a7, 1, 0, 0, 0, 0, 0);
        v26 = sub_15AB9E0((__int64)a6, *(_QWORD **)(a1 + 248), v22, v23, v24, v25);
        v20 = sub_B99B00(*(_QWORD *)(a1 + 248), *(_QWORD *)(a1 + 544), a3, a4, v67[0], a7, v26, v27, v12);
LABEL_17:
        sub_17B7670(a1, v20, (__int64)a2, 1, v28, v29);
LABEL_18:
        sub_169D230((__int64)&v86);
        goto LABEL_19;
      }
    }
    v37 = (__int64 *)(a1 + 8);
    v60 = v16;
    sub_168B9F0((__int64)v69, v37, a4, 0x1329u, 0);
    sub_169D880((__int64)v69, v67);
    sub_15F7200(v69);
    sub_168B9F0((__int64)v69, v37, *(_DWORD *)(v60 + 24), 0x1892u, 0);
    for ( k = *(_QWORD *)(v60 + 88); (*(_BYTE *)(k + 28) & 0x7F) == 0x4D; k = *(_QWORD *)(k + 88) )
      ;
    if ( v72 )
    {
      sub_AE9DF0(&v71, k, 0xAu);
    }
    else if ( v74 )
    {
      v55 = sub_168B9E0(v69);
      v56 = v70;
      if ( v70 )
        v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 32LL))(v70);
      v68 = v56;
      v57 = sub_1587BC0(v55, &v68, v51, v52, v53, v54);
      sub_AE9DF0((unsigned __int8 **)(*v57 + 32LL * v73 + 8), k, 0xAu);
    }
LABEL_32:
    v20 = 0;
    sub_15F7200(v69);
    goto LABEL_18;
  }
  v20 = 0;
  sub_168B9F0((__int64)&v86, (__int64 *)(a1 + 8), a7, 0x12u, 0);
  v69[0] = *a6;
  sub_1587DB0((__int64)&v86, v69);
  sub_15F7200(&v86);
LABEL_19:
  sub_169D230((__int64)&v75);
  return v20;
}
