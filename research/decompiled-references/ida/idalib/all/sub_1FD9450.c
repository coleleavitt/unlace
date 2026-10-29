void __fastcall sub_1FD9450(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  _QWORD *v7; // r14
  _QWORD *v8; // rbp
  volatile signed __int32 **v9; // r13
  volatile signed __int32 **v10; // r15
  volatile signed __int32 **v11; // rdi
  volatile signed __int32 *v12; // r12
  _QWORD *v13; // r13
  _QWORD *v14; // rbp
  volatile signed __int32 *v15; // r12
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  _QWORD *v19; // r13
  _QWORD *v20; // rbp
  volatile signed __int32 **v21; // r15
  volatile signed __int32 **v22; // r14
  volatile signed __int32 **v23; // rdi
  volatile signed __int32 *v24; // r12
  _QWORD *v25; // r13
  _QWORD *v26; // rbp
  volatile signed __int32 *v27; // r12
  void *v28; // rdi
  _QWORD *v29; // r13
  _QWORD *v30; // rbp
  volatile signed __int32 **v31; // r15
  volatile signed __int32 **v32; // r14
  volatile signed __int32 **v33; // rdi
  volatile signed __int32 *v34; // r12
  _QWORD *v35; // r13
  _QWORD *v36; // rbp
  volatile signed __int32 *v37; // r12
  void *v38; // rdi
  _QWORD *v39; // r13
  _QWORD *v40; // rbp
  volatile signed __int32 **v41; // r15
  volatile signed __int32 **v42; // r14
  volatile signed __int32 **v43; // rdi
  volatile signed __int32 *v44; // r12
  _QWORD *v45; // r13
  _QWORD *v46; // rbp
  volatile signed __int32 *v47; // r12
  void *v48; // rdi
  void *v49; // rdi
  _QWORD *v50; // r13
  _QWORD *v51; // rbp
  volatile signed __int32 **v52; // r15
  volatile signed __int32 **v53; // r14
  volatile signed __int32 **v54; // rdi
  volatile signed __int32 *v55; // r12
  _QWORD *v56; // r13
  _QWORD *v57; // rbp
  volatile signed __int32 *v58; // r12
  __int64 *v59; // r12
  __int64 *v60; // rbp
  __int64 v61; // rdi
  _QWORD *v62; // r13
  _QWORD *v63; // rbp
  volatile signed __int32 **v64; // r15
  volatile signed __int32 **v65; // r14
  volatile signed __int32 **v66; // rdi
  volatile signed __int32 *v67; // r12
  _QWORD *v68; // r13
  _QWORD *v69; // rbp
  volatile signed __int32 *v70; // r12
  void *v71; // rdi
  void *v72; // rdi
  void *v73; // rdi
  void *v74; // rdi
  void *v75; // rdi
  void *v76; // rdi
  void *v77; // rdi
  void *v78; // rdi
  int v79; // eax
  volatile signed __int32 *v80; // r12
  int v81; // eax
  int v82; // eax
  _DWORD *v83; // r12
  int v84; // eax
  int v85; // eax
  volatile signed __int32 *v86; // r12
  int v87; // eax
  int v88; // eax
  _DWORD *v89; // r12
  int v90; // eax
  int v91; // eax
  volatile signed __int32 *v92; // r12
  int v93; // eax
  int v94; // eax
  _DWORD *v95; // r12
  int v96; // eax
  int v97; // eax
  volatile signed __int32 *v98; // r12
  int v99; // eax
  int v100; // eax
  _DWORD *v101; // r12
  int v102; // eax
  int v103; // eax
  volatile signed __int32 *v104; // r12
  int v105; // eax
  int v106; // eax
  _DWORD *v107; // r12
  int v108; // eax
  int v109; // eax
  volatile signed __int32 *v110; // r12
  int v111; // eax
  int v112; // eax
  _DWORD *v113; // r12
  int v114; // eax

  operator delete(*(void **)(a1 + 1704), 0x40u);
  operator delete(*(void **)(a1 + 2584), 0x28u);
  operator delete(*(void **)(a1 + 2696), 0x28u);
  v2 = *(void **)(a1 + 3320);
  if ( v2 != (void *)(a1 + 3336) )
    free(v2);
  v3 = *(void **)(a1 + 3304);
  if ( v3 != (void *)(a1 + 3320) )
    free(v3);
  operator delete(*(_QWORD *)(a1 + 3280), 8LL * *(unsigned int *)(a1 + 3296), 8);
  v4 = *(void **)(a1 + 3264);
  if ( (void *)(a1 + 3280) != v4 )
    free(v4);
  operator delete(*(_QWORD *)(a1 + 3240), 8LL * *(unsigned int *)(a1 + 3256), 8);
  v5 = *(void **)(a1 + 3160);
  if ( v5 != (void *)(a1 + 3176) )
    free(v5);
  v6 = *(void **)(a1 + 3112);
  if ( v6 != (void *)(a1 + 3128) )
    free(v6);
  v7 = *(_QWORD **)(a1 + 2768);
  v8 = &v7[4 * *(unsigned int *)(a1 + 2776)];
  if ( v7 != v8 )
  {
    do
    {
      while ( 1 )
      {
        v8 -= 4;
        v9 = (volatile signed __int32 **)v8[1];
        v10 = (volatile signed __int32 **)v8[2];
        v11 = v9;
        if ( v10 != v9 )
        {
          if ( &_pthread_key_create )
          {
            do
            {
              while ( 1 )
              {
                v12 = v9[1];
                if ( v12 )
                {
                  if ( !_InterlockedSub(v12 + 2, 1u) )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
                    if ( !_InterlockedSub(v12 + 3, 1u) )
                      break;
                  }
                }
                v9 += 2;
                if ( v10 == v9 )
                  goto LABEL_20;
              }
              v9 += 2;
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 24LL))(v12);
            }
            while ( v10 != v9 );
          }
          else
          {
            do
            {
              v80 = v9[1];
              if ( v80 )
              {
                v81 = *((_DWORD *)v80 + 2);
                *((_DWORD *)v80 + 2) = v81 - 1;
                if ( v81 == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v80 + 16LL))(v80);
                  v79 = *((_DWORD *)v80 + 3);
                  *((_DWORD *)v80 + 3) = v79 - 1;
                  if ( v79 == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v80 + 24LL))(v80);
                }
              }
              v9 += 2;
            }
            while ( v10 != v9 );
          }
