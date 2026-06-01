__int64 __fastcall objc::findhash(
        void **a1,
        unsigned int *a2,
        unsigned __int64 *a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6)
{
  _QWORD *v6; // x28
  __int64 v9; // x8
  double v10; // d2
  char v11; // w8
  unsigned int v12; // w19
  __int64 i; // x8
  unsigned int v14; // w17
  int v15; // w13
  int v16; // w14
  unsigned int v17; // w15
  int v18; // w16
  unsigned int v19; // w17
  __int64 v20; // x3
  int v21; // w1
  unsigned int v22; // w1
  unsigned int v23; // w1
  __int64 v24; // x2
  unsigned __int64 v25; // x8
  unsigned __int64 v26; // x0
  unsigned int *v27; // x9
  unsigned int v28; // w8
  int v29; // w19
  unsigned __int64 v30; // x27
  unsigned int v31; // w8
  unsigned int v32; // w9
  unsigned __int64 v33; // x24
  __int64 v34; // x22
  __int64 v35; // x23
  __int64 v36; // x25
  unsigned __int64 v37; // x8
  int v38; // w9
  __int64 v39; // x2
  __int64 v40; // x3
  unsigned __int64 v41; // x8
  unsigned __int64 v42; // x9
  __int64 v43; // x10
  unsigned __int64 v44; // x27
  _DWORD *v45; // x11
  __int64 v46; // x12
  unsigned __int64 v47; // x13
  char *v48; // x14
  _QWORD *v49; // x14
  __int64 v50; // x15
  __int64 v51; // t1
  __int64 v52; // x17
  __int64 v53; // x2
  char **v54; // x3
  unsigned __int64 v55; // x8
  __int64 v56; // x11
  unsigned int v57; // w9
  char *v58; // x10
  unsigned int v59; // w12
  unsigned __int64 v60; // x11
  char **v61; // x13
  char *v62; // x15
  __int64 v63; // x14
  unsigned int v64; // w15
  __int64 v65; // x16
  char *v66; // x17
  char *v67; // x1
  char *v68; // x7
  __int64 v69; // x19
  __int64 v70; // x19
  unsigned __int64 v71; // x19
  char v72; // w1
  unsigned __int64 v73; // x4
  unsigned __int64 v74; // x5
  __int64 v75; // x7
  char *v76; // x19
  __int64 v77; // x6
  unsigned int v78; // w22
  _QWORD *v79; // x23
  unsigned __int64 v80; // x24
  char **v81; // x7
  __int64 v82; // x22
  __int64 v83; // x7
  unsigned int v84; // w7
  unsigned __int64 v85; // x19
  _QWORD *v86; // x22
  unsigned __int64 v87; // x23
  unsigned int v88; // w8
  char *v89; // x19
  unsigned __int64 v90; // x27
  char *v91; // x25
  char *v92; // x8
  unsigned __int64 v93; // x27
  __int64 v94; // x19
  int v96; // [xsp+4h] [xbp-ECh]
  int v99; // [xsp+20h] [xbp-D0h]
  unsigned int v100; // [xsp+24h] [xbp-CCh]
  _QWORD *v102; // [xsp+30h] [xbp-C0h]
  unsigned int v103; // [xsp+38h] [xbp-B8h]
  void *v104[2]; // [xsp+40h] [xbp-B0h] BYREF
  __int128 v105; // [xsp+50h] [xbp-A0h]
  vm_size_t size; // [xsp+60h] [xbp-90h]
  void *v107[2]; // [xsp+70h] [xbp-80h] BYREF
  __int128 v108; // [xsp+80h] [xbp-70h]
  vm_size_t v109; // [xsp+90h] [xbp-60h]

  v6 = a6;
  v109 = 0;
  *(_OWORD *)v107 = 0u;
  v108 = 0u;
  size = 0;
  *(_OWORD *)v104 = 0u;
  v105 = 0u;
  v9 = a6[2];
  *a2 = a5;
  if ( !a5 )
  {
    *a2 = 1;
LABEL_10:
    v12 = 1;
    goto LABEL_11;
  }
  v10 = (double)(unsigned int)v9;
  if ( (double)a5 * 0.8 >= (double)(unsigned int)v9 )
    v11 = 3;
  else
    v11 = 2;
  if ( (double)a5 * 0.6 >= v10 )
    v11 = 4;
  v12 = a5 >> v11;
  if ( !(a5 >> v11) )
    goto LABEL_10;
LABEL_11:
  for ( i = 0; i != 256; ++i )
  {
    v14 = -1;
    do
      ++v14;
    while ( 1 << v14 < a5 );
    v15 = ~(-1 << v14);
    v16 = (v14 >> 1) + 1;
    v17 = v14 / 3 + 1;
    v18 = (v14 >> 2) + 1;
    v19 = v14 / 5 + 1;
    LODWORD(v20) = 20;
    v21 = i;
    do
    {
      v22 = ((((v21 << v16) + v21) & (unsigned int)v15) >> v17) ^ ((v21 << v16) + v21) & v15;
      v23 = ((v22 << v18) + v22) & v15;
      v24 = v23 >> v19;
      v21 = v24 ^ v23;
      v20 = (unsigned int)(v20 - 1);
    }
    while ( (_DWORD)v20 );
    *(_DWORD *)(a4 + 4 * i) = v21;
  }
  v25 = (unsigned __int64)a1[2];
  if ( v25 != v12 )
  {
    if ( v25 <= v12 )
      dyld3::OverflowSafeArray<objc::bstuff,4294967295ul>::reserve(a1, v12, v24, v20);
    a1[2] = (void *)v12;
  }
  v26 = dyld3::OverflowSafeArray<objc::qstuff,4294967295ul>::reserve(v104, v12 + 1);
  *(_QWORD *)&v105 = v12 + 1;
  v27 = a2;
  if ( (_QWORD)v108 != a5 )
  {
    if ( (unsigned __int64)v108 <= a5 )
    {
      v26 = dyld3::OverflowSafeArray<objc::hstuff,4294967295ul>::reserve(v107, a5);
      v27 = a2;
    }
    *(_QWORD *)&v108 = a5;
  }
  v102 = v6;
  v103 = v12;
  v99 = 0;
  v96 = 0;
  v28 = 1;
LABEL_26:
  v29 = 0;
  v100 = v28;
  v30 = 0x9E3779B97F4A7C13LL * v28;
  *a3 = v30;
  v31 = *v27;
  do
    v32 = 1 << v29++;
  while ( v32 < v31 );
  v33 = v6[2];
  if ( v33 )
  {
    v34 = 0;
    v35 = *v102;
    do
    {
      if ( v33 <= (unsigned int)v34 )
        objc::findhash(v26);
      v36 = v35 + 32LL * (unsigned int)v34;
      v26 = objc::lookup8(*(objc **)v36, (const unsigned __int8 *)*(unsigned int *)(v36 + 8), v30);
      v37 = v26 >> (65 - (unsigned __int8)v29);
      if ( v29 == 1 )
        LODWORD(v37) = 0;
      v38 = (v103 - 1) & v26;
      if ( v103 <= 1 )
        v38 = 0;
      *(_DWORD *)(v36 + 16) = v37;
      *(_DWORD *)(v36 + 20) = v38;
      ++v34;
    }
    while ( v33 != v34 );
  }
  __bzero(*a1, 24LL * (_QWORD)a1[1]);
  v6 = v102;
  v41 = v102[2];
  if ( v41 )
  {
    v42 = 0;
    v43 = *v102;
    v44 = (unsigned __int64)a1[2];
    v45 = *a1;
    while ( 1 )
    {
      v46 = v43 + 32 * v42;
      v47 = *(unsigned int *)(v46 + 20);
      if ( v44 <= v47 )
        objc::findhash();
      v48 = (char *)&v45[6 * v47];
      v51 = *((_QWORD *)v48 + 1);
      v49 = v48 + 8;
      v50 = v51;
      if ( v51 )
        break;
LABEL_43:
      ++v45[6 * v47 + 4];
      *(_QWORD *)(v43 + 32 * v42 + 24) = v50;
      *v49 = v46;
      v42 = (unsigned int)(v42 + 1);
      if ( v41 <= v42 )
        goto LABEL_49;
    }
    v52 = v50;
    while ( 1 )
    {
      v26 = *(unsigned int *)(v52 + 16);
      if ( *(_DWORD *)(v43 + 32 * v42 + 16) == (_DWORD)v26 )
        break;
      v52 = *(_QWORD *)(v52 + 24);
      if ( !v52 )
        goto LABEL_43;
    }
    if ( (unsigned int)(v99 + 1) >= 0x800 )
    {
      v27 = a2;
      if ( *a2 >= a5 )
      {
        if ( v103 >= a5 )
        {
          v99 = 0;
          v96 = 0;
        }
        else
        {
          v89 = (char *)(2 * v103);
          if ( (char *)v44 != v89 )
          {
            if ( v44 <= (unsigned __int64)v89 )
            {
              v26 = dyld3::OverflowSafeArray<objc::bstuff,4294967295ul>::reserve(a1, 2 * v103, v39, v40);
              v27 = a2;
            }
            a1[2] = v89;
          }
          v103 *= 2;
          v90 = (unsigned int)v89 | 1;
          if ( (_QWORD)v105 == v90 )
          {
            v99 = 0;
            v96 = 0;
          }
          else
          {
            if ( (unsigned __int64)v105 <= v90 )
            {
              v26 = dyld3::OverflowSafeArray<objc::qstuff,4294967295ul>::reserve(v104, (unsigned int)v89 | 1);
              v27 = a2;
            }
            v99 = 0;
            v96 = 0;
            *(_QWORD *)&v105 = (unsigned int)v89 | 1;
          }
        }
      }
      else
      {
        v99 = 0;
        v96 = 0;
        *a2 *= 2;
      }
      goto LABEL_117;
    }
    ++v99;
LABEL_116:
    v27 = a2;
LABEL_117:
    v88 = v100;
    goto LABEL_118;
  }
  v44 = (unsigned __int64)a1[2];
LABEL_49:
  __bzero(v107[0], 8LL * a5);
  __bzero(v104[0], (16 * v44 + 16) & 0xFFFFFFFF0LL);
  if ( !(_DWORD)v44 )
    goto LABEL_145;
  v55 = (unsigned __int64)a1[2];
  if ( v55 <= (unsigned int)(v44 - 1) )
    objc::findhash();
  v56 = 0;
  v57 = 0;
  v58 = (char *)*a1;
  do
  {
    if ( *(_DWORD *)&v58[v56 + 16] > v57 )
      v57 = *(_DWORD *)&v58[v56 + 16];
    v56 += 24;
  }
  while ( 24LL * (unsigned int)v44 != v56 );
  if ( !v57 )
    goto LABEL_145;
  while ( 2 )
  {
    v59 = 0;
    v60 = v105;
    v61 = (char **)v104[0];
    do
    {
      if ( v55 <= v59 )
        objc::findhash();
      v62 = &v58[24 * v59++];
      if ( *((_DWORD *)v62 + 4) != v57 )
        continue;
      if ( !v60 )
        objc::findhash();
      v63 = 0;
      *v61 = v62;
      v64 = 1;
      while ( 1 )
      {
        if ( v63 == v60 )
          objc::findhash();
        if ( v63 == 1 )
          goto LABEL_130;
        v65 = 0;
        v66 = v61[2 * v63];
        v26 = v105;
LABEL_64:
        v53 = *((_QWORD *)v66 + 1);
        if ( !v53 )
          break;
        v67 = nullptr;
        v54 = (char **)*(unsigned int *)(a4 + 4 * v65);
        v68 = (char *)*a1;
        while ( 1 )
        {
          v69 = *(_DWORD *)(v53 + 16) ^ (unsigned int)v54;
          if ( (unsigned int)v69 >= a5 )
            break;
          if ( (unsigned __int64)v108 <= (unsigned int)v69 )
            objc::findhash(v26, v67);
          v70 = *((_QWORD *)v107[0] + v69);
          if ( v70 )
          {
            v71 = *(unsigned int *)(v70 + 20);
            if ( (unsigned __int64)a1[2] <= v71 )
              objc::findhash(v26, v67);
            if ( !v67 )
            {
              v67 = &v68[24 * v71];
              if ( *((_DWORD *)v67 + 5) == v59 )
                break;
              goto LABEL_74;
            }
            if ( v67 != &v68[24 * v71] )
              break;
          }
LABEL_74:
          v53 = *(_QWORD *)(v53 + 24);
          if ( !v53 )
          {
            if ( !v67 )
              goto LABEL_78;
            v53 = 0;
            *((_DWORD *)v67 + 5) = v59;
            goto LABEL_79;
          }
        }
LABEL_109:
        if ( ++v65 != 256 )
          goto LABEL_64;
        if ( ++v63 >= (unsigned __int64)v64 )
        {
LABEL_130:
          if ( (unsigned int)(v96 + 1) < 4 )
          {
            ++v96;
            goto LABEL_116;
          }
          v27 = a2;
          if ( v103 >= a5 )
          {
            v94 = 0;
            goto LABEL_146;
          }
          v91 = (char *)(2 * v103);
          v92 = (char *)a1[2];
          if ( v92 != v91 )
          {
            if ( v92 <= v91 )
            {
              v26 = dyld3::OverflowSafeArray<objc::bstuff,4294967295ul>::reserve(a1, 2 * v103, v53, v54);
              v27 = a2;
            }
            a1[2] = v91;
          }
          v93 = (unsigned int)v91 | 1;
          if ( (_QWORD)v105 != v93 )
          {
            if ( (unsigned __int64)v105 <= v93 )
            {
              v26 = dyld3::OverflowSafeArray<objc::qstuff,4294967295ul>::reserve(v104, (unsigned int)v91 | 1);
              v27 = a2;
            }
            *(_QWORD *)&v105 = (unsigned int)v91 | 1;
          }
          v96 = 0;
          v88 = v100 - 1;
          v103 *= 2;
LABEL_118:
          v28 = v88 + 1;
          goto LABEL_26;
        }
      }
      v67 = nullptr;
LABEL_78:
      v53 = 1;
LABEL_79:
      if ( v60 <= v64 )
        objc::findhash(v26);
      v54 = &v61[2 * v64];
      *v54 = v67;
      *((_WORD *)v54 + 6) = v65;
      *((_WORD *)v54 + 7) = *(_WORD *)v66;
      *((_DWORD *)v54 + 2) = v63;
      if ( !(_DWORD)v53 )
      {
        ++v64;
        goto LABEL_109;
      }
      if ( !v64 )
        continue;
      v72 = 0;
      v53 = 1;
      while ( 2 )
      {
        v54 = (char **)v104[0];
        v73 = v108;
        LODWORD(v74) = v64;
LABEL_84:
        if ( v26 <= (unsigned int)v74 )
          objc::findhash();
        v75 = (unsigned int)v74;
        v74 = LODWORD(v54[2 * (unsigned int)v74 + 1]);
        if ( v26 <= v74 )
          objc::findhash();
        v76 = v54[2 * v74];
        v77 = *((_QWORD *)v76 + 1);
        if ( v77 )
        {
          v78 = *(_DWORD *)(a4 + 4LL * *(unsigned __int16 *)v76);
          v79 = v107[0];
          do
          {
            v80 = *(_DWORD *)(v77 + 16) ^ v78;
            if ( v73 <= v80 )
              objc::findhash();
            if ( v77 == v79[v80] )
              v79[v80] = 0;
            v77 = *(_QWORD *)(v77 + 24);
          }
          while ( v77 );
          v77 = *((_QWORD *)v76 + 1);
        }
        v81 = &v54[2 * v75];
        v82 = 14;
        if ( (v53 & 1) != 0 )
          v82 = 12;
        v83 = *(unsigned __int16 *)((char *)v81 + v82);
        *(_WORD *)v76 = v83;
        if ( v77 )
        {
          v84 = *(_DWORD *)(a4 + 4 * v83);
          v85 = v108;
          v86 = v107[0];
          while ( 1 )
          {
            v87 = *(_DWORD *)(v77 + 16) ^ v84;
            if ( (v53 & 1) != 0 )
              break;
            if ( (_DWORD)v74 )
              goto LABEL_102;
LABEL_104:
            v77 = *(_QWORD *)(v77 + 24);
            if ( !v77 )
              goto LABEL_105;
          }
          if ( v85 <= (unsigned int)v87 )
            objc::findhash();
          if ( v86[v87] )
          {
            v53 = 0;
            v72 = 1;
            continue;
          }
LABEL_102:
          if ( v85 <= v87 )
            objc::findhash();
          v86[v87] = v77;
          goto LABEL_104;
        }
        break;
      }
LABEL_105:
      if ( (_DWORD)v74 )
        goto LABEL_84;
      if ( (v72 & 1) != 0 )
        goto LABEL_109;
    }
    while ( v59 != (_DWORD)v44 );
    if ( --v57 )
    {
      v58 = (char *)*a1;
      continue;
    }
    break;
  }
LABEL_145:
  v94 = 1;
LABEL_146:
  *(_QWORD *)&v105 = 0;
  if ( *((_QWORD *)&v105 + 1) )
    vm_deallocate(mach_task_self_, *((vm_address_t *)&v105 + 1), size);
  *(_QWORD *)&v108 = 0;
  if ( *((_QWORD *)&v108 + 1) )
    vm_deallocate(mach_task_self_, *((vm_address_t *)&v108 + 1), v109);
  return v94;
}
