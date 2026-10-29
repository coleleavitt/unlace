unsigned __int64 __fastcall sub_2020960(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r14
  unsigned int v6; // esi
  unsigned __int64 v7; // rax
  unsigned int v8; // esi
  unsigned __int64 v9; // rbp
  char v10; // cl
  unsigned int v11; // edx
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rbp
  unsigned int v16; // r13d
  unsigned __int64 v17; // rax
  void *v18; // rax
  __int64 v19; // r11
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rcx
  void ***v23; // r10
  unsigned int v24; // eax
  unsigned int v25; // r14d
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // r9
  unsigned __int64 *v31; // r10
  unsigned int v32; // r9d
  __int64 v33; // rdx
  unsigned __int64 v34; // rbp
  unsigned int v35; // edx
  unsigned int v36; // r9d
  __int64 v37; // rax
  void *v38; // r14
  void *v39; // rdi
  unsigned int v40; // r13d
  __int64 v41; // rbx
  void *v42; // rdi
  __m128i si128; // xmm0
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rbp
  __m128i *v47; // rax
  __m128i v48; // xmm0
  unsigned __int64 v49; // rax
  std::_V2 *v50; // [rsp+0h] [rbp-148h]
  std::_V2 *v51; // [rsp+0h] [rbp-148h]
  const char *v52; // [rsp+8h] [rbp-140h] BYREF
  __int64 (__fastcall **v53)(); // [rsp+10h] [rbp-138h]
  int v54; // [rsp+1Ch] [rbp-12Ch]
  unsigned __int64 v55; // [rsp+20h] [rbp-128h]
  unsigned __int64 v56; // [rsp+28h] [rbp-120h]
  __m128 *v57; // [rsp+30h] [rbp-118h]
  __int64 v58; // [rsp+38h] [rbp-110h]
  __m128 v59; // [rsp+40h] [rbp-108h] BYREF
  char *v60; // [rsp+50h] [rbp-F8h] BYREF
  int *v61; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v62; // [rsp+60h] [rbp-E8h]
  unsigned __int64 v63; // [rsp+68h] [rbp-E0h]
  unsigned __int64 *v64; // [rsp+70h] [rbp-D8h]
  unsigned __int64 v65; // [rsp+78h] [rbp-D0h]
  unsigned __int64 v66; // [rsp+80h] [rbp-C8h] BYREF
  char v67; // [rsp+88h] [rbp-C0h]
  void *v68[2]; // [rsp+90h] [rbp-B8h] BYREF
  unsigned int v69; // [rsp+A0h] [rbp-A8h] BYREF
  int v70; // [rsp+A4h] [rbp-A4h]
  __m128 v71; // [rsp+B0h] [rbp-98h] BYREF
  unsigned __int64 v72; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v73; // [rsp+C8h] [rbp-80h]
  void *v74; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v75; // [rsp+D8h] [rbp-70h]
  __int128 v76; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v77; // [rsp+F0h] [rbp-58h]
  char v78; // [rsp+F8h] [rbp-50h]
  int v79; // [rsp+FCh] [rbp-4Ch]
  void **v80; // [rsp+100h] [rbp-48h]

  v3 = a1;
  v6 = *(_DWORD *)(a2 + 32);
  if ( a3 <= v6 )
  {
    v7 = *(_QWORD *)(a2 + 24);
    v8 = v6 - a3;
    v67 &= ~1u;
    v9 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)a3);
    v10 = a3;
    *(_DWORD *)(a2 + 32) = v8;
    v11 = v8;
    v12 = v7 & v9;
    *(_QWORD *)(a2 + 24) = v7 >> v10;
    v66 = v12;
    goto LABEL_3;
  }
  v27 = 0;
  if ( v6 )
    v27 = *(_QWORD *)(a2 + 24);
  v28 = *(_QWORD *)(a2 + 16);
  v29 = *(_QWORD *)(a2 + 8);
  if ( v28 >= v29 )
  {
    v50 = (std::_V2 *)std::_V2::generic_category((std::_V2 *)a1);
    v76 = 0;
    v68[0] = &v69;
    v74 = &off_2BEBE68;
    v53 = &off_2BEBE68;
    v68[1] = nullptr;
    LOBYTE(v69) = 0;
    LODWORD(v75) = 0;
    v78 = 0;
    v79 = 1;
    v77 = 0;
    v80 = v68;
    sub_227B8B0(&v74, 0, 0, 0);
    v72 = v29;
    v52 = "Unexpected end of file reading %u of %u bytes";
    v73 = *(_QWORD *)(a2 + 16);
    v71 = _mm_loadh_ps((const double *)&v52);
    sub_227C560(&v74, &v71);
    v74 = v53;
    sub_227B7A0(&v74);
    v74 = v68;
    LOWORD(v77) = 260;
    v41 = operator new(0x40u);
    sub_2220590(v41, &v74, 5, v50);
    v42 = v68[0];
    if ( v68[0] == &v69 )
    {
LABEL_45:
      *(_QWORD *)v3 = v41;
      v67 |= 1u;
      *(_BYTE *)(v3 + 8) |= 1u;
      v66 = 0;
      goto LABEL_22;
    }
LABEL_44:
    operator delete(v42);
    goto LABEL_45;
  }
  v30 = v28 + 8;
  v31 = (unsigned __int64 *)(v28 + *(_QWORD *)a2);
  if ( v29 >= v28 + 8 )
  {
    v34 = *v31;
    v35 = 64;
    *(_QWORD *)(a2 + 24) = *v31;
  }
  else
  {
    *(_QWORD *)(a2 + 24) = 0;
    v32 = v29 - v28;
    if ( (_DWORD)v29 == (_DWORD)v28 )
    {
      *(_DWORD *)(a2 + 32) = 0;
      v40 = a3 - v6;
LABEL_56:
      v51 = (std::_V2 *)std::_V2::generic_category((std::_V2 *)a1);
      v76 = 0;
      v71 = (__m128)(unsigned __int64)&v72;
      v74 = &off_2BEBE68;
      v53 = &off_2BEBE68;
      LOBYTE(v72) = 0;
      LODWORD(v75) = 0;
      v78 = 0;
      v79 = 1;
      v77 = 0;
      v80 = (void **)&v71;
      sub_227B8B0(&v74, 0, 0, 0);
      v69 = v40;
      v52 = "Unexpected end of file reading %u of %u bits";
      v70 = *(_DWORD *)(a2 + 32);
      *(__m128 *)v68 = _mm_loadh_ps((const double *)&v52);
      sub_227C560(&v74, v68);
      v74 = v53;
      sub_227B7A0(&v74);
      v74 = &v71;
      LOWORD(v77) = 260;
      v41 = operator new(0x40u);
      sub_2220590(v41, &v74, 5, v51);
      v42 = (void *)v71.m128_u64[0];
      if ( (unsigned __int64 *)v71.m128_u64[0] == &v72 )
        goto LABEL_45;
      goto LABEL_44;
    }
    v33 = 0;
    v34 = 0;
    while ( 1 )
    {
      a1 = (unsigned __int64)*((unsigned __int8 *)v31 + v33) << (8 * (unsigned __int8)v33);
      v34 |= a1;
      *(_QWORD *)(a2 + 24) = v34;
      if ( v32 - 1 == v33 )
        break;
      ++v33;
    }
    v35 = 8 * v32;
    v30 = v28 + v32;
  }
  *(_QWORD *)(a2 + 16) = v30;
  v40 = a3 - v6;
  *(_DWORD *)(a2 + 32) = v35;
  if ( a3 - v6 > v35 )
    goto LABEL_56;
  v67 &= ~1u;
  a1 = v34 >> v40;
  v11 = v6 - a3 + v35;
  *(_QWORD *)(a2 + 24) = v34 >> v40;
  *(_DWORD *)(a2 + 32) = v11;
  v12 = v27 | ((v34 & (0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v6 - (unsigned __int8)a3 + 64))) << v6);
  v66 = v12;
