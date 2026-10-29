__int64 __fastcall sub_697A40(__int64 a1, unsigned int a2, const __m128i *a3)
{
  __m128 v5; // xmm0
  __m128i *v6; // r13
  int v7; // r15d
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int32 v11; // eax
  __int64 v12; // r8
  int v13; // esi
  __int64 v14; // rax
  __m128i *v15; // rdi
  __m128i *v16; // rax
  __m128 *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // r12d
  __int64 v22; // r9
  int v23; // eax
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rax
  __m128i v28; // xmm1
  __int32 v29; // ecx
  __int64 v30; // r8
  __m128i *v31; // rax
  int v32; // esi
  __int64 v33; // rcx
  __m128i *v34; // r9
  __m128 *v35; // rdx
  __m128 *v36; // rdi
  unsigned __int64 v37; // rcx
  __m128 *v38; // rax
  unsigned __int64 v39; // rdx
  __m128i *v40; // rax
  __int32 v41; // r9d
  __m128i *v42; // r15
  __m128i *v43; // rdi
  const __m128i *v44; // r10
  const __m128i *v45; // rbx
  __int64 v46; // rdx
  __m128i *v47; // rsi
  __int64 v48; // rdi
  __m128i *v49; // rdx
  __m128i v50; // xmm0
  __int64 v51; // rax
  __int32 v52; // r9d
  __m128i *v53; // r15
  __m128i *v54; // rdx
  __int64 v55; // rdi
  __int64 m128i_i64; // r10
  const __m128i *v57; // rbx
  __int64 v58; // rdx
  __m128i *v59; // rsi
  __int64 v60; // rdi
  __m128i *v61; // rdx
  __m128i v62; // xmm0
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdi
  const __m128i *v66; // r10
  __int64 v67; // rcx
  char v68; // dl
  __int64 v69; // rax
  bool v70; // dl
  int v71; // eax
  const void *v72; // rdi
  __int64 v73; // rsi
  __int64 v74; // rax
  int v75; // eax
  void (__fastcall *v76)(__int64, const char *); // rax
  char *v77; // rbx
  void (__fastcall *v78)(__int64, _QWORD); // rax
  size_t v79; // rax
  __int64 v80; // rax
  int v81; // [rsp-10h] [rbp-140h]
  int v82; // [rsp-8h] [rbp-138h]
  int v83; // [rsp+0h] [rbp-130h]
  int v84; // [rsp+0h] [rbp-130h]
  int v85; // [rsp+8h] [rbp-128h]
  int v86; // [rsp+8h] [rbp-128h]
  int v87; // [rsp+10h] [rbp-120h]
  int v88; // [rsp+10h] [rbp-120h]
  __m128i *v89; // [rsp+18h] [rbp-118h]
  int v90; // [rsp+18h] [rbp-118h]
  int v91; // [rsp+20h] [rbp-110h]
  int v92; // [rsp+20h] [rbp-110h]
  __m128i v93; // [rsp+28h] [rbp-108h] BYREF
  __m128i v94; // [rsp+38h] [rbp-F8h] BYREF
  _QWORD *v95; // [rsp+48h] [rbp-E8h]
  int v96[2]; // [rsp+50h] [rbp-E0h]
  const __m128i *v97; // [rsp+58h] [rbp-D8h]
  unsigned int v98; // [rsp+60h] [rbp-D0h]
  unsigned int v99; // [rsp+64h] [rbp-CCh]
  int v100[2]; // [rsp+68h] [rbp-C8h]
  unsigned int *v101; // [rsp+70h] [rbp-C0h]
  int v102[2]; // [rsp+78h] [rbp-B8h]
  int v103; // [rsp+80h] [rbp-B0h]
  __int64 v104; // [rsp+88h] [rbp-A8h] BYREF
  __int64 v105; // [rsp+90h] [rbp-A0h] BYREF
  unsigned int *v106; // [rsp+98h] [rbp-98h] BYREF
  _QWORD v107[2]; // [rsp+A0h] [rbp-90h] BYREF
  __int64 v108; // [rsp+B0h] [rbp-80h]
  __int64 v109; // [rsp+B8h] [rbp-78h]
  __int64 v110; // [rsp+C0h] [rbp-70h] BYREF
  _QWORD v111[2]; // [rsp+E0h] [rbp-50h] BYREF
  int n_8; // [rsp+F0h] [rbp-40h]

  v98 = a2;
  v91 = a1 + 96;
  sub_11C7890(a1 + 96);
  sub_2FCDE0((__int64 *)(a1 + 4464));
  if ( *(_BYTE *)(a1 + 3280) )
  {
    v102[0] = -1;
  }
  else
  {
    v105 = *(_QWORD *)(a1 + 8);
    v5.m128_u64[0] = 0;
    v6 = (__m128i *)sub_186B270(0x80u);
    *v6 = 0;
    v6[1] = 0;
    v6[2] = 0;
    v6[3] = 0;
    v6[4] = 0;
    v6[5] = 0;
    v6[6] = 0;
    v6[7] = 0;
    if ( a2 )
    {
      v7 = 0;
      v8 = 8;
      v99 = 0;
      v101 = nullptr;
      v97 = (const __m128i *)((char *)a3 + 8 * v98);
      v95 = v107;
      while ( 1 )
      {
        v9 = a3->m128i_i64[0];
        if ( !sub_68D010(a3->m128i_i64[0]) )
        {
          v22 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 840LL);
          *(_QWORD *)v100 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)v102 = &v110;
          *(_QWORD *)v96 = v22;
          sub_180C5A0(&v110, "s");
          v23 = sub_15E3D10(
                  v100[0],
                  v102[0],
                  (int)&qword_18D6CD0,
                  0,
                  0,
                  v96[0],
                  1,
                  v82,
                  v83,
                  v85,
                  v87,
                  (int)v89,
                  v91,
                  v93.m128i_i32[0],
                  v93.m128i_i8[8],
                  v94.m128i_i32[0],
                  v94.m128i_i32[2],
                  (int)v95,
                  v96[0],
                  (int)v97,
                  v98,
                  v100[0],
                  (int)v101,
                  v102[0],
                  v103,
                  v104,
                  v105,
                  (int)v106,
                  v107[0],
                  (void *)v107[1],
                  v108,
                  v109);
          v26 = sub_15DC610(
                  v100[0],
                  v23,
                  0,
                  0,
                  v24,
                  v25,
                  v84,
                  v86,
                  v88,
                  v90,
                  v92,
                  v93.m128i_i8[0],
                  v93.m128i_i32[2],
                  v94.m128i_i32[0],
                  v94.m128i_i32[2],
                  v95);
          *(_QWORD *)v102 = v26;
          if ( v26 )
            ++*(_DWORD *)(v26 + 8);
          v94.m128i_i64[1] = *(_QWORD *)(a1 + 8);
          v27 = sub_15E1B70(v94.m128i_i32[2]);
          *(_QWORD *)v96 = v27;
          if ( v27 )
            ++*(_DWORD *)(v27 + 8);
          sub_E5EBF0(a1, *(_QWORD *)v96);
          v104 = *(_QWORD *)v102;
          if ( *(_QWORD *)v102 )
            ++*(_DWORD *)(*(_QWORD *)v102 + 8LL);
          v106 = v101;
          sub_68D130(&v106, &v104);
          v28 = _mm_loadl_epi64(a3);
          v101 = v106;
          if ( 3 * v8 >= 4 * (v7 + v99) )
          {
            v29 = v8 - 1;
            v30 = 16LL * v8;
            v31 = (__m128i *)((char *)v6 + v30);
LABEL_39:
            v32 = *(_DWORD *)(*(_QWORD *)v102 + 12LL);
            v5 = (__m128)_mm_unpacklo_epi64((__m128i)*(unsigned __int64 *)v102, v28);
            v33 = 16LL * (v32 & (unsigned int)v29);
            v34 = &v6[(unsigned __int64)v33 / 0x10];
            if ( v33 == v30 )
            {
              v36 = nullptr;
LABEL_47:
              if ( v34 == v6 )
              {
LABEL_55:
                sub_1872CE0("");
                sub_1873130(114, 405);
              }
              v38 = (__m128 *)v6;
              while ( 1 )
              {
                while ( 1 )
                {
                  v39 = v38->m128_u64[0];
                  if ( v38->m128_u64[0] <= 1 )
                    break;
                  if ( *(_DWORD *)(v39 + 12) == v32 && *(_QWORD *)v102 == v39 )
                  {
                    *v38 = v5;
                    goto LABEL_56;
                  }
                  if ( v34 == (__m128i *)++v38 )
                    goto LABEL_55;
                }
                if ( !v39 )
                  break;
                v36 = v38++;
                if ( v34 == (__m128i *)v38 )
                  goto LABEL_55;
              }
              if ( v36 )
                goto LABEL_103;
              v36 = v38;
            }
            else
            {
              v35 = (__m128 *)&v6[(unsigned __int64)v33 / 0x10];
              v36 = nullptr;
              while ( 1 )
              {
                while ( 1 )
                {
                  v37 = v35->m128_u64[0];
                  if ( v35->m128_u64[0] <= 1 )
                    break;
                  if ( *(_DWORD *)(v37 + 12) == v32 && *(_QWORD *)v102 == v37 )
                  {
                    *v35 = v5;
                    goto LABEL_56;
                  }
                  if ( ++v35 == (__m128 *)v31 )
                    goto LABEL_47;
                }
                if ( !v37 )
                  break;
                v36 = v35++;
                if ( v35 == (__m128 *)v31 )
                  goto LABEL_47;
              }
              if ( v36 )
LABEL_103:
                --v7;
              else
                v36 = v35;
            }
            *v36 = v5;
            ++v99;
LABEL_56:
            sub_68CF60(*(__int64 *)v96, v94.m128i_i64[1]);
            sub_68CF60(*(__int64 *)v102, *(__int64 *)v100);
            goto LABEL_60;
          }
          v93.m128i_i32[2] = 2 * v8;
          v93.m128i_i64[0] = v28.m128i_i64[0];
          v94.m128i_i64[0] = 32LL * v8;
          v51 = sub_186B270(v94.m128i_u64[0]);
          v52 = v93.m128i_i32[2];
          v30 = v94.m128i_i64[0];
          v53 = (__m128i *)v51;
          v54 = (__m128i *)v51;
          v28 = _mm_loadl_epi64(&v93);
          v31 = (__m128i *)(v94.m128i_i64[0] + v51);
          if ( v93.m128i_i32[2] )
          {
            if ( (((_BYTE)v31 - (_BYTE)v53) & 0x10) == 0 || (v54 = v53 + 1, *v53 = 0, v31 != &v53[1]) )
            {
              v55 = *(_QWORD *)v102;
              do
              {
                *v54 = 0;
                v54 += 2;
                v54[-1] = 0;
              }
              while ( v31 != v54 );
              *(_QWORD *)v102 = v55;
            }
            v29 = v52 - 1;
            m128i_i64 = (__int64)v6[v8].m128i_i64;
            goto LABEL_90;
          }
          v31 = v53;
          v29 = -1;
          m128i_i64 = (__int64)v6[v8].m128i_i64;
          if ( (__m128i *)m128i_i64 != v6 )
          {
LABEL_90:
            v57 = v6;
            do
            {
              while ( v57->m128i_i64[0] <= 1uLL )
              {
                if ( ++v57 == (const __m128i *)m128i_i64 )
                  goto LABEL_98;
              }
              v58 = 16LL * (*(_DWORD *)(v57->m128i_i64[0] + 12) & (unsigned int)v29);
              v59 = &v53[(unsigned __int64)v58 / 0x10];
              if ( v30 == v58 )
              {
LABEL_108:
                if ( v53 == v59 )
                {
LABEL_113:
                  v93.m128i_i32[0] = v29;
                  v93.m128i_i64[1] = m128i_i64;
                  v94.m128i_i64[0] = v28.m128i_i64[0];
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v60 = *(_QWORD *)v102;
                v61 = v53;
                while ( v61->m128i_i64[0] )
                {
                  if ( v59 == ++v61 )
                    goto LABEL_113;
                }
              }
              else
              {
                v60 = *(_QWORD *)v102;
                v61 = &v53[(unsigned __int64)v58 / 0x10];
                while ( v61->m128i_i64[0] )
                {
                  if ( ++v61 == v31 )
                    goto LABEL_108;
                }
              }
              v62 = _mm_loadu_si128(v57++);
              *(_QWORD *)v102 = v60;
              *v61 = v62;
            }
            while ( v57 != (const __m128i *)m128i_i64 );
          }
LABEL_98:
          if ( v6 )
          {
            v87 = v52;
            v89 = v31;
            v93.m128i_i64[0] = v30;
            v93.m128i_i32[2] = v29;
            v94.m128i_i64[0] = v28.m128i_i64[0];
            sub_186B220(v6);
            v52 = v87;
            v31 = v89;
            v30 = v93.m128i_i64[0];
            v29 = v93.m128i_i32[2];
            v28 = _mm_loadl_epi64(&v94);
          }
          v6 = v53;
          v8 = v52;
          v7 = 0;
          goto LABEL_39;
        }
        v107[0] = v9;
        if ( v9 )
          ++*(_DWORD *)(v9 + 8);
        v106 = v101;
        sub_68D130(&v106, v95);
        v10 = a3->m128i_i64[0];
        v101 = v106;
        if ( 3 * v8 >= 4 * (v7 + v99) )
        {
          v11 = v8 - 1;
          v12 = 16LL * v8;
          *(_QWORD *)v102 = (char *)v6 + v12;
          goto LABEL_9;
        }
        *(_QWORD *)v96 = v10;
        v100[0] = 2 * v8;
        *(_QWORD *)v102 = 32LL * v8;
        v40 = (__m128i *)sub_186B270(*(size_t *)v102);
        v12 = *(_QWORD *)v102;
        v41 = v100[0];
        v42 = v40;
        v10 = *(_QWORD *)v96;
        v43 = (__m128i *)((char *)v40 + *(_QWORD *)v102);
        if ( v100[0] )
          break;
        *(_QWORD *)v102 = v40;
        v11 = -1;
        v44 = &v6[v8];
        if ( v6 != v44 )
          goto LABEL_67;
LABEL_75:
        if ( v6 )
        {
          v94.m128i_i32[0] = v41;
          v94.m128i_i64[1] = v12;
          v96[0] = v11;
          *(_QWORD *)v100 = v10;
          sub_186B220(v6);
          v41 = v94.m128i_i32[0];
          v12 = v94.m128i_i64[1];
          v11 = v96[0];
          v10 = *(_QWORD *)v100;
        }
        v6 = v42;
        v8 = v41;
        v7 = 0;
LABEL_9:
        v13 = *(_DWORD *)(v10 + 12);
        v5 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
        v14 = 16LL * (v13 & (unsigned int)v11);
        v15 = &v6[(unsigned __int64)v14 / 0x10];
        if ( v14 == v12 )
        {
          v17 = nullptr;
LABEL_17:
          if ( v15 != v6 )
          {
            v16 = v6;
            do
            {
              while ( 1 )
              {
                v19 = v16->m128i_i64[0];
                if ( v16->m128i_i64[0] <= 1uLL )
                  break;
                if ( *(_DWORD *)(v19 + 12) == v13 && v10 == v19 )
                  goto LABEL_101;
                if ( v15 == ++v16 )
                  goto LABEL_25;
              }
              if ( !v19 )
                goto LABEL_57;
              v17 = (__m128 *)v16++;
            }
            while ( v15 != v16 );
          }
LABEL_25:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v16 = &v6[(unsigned __int64)v14 / 0x10];
        v17 = nullptr;
        while ( 1 )
        {
          while ( 1 )
          {
            v18 = v16->m128i_i64[0];
            if ( v16->m128i_i64[0] <= 1uLL )
              break;
            if ( *(_DWORD *)(v18 + 12) == v13 && v10 == v18 )
            {
LABEL_101:
              *v16 = (__m128i)v5;
              goto LABEL_60;
            }
            if ( ++v16 == *(__m128i **)v102 )
              goto LABEL_17;
          }
          if ( !v18 )
            break;
          v17 = (__m128 *)v16++;
          if ( v16 == *(__m128i **)v102 )
            goto LABEL_17;
        }
LABEL_57:
        if ( v17 )
          --v7;
        else
          v17 = (__m128 *)v16;
        *v17 = v5;
        ++v99;
LABEL_60:
        a3 = (const __m128i *)((char *)a3 + 8);
        if ( a3 == v97 )
        {
          v20 = a1 + 4840;
          sub_6940A0(a1 + 4840);
          v102[0] = sub_692550(a1, v5);
          if ( v102[0] == 1 )
          {
            v102[0] = sub_695B60(a1, v98, v101, v5);
            if ( v102[0] == 1 )
            {
LABEL_117:
              v63 = *(_QWORD *)(a1 + 4712);
              v64 = 0x7FFFFFFF8LL;
              if ( v63 )
                v64 = 8LL * (unsigned int)(*(_DWORD *)(v63 - 4) - 1);
              v65 = *(_QWORD *)(v63 + v64);
              if ( v65 )
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v65 + 72LL))(v65, a1 + 4832);
              v66 = *(const __m128i **)(a1 + 4832);
              if ( v66 )
              {
                v97 = &v66[2 * v66[-1].m128i_u32[3]];
                if ( v66 != v97 )
                {
                  *(_QWORD *)v102 = v66;
                  *(_QWORD *)v100 = a1 + 4480;
                  do
                  {
                    v71 = sub_7E6C80(*(_QWORD *)v100);
                    if ( v71 == 0x7FFFFFFF )
                    {
                      v72 = *(const void **)(a1 + 624);
                      if ( v72
                        && __dynamic_cast(
                             v72,
                             (const struct __class_type_info *)&`typeinfo for'sat::extension,
                             (const struct __class_type_info *)&`typeinfo for'euf::solver,
                             0) )
                      {
                        v73 = *(_QWORD *)(a1 + 8);
                        v81 = *(unsigned __int8 *)(a1 + 385);
                        *(_QWORD *)v96 = a1 + 4376;
                        sub_786C50(a1 + 4376, v73, a1 + 4392, v91, v100[0], v20, v81);
                        v74 = sub_787220(*(_QWORD *)v96, v73);
                        sub_7CD920(v74, **(_QWORD **)v102, *(_QWORD *)(*(_QWORD *)v102 + 16LL));
                      }
                    }
                    else
                    {
                      v67 = *(_QWORD *)(a1 + 3392);
                      v68 = (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL) == *(_QWORD *)(*(_QWORD *)v102 + 16LL)) + 2 * v71;
                      v69 = v71 & 0x7FFFFFFF;
                      if ( v67 && (unsigned int)v69 < *(_DWORD *)(v67 - 4) )
                      {
                        v70 = !(v68 & 1);
                        *(_BYTE *)(*(_QWORD *)(a1 + 3544) + v69) = v70;
                        *(_BYTE *)(*(_QWORD *)(a1 + 3552) + v69) = v70;
                      }
                    }
                    *(_QWORD *)v102 += 32LL;
                  }
                  while ( v97 != *(const __m128i **)v102 );
                }
              }
              sub_68D370((char **)(a1 + 4776), 0, *(_QWORD *)(a1 + 4784), "no reason given", 0xFu);
              *(_BYTE *)(a1 + 4808) = 0;
              v75 = sub_11CC760(v91);
              v102[0] = v75;
              if ( v75 == -1 )
              {
                v80 = *(_QWORD *)(a1 + 4552);
                if ( v80 && *(_DWORD *)(v80 - 4) )
                {
                  v111[1] = __PAIR64__(v99, v8);
                  v111[0] = v6;
                  n_8 = v7;
                  sub_695100(a1, (__int64)v111);
                }
              }
              else if ( v75 == 1 )
              {
                if ( *(_BYTE *)(a1 + 4360) )
                {
                  v76 = *(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 56LL);
                  if ( (char *)v76 == (char *)&sub_698C60 )
                    sub_68D370((char **)(a1 + 4776), 0, *(_QWORD *)(a1 + 4784), "(sat.giveup has-uninterpreted)", 0x1Eu);
                  else
                    v76(a1, "(sat.giveup has-uninterpreted)");
                  v102[0] = 0;
                }
                else if ( v98 )
                {
                  sub_68F360(a1, *(double *)v5.m128_u64);
                }
              }
              else
              {
                v77 = *(char **)(a1 + 3896);
                v78 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 56LL);
                if ( (char *)v78 == (char *)&sub_698C60 )
                {
                  v79 = strlen(*(const char **)(a1 + 3896));
                  sub_68D370((char **)(a1 + 4776), 0, *(_QWORD *)(a1 + 4784), v77, v79);
                }
                else
                {
                  v78(a1, *(_QWORD *)(a1 + 3896));
                }
              }
            }
          }
          if ( v6 )
            goto LABEL_28;
          goto LABEL_29;
        }
      }
      if ( (v102[0] & 0x10) == 0 || (*v40 = 0, ++v40, v43 != v40) )
      {
        do
        {
          *v40 = 0;
          v40 += 2;
          v40[-1] = 0;
        }
        while ( v43 != v40 );
      }
      *(_QWORD *)v102 = v43;
      v11 = v41 - 1;
      v44 = &v6[v8];