LABEL_20:
          v11 = (volatile signed __int32 **)v8[1];
        }
        if ( !v11 )
          break;
        operator delete(v11);
        if ( v7 == v8 )
        {
          v8 = *(_QWORD **)(a1 + 2768);
          goto LABEL_24;
        }
      }
    }
    while ( v7 != v8 );
    v8 = *(_QWORD **)(a1 + 2768);
  }
LABEL_24:
  if ( v8 != (_QWORD *)(a1 + 2784) )
    free(v8);
  v13 = *(_QWORD **)(a1 + 2752);
  v14 = *(_QWORD **)(a1 + 2744);
  if ( v13 != v14 )
  {
    if ( &_pthread_key_create )
    {
      v15 = (volatile signed __int32 *)v14[1];
      if ( v15 )
        goto LABEL_31;
LABEL_29:
      while ( 1 )
      {
        v14 += 2;
        if ( v13 == v14 )
          break;
        while ( 1 )
        {
          v15 = (volatile signed __int32 *)v14[1];
          if ( !v15 )
            break;
LABEL_31:
          if ( _InterlockedSub(v15 + 2, 1u) )
            goto LABEL_29;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
          if ( _InterlockedSub(v15 + 3, 1u) )
            goto LABEL_29;
          v14 += 2;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 24LL))(v15);
          if ( v13 == v14 )
            goto LABEL_34;
        }
      }
    }
    else
    {
      do
      {
        v83 = (_DWORD *)v14[1];
        if ( v83 )
        {
          v84 = v83[2];
          v83[2] = v84 - 1;
          if ( v84 == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v83 + 16LL))(v83);
            v82 = v83[3];
            v83[3] = v82 - 1;
            if ( v82 == 1 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v83 + 24LL))(v83);
          }
        }
        v14 += 2;
      }
      while ( v13 != v14 );
    }
