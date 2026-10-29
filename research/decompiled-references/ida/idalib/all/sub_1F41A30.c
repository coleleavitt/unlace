__int64 __fastcall sub_1F41A30(__int64 this, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbp
  std::_V2 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r13
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // r14d
  unsigned int v19; // edx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r11
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // r8
  int v26; // r14d
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r15
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r14
  __int64 result; // rax
  void *v37; // r14
  __int64 v38; // r11
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // rcx
  __int64 *v42; // r10
  unsigned int v43; // r15d
  __int64 v44; // rax
  unsigned int v45; // eax
  unsigned int v46; // r8d
  unsigned int v47; // edx
  __int64 v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  const char *v52; // rax
  void **p_ptr; // rbx
  const __m128i *v54; // rdx
  void **v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rcx
  void *v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // [rsp+10h] [rbp-368h]
  __int64 v65; // [rsp+18h] [rbp-360h]
  __int64 v66; // [rsp+18h] [rbp-360h]
  __int64 v67; // [rsp+18h] [rbp-360h]
  unsigned __int64 v68; // [rsp+20h] [rbp-358h]
  const char *v69; // [rsp+28h] [rbp-350h] BYREF
  void **v70; // [rsp+30h] [rbp-348h]
  __int64 (__fastcall **v71)(); // [rsp+38h] [rbp-340h]
  __int64 v72; // [rsp+48h] [rbp-330h] BYREF
  __int64 v73; // [rsp+50h] [rbp-328h] BYREF
  char v74; // [rsp+58h] [rbp-320h]
  __int64 v75; // [rsp+60h] [rbp-318h] BYREF
  char v76; // [rsp+68h] [rbp-310h]
  _QWORD v77[4]; // [rsp+70h] [rbp-308h] BYREF
  void *v78[2]; // [rsp+90h] [rbp-2E8h] BYREF
  _DWORD v79[4]; // [rsp+A0h] [rbp-2D8h] BYREF
  __int16 v80; // [rsp+B0h] [rbp-2C8h]
  __m128 v81; // [rsp+C0h] [rbp-2B8h] BYREF
  _QWORD v82[2]; // [rsp+D0h] [rbp-2A8h] BYREF
  __int16 v83; // [rsp+E0h] [rbp-298h]
  void **v84; // [rsp+F0h] [rbp-288h] BYREF
  int v85; // [rsp+F8h] [rbp-280h]
  __int128 v86; // [rsp+100h] [rbp-278h]
  __int64 v87; // [rsp+110h] [rbp-268h]
  char v88; // [rsp+118h] [rbp-260h]
  int v89; // [rsp+11Ch] [rbp-25Ch]
  void **v90; // [rsp+120h] [rbp-258h]
  void *ptr; // [rsp+130h] [rbp-248h] BYREF
  __int64 v92; // [rsp+138h] [rbp-240h]
  _BYTE v93[568]; // [rsp+140h] [rbp-238h] BYREF

  v4 = a2;
  v5 = (std::_V2 *)this;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v11 = v6;
  if ( a2 != v6 )
  {
    v12 = sub_1F1F960(v6);
    if ( !v12 )
      v12 = v11;
    sub_1F414A0(this, a2, v12, v11, v13, v14);
  }
  if ( !a3 )
    return sub_1F35BB0(v11, a2, v7, v8, v9, v10);
  v15 = sub_1EAB3B0(this, a2);
  v64 = v15 + 2704;
  v16 = 8LL * *(_QWORD *)(v15 + 2720);
  v17 = *(unsigned int *)(v15 + 2736);
  *(_DWORD *)(v15 + 2736) = 0;
  v68 = v16 - v17;
  *(_QWORD *)(v15 + 2720) = (a3 >> 3) & 0xFFFFFFFFFFFFFFF8LL;
  v18 = a3 & 0x3F;
  if ( v18 )
  {
    sub_A0B360((__int64)&ptr, v15 + 2704, v18);
    if ( (v92 & 1) != 0 )
    {
      v37 = ptr;
      this = (__int64)&ptr;
      ptr = nullptr;
      sub_A0AE70((__int64 *)&ptr);
      if ( v37 )
      {
        v77[0] = v37;
        sub_2221210(v78, v77);
        v84 = v78;
        v54 = (const __m128i *)&v84;
        LOWORD(v87) = 260;
        v55 = (void **)&v81;
        p_ptr = &ptr;
        v81.m128_u64[0] = (unsigned __int64)"ASTReader::loadPendingDeclChain failed jumping: ";
        v83 = 259;
LABEL_43:
        sub_A41580((__m128i *)p_ptr, (const __m128i *)v55, v54, v49, v50, v51);
        sub_2221AD0(p_ptr, 1);
      }
    }
    else
    {
      this = (__int64)&ptr;
      sub_A0AE70((__int64 *)&ptr);
    }
    v18 = *(_DWORD *)(v15 + 2736);
    ptr = v93;
    v92 = 0x4000000000LL;
    v19 = *(_DWORD *)(v15 + 2740);
    if ( v19 <= v18 )
      goto LABEL_9;
    if ( v18 )
    {
      v38 = *(_QWORD *)(v15 + 2728);
      goto LABEL_28;
    }
  }
  else
  {
    ptr = v93;
    v92 = 0x4000000000LL;
    v19 = *(_DWORD *)(v15 + 2740);
    if ( !v19 )
    {
      v18 = 0;
LABEL_9:
      v20 = *(_QWORD *)(v15 + 2728);
      *(_DWORD *)(v15 + 2736) = v18 - v19;
      v21 = v20 & (0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v19));
      *(_QWORD *)(v15 + 2728) = v20 >> v19;
      LOBYTE(v85) = v85 & 0xFE;
      v84 = (void **)v21;
LABEL_10:
      v74 &= ~1u;
      LODWORD(v73) = v21;
      goto LABEL_11;
    }
  }
  v38 = 0;