LABEL_67:
      v45 = v6;
      do
      {
        while ( v45->m128i_i64[0] <= 1uLL )
        {
          if ( ++v45 == v44 )
            goto LABEL_75;
        }
        v46 = 16LL * (*(_DWORD *)(v45->m128i_i64[0] + 12) & (unsigned int)v11);
        v47 = &v42[(unsigned __int64)v46 / 0x10];
        if ( v12 == v46 )
        {
LABEL_78:
          if ( v42 == v47 )
          {
LABEL_83:
            v93.m128i_i32[2] = v41;
            v94.m128i_i64[0] = v12;
            v94.m128i_i32[2] = v11;
            *(_QWORD *)v96 = v44;
            *(_QWORD *)v100 = v10;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v48 = *(_QWORD *)v102;
          v49 = v42;
          while ( v49->m128i_i64[0] )
          {
            if ( v47 == ++v49 )
              goto LABEL_83;
          }
        }
        else
        {
          v48 = *(_QWORD *)v102;
          v49 = &v42[(unsigned __int64)v46 / 0x10];
          while ( v49->m128i_i64[0] )
          {
            if ( ++v49 == *(__m128i **)v102 )
              goto LABEL_78;
          }
        }
        v50 = _mm_loadu_si128(v45++);
        *(_QWORD *)v102 = v48;
        *v49 = v50;
      }
      while ( v45 != v44 );
      goto LABEL_75;
    }
    v20 = a1 + 4840;
    sub_6940A0(a1 + 4840);
    v102[0] = sub_692550(a1, (__m128)0LL);
    v101 = nullptr;
    if ( v102[0] == 1 )
    {
      v102[0] = sub_695B60(a1, 0, nullptr, (__m128)0LL);
      v101 = nullptr;
      if ( v102[0] == 1 )
      {
        v99 = 0;
        v7 = 0;
        v8 = 8;
        goto LABEL_117;
      }
    }
LABEL_28:
    sub_186B220(v6);
LABEL_29:
    v106 = v101;
    sub_2334C0(&v105);
  }
  return (unsigned int)v102[0];
}