LABEL_34:
    v14 = *(_QWORD **)(a1 + 2744);
  }
  if ( v14 )
    operator delete(v14);
  v16 = *(void **)(a1 + 2656);
  if ( v16 != (void *)(a1 + 2672) )
    free(v16);
  v17 = *(void **)(a1 + 2600);
  if ( v17 != (void *)(a1 + 2616) )
    free(v17);
  v18 = *(void **)(a1 + 2512);
  if ( v18 != (void *)(a1 + 2528) )
    free(v18);
  v19 = *(_QWORD **)(a1 + 2216);
  v20 = &v19[4 * *(unsigned int *)(a1 + 2224)];
  if ( v19 != v20 )
  {
    do
    {
      while ( 1 )
      {
        v20 -= 4;
        v21 = (volatile signed __int32 **)v20[1];
        v22 = (volatile signed __int32 **)v20[2];
        v23 = v21;
        if ( v22 != v21 )
        {
          if ( &_pthread_key_create )
          {
            do
            {
              while ( 1 )
              {
                v24 = v21[1];
                if ( v24 )
                {
                  if ( !_InterlockedSub(v24 + 2, 1u) )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
                    if ( !_InterlockedSub(v24 + 3, 1u) )
                      break;
                  }
                }
                v21 += 2;
                if ( v22 == v21 )
                  goto LABEL_52;
              }
              v21 += 2;
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 24LL))(v24);
            }
            while ( v22 != v21 );
          }
          else
          {
            do
            {
              v86 = v21[1];
              if ( v86 )
              {
                v87 = *((_DWORD *)v86 + 2);
                *((_DWORD *)v86 + 2) = v87 - 1;
                if ( v87 == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v86 + 16LL))(v86);
                  v85 = *((_DWORD *)v86 + 3);
                  *((_DWORD *)v86 + 3) = v85 - 1;
                  if ( v85 == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v86 + 24LL))(v86);
                }
              }
              v21 += 2;
            }
            while ( v22 != v21 );
          }
LABEL_52:
          v23 = (volatile signed __int32 **)v20[1];
        }
        if ( !v23 )
          break;
        operator delete(v23);
        if ( v19 == v20 )
          goto LABEL_55;
      }
    }
    while ( v19 != v20 );
LABEL_55:
    v20 = *(_QWORD **)(a1 + 2216);
  }
  if ( v20 != (_QWORD *)(a1 + 2232) )
    free(v20);
  v25 = *(_QWORD **)(a1 + 2200);
  v26 = *(_QWORD **)(a1 + 2192);
  if ( v25 != v26 )
  {
    if ( &_pthread_key_create )
    {
      v27 = (volatile signed __int32 *)v26[1];
      if ( v27 )
        goto LABEL_63;
LABEL_61:
      while ( 1 )
      {
        v26 += 2;
        if ( v25 == v26 )
          break;
        while ( 1 )
        {
          v27 = (volatile signed __int32 *)v26[1];
          if ( !v27 )
            break;
LABEL_63:
          if ( _InterlockedSub(v27 + 2, 1u) )
            goto LABEL_61;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
          if ( _InterlockedSub(v27 + 3, 1u) )
            goto LABEL_61;
          v26 += 2;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 24LL))(v27);
          if ( v25 == v26 )
            goto LABEL_66;
        }
      }
    }
    else
    {
      do
      {
        v89 = (_DWORD *)v26[1];
        if ( v89 )
        {
          v90 = v89[2];
          v89[2] = v90 - 1;
          if ( v90 == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v89 + 16LL))(v89);
            v88 = v89[3];
            v89[3] = v88 - 1;
            if ( v88 == 1 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v89 + 24LL))(v89);
          }
        }
        v26 += 2;
      }
      while ( v25 != v26 );
    }