LABEL_28:
  v39 = *(_QWORD *)(v15 + 2720);
  v40 = *(_QWORD *)(v15 + 2712);
  if ( v39 < v40 )
  {
    v41 = v39 + 8;
    v42 = (__int64 *)(v39 + *(_QWORD *)(v15 + 2704));
    if ( v40 >= v39 + 8 )
    {
      this = *v42;
      v45 = 64;
      *(_QWORD *)(v15 + 2728) = *v42;
    }
    else
    {
      *(_QWORD *)(v15 + 2728) = 0;
      v43 = v40 - v39;
      if ( !v43 )
      {
        *(_DWORD *)(v15 + 2736) = 0;
        v46 = v19 - v18;
        goto LABEL_50;
      }
      v44 = 0;
      this = 0;
      while ( 1 )
      {
        this |= (unsigned __int64)*((unsigned __int8 *)v42 + v44) << (8 * (unsigned __int8)v44);
        *(_QWORD *)(v15 + 2728) = this;
        if ( v43 - 1 == v44 )
          break;
        ++v44;
      }
      v45 = 8 * v43;
      v41 = v43 + v39;
    }
    *(_QWORD *)(v15 + 2720) = v41;
    v46 = v19 - v18;
    *(_DWORD *)(v15 + 2736) = v45;
    if ( v19 - v18 <= v45 )
    {
      v47 = v18 - v19;
      *(_DWORD *)(v15 + 2736) = v47 + v45;
      *(_QWORD *)(v15 + 2728) = (unsigned __int64)this >> v46;
      LOBYTE(v85) = v85 & 0xFE;
      v21 = (((0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v47 + 64)) & this) << v18) | v38;
      v84 = (void **)v21;
      goto LABEL_10;
    }
