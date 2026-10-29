__int64 __fastcall sub_18439D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7,
        unsigned int a8)
{
  __int64 *v8; // r15
  unsigned int v9; // ebp
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // r12
  char v15; // cl
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  char v19; // r13
  _QWORD *v20; // rbx
  char v21; // r14
  __int64 v22; // r8
  __int64 v23; // rax
  _QWORD *v24; // r12
  unsigned __int64 v25; // rbp
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  __int64 v28; // rax
  _QWORD *v29; // rdi
  _QWORD *v30; // rax
  int v31; // eax
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 v35; // rax
  __int64 v36; // rbp
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // r15
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rsi
  _QWORD *v46; // rdi
  __int64 v47; // rax
  __m128i si128; // xmm0
  _QWORD *v49; // rsi
  __int64 v50; // r13
  __int16 v51; // ax
  __int64 v52; // rax
  __m128 *v53; // r8
  __m128 v54; // xmm0
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // r12
  __int64 v58; // rax
  __int64 v59; // rax
  int v60; // r12d
  unsigned __int8 v61; // al
  __int64 v62; // rsi
  unsigned int v63; // eax
  unsigned int v64; // eax
  __int64 v65; // r12
  _QWORD *v66; // rdi
  unsigned __int64 v67; // r12
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned int v72; // r12d
  int v73; // eax
  __int64 v74; // rsi
  unsigned __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rdx
  unsigned __int64 v79; // r14
  int v80; // r14d
  __int64 (__fastcall **v81)(); // [rsp+10h] [rbp-1D8h] BYREF
  void *v82; // [rsp+18h] [rbp-1D0h]
  unsigned __int64 v83; // [rsp+20h] [rbp-1C8h]
  int v84; // [rsp+2Ch] [rbp-1BCh]
  __m128 v85; // [rsp+30h] [rbp-1B8h] BYREF
  void **v86; // [rsp+40h] [rbp-1A8h]
  __int64 *v87; // [rsp+48h] [rbp-1A0h]
  void *v88; // [rsp+50h] [rbp-198h] BYREF
  unsigned int v89; // [rsp+58h] [rbp-190h]
  __m128i v90; // [rsp+60h] [rbp-188h] BYREF
  __m128 v91; // [rsp+70h] [rbp-178h] BYREF
  void *v92; // [rsp+80h] [rbp-168h] BYREF
  unsigned int v93; // [rsp+88h] [rbp-160h]
  __int64 (__fastcall **v94)(); // [rsp+90h] [rbp-158h] BYREF
  __int64 v95; // [rsp+98h] [rbp-150h]
  __int64 v96; // [rsp+A0h] [rbp-148h]
  _QWORD v97[4]; // [rsp+B0h] [rbp-138h] BYREF
  void *v98[2]; // [rsp+D0h] [rbp-118h] BYREF
  void *ptr[2]; // [rsp+E0h] [rbp-108h] BYREF
  __int128 v100; // [rsp+F0h] [rbp-F8h]
  void *v101; // [rsp+100h] [rbp-E8h] BYREF
  _QWORD *v102; // [rsp+108h] [rbp-E0h]
  __int64 v103; // [rsp+110h] [rbp-D8h]
  __int64 v104; // [rsp+118h] [rbp-D0h]
  __int64 v105; // [rsp+120h] [rbp-C8h]
  char v106; // [rsp+128h] [rbp-C0h]
  int v107; // [rsp+12Ch] [rbp-BCh]
  void **v108; // [rsp+130h] [rbp-B8h]
  void *v109; // [rsp+158h] [rbp-90h]

  v8 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = a2;
  v11 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v81 = (__int64 (__fastcall **)())a3;
  v12 = *(_QWORD *)(v11 + 8);
  v82 = a4;
  v83 = a5;
  v84 = a6;
  v13 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  LOBYTE(v86) = a7;
  if ( *(_BYTE *)(v13 + 16) != 48 )
  {
    v38 = sub_A72040(*(_QWORD **)(a1 + 248), a3);
    v39 = v38;
    if ( v38 && (unsigned int)*(unsigned __int8 *)(v38 + 16) - 2 <= 1 )
    {
      v40 = sub_A63CE0(*(_QWORD **)(a1 + 248));
      v86 = v98;
      v108 = v98;
      v98[0] = &ptr[1];
      v101 = &off_2BEBEE0;
      v98[1] = nullptr;
      ptr[0] = byte_8;
      LODWORD(v102) = 2;
      v106 = 0;
      v107 = 1;
      v105 = 0;
      v104 = 0;
      v103 = 0;
      sub_227B8B0(&v101, 0, 0, 0);
      v41 = sub_995540((__int64)&v101, "__i");
      sub_227B910(v41, a8);
      v81 = (__int64 (__fastcall **)())sub_6F3470(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL), *v108, (size_t)v108[1]);
      v101 = &unk_2C76288;
      sub_227B7A0(&v101);
      if ( v98[0] != &ptr[1] )
        free(v98[0]);
      v42 = sub_A81910(*(_QWORD **)(a1 + 248), v40, a2);
      v43 = sub_B731A0(*(_QWORD *)(a1 + 248), *(_QWORD *)(a1 + 544), a2, a2, (__int64)v81, v40, (__int64)v42, 0);
      v44 = *(_QWORD *)(a1 + 248);
      v81 = (__int64 (__fastcall **)())v43;
      v45 = *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL);
      v87 = (__int64 *)(v40 & 0xFFFFFFFFFFFFFFF0LL);
      v89 = sub_A97D20(v44, v45);
      if ( v89 > 0x40 )
        sub_2205470(&v88, 0, 0);
      else
        v88 = nullptr;
      v85.m128_u64[0] = (unsigned __int64)&v94;
      v46 = *(_QWORD **)(a1 + 248);
      v85 = _mm_loadh_ps((const double *)v85.m128_u64);
      v47 = sub_C0C5D0(v46, (__int64)&v88, v40, v9);
      sub_B73850((__int64)v81, v47);
      si128 = _mm_load_si128((const __m128i *)&v85);
      v49 = *(_QWORD **)(a1 + 248);
      v95 = (__int64)v81;
      v94 = off_2BC6B28;
      v96 = v40;
      v90 = si128;
      v50 = sub_EEE9A0(24, v49, 8u);
      v51 = *(_WORD *)v50 & 0xFE00;
      LOBYTE(v51) = -11;
      *(_WORD *)v50 = v51;
      if ( unk_2CD7484 )
        sub_EE9B50(245);
      v52 = (__int64)v81;
      *(_DWORD *)(v50 + 16) = v9;
      *(_DWORD *)(v50 + 20) = v9;
      *(_QWORD *)(v50 + 8) = v52;
      v53 = &v91;
      v81 = off_2BC6BF0;
      if ( a7 )
        v53 = (__m128 *)v97;
      v97[1] = v83;
      v81 = (__int64 (__fastcall **)())v97;
      v97[2] = &v90;
      ptr[0] = &v90;
      v54 = _mm_loadh_ps((const double *)&v81);
      v98[1] = v82;
      v97[0] = off_2BC6C40;
      v98[0] = off_2BC6C40;
      v55 = *(_QWORD *)(v39 + 32);
      v91 = v54;
      v56 = sub_18439D0(a1, v9, v55, (_DWORD)v86, (_DWORD)v53, (unsigned __int8)v84, a7, a8 + 1);
      if ( v56 != 1
        && (v81 = (__int64 (__fastcall **)())(v56 & 0xFFFFFFFFFFFFFFFELL), (v56 & 0xFFFFFFFFFFFFFFFELL) != 0) )
      {
        v61 = *(_BYTE *)(v39 + 19);
        v62 = *(_QWORD *)(v39 + 40);
        if ( (v61 & 2) != 0 )
        {
          LODWORD(v102) = *(_DWORD *)(v62 + 8);
          if ( (unsigned int)v102 > 0x40 )
            sub_2205510(&v101);
          else
            v101 = *(void **)v62;
        }
        else
        {
          LODWORD(v102) = 8 * ((v61 >> 2) & 0x1F);
          if ( (int)v102 > 64 )
            sub_2205470(&v101, v62, 0);
          else
            v101 = (void *)v62;
        }
        v63 = sub_A97D20(*(_QWORD *)(a1 + 248), *v87);
        sub_2206D90(&v92, &v101, v63);
        if ( (unsigned int)v102 > 0x40 && v101 )
          operator delete[](v101);
        v64 = *(_DWORD *)(a1 + 1952);
        v65 = *(unsigned int *)(a1 + 1956);
        if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v65, v64) )
        {
          v65 = 0;
          v64 = 0;
        }
        v66 = *(_QWORD **)(a1 + 248);
        v67 = (v65 << 32) | v64;
        v83 = v66[2330];
        v82 = (void *)sub_C0C5D0(v66, (__int64)&v92, v40, v9);
        v68 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v90.m128i_i64[1] + 16LL))(
                v90.m128i_i64[1],
                a1,
                v9);
        v69 = sub_19146F0(a1, v68);
        v82 = (void *)sub_C09F10(
                        *(_QWORD **)(a1 + 248),
                        v69 & 0xFFFFFFFFFFFFFFFELL,
                        (unsigned __int64)v82,
                        15,
                        v83,
                        0,
                        0,
                        v9,
                        v67);
        v70 = *(unsigned int *)(a1 + 1952);
        v71 = *(unsigned int *)(a1 + 1956);
        if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v71, v70) )
        {
          v71 = 0;
          v70 = 0;
        }
        v72 = 1;
        v83 = (v71 << 32) | v70;
        if ( v93 )
        {
          if ( v93 <= 0x40 )
          {
            v72 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v93) == (_QWORD)v92;
          }
          else
          {
            v84 = v93;
            v73 = sub_2206980(&v92);
            v72 = v84 == v73;
          }
        }
        v74 = sub_190BDA0(a1, v95, v96, 1, v9, 0);
        v75 = sub_C09D40(*(_QWORD **)(a1 + 248), v74, 2, v40, 1, 0, v9, v72, v83);
        v78 = 0;
        v79 = v75;
        if ( v75 )
          v78 = (unsigned int)sub_C00A40(v75, v74, 0, v76, v77);
        v80 = sub_19B4A30(a1, v79, v78, 1, 0, 0) & 0xFFFFFFFE;
        sub_1917B40((unsigned int)&v101, a1, 0, v9, (_DWORD)v82, 0, 0);
        v36 = sub_1C4D120(a1, v9, v9, v50, v80, v9, (__int64)v101, (__int64)v102, v103, (__int64)v81);
        if ( v93 > 0x40 && v92 )
          operator delete[](v92);
      }
      else
      {
        v36 = v56;
      }
      if ( v89 > 0x40 && v88 )
        operator delete[](v88);
    }
    else
    {
      v57 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(*(_QWORD *)v83 + 16LL))(
              v83,
              a1,
              (unsigned int)a2);
      v58 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v82 + 16LL))(v82, a1, (unsigned int)a2);
      v36 = 1;
      v59 = sub_1928110(a1, (unsigned int)a2, 21, v58, v57, 0);
      if ( v59 != 1 )
        return sub_1C36190(a1, v59, 1);
    }
    return v36;
  }
  v14 = sub_F60F10(v13, a2, a3, (__int64)a4, a5, a6);
  sub_1838550((__int64)&v101, a1, (*(_QWORD *)(a1 + 248) + 17832LL) | 6, a2, 0);
  if ( v14 )
    v14 += 8;
  sub_1A48440(a1, &v101, v14, 0);
  v15 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10;
  if ( v15 )
    goto LABEL_16;
  v16 = (__int64)v102;
  v17 = (unsigned int)v103;
  v18 = (unsigned int)v103;
  if ( !(v18 * 8) )
    goto LABEL_16;
  v85.m128_u64[0] = a1;
  v19 = v15;
  v20 = v102;
  v21 = (char)v86;
  LODWORD(v87) = v9;
  do
  {
    while ( 1 )
    {
      v24 = v20 + 1;
      v25 = *v20 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v25 + 28) & 0x7Fu) - 35 > 3 )
        break;
      if ( !sub_B98230((_QWORD *)(*v20 & 0xFFFFFFFFFFFFFFF8LL), v17) && (v21 || !sub_B98360((_QWORD *)v25, v17)) )
      {
        v16 = (__int64)v102;
        LODWORD(v17) = v103;
        v18 = (unsigned int)v103;
        break;
      }
      v16 = (__int64)v102;
      ++v20;
      v17 = (unsigned int)v103;
      v18 = (unsigned int)v103;
      if ( v24 == &v102[v18] )
        goto LABEL_15;
    }
    v22 = *(_QWORD *)(v16 + v18 * 8 - 8);
    v23 = (unsigned int)(v17 - 1);
    v17 = v23;
    LODWORD(v103) = v23;
    if ( v20 != (_QWORD *)(v16 + 8 * v23) )
    {
      *v20 = v22;
      v23 = (unsigned int)v103;
      v16 = (__int64)v102;
      v17 = (unsigned int)v103;
    }
    v18 = v23;
    v19 = 1;
  }
  while ( v20 != (_QWORD *)(v16 + v18 * 8) );
