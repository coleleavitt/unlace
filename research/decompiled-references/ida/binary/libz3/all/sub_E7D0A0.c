__int64 __fastcall sub_E7D0A0(__int64 a1, _QWORD *a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v8; // rsi
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 i; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // rax
  _DWORD *v15; // rsi
  size_t v16; // rdx
  _QWORD *v17; // rax
  unsigned int v18; // r12d
  __int64 v19; // rsi
  _DWORD *v20; // rdx
  __int64 v21; // r14
  __int64 v22; // r15
  int v23; // eax
  _DWORD *v24; // rdx
  int v25; // eax
  _DWORD *v26; // rdx
  unsigned int v27; // esi
  char v28; // r14
  int v29; // r15d
  __int64 v30; // rsi
  _QWORD *v31; // rcx
  __int64 result; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // r12
  __int64 *v41; // r8
  int v42; // ecx
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rdi
  char v46; // cl
  int v47; // edi
  __int64 v48; // rax
  char v49; // cl
  unsigned int v50; // r9d
  int v51; // edi
  __int64 v52; // rsi
  char v53; // al
  __int64 v54; // rsi
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rdi
  char v58; // r9
  char v59; // cl
  char v60; // r9
  unsigned int v61; // r13d
  __int64 v62; // rcx
  __int64 v63; // rsi
  unsigned int **v64; // r12
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rsi
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  __int64 v71; // rcx
  unsigned int v72; // r12d
  __int64 v73; // rax
  __int64 v74; // rdx
  _DWORD *v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rsi
  char v79; // cl
  unsigned __int64 v80; // r13
  __int64 *v81; // r12
  __int64 v82; // rsi
  double v83; // rdi
  unsigned int v85; // r15d
  __int64 v86; // rdx
  _DWORD *v87; // rsi
  __int64 v88; // r13
  _DWORD *v89; // rsi
  int v90; // edi
  __int64 v91; // r14
  _DWORD *v92; // rdx
  void *v93; // rdi
  unsigned int j; // edx
  __int64 v95; // r15
  __int64 v96; // r14
  __int64 *v97; // rdi
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // r13
  __int64 v103; // rax
  int v104[2]; // [rsp+0h] [rbp-108h]
  __int64 v105; // [rsp+8h] [rbp-100h]
  __int64 v106; // [rsp+10h] [rbp-F8h]
  void *ptr; // [rsp+18h] [rbp-F0h]
  int v108[2]; // [rsp+20h] [rbp-E8h]
  int v109[2]; // [rsp+28h] [rbp-E0h]
  __int64 **v110; // [rsp+30h] [rbp-D8h]
  char v111; // [rsp+3Fh] [rbp-C9h]
  int v112; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v113; // [rsp+4Ch] [rbp-BCh] BYREF
  __m128 v114; // [rsp+50h] [rbp-B8h] BYREF
  __m128 v115; // [rsp+60h] [rbp-A8h] BYREF
  __m128 v116; // [rsp+70h] [rbp-98h] BYREF
  __m128 v117; // [rsp+80h] [rbp-88h] BYREF
  __m128 v118; // [rsp+90h] [rbp-78h] BYREF
  __m128 v119; // [rsp+A0h] [rbp-68h] BYREF
  __m128 v120; // [rsp+B0h] [rbp-58h] BYREF
  int v121; // [rsp+C0h] [rbp-48h]
  int v122; // [rsp+C4h] [rbp-44h]

  sub_15EE300(a4);
  v8 = *(_QWORD *)(a4 + 8);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 - 4);
    if ( v9 > 1 )
    {
      v10 = v9;
      for ( i = 0; i != v9; ++i )
      {
        v12 = *(_QWORD *)(v8 + 8 * i);
        if ( *(_WORD *)(v12 + 4) || (*(_BYTE *)(v12 + 30) & 1) == 0 )
        {
          if ( v9 != (_DWORD)v10 )
            goto LABEL_10;
          v10 = (unsigned int)i;
        }
      }
      if ( (unsigned int)v10 < v9 )
      {
        v69 = *(_QWORD *)a1;
        v119.m128_u64[0] = 0;
        v119.m128_u64[1] = v69;
        v70 = *(_QWORD *)(v8 + 8 * v10);
        if ( v70 )
          ++*(_DWORD *)(v70 + 8);
        v119.m128_u64[0] = v70;
        sub_E7DE00(a1, a2, a3);
        v120 = _mm_loadh_ps((const double *)a4);
        sub_E65C70((__int64 **)&v120, v119.m128_i64[0]);
        return sub_E65BC0(v119.m128_i64[0], v119.m128_i64[1]);
      }
    }
  }