LABEL_50:
    LODWORD(v71) = v46;
    v67 = std::_V2::generic_category((std::_V2 *)this);
    v86 = 0;
    v84 = (void **)&off_2BEBE68;
    v70 = (void **)&off_2BEBE68;
    v81 = (__m128)(unsigned __int64)v82;
    LOBYTE(v82[0]) = 0;
    v85 = 0;
    v88 = 0;
    v89 = 1;
    v87 = 0;
    v90 = (void **)&v81;
    sub_227B8B0(&v84, 0, 0, 0);
    v79[0] = (_DWORD)v71;
    v69 = "Unexpected end of file reading %u of %u bits";
    *(__m128 *)v78 = _mm_loadh_ps((const double *)&v69);
    v79[1] = *(_DWORD *)(v15 + 2736);
    sub_227C560(&v84, v78);
    v84 = v70;
    sub_227B7A0(&v84);
    v84 = (void **)&v81;
    LOWORD(v87) = 260;
    v60 = operator new(0x40u);
    v61 = v67;
    v66 = v60;
    sub_2220590(v60, &v84, 5, v61);
    v58 = (void *)v81.m128_u64[0];
    v59 = v66;
    if ( (_QWORD *)v81.m128_u64[0] == v82 )
      goto LABEL_47;
    goto LABEL_46;
  }
  v65 = std::_V2::generic_category((std::_V2 *)this);
  v90 = v78;
  v70 = v78;
  v84 = (void **)&off_2BEBE68;
  v71 = &off_2BEBE68;
  v86 = 0;
  v78[0] = v79;
  v78[1] = nullptr;
  LOBYTE(v79[0]) = 0;
  v85 = 0;
  v88 = 0;
  v89 = 1;
  v87 = 0;
  sub_227B8B0(&v84, 0, 0, 0);
  v82[0] = v40;
  v69 = "Unexpected end of file reading %u of %u bytes";
  v81 = _mm_loadh_ps((const double *)&v69);
  v82[1] = *(_QWORD *)(v15 + 2720);
  sub_227C560(&v84, &v81);
  v84 = (void **)v71;
  sub_227B7A0(&v84);
  LOWORD(v87) = 260;
  v84 = v70;
  v56 = operator new(0x40u);
  v57 = v65;
  v66 = v56;
  sub_2220590(v56, &v84, 5, v57);
  v58 = v78[0];
  v59 = v66;
  if ( v78[0] != v79 )
  {
LABEL_46:
    operator delete(v58);
    v59 = v66;
  }
LABEL_47:
  LOBYTE(v85) = v85 | 1;
  v74 |= 1u;
  v84 = nullptr;
  v73 = v59;
LABEL_11:
  sub_A0AE70((__int64 *)&v84);
  if ( (v74 & 1) != 0 )
  {
    v62 = v73;
    v73 = 0;
    v75 = v62;
    sub_2221210(v77, &v75);
    v81.m128_u64[0] = (unsigned __int64)v77;
    v52 = "ASTReader::loadPendingDeclChain failed reading code: ";
    v83 = 260;
    goto LABEL_42;
  }
  sub_2027F10(&v75, v64, (unsigned int)v73, &ptr, 0);
  if ( (v76 & 1) != 0 )
  {
    if ( (v74 & 1) != 0 )
    {
      v63 = v73;
      v73 = 0;
      v72 = v63;
    }
    else
    {
      v72 = 0;
    }
    sub_2221210(v77, &v72);
    v81.m128_u64[0] = (unsigned __int64)v77;
    v52 = "ASTReader::loadPendingDeclChain failed reading rec code: ";
    v83 = 260;
    goto LABEL_42;
  }
  sub_A0AE90(&v75);
  v25 = (unsigned int)v92;
  if ( (_DWORD)v92 )
  {
    v26 = v92 - 1;
    do
    {
      LODWORD(v84) = v26--;
      v27 = sub_1EE13A0((__int64)v5, v15, (__int64 *)&ptr, &v84);
      v32 = sub_1EDB980(v5, v27, v28, v29, v30, v31);
      sub_1F414A0((__int64)v5, v32, v4, v11, v33, v34);
      v4 = v32;
    }
    while ( v26 != -1 );
    v35 = v32;
  }
  else
  {
    v35 = a2;
  }
  sub_1F35BB0(v11, v35, v22, v23, v25, v24);
  sub_A0AE90(&v73);
  if ( ptr != v93 )
    free(ptr);
  *(_DWORD *)(v15 + 2736) = 0;
  result = (v68 >> 3) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(v15 + 2720) = result;
  if ( (v68 & 0x3F) != 0 )
  {
    sub_A0B360((__int64)&v84, v64, v68 & 0x3F);
    if ( (v85 & 1) == 0 )
      return sub_A0AE70((__int64 *)&v84);
    v48 = (__int64)v84;
    v84 = nullptr;
    result = sub_A0AE70((__int64 *)&v84);
    if ( v48 )
    {
      v75 = v48;
      sub_2221210(v77, &v75);
      v81.m128_u64[0] = (unsigned __int64)v77;
      v52 = "Cursor should always be able to go back, failed: ";
      v83 = 260;
LABEL_42:
      v78[0] = (void *)v52;
      p_ptr = (void **)&v84;
      v54 = (const __m128i *)&v81;
      v55 = v78;
      v80 = 259;
      goto LABEL_43;
    }
  }
  return result;
}
