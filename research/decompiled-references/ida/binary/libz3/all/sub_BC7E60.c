__int64 __fastcall sub_BC7E60(__int64 a1, unsigned int *a2, __int64 *a3, __int64 *a4)
{
  unsigned int v4; // r14d
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned int *v10; // r13
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 i; // r15
  __int64 v16; // rax
  unsigned int *v17; // r14
  unsigned int *v18; // r15
  __int64 v19; // rax
  unsigned int v20; // edx
  bool v21; // zf
  _DWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // edi
  unsigned int **v26; // rax
  unsigned int *v27; // rsi
  __int64 v28; // rbx
  _DWORD *v29; // rax
  unsigned int *v30; // rsi
  unsigned int v31; // eax
  __int64 v32; // rdi
  unsigned int v33; // r15d
  char v34; // al
  unsigned int *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rsi
  unsigned int v38; // ecx
  __int64 v39; // rdi
  __int64 v40; // rsi
  unsigned int v41; // ecx
  __int64 v42; // rdi
  __int64 v43; // rax
  unsigned int v44; // ecx
  __int64 v45; // rdi
  __int64 v46; // rax
  unsigned int v47; // ecx
  __int64 v48; // rdi
  __int64 v49; // rax
  unsigned int v50; // ecx
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rax
  unsigned int *v55; // rdx
  unsigned int v56; // ecx
  __m128 v57; // xmm0
  __int64 v58; // rdi
  __int64 v59; // rax
  unsigned int v60; // ecx
  __int64 v61; // rax
  __int64 v62; // rdi
  __m128 v63; // xmm0
  __int64 v64; // rax
  unsigned int *v65; // rdx
  __int64 v66; // rdi
  __m128 v67; // xmm0
  __int64 v68; // rax
  __int64 v69; // r14
  __int64 v70; // rax
  __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // r14
  __int64 v74; // rax
  unsigned int *v75; // rdx
  __int64 v76; // rdi
  __m128 v77; // xmm0
  __int64 v78; // rax
  unsigned int *v79; // rdx
  __int64 v80; // rdi
  __int64 v81; // rax
  __int64 v82; // r14
  __int64 v83; // rax
  unsigned int *v84; // rax
  __int64 v85; // rdi
  __int64 v86; // rsi
  _DWORD *v88; // [rsp+18h] [rbp-170h]
  unsigned int *v89; // [rsp+18h] [rbp-170h]
  __int64 v90; // [rsp+18h] [rbp-170h]
  unsigned int *v91; // [rsp+18h] [rbp-170h]
  unsigned int *v92; // [rsp+18h] [rbp-170h]
  unsigned int *v93; // [rsp+18h] [rbp-170h]
  unsigned int *v94; // [rsp+18h] [rbp-170h]
  unsigned int *v95; // [rsp+18h] [rbp-170h]
  unsigned int *v96; // [rsp+18h] [rbp-170h]
  unsigned int *v97; // [rsp+18h] [rbp-170h]
  unsigned int *v98; // [rsp+20h] [rbp-168h] BYREF
  unsigned int *v99; // [rsp+28h] [rbp-160h] BYREF
  __int64 v100; // [rsp+30h] [rbp-158h]
  double v101[2]; // [rsp+38h] [rbp-150h] BYREF
  __int64 v102[2]; // [rsp+48h] [rbp-140h] BYREF
  unsigned int *v103; // [rsp+58h] [rbp-130h] BYREF
  __m128 v104; // [rsp+60h] [rbp-128h]
  __m128 v105; // [rsp+70h] [rbp-118h]
  __m128 v106; // [rsp+80h] [rbp-108h]
  __m128 v107; // [rsp+90h] [rbp-F8h]
  __m128 v108; // [rsp+A0h] [rbp-E8h]
  __m128 v109; // [rsp+B0h] [rbp-D8h]
  __int64 v110; // [rsp+C0h] [rbp-C8h]
  __m128 v111; // [rsp+D0h] [rbp-B8h]
  __int64 v112; // [rsp+E0h] [rbp-A8h]
  __m128 v113; // [rsp+F0h] [rbp-98h]
  __int64 v114; // [rsp+100h] [rbp-88h]
  __m128 v115; // [rsp+110h] [rbp-78h]
  __int64 v116; // [rsp+120h] [rbp-68h]
  _OWORD v117[5]; // [rsp+130h] [rbp-58h] BYREF

  v4 = 1;
  sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, a2, a3);
  v8 = *a4;
  v9 = *((_QWORD *)&v117[0] + 1);
  *a4 = *(_QWORD *)&v117[0];
  sub_BB0560(v8, v9);
  v10 = (unsigned int *)*a4;
  if ( !*a4 )
  {
    v102[0] = 0;
    v12 = *(_QWORD *)(a1 + 152);
    if ( v12 )
    {
      v13 = *a2;
      v14 = 0;
      for ( i = (__int64)a2; ; i = (__int64)v17 )
      {
        if ( (unsigned int)v13 >= *(_DWORD *)(v12 - 4) )
          goto LABEL_13;
        v16 = v12 + 24 * v13;
        v17 = *(unsigned int **)(v16 + 8);
        if ( !v17 )
          goto LABEL_13;
        v18 = *(unsigned int **)(v16 + 16);
        if ( !v14 )
          break;
        if ( v18 == (unsigned int *)v14 || !v18 )
          goto LABEL_48;
        v88 = (_DWORD *)v14;
        v19 = sub_180C100(*(_QWORD *)(*(_QWORD *)(a1 + 144) + 56LL), 24);
        *v88 = (*v88 + 1) & 0x3FFFFFFF | *v88 & 0xC0000000;
        v20 = *v18;
        v14 = v19;
        v102[0] = v19;
        *v18 = (v20 + 1) & 0x3FFFFFFF | v20 & 0xC0000000;
        *(_QWORD *)v19 = 0;
        v12 = *(_QWORD *)(a1 + 152);
        *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v88, (__m128i)(unsigned __int64)v18);
        if ( !v12 )
        {
          i = (__int64)v17;
          goto LABEL_13;
        }
LABEL_11:
        v13 = *v17;
      }
      v14 = *(_QWORD *)(v16 + 16);
LABEL_48:
      v102[0] = v14;
      goto LABEL_11;
    }
    v14 = 0;
    i = (__int64)a2;