LABEL_3:
  LODWORD(v52) = a3 - 1;
  v13 = 1LL << ((unsigned __int8)a3 - 1);
  LODWORD(v53) = v13;
  if ( ((unsigned int)v12 & (unsigned int)v13) != 0 )
  {
    v14 = v13 - 1;
    v15 = v14 & (unsigned int)v12;
    v54 = v14;
    if ( (unsigned int)v52 <= 0x3F )
    {
      v16 = a3 - 1;
      v63 = v3;
      v55 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)a3);
      v57 = &v71;
      v64 = &v72;
      while ( 1 )
      {
        if ( a3 <= v11 )
        {
          v17 = *(_QWORD *)(a2 + 24);
          LOBYTE(v75) = v75 & 0xFE;
          *(_DWORD *)(a2 + 32) = v11 - a3;
          v74 = (void *)(v55 & v17);
          *(_QWORD *)(a2 + 24) = v17 >> a3;
          goto LABEL_7;
        }
        v19 = 0;
        if ( v11 )
          v19 = *(_QWORD *)(a2 + 24);
        v20 = *(_QWORD *)(a2 + 16);
        v21 = *(_QWORD *)(a2 + 8);
        if ( v20 < v21 )
          break;
        v62 = *(_QWORD *)(a2 + 8);
        v58 = std::_V2::generic_category((std::_V2 *)a1);
        v76 = 0;
        v68[0] = &v69;
        v61 = (int *)&v69;
        v74 = &off_2BEBE68;
        v59.m128_u64[0] = (unsigned __int64)&off_2BEBE68;
        v80 = v68;
        v68[1] = nullptr;
        LOBYTE(v69) = 0;
        LODWORD(v75) = 0;
        v78 = 0;
        v79 = 1;
        v77 = 0;
        sub_227B8B0(&v74, 0, 0, 0);
        v72 = v62;
        v60 = "Unexpected end of file reading %u of %u bytes";
        v73 = *(_QWORD *)(a2 + 16);
        v71 = _mm_loadh_ps((const double *)&v60);
        sub_227C560(&v74, v57);
        v74 = (void *)v59.m128_u64[0];
        sub_227B7A0(&v74);
        LOWORD(v77) = 260;
        v74 = v68;
        v56 = v56 & 0xFFFFFFFF00000000LL | 5;
        v38 = (void *)operator new(0x40u);
        sub_2220590(v38, &v74, (unsigned int)v56, v58);
        v39 = v68[0];
        if ( v68[0] != v61 )
          goto LABEL_38;
LABEL_39:
        LOBYTE(v75) = v75 | 1;
        v74 = v38;
LABEL_7:
        sub_A0AE70((__int64 *)&v66);
        v67 = v75 & 1 | v67 & 0xFE;
        v18 = v74;
        if ( (v75 & 1) != 0 )
          v74 = nullptr;
        a1 = (unsigned __int64)&v74;
        v66 = (unsigned __int64)v18;
        sub_A0AE70((__int64 *)&v74);
        if ( (v67 & 1) != 0 )
        {
          v3 = v63;
          v45 = v66;
          v66 = 0;
          *(_BYTE *)(v63 + 8) |= 1u;
          *(_QWORD *)v3 = v45;
          goto LABEL_22;
        }
        v15 |= (unsigned __int64)((unsigned int)v66 & v54) << v16;
        if ( ((unsigned int)v66 & (unsigned int)v53) == 0 )
        {
          v3 = v63;
          *(_BYTE *)(v63 + 8) &= ~1u;
          *(_QWORD *)v3 = v15;
          goto LABEL_22;
        }
        v16 += (unsigned int)v52;
        if ( v16 > 0x3F )
        {
          v3 = v63;
          goto LABEL_52;
        }
        v11 = *(_DWORD *)(a2 + 32);
      }
      v22 = v20 + 8;
      v23 = (void ***)(v20 + *(_QWORD *)a2);
      if ( v21 < v20 + 8 )
      {
        *(_QWORD *)(a2 + 24) = 0;
        v36 = v21 - v20;
        if ( !v36 )
        {
          *(_DWORD *)(a2 + 32) = 0;
          v25 = a3 - v11;
          goto LABEL_47;
        }
        v37 = 0;
        a1 = 0;
        while ( 1 )
        {
          a1 |= (unsigned __int64)*((unsigned __int8 *)v23 + v37) << (8 * (unsigned __int8)v37);
          *(_QWORD *)(a2 + 24) = a1;
          if ( v36 - 1 == v37 )
            break;
          ++v37;
        }
        v24 = 8 * v36;
        v22 = v36 + v20;
      }
      else
      {
        a1 = (unsigned __int64)*v23;
        v24 = 64;
        *(_QWORD *)(a2 + 24) = *v23;
      }
      *(_QWORD *)(a2 + 16) = v22;
      v25 = a3 - v11;
      *(_DWORD *)(a2 + 32) = v24;
      if ( a3 - v11 <= v24 )
      {
        LOBYTE(v75) = v75 & 0xFE;
        *(_QWORD *)(a2 + 24) = a1 >> v25;
        *(_DWORD *)(a2 + 32) = v11 - a3 + v24;
        v74 = (void *)((((0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v11 - (unsigned __int8)a3 + 64)) & a1) << v11) | v19);
        goto LABEL_7;
      }
