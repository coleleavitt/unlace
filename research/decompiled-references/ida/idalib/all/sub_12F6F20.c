unsigned __int64 __fastcall sub_12F6F20(__int64 a1, _BYTE *a2, size_t a3, __int64 a4, int a5, unsigned __int8 a6)
{
  __int64 *v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r14
  _BYTE *v13; // rsi
  size_t v14; // rdx
  int v15; // r14d
  _DWORD *v16; // rax
  __int64 v17; // r9
  size_t v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  void *v21; // rsi
  int v22; // edx
  int v23; // r9d
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rbx
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // r14
  unsigned int v34; // eax
  void *v35; // rax
  char v36; // al
  __int64 v37; // rbp
  _BYTE *v38; // rsi
  __int64 v39; // rdx
  size_t v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbx
  unsigned __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 *v46; // r14
  size_t v47; // r15
  __int64 v48; // r14
  int v49; // eax
  unsigned __int64 v50; // [rsp-10h] [rbp-308h]
  unsigned __int64 v51; // [rsp-8h] [rbp-300h]
  void *v52; // [rsp-8h] [rbp-300h]
  unsigned int v54; // [rsp+8h] [rbp-2F0h]
  char v55; // [rsp+8h] [rbp-2F0h]
  __int64 v56; // [rsp+10h] [rbp-2E8h]
  unsigned int v57; // [rsp+20h] [rbp-2D8h]
  __int64 *v58; // [rsp+20h] [rbp-2D8h]
  __int64 v59; // [rsp+28h] [rbp-2D0h]
  __int64 v60; // [rsp+30h] [rbp-2C8h]
  __int128 *v61; // [rsp+30h] [rbp-2C8h]
  void *v62; // [rsp+38h] [rbp-2C0h]
  int v63; // [rsp+38h] [rbp-2C0h]
  void *v64; // [rsp+38h] [rbp-2C0h]
  __int64 v65; // [rsp+40h] [rbp-2B8h]
  char v67; // [rsp+4Fh] [rbp-2A9h]
  __int64 v68; // [rsp+50h] [rbp-2A8h]
  __int64 v69; // [rsp+70h] [rbp-288h] BYREF
  void *v70; // [rsp+78h] [rbp-280h] BYREF
  void *v71; // [rsp+80h] [rbp-278h] BYREF
  size_t v72; // [rsp+88h] [rbp-270h]
  _BYTE v73[16]; // [rsp+90h] [rbp-268h] BYREF
  void *v74; // [rsp+A0h] [rbp-258h] BYREF
  signed __int64 v75; // [rsp+A8h] [rbp-250h]
  _BYTE v76[64]; // [rsp+B0h] [rbp-248h] BYREF
  __int128 v77; // [rsp+F0h] [rbp-208h] BYREF
  __int64 v78; // [rsp+100h] [rbp-1F8h]
  __int64 v79; // [rsp+108h] [rbp-1F0h]
  __int64 v80; // [rsp+110h] [rbp-1E8h]
  __int128 v81; // [rsp+118h] [rbp-1E0h]
  __int64 v82; // [rsp+128h] [rbp-1D0h]
  __int64 v83; // [rsp+130h] [rbp-1C8h]
  __int64 v84; // [rsp+138h] [rbp-1C0h]
  char *v85; // [rsp+140h] [rbp-1B8h]
  __int64 v86; // [rsp+148h] [rbp-1B0h]
  char v87; // [rsp+150h] [rbp-1A8h] BYREF
  char *v88; // [rsp+160h] [rbp-198h]
  __int64 v89; // [rsp+168h] [rbp-190h]
  char v90; // [rsp+170h] [rbp-188h] BYREF
  __int16 v91; // [rsp+180h] [rbp-178h]
  __int128 v92; // [rsp+188h] [rbp-170h]
  __int64 v93; // [rsp+198h] [rbp-160h]
  void *ptr; // [rsp+1A0h] [rbp-158h] BYREF
  __m128i si128; // [rsp+1A8h] [rbp-150h] BYREF
  _BYTE v96[320]; // [rsp+1B8h] [rbp-140h] BYREF

  v8 = *(__int64 **)(*(_QWORD *)(a1 + 96) + 104LL);
  v54 = a4;
  v57 = a6 ^ 1;
  v9 = sub_13C9950(v8, a2, a3, a4, 1, a6 ^ 1u);
  if ( v9 )
  {
    v56 = *(_QWORD *)(a1 + 96);
    v10 = sub_FEEE40(v9);
    if ( *(_QWORD *)(v10 + 1704) != *(_QWORD *)(v10 + 1712) )
    {
      v11 = *(_QWORD *)(v10 + 1704);
      v12 = *(_QWORD *)(v10 + 1712);
      do
      {
        v13 = *(_BYTE **)v11;
        v14 = *(_QWORD *)(v11 + 8);
        v11 += 32;
        sub_12F1580(v56, v13, v14, (__int64 *)v9, v54);
      }
      while ( v12 != v11 );
    }
  }
  v72 = 0;
  v73[0] = 0;
  v71 = v73;
  v15 = sub_12EC5E0(v9, a2, a3, (__int64)&v71, a1 + 256, v8);
  if ( !v15 )
  {
    sub_FC70B0((__int64)&ptr, *(_QWORD *)(a1 + 32), a5, 38);
    sub_AEC220((unsigned __int8 **)&ptr, a2, a3);
    *(_QWORD *)&v77 = __PAIR64__(a5, v54);
    BYTE8(v77) = 1;
    sub_AEC610((__int64 *)&ptr, (__int64 *)&v77);
    v27 = 0;
    sub_AEA040((__int64)&ptr);
    goto LABEL_25;
  }
  if ( !v72 )
  {
    if ( v9 && (*(_BYTE *)(v9 + 904) & 2) != 0 )
    {
      v27 = 4;
    }
    else
    {
      sub_FC70B0((__int64)&ptr, *(_QWORD *)(a1 + 32), a5, 32);
      sub_AEC220((unsigned __int8 **)&ptr, a2, a3);
      v27 = 0;
      sub_AEA040((__int64)&ptr);
    }
    goto LABEL_25;
  }
  v16 = *(_DWORD **)(a1 + 168);
  ptr = v16;
  if ( v16 )
  {
    ++v16[8];
    sub_12EB7C0((__int64 *)&ptr);
  }
  else
  {
    sub_12EB7C0((__int64 *)&ptr);
    if ( !*(_QWORD *)(a1 + 168) )
      sub_12F6500((_QWORD *)a1);
  }
  v78 = 0;
  v77 = 0;
  v91 = 0;
  v17 = *(_QWORD *)(a1 + 152);
  v81 = 0;
  v85 = &v87;
  v79 = 0;
  v80 = 0;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  v86 = 0;
  v87 = 0;
  v88 = &v90;
  v89 = 0;
  v90 = 0;
  v92 = 0;
  v93 = 0;
  if ( !v17 )
    goto LABEL_28;
  v65 = v17;
  sub_C05100((__int64)&ptr, "Loading ", (__int64)&v71);
  v62 = ptr;
  v60 = si128.m128i_i64[0];
  sub_C05100((__int64)&v74, (char *)"loading.", (__int64)&v71);
  sub_2253190(&v77, v74, v75, v62, v60, v65);
  if ( v74 != v76 )
    operator delete(v74);
  if ( ptr != &si128.m128i_u64[1] )
    operator delete(ptr);
  if ( *(_QWORD *)(a1 + 152) )
  {
    sub_224E010(&v77);
    v61 = &v77;
  }
  else
  {
LABEL_28:
    v61 = nullptr;
  }
  v18 = j__strlen("Module Load");
  v19 = sub_224A990("Module Load", v18, a2, a3);
  v20 = *(_QWORD *)(a1 + 168);
  v21 = v71;
  v59 = v19;
  v22 = v72;
  if ( v15 == 1 )
  {
    v23 = 19;
  }
  else
  {
    v23 = 8;
    if ( v15 == 2 )
    {
      ptr = *(void **)(a1 + 168);
      v23 = 0;
      if ( !v20 )
        goto LABEL_41;
      goto LABEL_19;
    }
  }
  ptr = *(void **)(a1 + 168);
  if ( v20 )
  {
LABEL_19:
    ++*(_DWORD *)(v20 + 32);
    if ( v15 != 2 )
      goto LABEL_20;
LABEL_41:
    v29 = (unsigned int)sub_1F15770(v20, (_DWORD)v21, v22, 5, v54, v23, 0);
    sub_12EB7C0((__int64 *)&ptr);
    v24 = v51;
    switch ( v29 )
    {
      case 0LL:
LABEL_37:
        if ( v9 )
        {
          v27 = v9 & 0xFFFFFFFFFFFFFFF9LL;
        }
        else
        {
          v41 = sub_13C9950(v8, a2, a3, v54, 1, v57);
          v42 = v41;
          if ( !v41 )
            goto LABEL_80;
          if ( !*(_QWORD *)(sub_FEEE40(v41) + 304) )
            goto LABEL_80;
          v21 = v71;
          v43 = sub_12ED8B0(*(_QWORD *)(a1 + 64), v71, v72, 0, 1u);
          if ( !v43 )
            goto LABEL_80;
          v25 = *(_QWORD *)(sub_FEEE40(v42) + 304);
          if ( !v25 )
            goto LABEL_80;
          do
          {
            v44 = *(_QWORD *)(v43 + 8);
            if ( !v44 )
              break;
            v43 = v44 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v44 & 4) == 0 )
              break;
          }
          while ( v43 );
          v24 = v44 & 0xFFFFFFFFFFFFFFF8LL;
          do
          {
            v45 = *(_QWORD *)(v25 + 8);
            if ( !v45 )
              break;
            v25 = v45 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v45 & 4) == 0 )
              break;
          }
          while ( v25 );
          v27 = v42 & 0xFFFFFFFFFFFFFFF9LL;
          if ( v24 != (v45 & 0xFFFFFFFFFFFFFFF8LL) )
          {
LABEL_80:
            sub_FC70B0((__int64)&ptr, *(_QWORD *)(a1 + 32), a5, 39);
            v21 = a2;
            sub_AEC220((unsigned __int8 **)&ptr, a2, a3);
            v27 = 0;
            sub_AEA040((__int64)&ptr);
          }
        }
        goto LABEL_32;
      case 1LL:
      case 4LL:
      case 6LL:
        goto LABEL_31;
      case 5LL:
        sub_FC70B0((__int64)&ptr, *(_QWORD *)(a1 + 32), 0, 844);
        v21 = v71;
        sub_AEC220((unsigned __int8 **)&ptr, v71, v72);
        sub_AEA040((__int64)&ptr);