LABEL_15:
  a1 = v85.m128_u64[0];
  v9 = (unsigned int)v87;
  if ( v19 )
  {
    if ( (_DWORD)v17 )
    {
      v60 = 0;
      if ( (_DWORD)v101 == 5 )
        v60 = HIDWORD(v101);
      LODWORD(v101) = 2;
      sub_1A43500(&v101);
      if ( (_DWORD)v101 == 5 )
      {
        HIDWORD(v101) = v60;
        goto LABEL_16;
      }
    }
    else if ( (_DWORD)v101 != 1 )
    {
      LODWORD(v101) = 0;
    }
    if ( v109 )
    {
      sub_1A39780(v109);
      v109 = nullptr;
    }
  }
LABEL_16:
  if ( (_BYTE)v84 )
  {
    v26 = v102;
    v27 = &v102[(unsigned int)v103];
    if ( v27 != v102 )
    {
      do
      {
        if ( (*(_DWORD *)v26 & 3) == 1 )
          *v26 &= 0xFFFFFFFFFFFFFFF8LL;
        ++v26;
      }
      while ( v27 != v26 );
    }
  }
  v28 = *v8;
  v29 = *(_QWORD **)(a1 + 248);
  *(_OWORD *)v98 = 0;
  *(_OWORD *)ptr = 0;
  v100 = 0;
  v30 = sub_E91A00(v29, 0, *(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  sub_15AB890((__int64 *)v98, *(_QWORD **)(a1 + 248), (__int64)v30, v9 | ((unsigned __int64)v9 << 32));
  v31 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v82 + 16LL))(v82, a1, v9);
  v32 = sub_19CB370(a1, v31, (_DWORD)v81, v9, 0, (unsigned int)v98, 0, 0, (__int64)&v101, 0, 0, 1, 0);
  if ( v32 == 1
    || (v97[0] = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(*(_QWORD *)v83 + 16LL))(v83, a1, v9),
        v33 = sub_1C04E00(a1, 0, (unsigned int)v32 & 0xFFFFFFFE, v9, (unsigned int)v97, 1, v9, 0, 0, 0),
        v34 = v33,
        v33 == 1) )
  {
    v36 = 1;
  }
  else
  {
    if ( (*(_WORD *)(v33 & 0xFFFFFFFFFFFFFFFELL) & 0x1FF) != 0x5C
      || (v35 = *(_QWORD *)(sub_C946E0(v33 & 0xFFFFFFFFFFFFFFFELL) + 80) >> 16, !a8)
      || (v35 & 0x80u) == 0LL )
    {
      v36 = sub_1C36190(a1, v34, 1);
      if ( HIDWORD(ptr[1]) )
        goto LABEL_27;
      goto LABEL_30;
    }
    v36 = 0;
  }
  if ( HIDWORD(ptr[1]) )
LABEL_27:
    free(ptr[0]);
LABEL_30:
  sub_169D230((__int64)&v101);
  return v36;
}
