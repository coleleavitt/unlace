__int64 __fastcall sub_709840(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  char v11; // al
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  double v19; // xmm4_8
  double v20; // xmm5_8
  _QWORD *v21; // r12
  __int64 v22; // rax
  __int64 v23; // r13
  _QWORD *v24; // r12
  __int64 v25; // rax
  __int64 v26; // r13
  _QWORD *v27; // r12
  __int64 v28; // rax
  __int64 v29; // r13
  _QWORD *v30; // r12
  __int64 v31; // rax
  __int64 v32; // r13
  _QWORD *v33; // r12
  __int64 v34; // rax
  __int64 v35; // r13
  _QWORD *v36; // r12
  __int64 v37; // rax
  __int64 v38; // r13
  unsigned int *v39; // r12
  __int64 v40; // rax
  __int64 v41; // r13
  _QWORD *v42; // r12
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // r12
  _QWORD *v46; // rax
  _QWORD *v47; // rbx
  __int64 v48; // rax
  __int64 v49; // r12
  _QWORD *v50; // rax
  _QWORD *v51; // rbx
  __int64 v52; // rax
  __int64 v53; // r12
  _QWORD *v54; // rax
  _QWORD *v55; // rbx
  __int64 v56; // rax
  __int64 v57; // r12
  _QWORD *v58; // rax
  _QWORD *v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // r12
  _QWORD *v63; // rax
  _QWORD *v64; // rbx
  __int64 v65; // rax
  __int64 v66; // r12
  _QWORD *v67; // rax
  _QWORD *v68; // rbx
  __int64 v69; // rax
  __int64 v70; // r12
  _QWORD *v71; // rax
  _QWORD *v72; // rbx
  __int64 v73; // rax
  __int64 v74; // r12
  _QWORD *v75; // rax
  _QWORD *v76; // rbx
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // r12
  _QWORD *v80; // rax
  _QWORD *v81; // rbx
  __int64 v82; // rax
  __int64 v83; // r12
  _QWORD *v84; // rax
  _QWORD *v85; // rbx
  __int64 v86; // rax
  __int64 v87; // r12
  _QWORD *v88; // rax
  _QWORD *v89; // rbx

  if ( !a2 )
    return 1;
  v11 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (*(_BYTE *)(a2 + 29) & 2) != 0 )
  {
    if ( v11 == 67 && (*(_BYTE *)(a2 + 60) & 4) != 0 )
      return sub_719220(a1, *(_QWORD *)(a2 + 88));
    return 1;
  }
  if ( v11 == 71 )
  {
    if ( (~(unsigned __int8)*(_QWORD *)(a2 + 40) & 7) != 0 )
      return sub_7213F0(a1, a2);
    v13 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_DWORD *)v13 )
      return sub_7213F0(a1, a2);
    v14 = *(_QWORD *)(v13 + 16);
    if ( !v14 || (*(_BYTE *)(v14 + 28) & 0x7F) != 0x46 )
      return sub_7213F0(a1, a2);
    return 1;
  }
  switch ( v11 )
  {
    case 0:
      return sub_720C00();
    case 1:
      if ( !(unsigned __int8)sub_70DBE0(a1, *(_QWORD *)(a2 + 72), 0) || !(unsigned __int8)sub_70A970(a1, a2 + 40) )
        return 0;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return 1;
      v86 = sub_B8C3D0(a2);
      v87 = *(_QWORD *)v86 + 8LL * *(unsigned int *)(v86 + 8);
      v88 = nullptr;
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v88 = *(_QWORD **)sub_B8C3D0(a2);
      if ( (_QWORD *)v87 == v88 )
        return 1;
      v89 = v88;
      while ( (unsigned __int8)sub_71D160(a1, *v89) )
      {
        if ( (_QWORD *)v87 == ++v89 )
          return 1;
      }
      return 0;
    case 2:
      if ( !(unsigned __int8)sub_70A970(a1, a2 + 40) )
        return 0;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return 1;
      v82 = sub_B8C3D0(a2);
      v83 = *(_QWORD *)v82 + 8LL * *(unsigned int *)(v82 + 8);
      v84 = nullptr;
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v84 = *(_QWORD **)sub_B8C3D0(a2);
      if ( (_QWORD *)v83 == v84 )
        return 1;
      v85 = v84;
      while ( (unsigned __int8)sub_71D160(a1, *v85) )
      {
        if ( (_QWORD *)v83 == ++v85 )
          return 1;
      }
      return 0;
    case 3:
      v77 = sub_B70A80(a2);
      if ( !(unsigned __int8)sub_70DBE0(a1, v77, 0) )
        return 0;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return 1;
      v78 = sub_B8C3D0(a2);
      v79 = *(_QWORD *)v78 + 8LL * *(unsigned int *)(v78 + 8);
      v80 = nullptr;
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v80 = *(_QWORD **)sub_B8C3D0(a2);
      if ( (_QWORD *)v79 == v80 )
        return 1;
      v81 = v80;
      while ( (unsigned __int8)sub_71D160(a1, *v81) )
      {
        if ( (_QWORD *)v79 == ++v81 )
          return 1;
      }
      return 0;
    case 4:
      if ( !(unsigned __int8)sub_70A970(a1, a2 + 40) )
        return 0;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return 1;
      v73 = sub_B8C3D0(a2);
      v74 = *(_QWORD *)v73 + 8LL * *(unsigned int *)(v73 + 8);
      v75 = nullptr;
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v75 = *(_QWORD **)sub_B8C3D0(a2);
      if ( (_QWORD *)v74 == v75 )
        return 1;
      v76 = v75;
      while ( (unsigned __int8)sub_71D160(a1, *v76) )
      {
        if ( (_QWORD *)v74 == ++v76 )
          return 1;
      }
      return 0;
    case 5:
      if ( !(unsigned __int8)sub_70A970(a1, a2 + 40) )
        return 0;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return 1;
      v69 = sub_B8C3D0(a2);
      v70 = *(_QWORD *)v69 + 8LL * *(unsigned int *)(v69 + 8);
      v71 = nullptr;
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v71 = *(_QWORD **)sub_B8C3D0(a2);
      if ( (_QWORD *)v70 == v71 )
        return 1;
      v72 = v71;
      while ( (unsigned __int8)sub_71D160(a1, *v72) )
      {
        if ( (_QWORD *)v70 == ++v72 )
          return 1;
      }
      return 0;
    case 6:
      if ( !(unsigned __int8)sub_70A970(a1, a2 + 40) )
        return 0;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return 1;
      v65 = sub_B8C3D0(a2);
      v66 = *(_QWORD *)v65 + 8LL * *(unsigned int *)(v65 + 8);
      v67 = nullptr;
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v67 = *(_QWORD **)sub_B8C3D0(a2);
      if ( (_QWORD *)v66 == v67 )
        return 1;
      v68 = v67;
      while ( (unsigned __int8)sub_71D160(a1, *v68) )
      {
        if ( (_QWORD *)v66 == ++v68 )
          return 1;
      }
      return 0;
    case 7:
      v60 = sub_B70A90(a2);
      if ( !(unsigned __int8)sub_70DBE0(a1, v60, 0) )
        return 0;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return 1;
      v61 = sub_B8C3D0(a2);
      v62 = *(_QWORD *)v61 + 8LL * *(unsigned int *)(v61 + 8);
      v63 = nullptr;
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v63 = *(_QWORD **)sub_B8C3D0(a2);
      if ( (_QWORD *)v62 == v63 )
        return 1;
      v64 = v63;
      while ( (unsigned __int8)sub_71D160(a1, *v64) )
      {
        if ( (_QWORD *)v62 == ++v64 )
          return 1;
      }
      return 0;
    case 8:
      return sub_71FCB0();
    case 9:
      return sub_71FDC0();
    case 10:
      return sub_71D9B0();
    case 11:
      return sub_71DA50();
    case 12:
      return sub_71FEA0();
    case 13:
      return sub_71DAF0();
    case 14:
      return sub_71DBC0();
    case 15:
      return sub_71FF90();
    case 16:
      return sub_722AC0();
    case 17:
      return sub_722BA0();
    case 18:
      return sub_720D40();
    case 19:
      return sub_71DC60();
    case 20:
      return sub_71F030();
    case 21:
      if ( !(unsigned __int8)sub_70A970(a1, a2 + 48) )
        return 0;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return 1;
      v56 = sub_B8C3D0(a2);
      v57 = *(_QWORD *)v56 + 8LL * *(unsigned int *)(v56 + 8);
      v58 = nullptr;
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v58 = *(_QWORD **)sub_B8C3D0(a2);
      if ( (_QWORD *)v57 == v58 )
        return 1;
      v59 = v58;
      while ( (unsigned __int8)sub_71D160(a1, *v59) )
      {
        if ( (_QWORD *)v57 == ++v59 )
          return 1;
      }
      return 0;
    case 22:
      if ( !(unsigned __int8)sub_70A970(a1, a2 + 48) )
        return 0;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return 1;
      v52 = sub_B8C3D0(a2);
      v53 = *(_QWORD *)v52 + 8LL * *(unsigned int *)(v52 + 8);
      v54 = nullptr;
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v54 = *(_QWORD **)sub_B8C3D0(a2);
      if ( (_QWORD *)v53 == v54 )
        return 1;
      v55 = v54;
      while ( (unsigned __int8)sub_71D160(a1, *v55) )
      {
        if ( (_QWORD *)v53 == ++v55 )
          return 1;
      }
      return 0;
    case 23:
      return sub_71F250();
    case 24:
      if ( !(unsigned __int8)sub_70A970(a1, a2 + 48) )
        return 0;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return 1;
      v48 = sub_B8C3D0(a2);
      v49 = *(_QWORD *)v48 + 8LL * *(unsigned int *)(v48 + 8);
      v50 = nullptr;
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v50 = *(_QWORD **)sub_B8C3D0(a2);
      if ( (_QWORD *)v49 == v50 )
        return 1;
      v51 = v50;
      while ( (unsigned __int8)sub_71D160(a1, *v51) )
      {
        if ( (_QWORD *)v49 == ++v51 )
          return 1;
      }
      return 0;
    case 25:
      if ( !(unsigned __int8)sub_70A970(a1, a2 + 48) )
        return 0;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return 1;
      v44 = sub_B8C3D0(a2);
      v45 = *(_QWORD *)v44 + 8LL * *(unsigned int *)(v44 + 8);
      v46 = nullptr;
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v46 = *(_QWORD **)sub_B8C3D0(a2);
      if ( (_QWORD *)v45 == v46 )
        return 1;
      v47 = v46;
      while ( (unsigned __int8)sub_71D160(a1, *v47) )
      {
        if ( (_QWORD *)v45 == ++v47 )
          return 1;
      }
      return 0;
    case 26:
      if ( (unsigned __int8)sub_70DBE0(a1, *(_QWORD *)(a2 + 88), 0) )
      {
        v43 = *(_QWORD *)(a2 + 96);
        if ( !v43 || (unsigned __int8)sub_70DBE0(a1, v43, 0) )
          return sub_70EBE0(a1, *(_QWORD *)(a2 + 48));
      }
      return 0;
    case 27:
      v39 = *(unsigned int **)(a2 + 56);
      v40 = 2LL * *v39;
      v41 = (__int64)&v39[v40 + 4];
      v42 = v39 + 4;
      if ( !(v40 * 4) )
        return sub_70EBE0(a1, *(_QWORD *)(a2 + 48));
      do
      {
        if ( !(unsigned __int8)sub_722170(a1, *v42) )
          return 0;
        ++v42;
      }
      while ( (_QWORD *)v41 != v42 );
      return sub_70EBE0(a1, *(_QWORD *)(a2 + 48));
    case 28:
      return sub_71DDD0();
    case 29:
      return sub_71DED0();
    case 30:
      return sub_71DF70();
    case 31:
      return sub_71E010();
    case 32:
      return sub_71E0B0();
    case 33:
      return sub_720070();
    case 34:
      if ( !(unsigned __int8)sub_71CB20() )
        return 0;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return sub_6E7B40(*a1, nullptr, a2, a3, a4, a5, a6, v19, v20, a9, a10);
      v36 = nullptr;
      v37 = sub_B8C3D0(a2);
      v38 = *(_QWORD *)v37 + 8LL * *(unsigned int *)(v37 + 8);
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v36 = *(_QWORD **)sub_B8C3D0(a2);
      if ( (_QWORD *)v38 == v36 )
        return sub_6E7B40(*a1, nullptr, a2, a3, a4, a5, a6, v19, v20, a9, a10);
      while ( (unsigned __int8)sub_71D160(a1, *v36) )
      {
        if ( (_QWORD *)v38 == ++v36 )
          return sub_6E7B40(*a1, nullptr, a2, a3, a4, a5, a6, v19, v20, a9, a10);
      }
      return 0;
    case 35:
      if ( !(unsigned __int8)sub_71CB20() )
        return 0;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return sub_6E7B40(*a1, nullptr, a2, a3, a4, a5, a6, v19, v20, a9, a10);
      v33 = nullptr;
      v34 = sub_B8C3D0(a2);
      v35 = *(_QWORD *)v34 + 8LL * *(unsigned int *)(v34 + 8);
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v33 = *(_QWORD **)sub_B8C3D0(a2);
      if ( (_QWORD *)v35 == v33 )
        return sub_6E7B40(*a1, nullptr, a2, a3, a4, a5, a6, v19, v20, a9, a10);
      while ( (unsigned __int8)sub_71D160(a1, *v33) )
      {
        if ( (_QWORD *)v35 == ++v33 )
          return sub_6E7B40(*a1, nullptr, a2, a3, a4, a5, a6, v19, v20, a9, a10);
      }
      return 0;
    case 36:
      if ( !(unsigned __int8)sub_71CB20() )
        return 0;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return sub_6E7B40(*a1, nullptr, a2, a3, a4, a5, a6, v19, v20, a9, a10);
      v30 = nullptr;
      v31 = sub_B8C3D0(a2);
      v32 = *(_QWORD *)v31 + 8LL * *(unsigned int *)(v31 + 8);
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v30 = *(_QWORD **)sub_B8C3D0(a2);
      if ( (_QWORD *)v32 == v30 )
        return sub_6E7B40(*a1, nullptr, a2, a3, a4, a5, a6, v19, v20, a9, a10);
      while ( (unsigned __int8)sub_71D160(a1, *v30) )
      {
        if ( (_QWORD *)v32 == ++v30 )
          return sub_6E7B40(*a1, nullptr, a2, a3, a4, a5, a6, v19, v20, a9, a10);
      }
      return 0;
    case 37:
      if ( !(unsigned __int8)sub_71CB20() )
        return 0;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return sub_6E7B40(*a1, nullptr, a2, a3, a4, a5, a6, v19, v20, a9, a10);
      v27 = nullptr;
      v28 = sub_B8C3D0(a2);
      v29 = *(_QWORD *)v28 + 8LL * *(unsigned int *)(v28 + 8);
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v27 = *(_QWORD **)sub_B8C3D0(a2);
      if ( (_QWORD *)v29 == v27 )
        return sub_6E7B40(*a1, nullptr, a2, a3, a4, a5, a6, v19, v20, a9, a10);
      while ( (unsigned __int8)sub_71D160(a1, *v27) )
      {
        if ( (_QWORD *)v29 == ++v27 )
          return sub_6E7B40(*a1, nullptr, a2, a3, a4, a5, a6, v19, v20, a9, a10);
      }
      return 0;
    case 38:
      if ( !(unsigned __int8)sub_71CB20() )
        return 0;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return sub_6E7B40(*a1, nullptr, a2, a3, a4, a5, a6, v19, v20, a9, a10);
      v24 = nullptr;
      v25 = sub_B8C3D0(a2);
      v26 = *(_QWORD *)v25 + 8LL * *(unsigned int *)(v25 + 8);
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v24 = *(_QWORD **)sub_B8C3D0(a2);
      if ( (_QWORD *)v26 == v24 )
        return sub_6E7B40(*a1, nullptr, a2, a3, a4, a5, a6, v19, v20, a9, a10);
      while ( (unsigned __int8)sub_71D160(a1, *v24) )
      {
        if ( (_QWORD *)v26 == ++v24 )
          return sub_6E7B40(*a1, nullptr, a2, a3, a4, a5, a6, v19, v20, a9, a10);
      }
      return 0;
    case 39:
      if ( !(unsigned __int8)sub_71CB20() )
        return 0;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return sub_6E7B40(*a1, nullptr, a2, a3, a4, a5, a6, v19, v20, a9, a10);
      v21 = nullptr;
      v22 = sub_B8C3D0(a2);
      v23 = *(_QWORD *)v22 + 8LL * *(unsigned int *)(v22 + 8);
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v21 = *(_QWORD **)sub_B8C3D0(a2);
      if ( (_QWORD *)v23 == v21 )
        return sub_6E7B40(*a1, nullptr, a2, a3, a4, a5, a6, v19, v20, a9, a10);
      do
      {
        if ( !(unsigned __int8)sub_71D160(a1, *v21) )
          return 0;
        ++v21;
      }
      while ( (_QWORD *)v23 != v21 );
      return sub_6E7B40(*a1, nullptr, a2, a3, a4, a5, a6, v19, v20, a9, a10);
    case 40:
      return sub_720120();
    case 41:
      return sub_7201F0();
    case 42:
      return sub_720320();
    case 43:
      return sub_720620();
    case 44:
      return sub_720480();
    case 45:
      return sub_720550();
    case 46:
      return sub_720E90();
    case 47:
      return sub_71E150();
    case 48:
      return sub_71E2E0();
    case 49:
      return sub_720770();
    case 50:
      return sub_7208B0();
    case 51:
      return sub_720990();
    case 52:
      return sub_720F80();
    case 53:
      return sub_71E390();
    case 54:
      return sub_71E430();
    case 55:
      return sub_71E4D0();
    case 56:
      return sub_71E570();
    case 57:
      return sub_71E620();
    case 58:
      return sub_71E6C0();
    case 59:
      return sub_71E790();
    case 60:
      return sub_71E890();
    case 61:
      return sub_71EA10();
    case 62:
      return sub_71EBB0();
    case 63:
      return sub_71ED00();
    case 64:
      return sub_71EDB0();
    case 65:
      return sub_71EE90();
    case 66:
      return sub_71EF70();
    case 67:
      return sub_71F340();
    case 68:
      return sub_721020();
    case 69:
      return sub_7211F0();
    case 70:
      return sub_721330();
    case 72:
      return sub_721530();
    case 73:
      return sub_720A70();
    case 74:
      return sub_71F4E0();
    case 75:
      return sub_71F590();
    case 76:
      return sub_71F660();
    case 77:
      if ( !(unsigned __int8)sub_718340(a1, *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80)) )
        return 0;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return 1;
      v15 = sub_B8C3D0(a2);
      v16 = *(_QWORD *)v15 + 8LL * *(unsigned int *)(v15 + 8);
      v17 = nullptr;
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v17 = *(_QWORD **)sub_B8C3D0(a2);
      if ( (_QWORD *)v16 == v17 )
        return 1;
      v18 = v17;
      break;
    case 78:
      return sub_71F700();
    case 79:
      return sub_71F7A0();
    case 80:
      return sub_71F840();
    case 81:
      return sub_71F900();
    case 82:
      return sub_71D7B0();
    case 83:
      return sub_71FA00();
    case 84:
      return sub_71FAA0();
    case 85:
      return sub_721670();
    case 86:
      return sub_7217E0();
    case 87:
      return sub_720B40();
    case 88:
      return sub_71FB70();
    case 89:
      return sub_71FC10();
    default:
      return 1;
  }
  while ( (unsigned __int8)sub_71D160(a1, *v18) )
  {
    if ( (_QWORD *)v16 == ++v18 )
      return 1;
  }
  return 0;
}