LABEL_13:
    v21 = *(_WORD *)(i + 4) == 0;
    v100 = *(_QWORD *)(a1 + 24);
    if ( v21 )
    {
      v22 = *(_DWORD **)(*(_QWORD *)(i + 16) + 24LL);
      if ( v22 )
      {
        if ( *(_DWORD *)(a1 + 1744) == *v22 && v22[1] == 2 && *(_DWORD *)(i + 24) == 2 )
        {
          v91 = *(unsigned int **)(i + 40);
          sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, *(unsigned int **)(i + 32), v102);
          v98 = *(unsigned int **)&v117[0];
          sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, v91, v102);
          v99 = *(unsigned int **)&v117[0];
          LOBYTE(v38) = *(_QWORD *)&v117[0] == 0 || v98 == nullptr;
          v4 = v38;
          if ( !(_BYTE)v38 )
          {
            sub_BCEE10(v117, a1, v98, *(_QWORD *)&v117[0]);
            v39 = *a4;
            v40 = *((_QWORD *)&v117[0] + 1);
            *a4 = *(_QWORD *)&v117[0];
            sub_BB0560(v39, v40);
            i = *a4;
            v101[0] = 0.0;
            v90 = 0;
            goto LABEL_19;
          }
          goto LABEL_73;
        }
      }
    }
    v89 = (unsigned int *)v14;
    v4 = sub_BCED40(a1 + 1728, i);
    if ( (_BYTE)v4 )
      goto LABEL_18;
    if ( *(_WORD *)(i + 4) )
      goto LABEL_18;
    v29 = *(_DWORD **)(*(_QWORD *)(i + 16) + 24LL);
    if ( !v29 )
      goto LABEL_18;
    if ( *(_DWORD *)(a1 + 1744) != *v29 )
      goto LABEL_36;
    if ( v29[1] == 41 )
      goto LABEL_18;
    if ( v29[1] == 3 && *(_DWORD *)(i + 24) == 2 )
    {
      v93 = *(unsigned int **)(i + 40);
      sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, *(unsigned int **)(i + 32), v102);
      v98 = *(unsigned int **)&v117[0];
      sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, v93, v102);
      v99 = *(unsigned int **)&v117[0];
      LOBYTE(v44) = v98 == nullptr || *(_QWORD *)&v117[0] == 0;
      v4 = v44;
      if ( !(_BYTE)v44 )
      {
        v45 = *(_QWORD *)(a1 + 1736);
        v104 = _mm_loadh_ps((const double *)&v99);
        v46 = sub_15E1AF0(v45);
        i = v46;
        if ( v46 )
          ++*(_DWORD *)(v46 + 8);
LABEL_69:
        sub_BB0560(*a4, a4[1]);
        *a4 = i;
        v101[0] = 0.0;
        v90 = 0;
        goto LABEL_19;
      }
      goto LABEL_73;
    }
    if ( v29[1] == 4 && *(_DWORD *)(i + 24) == 2 )
    {
      v94 = *(unsigned int **)(i + 40);
      sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, *(unsigned int **)(i + 32), v102);
      v98 = *(unsigned int **)&v117[0];
      sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, v94, v102);
      v99 = *(unsigned int **)&v117[0];
      LOBYTE(v47) = v98 == nullptr || *(_QWORD *)&v117[0] == 0;
      v4 = v47;
      if ( !(_BYTE)v47 )
      {
        v48 = *(_QWORD *)(a1 + 1736);
        v105 = _mm_loadh_ps((const double *)&v99);
        v49 = sub_15E1AF0(v48);
        i = v49;
        if ( v49 )
          ++*(_DWORD *)(v49 + 8);
        goto LABEL_69;
      }