LABEL_66:
    v26 = *(_QWORD **)(a1 + 2192);
  }
  if ( v26 )
    operator delete(v26);
  v28 = *(void **)(a1 + 2112);
  if ( v28 != (void *)(a1 + 2128) )
    free(v28);
  v29 = *(_QWORD **)(a1 + 1800);
  v30 = &v29[4 * *(unsigned int *)(a1 + 1808)];
  if ( v29 != v30 )
  {
    do
    {
      while ( 1 )
      {
        v30 -= 4;
        v31 = (volatile signed __int32 **)v30[1];
        v32 = (volatile signed __int32 **)v30[2];
        v33 = v31;
        if ( v32 != v31 )
        {
          if ( &_pthread_key_create )
          {
            do
            {
              while ( 1 )
              {
                v34 = v31[1];
                if ( v34 )
                {
                  if ( !_InterlockedSub(v34 + 2, 1u) )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
                    if ( !_InterlockedSub(v34 + 3, 1u) )
                      break;
                  }
                }
                v31 += 2;
                if ( v32 == v31 )
                  goto LABEL_80;
              }
              v31 += 2;
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 24LL))(v34);
            }
            while ( v32 != v31 );
          }
          else
          {
            do
            {
              v92 = v31[1];
              if ( v92 )
              {
                v93 = *((_DWORD *)v92 + 2);
                *((_DWORD *)v92 + 2) = v93 - 1;
                if ( v93 == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v92 + 16LL))(v92);
                  v91 = *((_DWORD *)v92 + 3);
                  *((_DWORD *)v92 + 3) = v91 - 1;
                  if ( v91 == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v92 + 24LL))(v92);
                }
              }
              v31 += 2;
            }
            while ( v32 != v31 );
          }
LABEL_80:
          v33 = (volatile signed __int32 **)v30[1];
        }
        if ( !v33 )
          break;
        operator delete(v33);
        if ( v29 == v30 )
          goto LABEL_83;
      }
    }
    while ( v29 != v30 );
LABEL_83:
    v30 = *(_QWORD **)(a1 + 1800);
  }
  if ( v30 != (_QWORD *)(a1 + 1816) )
    free(v30);
  v35 = *(_QWORD **)(a1 + 1784);
  v36 = *(_QWORD **)(a1 + 1776);
  if ( v35 != v36 )
  {
    if ( &_pthread_key_create )
    {
      v37 = (volatile signed __int32 *)v36[1];
      if ( v37 )
        goto LABEL_91;
LABEL_89:
      while ( 1 )
      {
        v36 += 2;
        if ( v35 == v36 )
          break;
        while ( 1 )
        {
          v37 = (volatile signed __int32 *)v36[1];
          if ( !v37 )
            break;
LABEL_91:
          if ( _InterlockedSub(v37 + 2, 1u) )
            goto LABEL_89;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
          if ( _InterlockedSub(v37 + 3, 1u) )
            goto LABEL_89;
          v36 += 2;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 24LL))(v37);
          if ( v35 == v36 )
            goto LABEL_94;
        }
      }
    }
    else
    {
      do
      {
        v95 = (_DWORD *)v36[1];
        if ( v95 )
        {
          v96 = v95[2];
          v95[2] = v96 - 1;
          if ( v96 == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v95 + 16LL))(v95);
            v94 = v95[3];
            v95[3] = v94 - 1;
            if ( v94 == 1 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v95 + 24LL))(v95);
          }
        }
        v36 += 2;
      }
      while ( v35 != v36 );
    }
