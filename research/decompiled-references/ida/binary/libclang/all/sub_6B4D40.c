__int64 __fastcall sub_6B4D40(__int64 a1)
{
  __int64 v2; // rbx
  __int64 i; // r12
  int v4; // esi
  __int64 v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  unsigned int v9; // ecx
  _QWORD *v10; // rdx
  int v11; // esi
  __int64 v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  unsigned int v16; // ecx
  _QWORD *v17; // rdx
  int v18; // ecx
  __int64 v19; // rdx
  _QWORD *v20; // rax
  void **v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  unsigned int v24; // esi
  _QWORD *v25; // rdx
  int v26; // ecx
  __int64 result; // rax
  __int64 v28; // rdx
  __int64 v29; // r13
  void *v30; // rdi
  _QWORD *v31; // rax
  _QWORD *v32; // rbx
  unsigned int v33; // esi
  __int64 v34; // rdx
  _QWORD *v35; // rdx
  _QWORD *v36; // r12
  __int64 v37; // rdi
  _QWORD *v38; // rdx
  _QWORD *v39; // r12
  __int64 v40; // rdi
  _QWORD *v41; // r12
  _QWORD *v42; // r12
  _QWORD *v43; // rsi
  unsigned int v44; // ecx
  int v45; // ebx
  __int64 v46; // rax
  _QWORD *v47; // rdx
  _QWORD *v48; // rdi
  unsigned int v49; // esi
  unsigned int v50; // ecx
  int v51; // ebx
  __int64 v52; // rax
  _QWORD *v53; // rdx
  _QWORD *v54; // rdi
  unsigned int v55; // esi
  unsigned int v56; // ecx
  int v57; // ebx
  __int64 v58; // rax
  _QWORD *v59; // rdx
  _QWORD *v60; // rsi
  unsigned int v61; // ecx
  int v62; // ebx
  _QWORD *v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdi
  _QWORD *v66; // rax
  __int64 v67; // rdx
  _QWORD *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdi
  _QWORD *v71; // rax
  __int64 v72; // rdx
  _QWORD *v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rdx
  __int64 v77; // rdx
  unsigned __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdi
  _QWORD *v81; // rax
  __int64 v82; // rdx
  _QWORD *v83; // rdx
  unsigned __int64 v84; // rdx
  unsigned __int64 v85; // rdx
  unsigned __int64 v86; // rdx

  sub_79CA20();
  v2 = *(_QWORD *)(a1 + 22808);
  for ( i = v2 + 16LL * *(unsigned int *)(a1 + 22816); i != v2; v2 += 16 )
    (*(void (__fastcall **)(_QWORD))v2)(*(_QWORD *)(v2 + 8));
  *(_DWORD *)(a1 + 22816) = 0;
  v4 = *(_DWORD *)(a1 + 1080);
  if ( !v4 )
  {
LABEL_4:
    if ( !*(_DWORD *)(a1 + 1084) )
      goto LABEL_25;
    v5 = *(unsigned int *)(a1 + 1088);
    if ( !(_DWORD)v5 )
      goto LABEL_24;
    if ( (unsigned int)v5 > 0x40 )
    {
      operator delete();
      *(_DWORD *)(a1 + 1088) = 0;
      *(_QWORD *)(a1 + 1072) = 0;
LABEL_24:
      *(_QWORD *)(a1 + 1080) = 0;
      goto LABEL_25;
    }
    v6 = *(_QWORD **)(a1 + 1072);
LABEL_20:
    v10 = &v6[2 * v5];
    if ( v6 != v10 )
    {
      if ( (((_BYTE)v10 - (_BYTE)v6) & 0x10) == 0 || (*v6 = -4096, v6 += 2, v10 != v6) )
      {
        do
        {
          *v6 = -4096;
          v6 += 4;
          *(v6 - 2) = -4096;
        }
        while ( v10 != v6 );
      }
    }
    goto LABEL_24;
  }
  v6 = *(_QWORD **)(a1 + 1072);
  v38 = v6;
  v39 = &v6[2 * *(unsigned int *)(a1 + 1088)];
  if ( v6 != v39 )
  {
    while ( *v38 == -4096 || *v38 == -8192 )
    {
      v38 += 2;
      if ( v39 == v38 )
        goto LABEL_17;
    }
    if ( v38 != v39 )
    {
      while ( 1 )
      {
        v7 = v38 + 2;
        if ( v38 + 2 == v39 )
          break;
        while ( *v7 == -4096 || *v7 == -8192 )
        {
          v7 += 2;
          if ( v39 == v7 )
            goto LABEL_13;
        }
        v40 = v38[1];
        if ( v40 )
          sub_AA9790(v40, a1);
        if ( v7 == v39 )
          goto LABEL_15;
        v38 = v7;
      }
LABEL_13:
      v8 = v38[1];
      if ( v8 )
        sub_AA9790(v8, a1);
LABEL_15:
      v4 = *(_DWORD *)(a1 + 1080);
      if ( !v4 )
        goto LABEL_4;
      v6 = *(_QWORD **)(a1 + 1072);
    }
  }
LABEL_17:
  v9 = 4 * v4;
  v5 = *(unsigned int *)(a1 + 1088);
  if ( (unsigned int)(4 * v4) < 0x40 )
    v9 = 64;
  if ( v9 >= (unsigned int)v5 )
    goto LABEL_20;
  v54 = v6;
  v55 = v4 - 1;
  if ( v55 )
  {
    _BitScanReverse(&v56, v55);
    v57 = 1 << (v56 + 2);
    if ( v57 < 64 )
      v57 = 64;
    if ( (_DWORD)v5 == v57 )
    {
      *(_QWORD *)(a1 + 1080) = 0;
      v58 = 2LL * (int)v5;
      v59 = &v54[v58];
      if ( ((v58 * 8) & 0x10) == 0 || (*v54 = -4096, v54 += 2, v59 != v54) )
      {
        do
        {
          *v54 = -4096;
          v54 += 4;
          *(v54 - 2) = -4096;
        }
        while ( v59 != v54 );
      }
      goto LABEL_25;
    }
    operator delete();
    v78 = (4 * v57 / 3u + 1)
        | ((unsigned __int64)(4 * v57 / 3u + 1) >> 1)
        | (((4 * v57 / 3u + 1) | ((unsigned __int64)(4 * v57 / 3u + 1) >> 1)) >> 2)
        | (((4 * v57 / 3u + 1)
          | ((unsigned __int64)(4 * v57 / 3u + 1) >> 1)
          | (((4 * v57 / 3u + 1) | ((unsigned __int64)(4 * v57 / 3u + 1) >> 1)) >> 2)) >> 4)
        | (((4 * v57 / 3u + 1)
          | ((unsigned __int64)(4 * v57 / 3u + 1) >> 1)
          | (((4 * v57 / 3u + 1) | ((unsigned __int64)(4 * v57 / 3u + 1) >> 1)) >> 2)
          | (((4 * v57 / 3u + 1)
            | ((unsigned __int64)(4 * v57 / 3u + 1) >> 1)
            | (((4 * v57 / 3u + 1) | ((unsigned __int64)(4 * v57 / 3u + 1) >> 1)) >> 2)) >> 4)) >> 8);
    v79 = (v78 | (v78 >> 16)) + 1;
    v80 = 16 * v79;
  }
  else
  {
    operator delete();
    LODWORD(v79) = 128;
    v80 = 2048;
  }
  *(_DWORD *)(a1 + 1088) = v79;
  v81 = (_QWORD *)sub_25CC9C0(v80, 8);
  v82 = *(unsigned int *)(a1 + 1088);
  *(_QWORD *)(a1 + 1080) = 0;
  *(_QWORD *)(a1 + 1072) = v81;
  v83 = &v81[2 * v82];
  if ( v81 != v83 )
  {
    if ( (((_BYTE)v83 - (_BYTE)v81) & 0x10) == 0 || (*v81 = -4096, v81 += 2, v83 != v81) )
    {
      do
      {
        *v81 = -4096;
        v81 += 4;
        *(v81 - 2) = -4096;
      }
      while ( v83 != v81 );
    }
  }
LABEL_25:
  v11 = *(_DWORD *)(a1 + 1056);
  if ( !v11 )
  {
LABEL_26:
    if ( !*(_DWORD *)(a1 + 1060) )
      goto LABEL_47;
    v12 = *(unsigned int *)(a1 + 1064);
    if ( !(_DWORD)v12 )
      goto LABEL_46;
    if ( (unsigned int)v12 > 0x40 )
    {
      operator delete();
      *(_DWORD *)(a1 + 1064) = 0;
      *(_QWORD *)(a1 + 1048) = 0;
LABEL_46:
      *(_QWORD *)(a1 + 1056) = 0;
      goto LABEL_47;
    }
    v13 = *(_QWORD **)(a1 + 1048);
LABEL_42:
    v17 = &v13[2 * v12];
    if ( v13 != v17 )
    {
      if ( (((_BYTE)v17 - (_BYTE)v13) & 0x10) == 0 || (*v13 = -4096, v13 += 2, v17 != v13) )
      {
        do
        {
          *v13 = -4096;
          v13 += 4;
          *(v13 - 2) = -4096;
        }
        while ( v17 != v13 );
      }
    }
    goto LABEL_46;
  }
  v13 = *(_QWORD **)(a1 + 1048);
  v35 = v13;
  v36 = &v13[2 * *(unsigned int *)(a1 + 1064)];
  if ( v13 != v36 )
  {
    while ( *v35 == -4096 || *v35 == -8192 )
    {
      v35 += 2;
      if ( v36 == v35 )
        goto LABEL_39;
    }
    if ( v36 != v35 )
    {
      while ( 1 )
      {
        v14 = v35 + 2;
        if ( v35 + 2 == v36 )
          break;
        while ( *v14 == -4096 || *v14 == -8192 )
        {
          v14 += 2;
          if ( v36 == v14 )
            goto LABEL_35;
        }
        v37 = v35[1];
        if ( v37 )
          sub_AA9790(v37, a1);
        if ( v14 == v36 )
          goto LABEL_37;
        v35 = v14;
      }
LABEL_35:
      v15 = v35[1];
      if ( v15 )
        sub_AA9790(v15, a1);
LABEL_37:
      v11 = *(_DWORD *)(a1 + 1056);
      if ( !v11 )
        goto LABEL_26;
      v13 = *(_QWORD **)(a1 + 1048);
    }
  }
LABEL_39:
  v16 = 4 * v11;
  v12 = *(unsigned int *)(a1 + 1064);
  if ( (unsigned int)(4 * v11) < 0x40 )
    v16 = 64;
  if ( v16 >= (unsigned int)v12 )
    goto LABEL_42;
  v48 = v13;
  v49 = v11 - 1;
  if ( v49 )
  {
    _BitScanReverse(&v50, v49);
    v51 = 1 << (v50 + 2);
    if ( v51 < 64 )
      v51 = 64;
    if ( (_DWORD)v12 == v51 )
    {
      *(_QWORD *)(a1 + 1056) = 0;
      v52 = 2LL * (int)v12;
      v53 = &v48[v52];
      if ( ((v52 * 8) & 0x10) == 0 || (*v48 = -4096, v48 += 2, v53 != v48) )
      {
        do
        {
          *v48 = -4096;
          v48 += 4;
          *(v48 - 2) = -4096;
        }
        while ( v53 != v48 );
      }
      goto LABEL_47;
    }
    operator delete();
    v85 = (4 * v51 / 3u + 1)
        | ((unsigned __int64)(4 * v51 / 3u + 1) >> 1)
        | (((4 * v51 / 3u + 1) | ((unsigned __int64)(4 * v51 / 3u + 1) >> 1)) >> 2)
        | (((4 * v51 / 3u + 1)
          | ((unsigned __int64)(4 * v51 / 3u + 1) >> 1)
          | (((4 * v51 / 3u + 1) | ((unsigned __int64)(4 * v51 / 3u + 1) >> 1)) >> 2)) >> 4)
        | (((4 * v51 / 3u + 1)
          | ((unsigned __int64)(4 * v51 / 3u + 1) >> 1)
          | (((4 * v51 / 3u + 1) | ((unsigned __int64)(4 * v51 / 3u + 1) >> 1)) >> 2)
          | (((4 * v51 / 3u + 1)
            | ((unsigned __int64)(4 * v51 / 3u + 1) >> 1)
            | (((4 * v51 / 3u + 1) | ((unsigned __int64)(4 * v51 / 3u + 1) >> 1)) >> 2)) >> 4)) >> 8);
    v64 = (v85 | (v85 >> 16)) + 1;
    v65 = 16 * v64;
  }
  else
  {
    operator delete();
    LODWORD(v64) = 128;
    v65 = 2048;
  }
  *(_DWORD *)(a1 + 1064) = v64;
  v66 = (_QWORD *)sub_25CC9C0(v65, 8);
  v67 = *(unsigned int *)(a1 + 1064);
  *(_QWORD *)(a1 + 1056) = 0;
  *(_QWORD *)(a1 + 1048) = v66;
  v68 = &v66[2 * v67];
  if ( v66 != v68 )
  {
    if ( (((_BYTE)v68 - (_BYTE)v66) & 0x10) == 0 || (*v66 = -4096, v66 += 2, v68 != v66) )
    {
      do
      {
        *v66 = -4096;
        v66 += 4;
        *(v66 - 2) = -4096;
      }
      while ( v68 != v66 );
    }
  }
LABEL_47:
  v18 = *(_DWORD *)(a1 + 1632);
  if ( !v18 )
  {
LABEL_48:
    if ( !*(_DWORD *)(a1 + 1636) )
      goto LABEL_69;
    v19 = *(unsigned int *)(a1 + 1640);
    if ( !(_DWORD)v19 )
      goto LABEL_68;
    if ( (unsigned int)v19 > 0x40 )
    {
      operator delete();
      *(_DWORD *)(a1 + 1640) = 0;
      *(_QWORD *)(a1 + 1624) = 0;
LABEL_68:
      *(_QWORD *)(a1 + 1632) = 0;
      goto LABEL_69;
    }
    v20 = *(_QWORD **)(a1 + 1624);
LABEL_64:
    v25 = &v20[2 * v19];
    if ( v20 != v25 )
    {
      if ( (((_BYTE)v25 - (_BYTE)v20) & 0x10) == 0 || (*v20 = -4096, v20 += 2, v25 != v20) )
      {
        do
        {
          *v20 = -4096;
          v20 += 4;
          *(v20 - 2) = -4096;
        }
        while ( v25 != v20 );
      }
    }
    goto LABEL_68;
  }
  v20 = *(_QWORD **)(a1 + 1624);
  v23 = v20;
  v42 = &v20[2 * *(unsigned int *)(a1 + 1640)];
  if ( v20 != v42 )
  {
    while ( *v23 == -4096 || *v23 == -8192 )
    {
      v23 += 2;
      if ( v42 == v23 )
        goto LABEL_61;
    }
    if ( v23 != v42 )
    {
      do
      {
        v21 = (void **)v23[1];
        if ( *v21 != v21 + 2 )
          free(*v21);
        v22 = v23 + 2;
        if ( v23 + 2 == v42 )
          break;
        while ( 1 )
        {
          v23 = v22;
          if ( *v22 != -4096 && *v22 != -8192 )
            break;
          v22 += 2;
          if ( v42 == v22 )
            goto LABEL_59;
        }
      }
      while ( v22 != v42 );
LABEL_59:
      v18 = *(_DWORD *)(a1 + 1632);
      if ( !v18 )
        goto LABEL_48;
      v20 = *(_QWORD **)(a1 + 1624);
    }
  }
LABEL_61:
  v24 = 4 * v18;
  v19 = *(unsigned int *)(a1 + 1640);
  if ( (unsigned int)(4 * v18) < 0x40 )
    v24 = 64;
  if ( v24 >= (unsigned int)v19 )
    goto LABEL_64;
  v43 = v20;
  v44 = v18 - 1;
  if ( v44 )
  {
    _BitScanReverse(&v44, v44);
    v45 = 1 << (v44 + 2);
    if ( v45 < 64 )
      v45 = 64;
    if ( (_DWORD)v19 == v45 )
    {
      *(_QWORD *)(a1 + 1632) = 0;
      v46 = 2LL * (int)v19;
      v47 = &v43[v46];
      if ( ((v46 * 8) & 0x10) == 0 || (*v43 = -4096, v43 += 2, v47 != v43) )
      {
        do
        {
          *v43 = -4096;
          v43 += 4;
          *(v43 - 2) = -4096;
        }
        while ( v47 != v43 );
      }
      goto LABEL_69;
    }
    operator delete();
    v86 = (4 * v45 / 3u + 1)
        | ((unsigned __int64)(4 * v45 / 3u + 1) >> 1)
        | (((4 * v45 / 3u + 1) | ((unsigned __int64)(4 * v45 / 3u + 1) >> 1)) >> 2)
        | (((4 * v45 / 3u + 1)
          | ((unsigned __int64)(4 * v45 / 3u + 1) >> 1)
          | (((4 * v45 / 3u + 1) | ((unsigned __int64)(4 * v45 / 3u + 1) >> 1)) >> 2)) >> 4)
        | (((4 * v45 / 3u + 1)
          | ((unsigned __int64)(4 * v45 / 3u + 1) >> 1)
          | (((4 * v45 / 3u + 1) | ((unsigned __int64)(4 * v45 / 3u + 1) >> 1)) >> 2)
          | (((4 * v45 / 3u + 1)
            | ((unsigned __int64)(4 * v45 / 3u + 1) >> 1)
            | (((4 * v45 / 3u + 1) | ((unsigned __int64)(4 * v45 / 3u + 1) >> 1)) >> 2)) >> 4)) >> 8);
    v69 = (v86 | (v86 >> 16)) + 1;
    v70 = 16 * v69;
  }
  else
  {
    operator delete();
    LODWORD(v69) = 128;
    v70 = 2048;
  }
  *(_DWORD *)(a1 + 1640) = v69;
  v71 = (_QWORD *)sub_25CC9C0(v70, 8);
  v72 = *(unsigned int *)(a1 + 1640);
  *(_QWORD *)(a1 + 1632) = 0;
  *(_QWORD *)(a1 + 1624) = v71;
  v73 = &v71[2 * v72];
  if ( v71 != v73 )
  {
    if ( (((_BYTE)v73 - (_BYTE)v71) & 0x10) == 0 || (*v71 = -4096, v71 += 2, v73 != v71) )
    {
      do
      {
        *v71 = -4096;
        v71 += 4;
        *(v71 - 2) = -4096;
      }
      while ( v73 != v71 );
    }
  }
LABEL_69:
  v26 = *(_DWORD *)(a1 + 1704);
  if ( !v26 )
  {
LABEL_70:
    result = *(unsigned int *)(a1 + 1708);
    if ( !(_DWORD)result )
      return result;
    v28 = *(unsigned int *)(a1 + 1712);
    if ( !(_DWORD)v28 )
      goto LABEL_92;
    if ( (unsigned int)v28 > 0x40 )
    {
      result = operator delete();
      *(_DWORD *)(a1 + 1712) = 0;
      *(_QWORD *)(a1 + 1696) = 0;
LABEL_92:
      *(_QWORD *)(a1 + 1704) = 0;
      return result;
    }
    result = *(_QWORD *)(a1 + 1696);
LABEL_88:
    v34 = result + 16 * v28;
    if ( result != v34 )
    {
      if ( (((_BYTE)v34 - (_BYTE)result) & 0x10) == 0 || (*(_QWORD *)result = -4096, result += 16, v34 != result) )
      {
        do
        {
          *(_QWORD *)result = -4096;
          result += 32;
          *(_QWORD *)(result - 16) = -4096;
        }
        while ( v34 != result );
      }
    }
    goto LABEL_92;
  }
  result = *(_QWORD *)(a1 + 1696);
  v32 = (_QWORD *)result;
  v41 = (_QWORD *)(result + 16LL * *(unsigned int *)(a1 + 1712));
  if ( (_QWORD *)result != v41 )
  {
    while ( *v32 == -8192 || *v32 == -4096 )
    {
      v32 += 2;
      if ( v41 == v32 )
        goto LABEL_85;
    }
    if ( v32 != v41 )
    {
      do
      {
        v29 = v32[1];
        v30 = *(void **)(v29 + 48);
        if ( v30 != (void *)(v29 + 64) )
          free(v30);
        if ( *(_QWORD *)v29 != v29 + 16 )
          free(*(void **)v29);
        v31 = v32 + 2;
        if ( v32 + 2 == v41 )
          break;
        while ( 1 )
        {
          v32 = v31;
          if ( *v31 != -8192 && *v31 != -4096 )
            break;
          v31 += 2;
          if ( v41 == v31 )
            goto LABEL_83;
        }
      }
      while ( v31 != v41 );
LABEL_83:
      v26 = *(_DWORD *)(a1 + 1704);
      if ( !v26 )
        goto LABEL_70;
      result = *(_QWORD *)(a1 + 1696);
    }
  }
LABEL_85:
  v33 = 4 * v26;
  v28 = *(unsigned int *)(a1 + 1712);
  if ( (unsigned int)(4 * v26) < 0x40 )
    v33 = 64;
  if ( v33 >= (unsigned int)v28 )
    goto LABEL_88;
  v60 = (_QWORD *)result;
  v61 = v26 - 1;
  if ( v61 )
  {
    _BitScanReverse(&v61, v61);
    v62 = 1 << (v61 + 2);
    if ( v62 < 64 )
      v62 = 64;
    if ( (_DWORD)v28 == v62 )
    {
      *(_QWORD *)(a1 + 1704) = 0;
      result = 16LL * (int)v28;
      v63 = (_QWORD *)((char *)v60 + result);
      if ( (result & 0x10) == 0 || (*v60 = -4096, v60 += 2, v63 != v60) )
      {
        do
        {
          *v60 = -4096;
          v60 += 4;
          *(v60 - 2) = -4096;
        }
        while ( v63 != v60 );
      }
      return result;
    }
    operator delete();
    v84 = (4 * v62 / 3u + 1)
        | ((unsigned __int64)(4 * v62 / 3u + 1) >> 1)
        | (((4 * v62 / 3u + 1) | ((unsigned __int64)(4 * v62 / 3u + 1) >> 1)) >> 2)
        | (((4 * v62 / 3u + 1)
          | ((unsigned __int64)(4 * v62 / 3u + 1) >> 1)
          | (((4 * v62 / 3u + 1) | ((unsigned __int64)(4 * v62 / 3u + 1) >> 1)) >> 2)) >> 4)
        | (((4 * v62 / 3u + 1)
          | ((unsigned __int64)(4 * v62 / 3u + 1) >> 1)
          | (((4 * v62 / 3u + 1) | ((unsigned __int64)(4 * v62 / 3u + 1) >> 1)) >> 2)
          | (((4 * v62 / 3u + 1)
            | ((unsigned __int64)(4 * v62 / 3u + 1) >> 1)
            | (((4 * v62 / 3u + 1) | ((unsigned __int64)(4 * v62 / 3u + 1) >> 1)) >> 2)) >> 4)) >> 8);
    v74 = (v84 | (v84 >> 16)) + 1;
    v75 = 16 * v74;
  }
  else
  {
    operator delete();
    LODWORD(v74) = 128;
    v75 = 2048;
  }
  *(_DWORD *)(a1 + 1712) = v74;
  result = sub_25CC9C0(v75, 8);
  v76 = *(unsigned int *)(a1 + 1712);
  *(_QWORD *)(a1 + 1704) = 0;
  *(_QWORD *)(a1 + 1696) = result;
  v77 = result + 16 * v76;
  if ( result != v77 )
  {
    if ( (((_BYTE)v77 - (_BYTE)result) & 0x10) == 0 || (*(_QWORD *)result = -4096, result += 16, v77 != result) )
    {
      do
      {
        *(_QWORD *)result = -4096;
        result += 32;
        *(_QWORD *)(result - 16) = -4096;
      }
      while ( v77 != result );
    }
  }
  return result;
}