LABEL_73:
      v101[0] = 0.0;
      v90 = 0;
      goto LABEL_32;
    }
    if ( v29[1] == 5 && *(_DWORD *)(i + 24) == 2 )
    {
      v95 = *(unsigned int **)(i + 40);
      sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, *(unsigned int **)(i + 32), v102);
      v98 = *(unsigned int **)&v117[0];
      sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, v95, v102);
      v99 = *(unsigned int **)&v117[0];
      LOBYTE(v50) = *(_QWORD *)&v117[0] == 0 || v98 == nullptr;
      v4 = v50;
      if ( !(_BYTE)v50 )
      {
        v51 = *(_QWORD *)(a1 + 1736);
        v106 = _mm_loadh_ps((const double *)&v99);
        v52 = sub_15E1AF0(v51);
        i = v52;
        if ( v52 )
          ++*(_DWORD *)(v52 + 8);
        goto LABEL_69;
      }
      goto LABEL_73;
    }
    if ( !v29[1] && *(_DWORD *)(i + 24) == 1 )
    {
      sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, *(unsigned int **)(i + 32), v102);
      v98 = *(unsigned int **)&v117[0];
      if ( *(_QWORD *)&v117[0] )
      {
        v53 = *(_QWORD *)(a1 + 1736);
        v102[1] = *(_QWORD *)&v117[0];
        v54 = sub_15E1AF0(v53);
        i = v54;
        if ( v54 )
          ++*(_DWORD *)(v54 + 8);
        sub_BB0560(*a4, a4[1]);
        *a4 = i;
        v101[0] = 0.0;
        v90 = 0;
        v99 = nullptr;
        goto LABEL_19;
      }
      v4 = 1;
      v101[0] = 0.0;
      v90 = 0;
      v99 = nullptr;