LABEL_94:
    v36 = *(_QWORD **)(a1 + 1776);
  }
  if ( v36 )
    operator delete(v36);
  v38 = *(void **)(a1 + 1712);
  if ( v38 )
    operator delete(v38);
  v39 = *(_QWORD **)(a1 + 1352);
  v40 = &v39[4 * *(unsigned int *)(a1 + 1360)];
  if ( v39 != v40 )
  {
    do
    {
      while ( 1 )
      {
        v40 -= 4;
        v41 = (volatile signed __int32 **)v40[1];
        v42 = (volatile signed __int32 **)v40[2];
        v43 = v41;
        if ( v42 != v41 )
        {
          if ( &_pthread_key_create )
          {
            do
            {
              while ( 1 )
              {
                v44 = v41[1];
                if ( v44 )
                {
                  if ( !_InterlockedSub(v44 + 2, 1u) )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
                    if ( !_InterlockedSub(v44 + 3, 1u) )
                      break;
                  }
                }
                v41 += 2;
                if ( v42 == v41 )
                  goto LABEL_108;
              }
              v41 += 2;
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 24LL))(v44);
            }
            while ( v42 != v41 );
          }
          else
          {
            do
            {
              v98 = v41[1];
              if ( v98 )
              {
                v99 = *((_DWORD *)v98 + 2);
                *((_DWORD *)v98 + 2) = v99 - 1;
                if ( v99 == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v98 + 16LL))(v98);
                  v97 = *((_DWORD *)v98 + 3);
                  *((_DWORD *)v98 + 3) = v97 - 1;
                  if ( v97 == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v98 + 24LL))(v98);
                }
              }
              v41 += 2;
            }
            while ( v42 != v41 );
          }
LABEL_108:
          v43 = (volatile signed __int32 **)v40[1];
        }
        if ( !v43 )
          break;
        operator delete(v43);
        if ( v39 == v40 )
        {
          v40 = *(_QWORD **)(a1 + 1352);
          goto LABEL_112;
        }
      }
    }
    while ( v39 != v40 );
    v40 = *(_QWORD **)(a1 + 1352);
  }
LABEL_112:
  if ( v40 != (_QWORD *)(a1 + 1368) )
    free(v40);
  v45 = *(_QWORD **)(a1 + 1336);
  v46 = *(_QWORD **)(a1 + 1328);
  if ( v45 != v46 )
  {
    if ( &_pthread_key_create )
    {
      v47 = (volatile signed __int32 *)v46[1];
      if ( v47 )
        goto LABEL_119;
LABEL_117:
      while ( 1 )
      {
        v46 += 2;
        if ( v45 == v46 )
          break;
        while ( 1 )
        {
          v47 = (volatile signed __int32 *)v46[1];
          if ( !v47 )
            break;
LABEL_119:
          if ( _InterlockedSub(v47 + 2, 1u) )
            goto LABEL_117;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
          if ( _InterlockedSub(v47 + 3, 1u) )
            goto LABEL_117;
          v46 += 2;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 24LL))(v47);
          if ( v45 == v46 )
            goto LABEL_122;
        }
      }
    }
    else
    {
      do
      {
        v101 = (_DWORD *)v46[1];
        if ( v101 )
        {
          v102 = v101[2];
          v101[2] = v102 - 1;
          if ( v102 == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v101 + 16LL))(v101);
            v100 = v101[3];
            v101[3] = v100 - 1;
            if ( v100 == 1 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v101 + 24LL))(v101);
          }
        }
        v46 += 2;
      }
      while ( v46 != v45 );
    }
