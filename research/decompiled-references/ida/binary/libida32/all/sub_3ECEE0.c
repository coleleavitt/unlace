__int64 __fastcall sub_3ECEE0(_QWORD *a1, __int64 *a2)
{
  _QWORD *v2; // rbx
  __m128i *v4; // r14
  __int64 (__fastcall *v5)(__int64); // rax
  const __m128i *v6; // rax
  const __m128i *v7; // rdi
  __int64 (*v8)(void); // rax
  const __m128i *v9; // rdi
  __m128i v10; // xmm0
  const __m128i *v11; // rdi
  __int64 (*v12)(void); // rax
  const __m128i *v13; // rdi
  unsigned __int64 v14; // r15
  _QWORD *v15; // r15
  _QWORD *v16; // rbx
  __m128i *v17; // rdi
  void (__fastcall *v18)(__m128i *, const __m128i *); // rax
  __m128i *v19; // rdi
  void (__fastcall *v20)(__m128i *, const __m128i *); // rax
  void (__fastcall *v21)(__m128i *, const __m128i *); // rax
  _QWORD *v22; // rbp
  char v23; // al
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __m128i *v28; // rdx
  unsigned __int64 v29; // r8
  bool v30; // cc
  __int64 v31; // r10
  __int64 v32; // rax
  int v33; // r11d
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 *v36; // rdi
  __int64 v37; // rax
  unsigned __int64 v38; // rdi
  __m128i *v39; // rdx
  unsigned __int64 v40; // rbp
  unsigned __int64 v41; // r8
  __int64 v42; // rax
  unsigned __int64 v43; // r11
  int v44; // r10d
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 *v47; // rdi
  __int64 v48; // rax
  void (__fastcall *v49)(__m128i *, const __m128i *); // rax
  __m128i *v50; // rdi
  void (__fastcall *v51)(__m128i *, const __m128i *); // rax
  __m128i *v52; // rdi
  void (__fastcall *v53)(__m128i *, const __m128i *); // rax
  unsigned __int64 v55; // rax
  __int64 v56; // rcx
  __int64 *v57; // rdi
  __int64 v58; // rax
  unsigned __int64 v59; // rax
  __int64 v60; // rcx
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rax
  _OWORD *v65; // rdi
  void (*v66)(void); // rax
  __m128i si128; // xmm0
  __m128i *v68; // rdi
  void (__fastcall *v69)(__m128i *, const __m128i *); // rax
  void (__fastcall *v70)(__m128i *, const __m128i *); // rax
  char v71; // al
  unsigned __int64 v72; // r9
  unsigned __int64 v73; // rax
  __int64 v74; // r11
  int v75; // r8d
  __int64 v76; // rt1
  unsigned __int64 v77; // r10
  __int64 v78; // rax
  __int64 v79; // rsi
  __int64 v80; // rsi
  __int64 v81; // rax
  __int64 v82; // rbp
  __int64 v83; // rsi
  __m128i v84; // xmm0
  __m128i *v85; // rsi
  __int64 v86; // rax
  __int64 v87; // rax
  __m128i v88; // [rsp+8h] [rbp-198h] BYREF
  __m128i *v89; // [rsp+18h] [rbp-188h]
  unsigned __int64 v90; // [rsp+20h] [rbp-180h]
  _QWORD *v91; // [rsp+28h] [rbp-178h]
  __m128i *v92; // [rsp+30h] [rbp-170h]
  unsigned __int64 v93; // [rsp+38h] [rbp-168h]
  unsigned __int8 v94; // [rsp+47h] [rbp-159h]
  unsigned __int64 v95; // [rsp+48h] [rbp-158h]
  unsigned __int64 v96; // [rsp+50h] [rbp-150h]
  __int64 v97; // [rsp+58h] [rbp-148h]
  unsigned __int64 v98; // [rsp+60h] [rbp-140h]
  __m128i v99; // [rsp+68h] [rbp-138h] BYREF
  __m128i v100; // [rsp+78h] [rbp-128h] BYREF
  __m128i v101; // [rsp+88h] [rbp-118h] BYREF
  __m128i v102; // [rsp+98h] [rbp-108h] BYREF
  __int64 v103; // [rsp+A8h] [rbp-F8h]
  int v104; // [rsp+B0h] [rbp-F0h]
  __m128i v105; // [rsp+B8h] [rbp-E8h] BYREF
  __int64 v106; // [rsp+C8h] [rbp-D8h]
  int v107; // [rsp+D0h] [rbp-D0h]
  __int128 v108; // [rsp+D8h] [rbp-C8h] BYREF
  __int64 v109; // [rsp+E8h] [rbp-B8h]
  int v110; // [rsp+F0h] [rbp-B0h]
  _BYTE v111[28]; // [rsp+F8h] [rbp-A8h] BYREF
  __int128 v112; // [rsp+118h] [rbp-88h] BYREF
  __int64 v113; // [rsp+128h] [rbp-78h]
  int v114; // [rsp+130h] [rbp-70h]
  _QWORD v115[3]; // [rsp+138h] [rbp-68h] BYREF
  int v116; // [rsp+150h] [rbp-50h]
  unsigned __int64 v117; // [rsp+160h] [rbp-40h]

  v2 = a1;
  v117 = __readfsqword(0x28u);
  v103 = 0;
  v92 = &v102;
  v104 = 3;
  v102 = 0;
  v94 = sub_3ECE00(a1, (__int64)&v102);
  if ( !v94 )
    return v94;
  v4 = (__m128i *)a1[6];
  v5 = *(__int64 (__fastcall **)(__int64))(v4->m128i_i64[0] + 32);
  if ( v5 == sub_3D58E0 )
    v6 = v4 + 1;
  else
    v6 = (const __m128i *)v5(a1[6]);
  v7 = (const __m128i *)a1[1];
  v99 = _mm_loadu_si128(v6);
  v8 = *(__int64 (**)(void))(v7->m128i_i64[0] + 32);
  if ( (char *)v8 == (char *)sub_3D58E0 )
    v9 = v7 + 1;
  else
    v9 = (const __m128i *)v8();
  v10 = _mm_loadu_si128(v9);
  v11 = (const __m128i *)v2[2];
  v100 = v10;
  v12 = *(__int64 (**)(void))(v11->m128i_i64[0] + 32);
  if ( (char *)v12 == (char *)sub_3D58E0 )
    v13 = v11 + 1;
  else
    v13 = (const __m128i *)v12();
  v14 = a2[1];
  v101 = _mm_loadu_si128(v13);
  if ( v102.m128i_i64[0] >= (unsigned __int64)v102.m128i_i64[1] )
  {
LABEL_56:
    v49 = *(void (__fastcall **)(__m128i *, const __m128i *))(v4->m128i_i64[0] + 24);
    if ( v49 != sub_3D58D0 )
      goto LABEL_65;
LABEL_57:
    v4[1] = _mm_load_si128(&v99);
    v50 = (__m128i *)v2[1];
    v51 = *(void (__fastcall **)(__m128i *, const __m128i *))(v50->m128i_i64[0] + 24);
    if ( v51 != sub_3D58D0 )
      goto LABEL_66;
LABEL_58:
    v50[1] = _mm_load_si128(&v100);
    v52 = (__m128i *)v2[2];
    v53 = *(void (__fastcall **)(__m128i *, const __m128i *))(v52->m128i_i64[0] + 24);
    if ( v53 != sub_3D58D0 )
      goto LABEL_67;
    goto LABEL_59;
  }
  v93 = v14;
  v15 = v2;
  v91 = v2 + 5;
  v16 = v2 + 10;
  v89 = (__m128i *)&v108;
  do
  {
    v17 = (__m128i *)v15[1];
    v18 = *(void (__fastcall **)(__m128i *, const __m128i *))(v17->m128i_i64[0] + 24);
    if ( v18 == sub_3D58D0 )
    {
      v17[1] = _mm_load_si128(&v102);
      v19 = (__m128i *)v15[2];
      v20 = *(void (__fastcall **)(__m128i *, const __m128i *))(v19->m128i_i64[0] + 24);
      if ( v20 == sub_3D58D0 )
        goto LABEL_12;
    }
    else
    {
      v18(v17, v92);
      v19 = (__m128i *)v15[2];
      v20 = *(void (__fastcall **)(__m128i *, const __m128i *))(v19->m128i_i64[0] + 24);
      if ( v20 == sub_3D58D0 )
      {
LABEL_12:
        v19[1] = _mm_load_si128(&v102);
        v21 = *(void (__fastcall **)(__m128i *, const __m128i *))(v4->m128i_i64[0] + 24);
        if ( v21 != sub_3D58D0 )
          goto LABEL_76;
        goto LABEL_13;
      }
    }
    v20(v19, v92);
    v21 = *(void (__fastcall **)(__m128i *, const __m128i *))(v4->m128i_i64[0] + 24);
    if ( v21 != sub_3D58D0 )
    {
LABEL_76:
      v21(v4, v92);
      goto LABEL_14;
    }
LABEL_13:
    v4[1] = _mm_load_si128(&v102);
LABEL_14:
    v22 = v91;
    sub_3EC820(v91);
    sub_3EC820(v16);
    v106 = 0;
    v107 = 3;
    v109 = 0;
    v110 = 3;
    v105 = 0;
    v108 = 0;
    LOBYTE(v22) = sub_3ECE00(v22, (__int64)&v105);
    v23 = sub_3ECE00(v16, (__int64)v89);
    if ( !(_BYTE)v22 && !v23 )
      break;
    v24 = v105.m128i_i64[0];
    v25 = v108;
    v27 = v102.m128i_u64[1];
    v26 = v102.m128i_i64[0];
    *(_DWORD *)&v111[24] = 3;
    memset(v111, 0, 24);
    if ( v105.m128i_i64[0] >= (unsigned __int64)v108 )
    {
      if ( (unsigned __int64)v108 >= v105.m128i_i64[0] )
        goto LABEL_40;
      v110 = 2;
      v25 = v105.m128i_i64[0];
      v28 = v89;
    }
    else
    {
      v107 = 1;
      v28 = &v105;
    }
    v29 = v28->m128i_i64[0];
    v30 = v25 <= v28->m128i_i64[0];
    *(__m128i *)&v111[12] = _mm_loadu_si128((const __m128i *)((char *)&v28->m128i_u64[1] + 4));
    if ( v30 )
      v29 = v25;
    if ( v29 < v102.m128i_i64[0] )
      v29 = v102.m128i_i64[0];
    if ( v25 > v102.m128i_i64[1] )
      v25 = v102.m128i_u64[1];
    *(_QWORD *)v111 = v29;
    *(_QWORD *)&v111[8] = v25;
    if ( v25 < v29 )
    {
      *(_QWORD *)&v111[8] = v29;
      v25 = v29;
    }
    else if ( v29 != v25 )
    {
      v31 = *(_QWORD *)&v111[16];
      if ( *(_QWORD *)&v111[16] )
      {
        v32 = a2[1];
        v33 = *(_DWORD *)&v111[24];
        v34 = *a2;
        if ( a2[2] < (unsigned __int64)(v32 + 1) )
        {
          v95 = v29;
          LODWORD(v90) = *(_DWORD *)&v111[24];
          v88.m128i_i64[0] = *(_QWORD *)&v111[16];
          v64 = qvector_reserve(a2, v34, v32 + 1, 32);
          v29 = v95;
          v33 = v90;
          *a2 = v64;
          v34 = v64;
          v31 = v88.m128i_i64[0];
          v32 = a2[1];
        }
        v35 = v34 + 32 * v32;
        *(_QWORD *)v35 = v29;
        *(_QWORD *)(v35 + 8) = v25;
        v25 = *(_QWORD *)&v111[8];
        *(_QWORD *)(v35 + 16) = v31;
        *(_DWORD *)(v35 + 24) = v33;
        ++a2[1];
      }
    }
    v105.m128i_i64[0] = v25;
    if ( v105.m128i_i64[1] < v25 )
      v105.m128i_i64[1] = v25;
    *(_QWORD *)&v108 = v25;
    if ( *((_QWORD *)&v108 + 1) < v25 )
      *((_QWORD *)&v108 + 1) = v25;
    v36 = (__int64 *)v15[1];
    v37 = *v36;
    v90 = v15[2];
    v88.m128i_i64[0] = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, _QWORD, unsigned __int64))(v37 + 40))(
                         v36,
                         v25,
                         0,
                         v27);
    v26 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))(*(_QWORD *)v90 + 40LL))(v90, v25, 0);
    if ( v88.m128i_i64[0] <= v26 )
      v26 = v88.m128i_i64[0];
    v27 = v102.m128i_u64[1];
    v102.m128i_i64[0] = v26;
    if ( v102.m128i_i64[1] >= v26 )
    {
      if ( *(_QWORD *)v111 < *(_QWORD *)&v111[8] )
        continue;
    }
    else
    {
      v102.m128i_i64[1] = v26;
      if ( *(_QWORD *)v111 < *(_QWORD *)&v111[8] )
        break;
      v27 = v26;
    }
    v24 = v25;
