/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_392E0
// Address: 0x000392E0

//----- (000392E0) --------------------------------------------------------
int __cdecl sub_392E0(int a1, unsigned int *a2, int a3)
{
  unsigned int v3; // esi
  int v4; // edi
  int v5; // esi
  int v6; // ecx
  int v7; // ecx
  int v8; // edi
  void (__cdecl *v9)(int, int, int, int, int, int); // esi
  int v10; // eax
  int v11; // edx
  int v12; // edi
  void (__cdecl *v13)(int, int, int, int, int, int); // esi
  int v14; // eax
  int v15; // edx
  int v16; // esi
  void (__cdecl *v17)(int, int, int, int, int, int); // edi
  int v18; // eax
  int v19; // edx
  int v20; // esi
  void (__cdecl *v21)(int, int, int, int, int, int); // edi
  int v22; // eax
  int v23; // edx
  int v24; // edi
  int v25; // edi
  void (__cdecl *v26)(int, int, int, int, int, int); // esi
  int v27; // eax
  int v28; // edx
  unsigned int v29; // esi
  unsigned int v30; // ecx
  char *v31; // eax
  unsigned int v32; // edi
  unsigned int v33; // ecx
  char *v34; // eax
  int v35; // esi
  int v36; // eax
  int v37; // edx
  unsigned int v38; // edi
  unsigned int v39; // eax
  unsigned int v40; // eax
  int v41; // edi
  int v42; // eax
  int v43; // edx
  unsigned __int8 *v44; // eax
  unsigned __int8 v45; // dl
  _BYTE *v46; // eax
  int v47; // esi
  size_t v48; // ecx
  int v49; // esi
  char *v50; // eax
  unsigned int v51; // ecx
  int v52; // edi
  unsigned int v53; // esi
  void *v54; // eax
  char *v55; // edi
  unsigned int v56; // ecx
  int i; // esi
  void *v58; // eax
  int v59; // edi
  unsigned int v60; // esi
  void *v61; // eax
  char *v62; // esi
  unsigned int v63; // ecx
  int j; // edi
  void *v65; // eax
  char *v66; // esi
  unsigned int v67; // ecx
  int k; // edi
  void *v69; // eax
  char *v71; // esi
  unsigned int v72; // ecx
  int m; // edi
  void *v74; // eax
  __int64 v75; // [esp-10h] [ebp-15Ch]
  __int64 v76; // [esp-10h] [ebp-15Ch]
  __int64 v77; // [esp-10h] [ebp-15Ch]
  __int64 v78; // [esp-10h] [ebp-15Ch]
  __int64 v79; // [esp-10h] [ebp-15Ch]
  __int64 v80; // [esp-10h] [ebp-15Ch]
  __int64 v81; // [esp-10h] [ebp-15Ch]
  unsigned int v82; // [esp+8h] [ebp-144h]
  unsigned int v83; // [esp+8h] [ebp-144h]
  int v84; // [esp+8h] [ebp-144h]
  int v85; // [esp+Ch] [ebp-140h]
  void (__cdecl *v86)(int, int, unsigned int, int, int, int); // [esp+Ch] [ebp-140h]
  unsigned __int8 v87; // [esp+Ch] [ebp-140h]
  int v88; // [esp+Ch] [ebp-140h]
  unsigned int v89; // [esp+Ch] [ebp-140h]
  int v90; // [esp+Ch] [ebp-140h]
  unsigned int v91; // [esp+Ch] [ebp-140h]
  unsigned int v92; // [esp+Ch] [ebp-140h]
  unsigned int v93; // [esp+Ch] [ebp-140h]
  void (__cdecl *v94)(int, int, unsigned int, int, int, int); // [esp+10h] [ebp-13Ch]
  unsigned int v95; // [esp+10h] [ebp-13Ch]
  unsigned int v96; // [esp+10h] [ebp-13Ch]
  unsigned int v97; // [esp+10h] [ebp-13Ch]
  unsigned int v98; // [esp+10h] [ebp-13Ch]
  unsigned int v99; // [esp+10h] [ebp-13Ch]
  unsigned int v100; // [esp+10h] [ebp-13Ch]
  char v101; // [esp+16h] [ebp-136h]
  unsigned __int8 v102; // [esp+17h] [ebp-135h]
  unsigned __int8 v103; // [esp+17h] [ebp-135h]
  int v104; // [esp+18h] [ebp-134h]
  _QWORD *v105; // [esp+1Ch] [ebp-130h]
  int v106; // [esp+20h] [ebp-12Ch]
  unsigned int v107; // [esp+24h] [ebp-128h] BYREF
  unsigned int v108; // [esp+28h] [ebp-124h] BYREF
  unsigned __int8 *v109; // [esp+2Ch] [ebp-120h] BYREF
  int v110; // [esp+30h] [ebp-11Ch] BYREF
  unsigned int v111; // [esp+34h] [ebp-118h]
  unsigned int v112; // [esp+38h] [ebp-114h]
  __int128 v113; // [esp+40h] [ebp-10Ch] BYREF
  __int128 dest; // [esp+50h] [ebp-FCh] BYREF
  __int128 v115; // [esp+60h] [ebp-ECh] BYREF
  void *v116[3]; // [esp+70h] [ebp-DCh] BYREF
  char *v117; // [esp+7Ch] [ebp-D0h]
  unsigned int v118; // [esp+80h] [ebp-CCh]
  int v119; // [esp+84h] [ebp-C8h]
  void *v120; // [esp+88h] [ebp-C4h]
  int v121; // [esp+8Ch] [ebp-C0h]
  int v122; // [esp+90h] [ebp-BCh]
  void *v123[3]; // [esp+B0h] [ebp-9Ch] BYREF
  char *v124; // [esp+BCh] [ebp-90h]
  unsigned int v125; // [esp+C0h] [ebp-8Ch]
  int v126; // [esp+C4h] [ebp-88h]
  void *v127; // [esp+C8h] [ebp-84h]
  int v128; // [esp+CCh] [ebp-80h]
  int v129; // [esp+D0h] [ebp-7Ch]
  __int128 v130; // [esp+F0h] [ebp-5Ch] BYREF
  __int128 v131; // [esp+100h] [ebp-4Ch] BYREF
  unsigned int v132; // [esp+110h] [ebp-3Ch]
  int v133; // [esp+114h] [ebp-38h]
  int v134; // [esp+118h] [ebp-34h]
  int v135; // [esp+11Ch] [ebp-30h]
  int v136; // [esp+120h] [ebp-2Ch] BYREF
  char v137; // [esp+124h] [ebp-28h] BYREF
  int v138; // [esp+125h] [ebp-27h] BYREF
  _DWORD v139[8]; // [esp+129h] [ebp-23h] BYREF

  *(_DWORD *)((char *)&v139[3] + 3) = __readgsdword(0x14u);
  v3 = *(_DWORD *)(a1 + 168);
  if ( !v3 )
    return 0;
  if ( !*(_BYTE *)(a1 + 176) )
  {
    if ( !(_BYTE)under_debugger )
      interr(20099);
    BUG();
  }
  if ( *(_DWORD *)(a1 + 60) <= v3 )
    return 0;
  v4 = *(_DWORD *)(a1 + 56);
  v5 = v3 << 6;
  if ( !(v5 + v4) )
    return 0;
  qlseek(*(_DWORD *)(a1 + 360), *(_QWORD *)(v4 + v5 + 24) + *(_QWORD *)(a1 + 364), 0);
  v115 = 0;
  dest = 0;
  v113 = 0;
  LOBYTE(v6) = 1;
  v104 = v6;
  if ( !*(_QWORD *)(v4 + v5 + 32) )
    goto LABEL_148;
  v105 = (_QWORD *)(v4 + v5 + 32);
  v7 = a1;
  v101 = *(_BYTE *)(a1 + 389);
  while ( 1 )
  {
    HIDWORD(v75) = &dest;
    LODWORD(v75) = *(_DWORD *)(v7 + 360);
    v8 = lreadbytes(v75, 4u, *(_BYTE *)(v7 + 476));
    if ( v8 < 0 )
    {
      v9 = *(void (__cdecl **)(int, int, int, int, int, int))(a1 + 380);
      v10 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
      v9(a1, 19, 4, v8, v10, v11);
    }
    if ( !(_DWORD)dest )
      break;
    if ( (unsigned int)dest > 0xFFFFFFEF )
      goto LABEL_146;
    v110 = 0;
    v111 = 0;
    v112 = 0;
    HIDWORD(v76) = (char *)&dest + 4;
    LODWORD(v76) = *(_DWORD *)(a1 + 360);
    v12 = lreadbytes(v76, 4u, *(_BYTE *)(a1 + 476));
    if ( v12 < 0 )
    {
      v13 = *(void (__cdecl **)(int, int, int, int, int, int))(a1 + 380);
      v14 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
      v13(a1, 19, 4, v12, v14, v15);
    }
    if ( DWORD1(dest) )
    {
      v85 = qlseek(*(_DWORD *)(a1 + 360), 0, 1) - *(_DWORD *)(a1 + 364);
      *((_QWORD *)&dest + 1) = (unsigned int)(HIDWORD(v113) + 4 - DWORD1(dest));
      HIDWORD(v77) = &v130;
      LODWORD(v77) = *(_DWORD *)(a1 + 360);
      v16 = lreadbytes(v77, 4u, *(_BYTE *)(a1 + 476));
      if ( v16 < 0 )
      {
        v17 = *(void (__cdecl **)(int, int, int, int, int, int))(a1 + 380);
        v18 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
        v17(a1, 19, 4, v16, v18, v19);
      }
      HIDWORD(v78) = &v109;
      LODWORD(v78) = *(_DWORD *)(a1 + 360);
      v20 = lreadbytes(v78, 4u, *(_BYTE *)(a1 + 476));
      if ( v20 < 0 )
      {
        v21 = *(void (__cdecl **)(int, int, int, int, int, int))(a1 + 380);
        v22 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
        v21(a1, 19, 4, v20, v22, v23);
      }
      if ( (int)dest < 12 )
      {
LABEL_19:
        v24 = 1;
        goto LABEL_139;
      }
      v32 = dest - 12;
      if ( (_DWORD)dest != 12 )
      {
        v33 = v111;
        if ( v111 >= v32 )
        {
          if ( v111 != v32 )
          {
            LOBYTE(v108) = 0;
            sub_43860((char **)&v110, v32, (char *)&v108);
          }
        }
        else
        {
          v34 = (char *)v110;
          if ( v112 < v32 )
          {
            v34 = (char *)qvector_reserve((int)&v110, (void *)v110, v32, 1u);
            v110 = (int)v34;
            v33 = v111;
          }
          memset(&v34[v33], 0, v32 - v33);
          v111 = v32;
        }
        HIDWORD(v80) = v110;
        LODWORD(v80) = *(_DWORD *)(a1 + 360);
        v35 = lreadbytes(v80, v32, *(_BYTE *)(a1 + 476));
        if ( v35 < 0 )
        {
          v94 = *(void (__cdecl **)(int, int, unsigned int, int, int, int))(a1 + 380);
          v36 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
          v94(a1, 19, v32, v35, v36, v37);
        }
        if ( v101 == 2 )
          memrev((_BYTE *)v110, v32);
        v38 = *a2;
        v39 = *a2 + (a2[1] << 6);
        if ( *a2 < v39 )
        {
          do
          {
            if ( *(_DWORD *)(v38 + 36) == DWORD2(dest) )
              break;
            v38 += 64;
          }
          while ( v38 < v39 );
        }
        if ( v38 == v39 )
          goto LABEL_19;
        v108 = v110;
        v82 = v111 + v110;
        v40 = *(_DWORD *)(v38 + 28);
        if ( v40 && **(_BYTE **)(v38 + 24) == 122 )
        {
          if ( !unpack_xleb128((int *)&v107, 32, 0, (char **)&v108, v82) )
            goto LABEL_19;
          v48 = v107;
          if ( v107 > v82 - v108 )
          {
            v107 = v82 - v108;
            v48 = v82 - v108;
          }
          DWORD1(v113) = 0;
          sub_3A950(&v113, (void *)v108, v48);
          v108 += v107;
          v40 = *(_DWORD *)(v38 + 28);
        }
        v106 = v38;
        if ( v40 >= 2 && (v49 = *(_DWORD *)(v38 + 24), (v50 = strchr((const char *)(v49 + 1), 82)) != nullptr) )
        {
          v51 = v130;
          if ( &v50[-v49] != (char *)-1 )
            v51 = v85 + v130;
        }
        else
        {
          v51 = v130;
        }
        HIDWORD(dest) = v51;
        LODWORD(v115) = &v109[v51];
        v95 = DWORD2(v115);
        if ( DWORD2(v115) )
        {
          v52 = 0;
          v53 = 0;
          do
          {
            v54 = *(void **)(DWORD1(v115) + v52);
            if ( v54 )
            {
              v88 = DWORD1(v115);
              *(_DWORD *)(DWORD1(v115) + v52 + 4) = 0;
              qfree(v54);
              *(_DWORD *)(v88 + v52) = 0;
              *(_DWORD *)(v88 + v52 + 8) = 0;
            }
            ++v53;
            v52 += 28;
          }
          while ( v53 < v95 );
          v51 = HIDWORD(dest);
        }
        DWORD2(v115) = 0;
        v107 = v51;
        while ( v108 < v82 )
        {
          sub_3ADF0(v116, v106);
          v102 = (unsigned __int8)sub_3AA30((int)&v115 + 4, (unsigned __int8 **)&v108, v82, (int)v116, v101 == 2, &v107);
          if ( v120 )
          {
            v121 = 0;
            qfree(v120);
            v120 = nullptr;
            v122 = 0;
          }
          v55 = v117;
          if ( v117 )
          {
            v96 = v118;
            if ( v118 )
            {
              v56 = 1;
              for ( i = 0; ; i += 28 )
              {
                v58 = *(void **)&v55[i];
                if ( v58 )
                {
                  v89 = v56;
                  *(_DWORD *)&v55[i + 4] = 0;
                  qfree(v58);
                  *(_DWORD *)&v55[i] = 0;
                  *(_DWORD *)&v55[i + 8] = 0;
                  v56 = v89;
                }
                if ( v56 >= v96 )
                  break;
                v55 = v117;
                ++v56;
              }
              v55 = v117;
            }
            v118 = 0;
            qfree(v55);
            v117 = nullptr;
            v119 = 0;
          }
          if ( v116[0] )
          {
            v116[1] = nullptr;
            qfree(v116[0]);
            v116[0] = nullptr;
            v116[2] = nullptr;
          }
          if ( !v102 )
            goto LABEL_19;
        }
      }
      sub_3A690(a3, (int)&v113);
      HIDWORD(v113) += dest + 4;
LABEL_138:
      v24 = 0;
      goto LABEL_139;
    }
    v132 = 0;
    v131 = 0;
    v130 = 0;
    v137 = 0;
    v136 = 0;
    v139[0] = 0;
    v138 = 0;
    v133 = HIDWORD(v113);
    v134 = dest;
    v135 = 0;
    HIDWORD(v79) = (char *)v139 + 3;
    LODWORD(v79) = *(_DWORD *)(a1 + 360);
    v25 = lreadbytes(v79, 1u, *(_BYTE *)(a1 + 476));
    if ( v25 < 0 )
    {
      v26 = *(void (__cdecl **)(int, int, int, int, int, int))(a1 + 380);
      v27 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
      v26(a1, 19, 1, v25, v27, v28);
    }
    v24 = 1;
    if ( v134 >= 5 )
    {
      v29 = v134 - 5;
      v30 = v111;
      if ( v111 >= v134 - 5 )
      {
        if ( v111 != v29 )
        {
          LOBYTE(v109) = 0;
          sub_43860((char **)&v110, v29, (char *)&v109);
        }
      }
      else
      {
        v31 = (char *)v110;
        if ( v112 < v29 )
        {
          v31 = (char *)qvector_reserve((int)&v110, (void *)v110, v29, 1u);
          v110 = (int)v31;
          v30 = v111;
        }
        memset(&v31[v30], 0, v29 - v30);
        v111 = v29;
      }
      HIDWORD(v81) = v110;
      LODWORD(v81) = *(_DWORD *)(a1 + 360);
      v41 = lreadbytes(v81, v29, *(_BYTE *)(a1 + 476));
      if ( v41 < 0 )
      {
        v86 = *(void (__cdecl **)(int, int, unsigned int, int, int, int))(a1 + 380);
        v42 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
        v86(a1, 19, v29, v41, v42, v43);
      }
      if ( v101 == 2 )
        memrev((_BYTE *)v110, v29);
      HIDWORD(v131) = 0;
      v44 = (unsigned __int8 *)v110;
      v109 = (unsigned __int8 *)v110;
      v83 = v110 + v111;
      if ( v110 < v110 + v111 )
      {
        do
        {
          v109 = v44 + 1;
          v45 = *v44;
          v47 = HIDWORD(v131);
          v46 = (_BYTE *)DWORD2(v131);
          if ( HIDWORD(v131) )
            v47 = HIDWORD(v131) - 1;
          if ( v132 < v47 + 2 )
          {
            v87 = v45;
            v46 = qvector_reserve((int)&v131 + 8, (void *)DWORD2(v131), v47 + 2, 1u);
            DWORD2(v131) = v46;
            v45 = v87;
          }
          HIDWORD(v131) = v47 + 2;
          v46[v47] = v45;
          *(_BYTE *)(DWORD2(v131) + v47 + 1) = 0;
          if ( !v45 )
            break;
          v44 = v109;
        }
        while ( (unsigned int)v109 < v83 );
      }
      v24 = 1;
      if ( unpack_xleb128(&v136, 32, 0, (char **)&v109, v83) )
      {
        if ( unpack_xleb128((int *)&v137, 32, 1, (char **)&v109, v83)
          && unpack_xleb128((int *)((char *)&v138 + 3), 32, 0, (char **)&v109, v83) )
        {
          if ( HIDWORD(v131) )
          {
            if ( *(_BYTE *)DWORD2(v131) != 122 )
            {
LABEL_101:
              v97 = v131;
              if ( (_DWORD)v131 )
              {
                v59 = 0;
                v60 = 0;
                do
                {
                  v61 = *(void **)(HIDWORD(v130) + v59);
                  if ( v61 )
                  {
                    v90 = HIDWORD(v130);
                    *(_DWORD *)(HIDWORD(v130) + v59 + 4) = 0;
                    qfree(v61);
                    *(_DWORD *)(v90 + v59) = 0;
                    *(_DWORD *)(v90 + v59 + 8) = 0;
                  }
                  ++v60;
                  v59 += 28;
                }
                while ( v60 < v97 );
              }
              LODWORD(v131) = 0;
              while ( (unsigned int)v109 < v83 )
              {
                sub_3ADF0(v123, (int)&v130);
                v103 = (unsigned __int8)sub_3AA30((int)&v130 + 12, &v109, v83, (int)v123, v101 == 2, nullptr);
                if ( v127 )
                {
                  v128 = 0;
                  qfree(v127);
                  v127 = nullptr;
                  v129 = 0;
                }
                v62 = v124;
                if ( v124 )
                {
                  v98 = v125;
                  if ( v125 )
                  {
                    v63 = 1;
                    for ( j = 0; ; j += 28 )
                    {
                      v65 = *(void **)&v62[j];
                      if ( v65 )
                      {
                        v91 = v63;
                        *(_DWORD *)&v62[j + 4] = 0;
                        qfree(v65);
                        *(_DWORD *)&v62[j] = 0;
                        *(_DWORD *)&v62[j + 8] = 0;
                        v63 = v91;
                      }
                      if ( v63 >= v98 )
                        break;
                      v62 = v124;
                      ++v63;
                    }
                    v62 = v124;
                  }
                  v125 = 0;
                  qfree(v62);
                  v124 = nullptr;
                  v126 = 0;
                }
                if ( v123[0] )
                {
                  v123[1] = nullptr;
                  qfree(v123[0]);
                  v123[0] = nullptr;
                  v123[2] = nullptr;
                }
                if ( !v103 )
                {
                  v24 = 1;
                  goto LABEL_124;
                }
              }
              sub_3AF40((int)a2, (int)&v130);
              HIDWORD(v113) += v134 + 4;
              v24 = 0;
              goto LABEL_124;
            }
          }
          else if ( byte_13BD21[0] != 122 )
          {
            goto LABEL_101;
          }
          if ( !unpack_xleb128((int *)&v108, 32, 0, (char **)&v109, v83) )
            goto LABEL_124;
          sub_3A950(&v130, v109, v108);
          v109 += v108;
          goto LABEL_101;
        }
      }
    }
LABEL_124:
    if ( DWORD2(v131) )
    {
      HIDWORD(v131) = 0;
      qfree((void *)DWORD2(v131));
      DWORD2(v131) = 0;
      v132 = 0;
    }
    v66 = (char *)HIDWORD(v130);
    if ( HIDWORD(v130) )
    {
      v99 = v131;
      if ( (_DWORD)v131 )
      {
        v84 = v24;
        v67 = 1;
        for ( k = 0; ; k += 28 )
        {
          v69 = *(void **)&v66[k];
          if ( v69 )
          {
            v92 = v67;
            *(_DWORD *)&v66[k + 4] = 0;
            qfree(v69);
            *(_DWORD *)&v66[k] = 0;
            *(_DWORD *)&v66[k + 8] = 0;
            v67 = v92;
          }
          if ( v67 >= v99 )
            break;
          v66 = (char *)HIDWORD(v130);
          ++v67;
        }
        v66 = (char *)HIDWORD(v130);
        v24 = v84;
      }
      LODWORD(v131) = 0;
      qfree(v66);
      HIDWORD(v130) = 0;
      DWORD1(v131) = 0;
    }
    if ( (_DWORD)v130 )
    {
      DWORD1(v130) = 0;
      qfree((void *)v130);
      LODWORD(v130) = 0;
      DWORD2(v130) = 0;
    }
    if ( !v24 )
      goto LABEL_138;
LABEL_139:
    if ( v110 )
    {
      v111 = 0;
      qfree((void *)v110);
      v110 = 0;
      v112 = 0;
    }
    if ( v24 )
    {
LABEL_146:
      v104 = 0;
      goto LABEL_148;
    }
    v7 = a1;
    if ( (unsigned __int64)SHIDWORD(v113) >= *v105 )
      goto LABEL_148;
  }
  sub_3A690(a3, (int)&v113);
LABEL_148:
  v71 = (char *)DWORD1(v115);
  if ( DWORD1(v115) )
  {
    v100 = DWORD2(v115);
    if ( DWORD2(v115) )
    {
      v72 = 1;
      for ( m = 0; ; m += 28 )
      {
        v74 = *(void **)&v71[m];
        if ( v74 )
        {
          v93 = v72;
          *(_DWORD *)&v71[m + 4] = 0;
          qfree(v74);
          *(_DWORD *)&v71[m] = 0;
          *(_DWORD *)&v71[m + 8] = 0;
          v72 = v93;
        }
        if ( v72 >= v100 )
          break;
        v71 = (char *)DWORD1(v115);
        ++v72;
      }
      v71 = (char *)DWORD1(v115);
    }
    DWORD2(v115) = 0;
    qfree(v71);
    DWORD1(v115) = 0;
    HIDWORD(v115) = 0;
  }
  if ( (_DWORD)v113 )
  {
    DWORD1(v113) = 0;
    qfree((void *)v113);
    LODWORD(v113) = 0;
    DWORD2(v113) = 0;
  }
  return v104;
}
// 3937F: variable 'v6' is possibly undefined
// 393FD: variable 'v11' is possibly undefined
// 39481: variable 'v15' is possibly undefined
// 39519: variable 'v19' is possibly undefined
// 39570: variable 'v23' is possibly undefined
// 3964D: variable 'v28' is possibly undefined
// 3977F: variable 'v37' is possibly undefined
// 39870: variable 'v43' is possibly undefined
// F3564: using guessed type int dword_F3564[41];
// 13E34C: using guessed type int under_debugger;