LABEL_122:
    v46 = *(_QWORD **)(a1 + 1328);
  }
  if ( v46 )
    operator delete(v46);
  v48 = *(void **)(a1 + 1248);
  if ( v48 )
    operator delete(v48);
  v49 = *(void **)(a1 + 1224);
  if ( v49 )
    operator delete(v49);
  v50 = *(_QWORD **)(a1 + 928);
  v51 = &v50[4 * *(unsigned int *)(a1 + 936)];
  if ( v50 != v51 )
  {
    do
    {
      while ( 1 )
      {
        v51 -= 4;
        v52 = (volatile signed __int32 **)v51[1];
        v53 = (volatile signed __int32 **)v51[2];
        v54 = v52;
        if ( v53 != v52 )
        {
          if ( &_pthread_key_create )
          {
            do
            {
              while ( 1 )
              {
                v55 = v52[1];
                if ( v55 )
                {
                  if ( !_InterlockedSub(v55 + 2, 1u) )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
                    if ( !_InterlockedSub(v55 + 3, 1u) )
                      break;
                  }
                }
                v52 += 2;
                if ( v53 == v52 )
                  goto LABEL_138;
              }
              v52 += 2;
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 24LL))(v55);
            }
            while ( v53 != v52 );
          }
          else
          {
            do
            {
              v104 = v52[1];
              if ( v104 )
              {
                v105 = *((_DWORD *)v104 + 2);
                *((_DWORD *)v104 + 2) = v105 - 1;
                if ( v105 == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v104 + 16LL))(v104);
                  v103 = *((_DWORD *)v104 + 3);
                  *((_DWORD *)v104 + 3) = v103 - 1;
                  if ( v103 == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v104 + 24LL))(v104);
                }
              }
              v52 += 2;
            }
            while ( v52 != v53 );
          }
LABEL_138:
          v54 = (volatile signed __int32 **)v51[1];
        }
        if ( !v54 )
          break;
        operator delete(v54);
        if ( v50 == v51 )
          goto LABEL_141;
      }
    }
    while ( v50 != v51 );
LABEL_141:
    v51 = *(_QWORD **)(a1 + 928);
  }
  if ( v51 != (_QWORD *)(a1 + 944) )
    free(v51);
  v56 = *(_QWORD **)(a1 + 912);
  v57 = *(_QWORD **)(a1 + 904);
  if ( v56 != v57 )
  {
    if ( &_pthread_key_create )
    {
      v58 = (volatile signed __int32 *)v57[1];
      if ( v58 )
        goto LABEL_149;
LABEL_147:
      while ( 1 )
      {
        v57 += 2;
        if ( v56 == v57 )
          break;
        while ( 1 )
        {
          v58 = (volatile signed __int32 *)v57[1];
          if ( !v58 )
            break;
LABEL_149:
          if ( _InterlockedSub(v58 + 2, 1u) )
            goto LABEL_147;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
          if ( _InterlockedSub(v58 + 3, 1u) )
            goto LABEL_147;
          v57 += 2;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 24LL))(v58);
          if ( v56 == v57 )
            goto LABEL_152;
        }
      }
    }
    else
    {
      do
      {
        v107 = (_DWORD *)v57[1];
        if ( v107 )
        {
          v108 = v107[2];
          v107[2] = v108 - 1;
          if ( v108 == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v107 + 16LL))(v107);
            v106 = v107[3];
            v107[3] = v106 - 1;
            if ( v106 == 1 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v107 + 24LL))(v107);
          }
        }
        v57 += 2;
      }
      while ( v56 != v57 );
    }
LABEL_152:
    v57 = *(_QWORD **)(a1 + 904);
  }
  if ( v57 )
    operator delete(v57);
  v59 = *(__int64 **)(a1 + 832);
  v60 = *(__int64 **)(a1 + 824);
  if ( v59 != v60 )
  {
    do
    {
      while ( 1 )
      {
        v61 = *v60;
        if ( !*v60 )
          break;
        ++v60;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 8LL))(v61);
        if ( v59 == v60 )
          goto LABEL_158;
      }
      ++v60;
    }
    while ( v59 != v60 );