LABEL_31:
        *(_BYTE *)(a1 + 9) = 1;
        v27 = 0;
        break;
      default:
        goto LABEL_63;
    }
    goto LABEL_32;
  }
LABEL_20:
  v63 = sub_1F15770(v20, (_DWORD)v21, v22, v15 == 3, v54, v23, 0);
  sub_12EB7C0((__int64 *)&ptr);
  v26 = v51;
  switch ( v63 )
  {
    case 0:
      goto LABEL_37;
    case 1:
    case 4:
    case 5:
    case 6:
      goto LABEL_31;
    default:
      if ( v15 != 1 )
        goto LABEL_63;
      v30 = *(_QWORD *)(a1 + 72);
      v31 = *(_QWORD *)(v30 + 656);
      v32 = 48LL * *(unsigned int *)(v30 + 664);
      v33 = v31 + v32;
      if ( v31 + v32 == v31 )
        goto LABEL_50;
      break;
  }
  do
  {
    if ( a3 == *(_QWORD *)(v31 + 8) && (!a3 || !memcmp(*(const void **)v31, a2, a3)) )
    {
      v37 = v31;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      ptr = v96;
      do
      {
        v38 = *(_BYTE **)v37;
        v39 = *(_QWORD *)(v37 + 8);
        v37 += 48;
        sub_A1FE50(&ptr, v38, &v38[v39]);
        v40 = j__strlen(" -> ");
        sub_A1FE50(&ptr, " -> ", &aSymboliclinkTo[v40 + 15]);
      }
      while ( v37 != v33 );
      sub_A1FE50(&ptr, a2, &a2[a3]);
      sub_FC70B0((__int64)&v74, *(_QWORD *)(a1 + 32), a5, 34);
      sub_AEC220((unsigned __int8 **)&v74, a2, a3);
      v21 = ptr;
      sub_AEC220((unsigned __int8 **)&v74, ptr, si128.m128i_i64[0]);
      v27 = 0;
      sub_AEA040((__int64)&v74);
      if ( ptr != v96 )
        free(ptr);
      goto LABEL_32;
    }
    v31 += 48;
  }
  while ( v31 != v33 );