LABEL_32:
      v28 = v100;
      sub_BB0560(*(__int64 *)&v101[0], v100);
      sub_BB0560(v90, v28);
      sub_BB0560((__int64)v99, v28);
      sub_BB0560((__int64)v98, v28);
      return v4;
    }
    if ( v29[1] == 13 && *(_DWORD *)(i + 24) == 2 )
    {
      v97 = *(unsigned int **)(i + 40);
      sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, *(unsigned int **)(i + 32), v102);
      v98 = *(unsigned int **)&v117[0];
      sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, v97, v102);
      v99 = *(unsigned int **)&v117[0];
      LOBYTE(v60) = *(_QWORD *)&v117[0] == 0 || v98 == nullptr;
      v4 = v60;
      if ( !(_BYTE)v60 )
      {
        v61 = sub_993400(a1 + 1832, 0);
        v62 = *(_QWORD *)(a1 + 1736);
        v63 = _mm_loadh_ps((const double *)&v99);
        v110 = v61;
        v109 = v63;
        v64 = sub_15E1AF0(v62);
        i = v64;
        if ( v64 )
          ++*(_DWORD *)(v64 + 8);
        goto LABEL_69;
      }
      goto LABEL_73;
    }
    if ( v29[1] == 13 && *(_DWORD *)(i + 24) == 3 )
    {
      v55 = *(unsigned int **)(i + 32);
      v96 = *(unsigned int **)(i + 40);
      v101[0] = *(double *)(i + 48);
      sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, v55, v102);
      v98 = *(unsigned int **)&v117[0];
      sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, v96, v102);
      v99 = *(unsigned int **)&v117[0];
      LOBYTE(v56) = *(_QWORD *)&v117[0] == 0 || v98 == nullptr;
      v4 = v56;
      if ( !(_BYTE)v56 )
      {
        v57 = _mm_loadh_ps((const double *)&v99);
        v58 = *(_QWORD *)(a1 + 1736);
        v112 = *(_QWORD *)&v101[0];
        v111 = v57;
        v59 = sub_15E1AF0(v58);
        i = v59;
        if ( v59 )
          ++*(_DWORD *)(v59 + 8);
        goto LABEL_69;
      }
      goto LABEL_73;
    }
    if ( v29[1] == 20 && *(_DWORD *)(i + 24) == 2 )
    {
      sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, *(unsigned int **)(i + 40), v102);
      v99 = *(unsigned int **)&v117[0];
      if ( *(_QWORD *)&v117[0] )
      {
        v71 = *(_QWORD *)(a1 + 1736);
        v107 = _mm_loadh_ps((const double *)&v99);
        v72 = sub_15E1AF0(v71);
        v73 = v72;
        if ( v72 )
          ++*(_DWORD *)(v72 + 8);
        sub_BB0560(*a4, a4[1]);
        v74 = *(_QWORD *)(a1 + 16);
        *a4 = v73;
        sub_14B9B80(v74 + 7456, a4);
        i = *a4;
        v101[0] = 0.0;
        v90 = 0;
        v98 = nullptr;
        goto LABEL_19;
      }
      goto LABEL_109;
    }
    if ( v29[1] == 21 && *(_DWORD *)(i + 24) == 3 )
    {
      v65 = *(unsigned int **)(i + 48);
      v98 = *(unsigned int **)(i + 40);
      sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, v65, v102);
      v90 = *(_QWORD *)&v117[0];
      if ( *(_QWORD *)&v117[0] )
      {
        v66 = *(_QWORD *)(a1 + 1736);
        v67 = _mm_loadh_ps((const double *)&v98);
        v114 = *(_QWORD *)&v117[0];
        v113 = v67;
        v68 = sub_15E1AF0(v66);
        v69 = v68;
        if ( v68 )
          ++*(_DWORD *)(v68 + 8);
LABEL_108:
        sub_BB0560(*a4, a4[1]);
        v70 = *(_QWORD *)(a1 + 16);
        *a4 = v69;
        sub_14B9B80(v70 + 7456, a4);
        v101[0] = 0.0;
        i = *a4;
        v99 = nullptr;
        v98 = nullptr;
        goto LABEL_19;
      }
    }
    else if ( v29[1] == 22 && *(_DWORD *)(i + 24) == 3 )
    {
      v75 = *(unsigned int **)(i + 48);
      v98 = *(unsigned int **)(i + 40);
      sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, v75, v102);
      v90 = *(_QWORD *)&v117[0];
      if ( *(_QWORD *)&v117[0] )
      {
        v76 = *(_QWORD *)(a1 + 1736);
        v77 = _mm_loadh_ps((const double *)&v98);
        v116 = *(_QWORD *)&v117[0];
        v115 = v77;
        v78 = sub_15E1AF0(v76);
        v69 = v78;
        if ( v78 )
          ++*(_DWORD *)(v78 + 8);
        goto LABEL_108;
      }
    }
    else
    {
      if ( v29[1] != 23 || *(_DWORD *)(i + 24) != 4 )
      {
        if ( v29[1] != 14 )
        {
LABEL_36:
          if ( !*v29 && v29[1] == 4 )
          {
            v30 = *(unsigned int **)(i + 32);
            v98 = *(unsigned int **)(i + 40);
            v99 = *(unsigned int **)(i + 48);
            v31 = sub_966440(a1, v30);
            v32 = *(_QWORD *)(a1 + 16);
            v33 = v31;
            v34 = *(_BYTE *)(*(_QWORD *)(v32 + 8848) + v31);
            if ( v34 )
            {
              if ( v34 == 1 )
              {
                v84 = (unsigned int *)sub_180C100(*(_QWORD *)(a1 + 120), 32);
                v84[6] = v33;
                *(_QWORD *)v84 = 0x80000000LL;
                *(_OWORD *)(v84 + 2) = 0;
                if ( v89 && v89 != v84 )
                  v84 = (unsigned int *)sub_BB01E0(*(_QWORD *)(a1 + 120), v89, v84);
                v102[0] = (__int64)v84;
                sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, v98, v102);
                v85 = *a4;
                v86 = *((_QWORD *)&v117[0] + 1);
                *a4 = *(_QWORD *)&v117[0];
                sub_BB0560(v85, v86);
                if ( *a4 )
                  goto LABEL_45;
              }
              else
              {
                if ( v34 != -1 )
                  goto LABEL_45;
                v35 = (unsigned int *)sub_180C100(*(_QWORD *)(a1 + 120), 32);
                v35[6] = v33 ^ 1;
                *(_QWORD *)v35 = 0x80000000LL;
                *(_OWORD *)(v35 + 2) = 0;
                if ( v89 && v89 != v35 )
                  v35 = (unsigned int *)sub_BB01E0(*(_QWORD *)(a1 + 120), v89, v35);
                v102[0] = (__int64)v35;
                sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, v99, v102);
                v36 = *a4;
                v37 = *((_QWORD *)&v117[0] + 1);
                *a4 = *(_QWORD *)&v117[0];
                sub_BB0560(v36, v37);
                if ( *a4 )
                {
LABEL_45:
                  v101[0] = 0.0;
                  i = *a4;
                  v90 = 0;
                  v99 = nullptr;
                  v98 = nullptr;
                  goto LABEL_19;
                }
              }
              v4 = 1;
            }
            else
            {
              sub_9936C0(v32, v33 >> 1);
              *(_BYTE *)(a1 + 4170) = 1;
            }
            v101[0] = 0.0;
            v90 = 0;
            v99 = nullptr;
            v98 = nullptr;
            goto LABEL_32;
          }
LABEL_18:
          ++*(_DWORD *)(i + 8);
          sub_BB0560(*a4, a4[1]);
          *a4 = i;
          v101[0] = 0.0;
          v90 = 0;
          v99 = nullptr;
          v98 = nullptr;
LABEL_19:
          if ( a2 == (unsigned int *)i )
            v102[0] = 0;
          else
            v10 = (unsigned int *)v102[0];
          ++a2[2];
          v103 = a2;
          sub_BB70A0((_QWORD *)(a1 + 176), &v103);
          *(_QWORD *)&v117[0] = i;
          if ( i )
            ++*(_DWORD *)(i + 8);
          sub_BB70A0((_QWORD *)(a1 + 176), v117);
          v23 = *a2;
          v24 = *(_QWORD *)(a1 + 160);
          if ( v24 )
            v25 = *(_DWORD *)(v24 - 4);
          else
            v25 = 0;
          if ( v25 < 2 * (int)v23 + 1 )
          {
            sub_BD2D60(a1 + 160);
            v23 = *a2;
            v24 = *(_QWORD *)(a1 + 160);
          }
          v26 = (unsigned int **)(v24 + 24 * v23);
          *v26 = a2;
          v26[1] = (unsigned int *)i;
          v26[2] = v10;
          v27 = (unsigned int *)*a3;
          if ( *a3 )
          {
            if ( v10 && v27 != v10 )
              v27 = (unsigned int *)sub_BB01E0(*(_QWORD *)(a1 + 120), v27, v10);
          }
          else
          {
            v27 = v10;
          }
          v4 = 1;
          *a3 = (__int64)v27;
          goto LABEL_32;
        }
        if ( *(_DWORD *)(i + 24) != 2 )
          goto LABEL_18;
        v92 = *(unsigned int **)(i + 40);
        sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, *(unsigned int **)(i + 32), v102);
        v98 = *(unsigned int **)&v117[0];
        sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, v92, v102);
        v99 = *(unsigned int **)&v117[0];
        LOBYTE(v41) = *(_QWORD *)&v117[0] == 0 || v98 == nullptr;
        v4 = v41;
        if ( !(_BYTE)v41 )
        {
          v42 = *(_QWORD *)(a1 + 1736);
          v108 = _mm_loadh_ps((const double *)&v99);
          v43 = sub_15E1AF0(v42);
          i = v43;
          if ( v43 )
            ++*(_DWORD *)(v43 + 8);
          goto LABEL_69;
        }
        goto LABEL_73;
      }
      v79 = *(unsigned int **)(i + 56);
      v98 = *(unsigned int **)(i + 40);
      sub_BB9A80((unsigned int **)v117, (_QWORD *)a1, v79, v102);
      v101[0] = *(double *)v117;
      if ( *(_QWORD *)&v117[0] )
      {
        v80 = *(_QWORD *)(a1 + 1736);
        v117[0] = _mm_loadh_ps((const double *)&v98);
        v117[1] = _mm_loadh_ps(v101);
        v81 = sub_15E1AF0(v80);
        v82 = v81;
        if ( v81 )
          ++*(_DWORD *)(v81 + 8);
        sub_BB0560(*a4, a4[1]);
        v83 = *(_QWORD *)(a1 + 16);
        *a4 = v82;
        sub_14B9B80(v83 + 7456, a4);
        v90 = 0;
        i = *a4;
        v99 = nullptr;
        v98 = nullptr;
        goto LABEL_19;
      }
    }
LABEL_109:
    v101[0] = 0.0;
    v4 = 1;
    v90 = 0;
    v99 = nullptr;
    v98 = nullptr;
    goto LABEL_32;
  }
  return v4;
}