LABEL_40:
    v38 = v105.m128i_u64[1];
    if ( v24 < v105.m128i_i64[1] )
    {
      if ( v25 >= *((_QWORD *)&v108 + 1) )
      {
        v107 = 1;
        v39 = &v105;
        goto LABEL_43;
      }
      *(__m128i *)v111 = _mm_load_si128(&v105);
      *(__m128i *)&v111[12] = _mm_loadu_si128((const __m128i *)((char *)&v105.m128i_u64[1] + 4));
      if ( *((_QWORD *)&v108 + 1) < v105.m128i_i64[1] )
      {
        *(_QWORD *)&v111[8] = *((_QWORD *)&v108 + 1);
        v38 = *((_QWORD *)&v108 + 1);
      }
      if ( v24 < v26 )
      {
        *(_QWORD *)v111 = v26;
        v40 = v26;
      }
      else
      {
        v40 = *(_QWORD *)v111;
      }
      if ( v27 < v38 )
      {
        *(_QWORD *)&v111[8] = v27;
        v38 = v27;
      }
      if ( v38 < v40 )
        goto LABEL_73;
      if ( v40 >= v38 )
      {
        v40 = v38;
        goto LABEL_52;
      }
      v55 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64))(*(_QWORD *)v15[1] + 40LL))(v15[1], v38, 2);
      v56 = *(_QWORD *)v111;
      v57 = (__int64 *)v15[2];
      if ( v55 < *(_QWORD *)v111 )
        v55 = *(_QWORD *)&v111[8];
      if ( v55 != -1 )
        v56 = v55;
      v58 = *v57;
      v88.m128i_i64[0] = v56;
      v59 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(v58 + 40))(v57, *(_QWORD *)&v111[8], 2);
      v60 = v88.m128i_i64[0];
      v61 = v59;
      if ( v59 < *(_QWORD *)v111 )
        v61 = *(_QWORD *)&v111[8];
      v62 = v88.m128i_i64[0];
      if ( v61 == -1 )
        v61 = *(_QWORD *)v111;
      if ( v61 <= v88.m128i_i64[0] )
        v62 = v61;
      if ( v62 < *(_QWORD *)v111 )
      {
        v40 = *(_QWORD *)&v111[8];
      }
      else
      {
        v40 = *(_QWORD *)&v111[8];
        if ( v62 + 1 < *(_QWORD *)&v111[8] )
        {
          *(_QWORD *)&v111[8] = v62 + 1;
          if ( v62 + 1 < *(_QWORD *)v111 )
          {
            *(_QWORD *)v111 = v62 + 1;
            v40 = v62 + 1;
            goto LABEL_52;
          }
          v40 = v62 + 1;
        }
      }
      if ( *(_QWORD *)v111 >= v40 )
      {
LABEL_52:
        v47 = (__int64 *)v15[1];
        v48 = *v47;
        v90 = v15[2];
        v88.m128i_i64[0] = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, _QWORD))(v48 + 40))(v47, v40, 0);
        v26 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))(*(_QWORD *)v90 + 40LL))(
                v90,
                v40,
                0);
        if ( v88.m128i_i64[0] <= v26 )
          v26 = v88.m128i_i64[0];
        v27 = v102.m128i_u64[1];
        v102.m128i_i64[0] = v26;
        if ( v102.m128i_i64[1] < v26 )
        {
          v102.m128i_i64[1] = v26;
          v2 = v15;
          v14 = v93;
          goto LABEL_56;
        }
        continue;
      }
      v65 = (_OWORD *)v15[1];
      v66 = *(void (**)(void))(*(_QWORD *)v65 + 24LL);
      if ( (char *)v66 == (char *)sub_3D58D0 )
      {
        si128 = _mm_load_si128((const __m128i *)v111);
        v88.m128i_i64[0] = (__int64)v111;
        v65[1] = si128;
      }
      else
      {
        v96 = v62;
        v95 = v88.m128i_i64[0];
        v90 = v61;
        v88.m128i_i64[0] = (__int64)v111;
        v66();
        v62 = v96;
        v60 = v95;
        v61 = v90;
      }
      v68 = (__m128i *)v15[2];
      v69 = *(void (__fastcall **)(__m128i *, const __m128i *))(v68->m128i_i64[0] + 24);
      if ( v69 == sub_3D58D0 )
      {
        v68[1] = _mm_load_si128((const __m128i *)v111);
      }
      else
      {
        v96 = v62;
        v95 = v60;
        v90 = v61;
        v69(v68, (const __m128i *)v88.m128i_i64[0]);
        v62 = v96;
        v60 = v95;
        v61 = v90;
      }
      v70 = *(void (__fastcall **)(__m128i *, const __m128i *))(v4->m128i_i64[0] + 24);
      if ( v70 == sub_3D58D0 )
      {
        v4[1] = _mm_load_si128((const __m128i *)v111);
      }
      else
      {
        v96 = v62;
        v95 = v60;
        v90 = v61;
        v70(v4, (const __m128i *)v88.m128i_i64[0]);
        v62 = v96;
        v60 = v95;
        v61 = v90;
      }
      v98 = v62;
      v97 = v60;
      v96 = v61;
      sub_3EC820(v91);
      sub_3EC820(v16);
      sub_3EC820(v15 + 15);
      v112 = 0;
      v113 = 0;
      v114 = 3;
      v115[1] = 0;
      v115[2] = 0;
      v116 = 3;
      sub_3ECE00(v91, (__int64)&v112);
      v115[0] = 0;
      v95 = v112;
      sub_3ECE00(v16, (__int64)v115);
      v90 = v115[0];
      v71 = sub_3ECE00(v15 + 15, v88.m128i_i64[0]);
      v72 = v98;
      if ( v71 )
      {
        v73 = v95;
        v74 = *(_QWORD *)v111;
        v40 = v95;
        if ( v90 >= v95 )
          v73 = v90;
        if ( v90 <= v95 )
          v40 = v90;
        if ( *(_QWORD *)v111 < v73 )
        {
          v75 = (v90 < v95) + 1;
          *(_DWORD *)&v111[24] = v75;
          if ( v40 < *(_QWORD *)v111 )
          {
            *(_QWORD *)v111 = v40;
            *(_QWORD *)&v111[8] = v74;
          }
          else
          {
            *(_QWORD *)&v111[8] = v40;
            if ( *(_QWORD *)v111 >= v40 )
              goto LABEL_52;
            v76 = v40;
            v40 = *(_QWORD *)v111;
            v74 = v76;
          }
          goto LABEL_118;
        }
        if ( v40 < *(_QWORD *)v111 )
        {
          *(_QWORD *)v111 = v40;
          if ( v90 < v95 )
          {
            v75 = 2;
            *(_DWORD *)&v111[24] = 2;
          }
          else
          {
            v75 = 1;
            *(_DWORD *)&v111[24] = 1;
          }
          *(_QWORD *)&v111[8] = v74;
LABEL_118:
          v77 = *(_QWORD *)&v111[16];
          if ( *(_QWORD *)&v111[16] )
          {
            v78 = a2[1];
            v79 = *a2;
            if ( a2[2] < (unsigned __int64)(v78 + 1) )
            {
              v95 = *(_QWORD *)&v111[16];
              LODWORD(v90) = v75;
              v88.m128i_i64[0] = v74;
              v86 = qvector_reserve(a2, v79, v78 + 1, 32);
              v77 = v95;
              v75 = v90;
              *a2 = v86;
              v79 = v86;
              v74 = v88.m128i_i64[0];
              v78 = a2[1];
            }
            v80 = 32 * v78 + v79;
            *(_QWORD *)v80 = v40;
            *(_QWORD *)(v80 + 8) = v74;
            v40 = *(_QWORD *)&v111[8];
            *(_QWORD *)(v80 + 16) = v77;
            *(_DWORD *)(v80 + 24) = v75;
            ++a2[1];
          }
          else
          {
            v40 = v74;
          }
          goto LABEL_52;
        }
        if ( v96 == v97 || *(_QWORD *)v111 >= v98 )
          v72 = *(_QWORD *)&v111[8];
        else
          *(_QWORD *)&v111[8] = v98;
        v81 = a2[1];
        *(_DWORD *)&v111[24] = 3;
        v82 = *(_QWORD *)&v111[16];
        v83 = *a2;
        v84 = _mm_unpacklo_epi64((__m128i)*(unsigned __int64 *)v111, (__m128i)v72);
        if ( a2[2] < (unsigned __int64)(v81 + 1) )
        {
          v88 = v84;
          v87 = qvector_reserve(a2, v83, v81 + 1, 32);
          v84 = _mm_load_si128(&v88);
          *a2 = v87;
          v83 = v87;
          v81 = a2[1];
        }
        v85 = (__m128i *)(32 * v81 + v83);
        v85[1].m128i_i64[0] = v82;
        v85[1].m128i_i32[2] = 3;
        *v85 = v84;
        ++a2[1];
      }
      v40 = *(_QWORD *)&v111[8];
      goto LABEL_52;
    }
    if ( v25 < *((_QWORD *)&v108 + 1) )
    {
      v110 = 2;
      v39 = v89;
LABEL_43:
      *(__m128i *)v111 = _mm_load_si128(v39);
      v40 = *(_QWORD *)v111;
      *(__m128i *)&v111[12] = _mm_loadu_si128((const __m128i *)((char *)&v39->m128i_u64[1] + 4));
      if ( *(_QWORD *)v111 < v26 )
      {
        *(_QWORD *)v111 = v26;
        v40 = v26;
      }
      v41 = *(_QWORD *)&v111[8];
      if ( v27 < *(_QWORD *)&v111[8] )
      {
        *(_QWORD *)&v111[8] = v27;
        v41 = v27;
      }
      if ( v41 >= v40 )
      {
        if ( v40 >= v41 )
        {
          v40 = v41;
        }
        else
        {
          v42 = a2[1];
          v43 = *(_QWORD *)&v111[16];
          v44 = *(_DWORD *)&v111[24];
          v45 = *a2;
          if ( a2[2] < (unsigned __int64)(v42 + 1) )
          {
            LODWORD(v95) = *(_DWORD *)&v111[24];
            v90 = *(_QWORD *)&v111[16];
            v88.m128i_i64[0] = v41;
            v63 = qvector_reserve(a2, v45, v42 + 1, 32);
            v44 = v95;
            v43 = v90;
            *a2 = v63;
            v45 = v63;
            v41 = v88.m128i_i64[0];
            v42 = a2[1];
          }
          v46 = v45 + 32 * v42;
          *(_QWORD *)v46 = v40;
          *(_QWORD *)(v46 + 8) = v41;
          v40 = *(_QWORD *)&v111[8];
          *(_QWORD *)(v46 + 16) = v43;
          *(_DWORD *)(v46 + 24) = v44;
          ++a2[1];
        }
        goto LABEL_52;
      }
LABEL_73:
      *(_QWORD *)&v111[8] = v40;
      goto LABEL_52;
    }
  }
  while ( v26 < v27 );
  v2 = v15;
  v14 = v93;
  v49 = *(void (__fastcall **)(__m128i *, const __m128i *))(v4->m128i_i64[0] + 24);
  if ( v49 == sub_3D58D0 )
    goto LABEL_57;
LABEL_65:
  v49(v4, &v99);
  v50 = (__m128i *)v2[1];
  v51 = *(void (__fastcall **)(__m128i *, const __m128i *))(v50->m128i_i64[0] + 24);
  if ( v51 == sub_3D58D0 )
    goto LABEL_58;
LABEL_66:
  v51(v50, &v100);
  v52 = (__m128i *)v2[2];
  v53 = *(void (__fastcall **)(__m128i *, const __m128i *))(v52->m128i_i64[0] + 24);
  if ( v53 != sub_3D58D0 )
  {
LABEL_67:
    v53(v52, &v101);
    goto LABEL_60;
  }
LABEL_59:
  v52[1] = _mm_load_si128(&v101);
LABEL_60:
  if ( v14 >= a2[1] )
  {
    if ( !under_debugger )
      interr(1846);
    BUG();
  }
  return v94;
}