LABEL_50:
  v34 = sub_2244B30(a2, a3);
  if ( (unsigned int)sub_2244E60(a1 + 232, a2, a3, v34) != -1 )
  {
    sub_FC70B0((__int64)&ptr, *(_QWORD *)(a1 + 32), a5, 37);
    sub_AEC220((unsigned __int8 **)&ptr, a2, a3);
    v21 = &v74;
    v74 = (void *)__PAIR64__(a5, v54);
    LOBYTE(v75) = 1;
    sub_AEC610((__int64 *)&ptr, (__int64 *)&v74);
    v27 = 0;
    sub_AEA040((__int64)&ptr);
    goto LABEL_32;
  }
  v46 = (__int64 *)v71;
  v47 = v72;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 160LL) + 2LL) & 0x20) == 0 )
  {
    v21 = (void *)v54;
    v36 = sub_12F4FA0(a1, v54, a5, v9, (__int64 *)v71, v72);
    goto LABEL_61;
  }
  v68 = *(_QWORD *)(a1 + 32);
  sub_FC70B0((__int64)&ptr, v68, a5, 808);
  v58 = v46;
  sub_AEC220((unsigned __int8 **)&ptr, v46, v47);
  sub_AEC220((unsigned __int8 **)&ptr, *(_BYTE **)v9, *(_QWORD *)(v9 + 8));
  sub_AEA040((__int64)&ptr);
  v48 = *(_QWORD *)(a1 + 80);
  (**(void (__fastcall ***)(__int64, __int64 *, size_t))v48)(v48, v58, v47);
  while ( 1 )
  {
    (*(void (__fastcall **)(__int64 *, __int64, __int64 *, size_t))(*(_QWORD *)v48 + 8LL))(&v69, v48, v58, v47);
    (**(void (__fastcall ***)(void **))v69)(&ptr);
    if ( (si128.m128i_i8[0] & 1) != 0 )
      break;
    v67 = (char)ptr;
    sub_12EBA60((__int64 *)&ptr);
LABEL_85:
    if ( v67 )
      goto LABEL_58;
    v49 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v69 + 8LL))(v69, 90);
    if ( v49 != 1 )
    {
      if ( v49 == 2 )
      {
        sub_FC70B0((__int64)&ptr, v68, a5, 122);
        sub_AEC220((unsigned __int8 **)&ptr, *(_BYTE **)v9, *(_QWORD *)(v9 + 8));
        sub_AEA040((__int64)&ptr);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
      }
      else
      {
        LOBYTE(v74) = 0;
        LOBYTE(ptr) = 0;
        v36 = sub_12EA3C0(a1, v54, a5, v9, (int)v58, v47, &v74, &ptr);
        v25 = v50;
        v21 = v52;
        if ( v36 )
          goto LABEL_59;
        if ( !(_BYTE)v74 )
        {
          v36 = (char)ptr;
          if ( !(_BYTE)ptr )
            goto LABEL_59;
        }
      }
    }
    if ( v69 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 32LL))(v69);
  }
  v35 = ptr;
  ptr = nullptr;
  v64 = v35;
  sub_12EBA60((__int64 *)&ptr);
  if ( !v64 )
    goto LABEL_85;
  sub_FC70B0((__int64)&ptr, v68, a5, 121);
  sub_AEC220((unsigned __int8 **)&ptr, *(_BYTE **)v9, *(_QWORD *)(v9 + 8));
  v70 = v64;
  sub_2221210(&v74, &v70);
  sub_AEC220((unsigned __int8 **)&ptr, v74, v75);
  if ( v74 != v76 )
    operator delete(v74);
  if ( v70 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v70 + 8LL))(v70);
  sub_AEA040((__int64)&ptr);
LABEL_58:
  v21 = (void *)v54;
  v36 = sub_12F4FA0(a1, v54, a5, v9, v58, v47);
LABEL_59:
  if ( v69 )
  {
    v55 = v36;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 32LL))(v69);
    v36 = v55;
  }
LABEL_61:
  v27 = v9 & 0xFFFFFFFFFFFFFFF9LL;
  if ( !v36 )
  {
    v21 = a2;
    sub_10E73C0(a1 + 232, a2, a3);
LABEL_63:
    v27 = 0;
  }
LABEL_32:
  if ( v59 )
    sub_224D6D0(v59);
  if ( v61 )
    sub_224E0F0(v61, v21, v24, v25, v26);
  sub_224F490(&v77);
LABEL_25:
  if ( v71 != v73 )
    operator delete(v71);
  return v27;
}