LABEL_10:
  v120.m128_u64[1] = 0;
  v120.m128_u64[0] = (unsigned __int64)&off_1C5D190;
  if ( *a2 )
  {
    v13 = _mm_loadl_epi64((const __m128i *)(*a2 - 8LL));
    *(_QWORD *)v104 = v13.m128i_i64[0];
    v14 = sub_186B270(4LL * (unsigned int)_mm_cvtsi128_si32(v13) + 8);
    v15 = (_DWORD *)*a2;
    v120.m128_u64[1] = v14 + 8;
    *(_QWORD *)v14 = v13.m128i_i64[0];
    if ( v15 )
    {
      v16 = 4LL * (unsigned int)*(v15 - 1);
      if ( v16 <= 4 )
      {
        if ( v16 == 4 )
          *(_DWORD *)(v14 + 8) = *v15;
      }
      else
      {
        memmove((void *)(v14 + 8), v15, v16);
      }
    }
  }
  v121 = 0;
  v122 = a3 ^ 1;
  v106 = a1 + 8;
  sub_E72F60((_QWORD *)(a1 + 8), (__int64)&v120);
  *(_QWORD *)(a1 + 904) = &v120;
  v17 = *(_QWORD **)(a4 + 8);
  *(_QWORD *)v108 = a1 + 32;
  *(_QWORD *)(a1 + 1752) = &v120;
  v110 = (__int64 **)&v116;
  do
  {
    v112 = 0;
    v113 = 0;
    if ( !v17 )
    {
LABEL_34:
      v17 = nullptr;
      v27 = 0;
      goto LABEL_35;
    }
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= *((_DWORD *)v17 - 1) )
        goto LABEL_68;
      v19 = v17[v18];
      if ( v19 == *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL) )
        break;
      if ( *(_WORD *)(v19 + 4)
        || (*(_BYTE *)(v19 + 30) & 1) != 0
        || (v20 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL)) == nullptr
        || *v20
        || v20[1] != 2
        || *(_DWORD *)(v19 + 24) != 2
        || (v21 = *(_QWORD *)(v19 + 32), *(_WORD *)(v21 + 4))
        || (v22 = *(_QWORD *)(v19 + 40), *(_WORD *)(v22 + 4)) )
      {
        ++v18;
      }
      else
      {
        *(_QWORD *)v104 = *(_QWORD *)(v21 + 16);
        v23 = sub_15F0200(*(_QWORD *)v108);
        v24 = *(_DWORD **)(*(_QWORD *)v104 + 24LL);
        if ( v24 && v23 == *v24 && !v24[1] )
        {
          sub_E6E740((__int64 *)v106, v21, v22, a4);
          v66 = 0x7FFFFFFF8LL;
          v67 = *(_QWORD *)(a4 + 8);
          if ( v67 )
            v66 = 8LL * (unsigned int)(*(_DWORD *)(v67 - 4) - 1);
          v68 = *(_QWORD *)(v67 + v66);
          v115 = _mm_loadh_ps((const double *)a4);
          sub_E65C70((__int64 **)&v115, v68);
LABEL_103:
          sub_39BF70((__int64 *)a4);
          v17 = *(_QWORD **)(a4 + 8);
          goto LABEL_33;
        }
        *(_QWORD *)v104 = *(_QWORD *)(v22 + 16);
        v25 = sub_15F0200(*(_QWORD *)v108);
        v26 = *(_DWORD **)(*(_QWORD *)v104 + 24LL);
        if ( v26 && v25 == *v26 && !v26[1] )
        {
          sub_E6E740((__int64 *)v106, v22, v21, a4);
          v76 = 0x7FFFFFFF8LL;
          v77 = *(_QWORD *)(a4 + 8);
          if ( v77 )
            v76 = 8LL * (unsigned int)(*(_DWORD *)(v77 - 4) - 1);
          v78 = *(_QWORD *)(v77 + v76);
          v114 = _mm_loadh_ps((const double *)a4);
          sub_E65C70((__int64 **)&v114, v78);
          goto LABEL_103;
        }
        v17 = *(_QWORD **)(a4 + 8);
        ++v18;
LABEL_33:
        if ( !v17 )
          goto LABEL_34;
      }
    }
    v116 = _mm_loadh_ps((const double *)a4);
    sub_E65C70(v110, v19);
    v17 = *(_QWORD **)(a4 + 8);
    v64 = (unsigned int **)(a4 + 8);
    if ( !v17 )
      goto LABEL_65;
    v65 = *((unsigned int *)v17 - 1);
    v64 = (unsigned int **)(a4 + 8);
    if ( (unsigned int)v65 <= 1 )
    {
      if ( (_DWORD)v65 )
        goto LABEL_98;
LABEL_65:
      while ( !v17 || !*((_DWORD *)v17 - 2) )
      {
LABEL_64:
        sub_23A6F0(v64);
        v17 = *(_QWORD **)(a4 + 8);
      }
      *((_DWORD *)v17 - 1) = 1;
      *v17 = 0;
LABEL_68:
      v27 = *((_DWORD *)v17 - 1);
      goto LABEL_35;
    }
    v80 = (unsigned __int64)&v17[v65];
    v81 = v17 + 1;
    if ( (unsigned __int64)(v17 + 1) < v80 )
    {
      do
      {
        while ( 1 )
        {
          v82 = *v81;
          if ( *v81 )
          {
            v83 = *(double *)a4;
            if ( (*(_DWORD *)(v82 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v81 >= v80 )
            goto LABEL_128;
        }
        sub_15D7BC0(*(_QWORD *)&v83, v82);
        ++v81;
      }
      while ( (unsigned __int64)v81 < v80 );
LABEL_128:
      v17 = *(_QWORD **)(a4 + 8);
      v64 = (unsigned int **)(a4 + 8);
      if ( !v17 )
        goto LABEL_64;
      if ( !*((_DWORD *)v17 - 1) )
        goto LABEL_65;
    }
LABEL_98:
    *((_DWORD *)v17 - 1) = 1;
    v27 = *((_DWORD *)v17 - 1);
LABEL_35:
    sub_E6D7F0((_QWORD *)v106, v27, (__int64)v17, 1, &v112, &v113);
    if ( v112
      && (sub_E6B720(v106, (_QWORD *)(a1 + 704), (__int64 *)(a1 + 680), (unsigned int **)(a1 + 712)),
          (v37 = *(_QWORD *)(a1 + 712)) != 0)
      && *(_DWORD *)(v37 - 4) )
    {
      v38 = *(_QWORD *)(a1 + 8);
      v118.m128_u64[0] = 0;
      v118.m128_u64[1] = v38;
      v39 = sub_15E1AF0(v38);
      v40 = v39;
      if ( v39 )
        ++*(_DWORD *)(v39 + 8);
      sub_E7C920(v106, v113 + 1);
      v41 = *(__int64 **)(a1 + 640);
      if ( v41 )
        v42 = *((_DWORD *)v41 - 1);
      else
        v42 = 0;
      sub_E7CD60((__int64 *)&v119, (_QWORD *)(a1 + 88), v40, v42, v41);
      v43 = v118.m128_u64[0];
      v118.m128_u64[0] = v119.m128_u64[0];
      sub_E65BC0(v43, v119.m128_i64[1]);
      sub_14B9B80(a1 + 872, &v118);
      sub_2FCDE0((__int64 *)a4);
      sub_15EEF60(v118.m128_u64[0]);
      sub_E65BC0(v118.m128_i64[0], v118.m128_i64[1]);
      sub_E65BC0(v40, v38);
      LOBYTE(v105) = 1;
    }
    else
    {
      LOBYTE(v105) = 0;
    }
    LOBYTE(ptr) = 0;
    v17 = *(_QWORD **)(a4 + 8);
    while ( v17 )
    {
      v28 = 0;
      v29 = 0;
      if ( *((_DWORD *)v17 - 1) )
      {
        while ( 1 )
        {
          v30 = v17[v29];
          if ( !*(_WORD *)(v30 + 4) )
          {
            v31 = *(_QWORD **)(*(_QWORD *)(v30 + 16) + 24LL);
            if ( v31 )
            {
              if ( *v31 == 0x800000000LL && *(_DWORD *)(v30 + 24) == 1 )
              {
                v33 = *(_QWORD *)(v30 + 32);
                if ( !*(_WORD *)(v33 + 4) )
                {
                  v34 = *(_QWORD **)(*(_QWORD *)(v33 + 16) + 24LL);
                  if ( v34 )
                  {
                    if ( *v34 == 0x200000000LL && *(_DWORD *)(v33 + 24) == 2 )
                    {
                      v35 = *(_QWORD *)(a1 + 80);
                      v36 = *(_QWORD *)(v33 + 32);
                      *(_QWORD *)v104 = *(_QWORD *)(v33 + 40);
                      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 16LL))(v35, v36)
                        && *(_WORD *)(v36 + 4) == 1
                        && (v44 = sub_15D1F10(v36),
                            v45 = *(_QWORD *)(a1 + 8),
                            *(_QWORD *)v109 = v44,
                            (v46 = sub_15D3340(v45, v44)) != 0)
                        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v109 + 24LL) + 24LL) == 2
                        && (v47 = *(_DWORD *)(v36 + 16),
                            LOBYTE(v109[0]) = v46,
                            !(unsigned __int8)sub_E661F0(v47, *(__int64 *)v104)) )
                      {
                        v48 = *(_QWORD *)(a4 + 8);
                        v49 = v109[0];
                        v50 = 0;
LABEL_80:
                        if ( v48 )
                        {
                          while ( v50 < *(_DWORD *)(v48 - 4) )
                          {
                            if ( v29 == v50 )
                            {
                              v50 = v29 + 1;
                              goto LABEL_80;
                            }
                            v51 = *(_DWORD *)(v36 + 16);
                            v111 = v49;
                            v52 = *(_QWORD *)(v48 + 8LL * v50);
                            v109[0] = v50;
                            v53 = sub_E661F0(v51, v52);
                            v50 = v109[0] + 1;
                            if ( v53 )
                              goto LABEL_58;
                            v48 = *(_QWORD *)(a4 + 8);
                            v49 = v111;
                            if ( !v48 )
                              break;
                          }
                        }
                        v54 = *(_QWORD *)(a1 + 8);
                        LOBYTE(v104[0]) = v49;
                        v55 = *(_QWORD *)(v54 + 856);
                        v118 = _mm_loadh_ps((const double *)a4);
                        sub_E65C70((__int64 **)&v118, v55);
                        v17 = *(_QWORD **)(a4 + 8);
                        LOBYTE(ptr) = v104[0];
                        v28 = v104[0];
                      }
                      else
                      {
LABEL_58:
                        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 16LL))(
                               *(_QWORD *)(a1 + 80),
                               *(_QWORD *)v104)
                          && *(_WORD *)(*(_QWORD *)v104 + 4LL) == 1
                          && (v56 = sub_15D1F10(*(_QWORD *)v104),
                              v57 = *(_QWORD *)(a1 + 8),
                              *(_QWORD *)v109 = v56,
                              (v58 = sub_15D3340(v57, v56)) != 0)
                          && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v109 + 24LL) + 24LL) == 2 )
                        {
                          LOBYTE(v109[0]) = v58;
                          v59 = sub_E661F0(*(_DWORD *)(*(_QWORD *)v104 + 16LL), v36);
                          v17 = *(_QWORD **)(a4 + 8);
                          if ( !v59 )
                          {
                            v60 = v109[0];
                            v61 = 0;
                            while ( v17 && v61 < *((_DWORD *)v17 - 1) )
                            {
                              while ( v29 == v61 )
                              {
                                v61 = v29 + 1;
                                if ( (unsigned int)(v29 + 1) >= *((_DWORD *)v17 - 1) )
                                  goto LABEL_94;
                              }
                              LOBYTE(v109[0]) = v60;
                              v79 = sub_E661F0(*(_DWORD *)(*(_QWORD *)v104 + 16LL), v17[v61++]);
                              v17 = *(_QWORD **)(a4 + 8);
                              v60 = v109[0];
                              if ( v79 )
                                goto LABEL_61;
                            }
LABEL_94:
                            v62 = *(_QWORD *)(a1 + 8);
                            LOBYTE(v104[0]) = v60;
                            v63 = *(_QWORD *)(v62 + 856);
                            v117 = _mm_loadh_ps((const double *)a4);
                            sub_E65C70((__int64 **)&v117, v63);
                            v17 = *(_QWORD **)(a4 + 8);
                            LOBYTE(ptr) = v104[0];
                            v28 = v104[0];
                          }
                        }
                        else
                        {
                          v17 = *(_QWORD **)(a4 + 8);
                        }
                      }
LABEL_61:
                      if ( !v17 )
                        break;
                    }
                  }
                }
              }
            }
          }
          if ( (unsigned int)++v29 >= *((_DWORD *)v17 - 1) )
            goto LABEL_44;
        }
        if ( !v28 )
          break;
      }
      else
      {
LABEL_44:
        if ( !v28 )
          break;
      }
    }
  }
  while ( (_BYTE)v105 || (_BYTE)ptr );
  sub_2FCDE0((__int64 *)(a1 + 648));
  sub_E79080((_QWORD *)(a1 + 896), a4);
  if ( *(_BYTE *)(a1 + 2360) )
  {
    v71 = *(_QWORD *)(a4 + 8);
    v106 = a1 + 1728;
    if ( v71 )
    {
      v72 = 0;
      do
      {
        if ( v72 >= *(_DWORD *)(v71 - 4) )
          break;
        sub_EE4F40(*(_QWORD *)(a1 + 1728));
        v73 = *(_QWORD *)(a4 + 8);
        v74 = *(_QWORD *)(v73 + 8LL * v72);
        *(_QWORD *)v104 = 8LL * v72;
        v71 = v73;
        if ( !*(_WORD *)(v74 + 4) )
        {
          v75 = *(_DWORD **)(*(_QWORD *)(v74 + 16) + 24LL);
          if ( v75 )
          {
            if ( !*v75 )
            {
              if ( v75[1] != 2 || *(_DWORD *)(v74 + 24) != 2 )
                goto LABEL_133;
              v95 = *(_QWORD *)(v74 + 32);
              v96 = *(_QWORD *)(v74 + 40);
              if ( !(unsigned __int8)sub_E6D110((const __m128i *)v106, a4, v72, v95, v96) )
                sub_E6D110((const __m128i *)v106, a4, v72, v96, v95);
              v73 = *(_QWORD *)(a4 + 8);
              v74 = *(_QWORD *)(v73 + 8LL * v72);
              v71 = v73;
              if ( !*(_WORD *)(v74 + 4) )
              {
                v75 = *(_DWORD **)(*(_QWORD *)(v74 + 16) + 24LL);
                if ( v75 )
                {
                  if ( !*v75 )
                  {
LABEL_133:
                    if ( v75[1] == 8 )
                    {
                      v85 = *(_DWORD *)(v74 + 24);
                      if ( v85 == 1 )
                      {
                        v86 = *(_QWORD *)(v74 + 32);
                        if ( !*(_WORD *)(v86 + 4) )
                        {
                          v87 = *(_DWORD **)(*(_QWORD *)(v86 + 16) + 24LL);
                          if ( v87 )
                          {
                            if ( !*v87 && v87[1] == 2 && *(_DWORD *)(v86 + 24) == 2 )
                            {
                              v88 = *(_QWORD *)(v86 + 32);
                              if ( !*(_WORD *)(v88 + 4) )
                              {
                                v89 = *(_DWORD **)(*(_QWORD *)(v88 + 16) + 24LL);
                                if ( v89 )
                                {
                                  v90 = *(_DWORD *)(a1 + 1736);
                                  if ( v90 == *v89 && v89[1] == 1 )
                                  {
                                    v91 = *(_QWORD *)(v86 + 40);
                                    if ( !*(_WORD *)(v91 + 4) )
                                    {
                                      v92 = *(_DWORD **)(*(_QWORD *)(v91 + 16) + 24LL);
                                      if ( v92 )
                                      {
                                        if ( v90 == *v92
                                          && v92[1] == 1
                                          && *(_DWORD *)(v88 + 24) == *(_DWORD *)(v91 + 24) )
                                        {
                                          ptr = *(void **)(v88 + 32);
                                          *(_QWORD *)v108 = *(_QWORD *)(v91 + 32);
                                          v93 = *(void **)(a1 + 1784);
                                          if ( v93 )
                                          {
                                            memset(v93, 0, 4LL * *(unsigned int *)(a1 + 1780));
                                            v73 = *(_QWORD *)(a4 + 8);
                                          }
                                          v105 = a1 + 1768;
                                          *(_DWORD *)(a1 + 1776) = 0;
                                          for ( j = 0; v73 && j < *(_DWORD *)(v73 - 4); ++j )
                                          {
                                            if ( v72 != j )
                                            {
                                              v109[0] = j;
                                              sub_E65CC0(v105, *(_DWORD **)(v73 + 8LL * j));
                                              v73 = *(_QWORD *)(a4 + 8);
                                              j = v109[0];
                                            }
                                          }
                                          sub_E65CC0(v105, ptr);
                                          sub_E65CC0(v105, *(_DWORD **)v108);
                                          while ( v85 < *(_DWORD *)(v88 + 24) )
                                          {
                                            v97 = *(__int64 **)(a1 + 1752);
                                            v98 = v85 + 4LL;
                                            v99 = *(_QWORD *)(v88 + 8 * v98);
                                            v100 = *(_QWORD *)(v91 + 8 * v98);
                                            v101 = *v97;
                                            *(_QWORD *)v109 = v100;
                                            v105 = v99;
                                            if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v101 + 16))(
                                                   v97,
                                                   v99) != 1
                                              || v105 != *(_QWORD *)v109
                                              || *(_DWORD *)v105 < *(_DWORD *)(a1 + 1776)
                                              && (*(_DWORD *)(*(_QWORD *)(a1 + 1784) + 4LL * (*(_DWORD *)v105 >> 5))
                                                & (1 << *(_DWORD *)v105)) != 0 )
                                            {
                                              goto LABEL_172;
                                            }
                                            ++v85;
                                          }
                                          v102 = *(_QWORD *)(a1 + 1728);
                                          sub_15E1B70(v102);
                                          v103 = sub_15E1A70(v102);
                                          v119 = _mm_loadh_ps((const double *)a4);
                                          sub_E65C70((__int64 **)&v119, v103);
LABEL_172:
                                          v71 = *(_QWORD *)(a4 + 8);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        ++v72;
      }
      while ( v71 );
    }
  }
  v120.m128_u64[0] = (unsigned __int64)&off_1C5D190;
  result = v120.m128_i64[1];
  if ( v120.m128_u64[1] )
    return sub_186B220((void *)(v120.m128_u64[1] - 8));
  return result;
}