LABEL_47:
      v59 = _mm_loadh_ps((const double *)off_2BE5CA8);
      v58 = std::_V2::generic_category((std::_V2 *)a1);
      v71 = (__m128)(unsigned __int64)v64;
      v80 = (void **)v57;
      v76 = 0;
      v74 = &off_2BEBE68;
      v60 = (char *)&off_2BEBE68;
      LOBYTE(v72) = 0;
      LODWORD(v75) = 0;
      v78 = 0;
      v79 = 1;
      v77 = 0;
      sub_227B8B0(&v74, 0, 0, 0);
      si128 = _mm_load_si128((const __m128i *)&v59);
      v44 = *(_DWORD *)(a2 + 32);
      v69 = v25;
      *(__m128i *)v68 = si128;
      v70 = v44;
      sub_227C560(&v74, v68);
      v74 = v60;
      sub_227B7A0(&v74);
      LOWORD(v77) = 260;
      v74 = v57;
      v65 = v65 & 0xFFFFFFFF00000000LL | 5;
      v38 = (void *)operator new(0x40u);
      sub_2220590(v38, &v74, (unsigned int)v65, v58);
      v39 = (void *)v71.m128_u64[0];
      if ( (unsigned __int64 *)v71.m128_u64[0] == v64 )
        goto LABEL_39;
LABEL_38:
      operator delete(v39);
      goto LABEL_39;
    }
LABEL_52:
    v46 = std::_V2::generic_category((std::_V2 *)a1);
    v74 = &v76;
    v47 = (__m128i *)operator new(0x11u);
    v48 = _mm_load_si128((const __m128i *)&xmmword_23AA3E0);
    v47[1].m128i_i8[0] = 0;
    v74 = v47;
    *v47 = v48;
    *(_QWORD *)&v76 = 16;
    v75 = 16;
    sub_22205D0(&v71, &v74, 84, v46);
    if ( v74 != &v76 )
      operator delete(v74);
    v49 = v71.m128_u64[0];
    *(_BYTE *)(v3 + 8) |= 1u;
    *(_QWORD *)v3 = v49;
  }
  else
  {
    *(_BYTE *)(v3 + 8) &= ~1u;
    *(_QWORD *)v3 = (unsigned int)v12;
  }
LABEL_22:
  sub_A0AE70((__int64 *)&v66);
  return v3;
}