LABEL_158:
    v60 = *(__int64 **)(a1 + 824);
  }
  if ( v60 )
    operator delete(v60);
  v62 = *(_QWORD **)(a1 + 528);
  v63 = &v62[4 * *(unsigned int *)(a1 + 536)];
  if ( v62 != v63 )
  {
    do
    {
      while ( 1 )
      {
        v63 -= 4;
        v64 = (volatile signed __int32 **)v63[1];
        v65 = (volatile signed __int32 **)v63[2];
        v66 = v64;
        if ( v65 != v64 )
        {
          if ( &_pthread_key_create )
          {
            do
            {
              while ( 1 )
              {
                v67 = v64[1];
                if ( v67 )
                {
                  if ( !_InterlockedSub(v67 + 2, 1u) )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 16LL))(v67);
                    if ( !_InterlockedSub(v67 + 3, 1u) )
                      break;
                  }
                }
                v64 += 2;
                if ( v65 == v64 )
                  goto LABEL_170;
              }
              v64 += 2;
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 24LL))(v67);
            }
            while ( v65 != v64 );
          }
          else
          {
            do
            {
              v110 = v64[1];
              if ( v110 )
              {
                v111 = *((_DWORD *)v110 + 2);
                *((_DWORD *)v110 + 2) = v111 - 1;
                if ( v111 == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v110 + 16LL))(v110);
                  v109 = *((_DWORD *)v110 + 3);
                  *((_DWORD *)v110 + 3) = v109 - 1;
                  if ( v109 == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v110 + 24LL))(v110);
                }
              }
              v64 += 2;
            }
            while ( v65 != v64 );
          }
LABEL_170:
          v66 = (volatile signed __int32 **)v63[1];
        }
        if ( !v66 )
          break;
        operator delete(v66);
        if ( v62 == v63 )
          goto LABEL_173;
      }
    }
    while ( v62 != v63 );
LABEL_173:
    v63 = *(_QWORD **)(a1 + 528);
  }
  if ( v63 != (_QWORD *)(a1 + 544) )
    free(v63);
  v68 = *(_QWORD **)(a1 + 512);
  v69 = *(_QWORD **)(a1 + 504);
  if ( v68 != v69 )
  {
    if ( &_pthread_key_create )
    {
      v70 = (volatile signed __int32 *)v69[1];
      if ( v70 )
        goto LABEL_181;
LABEL_179:
      while ( 1 )
      {
        v69 += 2;
        if ( v68 == v69 )
          break;
        while ( 1 )
        {
          v70 = (volatile signed __int32 *)v69[1];
          if ( !v70 )
            break;
LABEL_181:
          if ( _InterlockedSub(v70 + 2, 1u) )
            goto LABEL_179;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 16LL))(v70);
          if ( _InterlockedSub(v70 + 3, 1u) )
            goto LABEL_179;
          v69 += 2;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 24LL))(v70);
          if ( v68 == v69 )
            goto LABEL_184;
        }
      }
    }
    else
    {
      do
      {
        v113 = (_DWORD *)v69[1];
        if ( v113 )
        {
          v114 = v113[2];
          v113[2] = v114 - 1;
          if ( v114 == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v113 + 16LL))(v113);
            v112 = v113[3];
            v113[3] = v112 - 1;
            if ( v112 == 1 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v113 + 24LL))(v113);
          }
        }
        v69 += 2;
      }
      while ( v68 != v69 );
    }
LABEL_184:
    v69 = *(_QWORD **)(a1 + 504);
  }
  if ( v69 )
    operator delete(v69);
  v71 = *(void **)(a1 + 336);
  if ( v71 != (void *)(a1 + 352) )
    free(v71);
  v72 = *(void **)(a1 + 264);
  if ( v72 != (void *)(a1 + 280) )
    free(v72);
  v73 = *(void **)(a1 + 176);
  if ( v73 != (void *)(a1 + 192) )
    operator delete(v73);
  v74 = *(void **)(a1 + 136);
  if ( v74 != (void *)(a1 + 152) )
    operator delete(v74);
  v75 = *(void **)(a1 + 104);
  if ( v75 != (void *)(a1 + 120) )
    operator delete(v75);
  v76 = *(void **)(a1 + 72);
  if ( v76 != (void *)(a1 + 88) )
    operator delete(v76);
  v77 = *(void **)(a1 + 40);
  if ( v77 != (void *)(a1 + 56) )
    operator delete(v77);
  v78 = *(void **)(a1 + 8);
  if ( v78 != (void *)(a1 + 24) )
    operator delete(v78);
}
