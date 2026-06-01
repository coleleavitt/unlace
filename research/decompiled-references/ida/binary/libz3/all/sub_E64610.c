__int64 __fastcall sub_E64610(__int64 a1, double a2, double a3, __m128 a4, __m128 a5)
{
  _DWORD *v6; // rdi
  __int64 (*v7)(); // rax
  unsigned int v8; // ebp
  int v9; // r15d
  const __m128i *v10; // rax
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  unsigned __int64 v13; // rdx
  _DWORD *v14; // rax
  __int64 v15; // rdi
  unsigned __int8 (*v16)(void); // rdx
  __int64 (*v17)(); // rax
  __int64 result; // rax
  int v19; // eax
  __int64 v20; // r14
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // r14
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rdi
  void (__fastcall *v27)(__int64, _QWORD, __m128i *); // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rsi
  _QWORD *v31; // rcx
  __int64 v32; // rsi
  _QWORD *v33; // rcx
  __int64 v34; // r12
  _DWORD *v35; // rcx
  _QWORD *v36; // rcx
  __int64 v37; // rsi
  _DWORD *v38; // rcx
  __int64 v39; // rsi
  _DWORD *v40; // rcx
  __int64 v41; // r14
  __int64 v42; // rax
  __m128i v43; // xmm0
  __int64 v44; // r12
  _QWORD *v45; // rcx
  __int64 v46; // rax
  _QWORD *v47; // r12
  _QWORD *v48; // r14
  __int64 v49; // r12
  __int64 v50; // rax
  __m128i v51; // xmm0
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rdx
  _QWORD *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // r12
  __int64 v57; // r14
  __int64 v58; // rax
  __m128i v59; // xmm0
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // r12
  _DWORD *v63; // rcx
  __int64 v64; // r14
  __int64 v65; // rax
  _QWORD *v66; // r12
  _QWORD *v67; // r14
  __int64 v68; // r12
  __int64 v69; // rax
  __m128i v70; // xmm0
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rdx
  _DWORD *v73; // rcx
  unsigned int v74; // eax
  _DWORD *v75; // rdi
  __int64 (*v76)(); // rax
  __int64 (*v77)(); // rax
  __int64 v78; // r13
  __int64 v79; // rax
  __m128i v80; // xmm0
  _QWORD *v81; // r13
  __int64 v82; // r14
  __int64 v83; // r12
  __int64 v84; // rax
  __m128i v85; // xmm0
  _QWORD *v86; // r13
  __int64 v87; // r14
  __int64 v88; // r12
  __int64 v89; // rax
  __m128i v90; // xmm0
  unsigned int v91; // [rsp+10h] [rbp-A8h]
  int i; // [rsp+14h] [rbp-A4h]
  void (__fastcall *v93)(__int64, __m128i *); // [rsp+18h] [rbp-A0h]
  void (__fastcall *v94)(__int64, __m128i *); // [rsp+18h] [rbp-A0h]
  void (__fastcall *v95)(__int64, _QWORD, __m128i *); // [rsp+18h] [rbp-A0h]
  unsigned __int64 v96; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v97; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v98; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v99; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v100; // [rsp+18h] [rbp-A0h]
  void (__fastcall *v101)(__int64, __m128i *); // [rsp+18h] [rbp-A0h]
  int v102[2]; // [rsp+20h] [rbp-98h]
  int v103[2]; // [rsp+20h] [rbp-98h]
  void (__fastcall *v104)(__int64, __m128i *); // [rsp+20h] [rbp-98h]
  __int64 v105; // [rsp+28h] [rbp-90h]
  void (__fastcall *v106)(_QWORD, __m128i *); // [rsp+28h] [rbp-90h]
  void (__fastcall *v107)(_QWORD, __m128i *); // [rsp+28h] [rbp-90h]
  __int64 v108; // [rsp+28h] [rbp-90h]
  void (__fastcall *v109)(__int64, __m128i *); // [rsp+28h] [rbp-90h]
  int v110[2]; // [rsp+30h] [rbp-88h]
  void (__fastcall *v111)(__int64, __m128i *); // [rsp+30h] [rbp-88h]
  int v112[2]; // [rsp+30h] [rbp-88h]
  _QWORD *v113; // [rsp+38h] [rbp-80h]
  __int64 v114; // [rsp+38h] [rbp-80h]
  _QWORD *v115; // [rsp+38h] [rbp-80h]
  _OWORD v116[2]; // [rsp+40h] [rbp-78h] BYREF
  __m128i v117; // [rsp+60h] [rbp-58h] BYREF
  __int128 v118; // [rsp+70h] [rbp-48h]

  for ( i = *(_DWORD *)(a1 + 32); ; i = *(_DWORD *)(a1 + 32) )
  {
    v6 = *(_DWORD **)(a1 + 16);
    v7 = *(__int64 (**)())(*(_QWORD *)v6 + 16LL);
    if ( v7 == sub_2492B0 )
    {
      v91 = 0;
      v8 = v6[2];
LABEL_4:
      v9 = 0;
      goto LABEL_5;
    }
    v74 = v7();
    v75 = *(_DWORD **)(a1 + 16);
    v91 = v74;
    v8 = v75[2];
    v76 = *(__int64 (**)())(*(_QWORD *)v75 + 16LL);
    if ( v76 == sub_2492B0 )
      goto LABEL_4;
    v76();
    v77 = *(__int64 (**)())(**(_QWORD **)(a1 + 16) + 16LL);
    if ( v77 == sub_2492B0 )
      goto LABEL_4;
    v9 = v77();
LABEL_5:
    if ( v9 != v8 )
    {
      do
      {
        v10 = (const __m128i *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
                                 *(_QWORD *)(a1 + 16),
                                 v8);
        v11 = (__m128)_mm_loadu_si128(v10);
        v12 = (__m128)_mm_loadu_si128(v10 + 1);
        a4 = _mm_movehl_ps(a4, v11);
        a5 = _mm_movehl_ps(a5, v12);
        v116[0] = v11;
        v13 = a4.m128_u64[0];
        v116[1] = v12;
        if ( a4.m128_u64[0] )
          ++*(_DWORD *)(a4.m128_u64[0] + 8);
        if ( v12.m128_u64[0] )
          ++*(_DWORD *)(v12.m128_u64[0] + 8);
        if ( a5.m128_u64[0] )
          *(_DWORD *)a5.m128_u64[0] = (*(_DWORD *)a5.m128_u64[0] + 1) & 0x3FFFFFFF
                                    | *(_DWORD *)a5.m128_u64[0] & 0xC0000000;
        if ( *(_WORD *)(a4.m128_u64[0] + 4) )
          goto LABEL_15;
        v14 = *(_DWORD **)(*(_QWORD *)(a4.m128_u64[0] + 16) + 24LL);
        if ( !v14 || *v14 )
          goto LABEL_15;
        if ( v14[1] == 6
          && *(_DWORD *)(a4.m128_u64[0] + 24) == 2
          && (v30 = *(_QWORD *)(a4.m128_u64[0] + 40), !*(_WORD *)(v30 + 4)) )
        {
          v31 = *(_QWORD **)(*(_QWORD *)(v30 + 16) + 24LL);
          if ( v31 )
          {
            if ( *v31 == 0x800000000LL && *(_DWORD *)(v30 + 24) == 1 )
            {
              v44 = *(_QWORD *)(v30 + 32);
              if ( !*(_WORD *)(v44 + 4) )
              {
                v45 = *(_QWORD **)(*(_QWORD *)(v44 + 16) + 24LL);
                if ( v45 )
                {
                  if ( *v45 == 0x600000000LL )
                  {
                    if ( *(_DWORD *)(v44 + 8) == 1 || sub_E63E60(a1, *(_QWORD *)(a4.m128_u64[0] + 32)) )
                    {
LABEL_93:
                      v46 = *(unsigned int *)(v44 + 24);
                      if ( v46 * 8 )
                      {
                        v47 = (_QWORD *)(v44 + 32);
                        v48 = v47;
                        v113 = &v47[v46];
                        if ( a5.m128_u64[0] )
                        {
                          do
                          {
                            v49 = *(_QWORD *)(a1 + 8);
                            v105 = *(_QWORD *)(a1 + 16);
                            v111 = *(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v105 + 40LL);
                            sub_15EC2C0(v49, *v48);
                            v50 = sub_15E1B70(v49);
                            v51 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
                            *((_QWORD *)&v118 + 1) = a5.m128_u64[0];
                            *(_QWORD *)&v118 = 0;
                            v117 = _mm_unpacklo_epi64(v51, (__m128i)(unsigned __int64)v50);
                            if ( v50 )
                              ++*(_DWORD *)(v50 + 8);
                            *(_DWORD *)a5.m128_u64[0] = (*(_DWORD *)a5.m128_u64[0] + 1) & 0x3FFFFFFF
                                                      | *(_DWORD *)a5.m128_u64[0] & 0xC0000000;
                            v111(v105, &v117);
                            ++v48;
                            sub_234F80(v117.m128i_i64);
                          }
                          while ( v113 != v48 );
                        }
                        else
                        {
                          v81 = v47;
                          do
                          {
                            v82 = *(_QWORD *)(a1 + 16);
                            v83 = *(_QWORD *)(a1 + 8);
                            v109 = *(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v82 + 40LL);
                            sub_15EC2C0(v83, *v81);
                            v84 = sub_15E1B70(v83);
                            v85 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
                            v118 = 0u;
                            v117 = _mm_unpacklo_epi64(v85, (__m128i)(unsigned __int64)v84);
                            if ( v84 )
                              ++*(_DWORD *)(v84 + 8);
                            v109(v82, &v117);
                            ++v81;
                            sub_234F80(v117.m128i_i64);
                          }
                          while ( v113 != v81 );
                        }
                      }
                      v26 = *(_QWORD *)(a1 + 16);
                      v27 = *(void (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v26 + 32LL);
                      v52 = *(_QWORD *)(a1 + 8);
                      v53 = *(_QWORD *)(v52 + 856);
                      v117 = _mm_unpacklo_epi64((__m128i)v52, (__m128i)v53);
                      v118 = 0;
                      if ( v53 )
                        ++*(_DWORD *)(v53 + 8);
                      goto LABEL_39;
                    }
                    v13 = a4.m128_u64[0];
                    if ( *(_WORD *)(a4.m128_u64[0] + 4) )
                      goto LABEL_15;
                    v14 = *(_DWORD **)(*(_QWORD *)(a4.m128_u64[0] + 16) + 24LL);
                    if ( !v14 )
                      goto LABEL_15;
                  }
                }
              }
            }
          }
          if ( *v14 )
            goto LABEL_15;
          if ( v14[1] != 6 )
          {
LABEL_23:
            if ( v14[1] != 6 )
              goto LABEL_24;
            goto LABEL_57;
          }
        }
        else if ( v14[1] != 6 )
        {
          goto LABEL_23;
        }
        if ( *(_DWORD *)(v13 + 24) != 2 )
          goto LABEL_23;
        v32 = *(_QWORD *)(v13 + 32);
        if ( *(_WORD *)(v32 + 4) )
          goto LABEL_23;
        v33 = *(_QWORD **)(*(_QWORD *)(v32 + 16) + 24LL);
        if ( v33 )
        {
          if ( *v33 == 0x800000000LL && *(_DWORD *)(v32 + 24) == 1 )
          {
            v44 = *(_QWORD *)(v32 + 32);
            if ( !*(_WORD *)(v44 + 4) )
            {
              v54 = *(_QWORD **)(*(_QWORD *)(v44 + 16) + 24LL);
              if ( v54 )
              {
                if ( *v54 == 0x600000000LL )
                {
                  v96 = v13;
                  if ( *(_DWORD *)(v44 + 8) == 1 || sub_E63E60(a1, *(_QWORD *)(v13 + 40)) )
                    goto LABEL_93;
                  v13 = v96;
                  if ( *(_WORD *)(v96 + 4) )
                    goto LABEL_15;
                  v14 = *(_DWORD **)(*(_QWORD *)(v96 + 16) + 24LL);
                  if ( !v14 )
                    goto LABEL_15;
                }
              }
            }
          }
        }
        if ( *v14 )
          goto LABEL_15;
        if ( v14[1] != 6 )
        {
LABEL_24:
          if ( v14[1] != 6 )
            goto LABEL_25;
          goto LABEL_63;
        }
LABEL_57:
        if ( *(_DWORD *)(v13 + 24) != 2 )
          goto LABEL_24;
        v34 = *(_QWORD *)(v13 + 40);
        if ( *(_WORD *)(v34 + 4) )
          goto LABEL_24;
        v35 = *(_DWORD **)(*(_QWORD *)(v34 + 16) + 24LL);
        if ( v35 && !*v35 && v35[1] == 5 )
        {
          v97 = v13;
          if ( *(_DWORD *)(v34 + 8) == 1 || sub_E63E60(a1, *(_QWORD *)(v13 + 32)) )
          {
LABEL_112:
            v55 = 8LL * *(unsigned int *)(v34 + 24);
            if ( v55 )
            {
              v56 = v34 + 32;
              v57 = v56;
              v114 = v56 + v55;
              if ( a5.m128_u64[0] )
              {
                do
                {
                  *(_QWORD *)v112 = *(_QWORD *)(a1 + 16);
                  v106 = *(void (__fastcall **)(_QWORD, __m128i *))(**(_QWORD **)v112 + 40LL);
                  v58 = sub_15E1B70(*(_QWORD *)(a1 + 8));
                  v59 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
                  *(_QWORD *)&v118 = 0;
                  *((_QWORD *)&v118 + 1) = a5.m128_u64[0];
                  v117 = _mm_unpacklo_epi64(v59, (__m128i)(unsigned __int64)v58);
                  if ( v58 )
                    ++*(_DWORD *)(v58 + 8);
                  *(_DWORD *)a5.m128_u64[0] = (*(_DWORD *)a5.m128_u64[0] + 1) & 0x3FFFFFFF
                                            | *(_DWORD *)a5.m128_u64[0] & 0xC0000000;
                  v106(*(_QWORD *)v112, &v117);
                  v57 += 8;
                  sub_234F80(v117.m128i_i64);
                }
                while ( v114 != v57 );
              }
              else
              {
                v78 = v56;
                do
                {
                  v108 = *(_QWORD *)(a1 + 16);
                  v101 = *(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v108 + 40LL);
                  v79 = sub_15E1B70(*(_QWORD *)(a1 + 8));
                  v80 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
                  v118 = 0u;
                  v117 = _mm_unpacklo_epi64(v80, (__m128i)(unsigned __int64)v79);
                  if ( v79 )
                    ++*(_DWORD *)(v79 + 8);
                  v101(v108, &v117);
                  v78 += 8;
                  sub_234F80(v117.m128i_i64);
                }
                while ( v114 != v78 );
              }
            }
            v26 = *(_QWORD *)(a1 + 16);
            v27 = *(void (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v26 + 32LL);
            v60 = *(_QWORD *)(a1 + 8);
            v61 = *(_QWORD *)(v60 + 856);
            v117 = _mm_unpacklo_epi64((__m128i)v60, (__m128i)v61);
            v118 = 0;
            if ( v61 )
              ++*(_DWORD *)(v61 + 8);
            goto LABEL_39;
          }
          v13 = v97;
          if ( *(_WORD *)(v97 + 4) )
            goto LABEL_15;
          v14 = *(_DWORD **)(*(_QWORD *)(v97 + 16) + 24LL);
          if ( !v14 )
            goto LABEL_15;
        }
        if ( *v14 )
          goto LABEL_15;
        if ( v14[1] != 6 )
        {
LABEL_25:
          if ( v14[1] != 8 )
            goto LABEL_26;
          goto LABEL_69;
        }
LABEL_63:
        if ( *(_DWORD *)(v13 + 24) != 2 )
          goto LABEL_25;
        v34 = *(_QWORD *)(v13 + 32);
        if ( *(_WORD *)(v34 + 4) )
          goto LABEL_25;
        v36 = *(_QWORD **)(*(_QWORD *)(v34 + 16) + 24LL);
        if ( v36 && *v36 == 0x500000000LL )
        {
          v98 = v13;
          if ( *(_DWORD *)(v34 + 8) == 1 || sub_E63E60(a1, *(_QWORD *)(v13 + 40)) )
            goto LABEL_112;
          v13 = v98;
          if ( *(_WORD *)(v98 + 4) )
            goto LABEL_15;
          v14 = *(_DWORD **)(*(_QWORD *)(v98 + 16) + 24LL);
          if ( !v14 )
            goto LABEL_15;
        }
        if ( *v14 )
          goto LABEL_15;
        if ( v14[1] != 8 )
        {
LABEL_26:
          if ( v14[1] != 8 )
            goto LABEL_27;
          goto LABEL_75;
        }
LABEL_69:
        if ( *(_DWORD *)(v13 + 24) != 1 )
          goto LABEL_26;
        v37 = *(_QWORD *)(v13 + 32);
        if ( *(_WORD *)(v37 + 4) )
          goto LABEL_26;
        v38 = *(_DWORD **)(*(_QWORD *)(v37 + 16) + 24LL);
        if ( v38 )
        {
          if ( !*v38 && v38[1] == 5 && *(_DWORD *)(v37 + 24) == 2 )
          {
            v62 = *(_QWORD *)(v37 + 40);
            if ( !*(_WORD *)(v62 + 4) )
            {
              v63 = *(_DWORD **)(*(_QWORD *)(v62 + 16) + 24LL);
              if ( v63 )
              {
                if ( !*v63 && v63[1] == 6 )
                {
                  v64 = *(_QWORD *)(v37 + 32);
                  v99 = v13;
                  if ( *(_DWORD *)(v62 + 8) == 1 || sub_E63E60(a1, v64) )
                  {
LABEL_133:
                    sub_15EC2C0(*(_QWORD *)(a1 + 8), v64);
                    v65 = *(unsigned int *)(v62 + 24);
                    if ( v65 * 8 )
                    {
                      v66 = (_QWORD *)(v62 + 32);
                      v67 = v66;
                      v115 = &v66[v65];
                      if ( a5.m128_u64[0] )
                      {
                        do
                        {
                          v68 = *(_QWORD *)(a1 + 8);
                          *(_QWORD *)v103 = *(_QWORD *)(a1 + 16);
                          v107 = *(void (__fastcall **)(_QWORD, __m128i *))(**(_QWORD **)v103 + 40LL);
                          sub_15EC2C0(v68, *v67);
                          v69 = sub_15E1B70(v68);
                          v70 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
                          *((_QWORD *)&v118 + 1) = a5.m128_u64[0];
                          *(_QWORD *)&v118 = 0;
                          v117 = _mm_unpacklo_epi64(v70, (__m128i)(unsigned __int64)v69);
                          if ( v69 )
                            ++*(_DWORD *)(v69 + 8);
                          *(_DWORD *)a5.m128_u64[0] = (*(_DWORD *)a5.m128_u64[0] + 1) & 0x3FFFFFFF
                                                    | *(_DWORD *)a5.m128_u64[0] & 0xC0000000;
                          v107(*(_QWORD *)v103, &v117);
                          ++v67;
                          sub_234F80(v117.m128i_i64);
                        }
                        while ( v115 != v67 );
                      }
                      else
                      {
                        v86 = v66;
                        do
                        {
                          v87 = *(_QWORD *)(a1 + 16);
                          v88 = *(_QWORD *)(a1 + 8);
                          v104 = *(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v87 + 40LL);
                          sub_15EC2C0(v88, *v86);
                          v89 = sub_15E1B70(v88);
                          v90 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
                          v118 = 0u;
                          v117 = _mm_unpacklo_epi64(v90, (__m128i)(unsigned __int64)v89);
                          if ( v89 )
                            ++*(_DWORD *)(v89 + 8);
                          v104(v87, &v117);
                          ++v86;
                          sub_234F80(v117.m128i_i64);
                        }
                        while ( v115 != v86 );
                      }
                    }
                    v26 = *(_QWORD *)(a1 + 16);
                    v27 = *(void (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v26 + 32LL);
                    v71 = *(_QWORD *)(a1 + 8);
                    v72 = *(_QWORD *)(v71 + 856);
                    v117 = _mm_unpacklo_epi64((__m128i)v71, (__m128i)v72);
                    v118 = 0;
                    if ( v72 )
                      ++*(_DWORD *)(v72 + 8);
                    goto LABEL_39;
                  }
                  v13 = v99;
                  if ( *(_WORD *)(v99 + 4) )
                    goto LABEL_15;
                  v14 = *(_DWORD **)(*(_QWORD *)(v99 + 16) + 24LL);
                  if ( !v14 )
                    goto LABEL_15;
                }
              }
            }
          }
        }
        if ( *v14 )
          goto LABEL_15;
        if ( v14[1] != 8 )
          goto LABEL_27;
LABEL_75:
        if ( *(_DWORD *)(v13 + 24) == 1 )
        {
          v39 = *(_QWORD *)(v13 + 32);
          if ( !*(_WORD *)(v39 + 4) )
          {
            v40 = *(_DWORD **)(*(_QWORD *)(v39 + 16) + 24LL);
            if ( v40 )
            {
              if ( !*v40 && v40[1] == 5 && *(_DWORD *)(v39 + 24) == 2 )
              {
                v62 = *(_QWORD *)(v39 + 32);
                if ( !*(_WORD *)(v62 + 4) )
                {
                  v73 = *(_DWORD **)(*(_QWORD *)(v62 + 16) + 24LL);
                  if ( v73 )
                  {
                    if ( !*v73 && v73[1] == 6 )
                    {
                      v64 = *(_QWORD *)(v39 + 40);
                      v100 = v13;
                      if ( *(_DWORD *)(v62 + 8) == 1 || sub_E63E60(a1, v64) )
                        goto LABEL_133;
                      v13 = v100;
                      if ( *(_WORD *)(v100 + 4) )
                        goto LABEL_15;
                      v14 = *(_DWORD **)(*(_QWORD *)(v100 + 16) + 24LL);
                      if ( !v14 )
                        goto LABEL_15;
                    }
                  }
                }
              }
            }
            if ( *v14 )
              goto LABEL_15;
            v19 = v14[1];
            if ( v19 != 9 )
            {
LABEL_28:
              if ( v19 != 4 )
                goto LABEL_15;
              v20 = *(_QWORD *)(a1 + 16);
              *(_QWORD *)v110 = *(_QWORD *)(a1 + 8);
              v93 = *(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v20 + 40LL);
              sub_15EC2C0(*(_QWORD *)v110, *(_QWORD *)(v13 + 32));
              v21 = sub_15E1B70(v110[0]);
              v22 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
              *((_QWORD *)&v118 + 1) = a5.m128_u64[0];
              *(_QWORD *)&v118 = 0;
              v117 = _mm_unpacklo_epi64(v22, (__m128i)(unsigned __int64)v21);
              if ( v21 )
                ++*(_DWORD *)(v21 + 8);
              if ( a5.m128_u64[0] )
                *(_DWORD *)a5.m128_u64[0] = (*(_DWORD *)a5.m128_u64[0] + 1) & 0x3FFFFFFF
                                          | *(_DWORD *)a5.m128_u64[0] & 0xC0000000;
              v93(v20, &v117);
              sub_234F80(v117.m128i_i64);
              v23 = *(_QWORD *)(a1 + 16);
              v94 = *(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v23 + 40LL);
              v24 = sub_15E1B70(*(_QWORD *)(a1 + 8));
              v25 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
              *(_QWORD *)&v118 = 0;
              *((_QWORD *)&v118 + 1) = a5.m128_u64[0];
              v117 = _mm_unpacklo_epi64(v25, (__m128i)(unsigned __int64)v24);
              if ( v24 )
                ++*(_DWORD *)(v24 + 8);
              if ( a5.m128_u64[0] )
                *(_DWORD *)a5.m128_u64[0] = (*(_DWORD *)a5.m128_u64[0] + 1) & 0x3FFFFFFF
                                          | *(_DWORD *)a5.m128_u64[0] & 0xC0000000;
              v94(v23, &v117);
              sub_234F80(v117.m128i_i64);
              v26 = *(_QWORD *)(a1 + 16);
              v27 = *(void (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v26 + 32LL);
              v28 = *(_QWORD *)(a1 + 8);
              v29 = *(_QWORD *)(v28 + 856);
              v117 = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v29);
              v118 = 0;
              if ( v29 )
                ++*(_DWORD *)(v29 + 8);
LABEL_39:
              v27(v26, v8, &v117);
LABEL_40:
              sub_234F80(v117.m128i_i64);
              ++*(_DWORD *)(a1 + 32);
              goto LABEL_15;
            }
            goto LABEL_81;
          }
        }
LABEL_27:
        v19 = v14[1];
        if ( v19 != 9 )
          goto LABEL_28;
LABEL_81:
        if ( *(_DWORD *)(v13 + 24) == 2 )
        {
          v41 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)v102 = *(_QWORD *)(a1 + 8);
          v95 = *(void (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v41 + 32LL);
          sub_15EC2C0(*(_QWORD *)v102, *(_QWORD *)(v13 + 32));
          v42 = sub_15E1B70(v102[0]);
          v43 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
          *((_QWORD *)&v118 + 1) = a5.m128_u64[0];
          *(_QWORD *)&v118 = 0;
          v117 = _mm_unpacklo_epi64(v43, (__m128i)(unsigned __int64)v42);
          if ( v42 )
            ++*(_DWORD *)(v42 + 8);
          if ( a5.m128_u64[0] )
            *(_DWORD *)a5.m128_u64[0] = (*(_DWORD *)a5.m128_u64[0] + 1) & 0x3FFFFFFF
                                      | *(_DWORD *)a5.m128_u64[0] & 0xC0000000;
          v95(v41, v8, &v117);
          goto LABEL_40;
        }
LABEL_15:
        sub_234F80((__int64 *)v116);
        if ( (unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) )
        {
          v15 = *(_QWORD *)(a1 + 16);
          v16 = *(unsigned __int8 (**)(void))(*(_QWORD *)v15 + 48LL);
          if ( (char *)v16 == (char *)sub_2492C0 )
          {
            v17 = *(__int64 (**)())(*(_QWORD *)v15 + 16LL);
            if ( v17 == sub_2492B0 )
              goto LABEL_18;
          }
          else
          {
            if ( v16() )
              goto LABEL_18;
            v17 = *(__int64 (**)())(**(_QWORD **)(a1 + 16) + 16LL);
            if ( v17 == sub_2492B0 )
              goto LABEL_18;
          }
          if ( v8 < (unsigned int)v17() )
          {
            ++v8;
            goto LABEL_5;
          }
        }
LABEL_18:
        v8 = v91;
      }
      while ( v9 != v91 );
    }
    result = *(unsigned int *)(a1 + 32);
    if ( (_DWORD)result == i )
      break;
  }
  return result;
}

