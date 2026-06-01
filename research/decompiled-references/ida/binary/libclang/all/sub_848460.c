__int64 __fastcall sub_848460(__int64 a1, unsigned int a2, __int64 a3, const __m128i *a4, int a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __m128i v10; // xmm0
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  unsigned int v13; // r12d
  __int64 v14; // r15
  unsigned __int64 v15; // r15
  unsigned __int8 v16; // al
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  _WORD *v19; // rcx
  unsigned int v20; // r11d
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  char v24; // al
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // al
  unsigned __int64 v31; // r10
  __int16 v32; // ax
  char *v33; // r12
  size_t v34; // rdx
  size_t v35; // rbx
  unsigned __int8 **v36; // rax
  unsigned __int8 **v37; // r13
  _QWORD *v38; // rax
  __int64 v39; // rsi
  _QWORD *v40; // rdx
  unsigned __int8 **v41; // rax
  unsigned __int8 **v42; // rbx
  unsigned __int8 **v43; // rax
  __int64 *v44; // rbx
  __int64 v45; // rbp
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // r12
  _BYTE *v49; // rbx
  __int64 v50; // r12
  unsigned __int8 **v51; // rax
  unsigned __int8 **v52; // rbx
  unsigned __int8 **v53; // rdi
  unsigned __int64 *v54; // rax
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rax
  unsigned __int64 *v57; // rax
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rax
  _WORD *v60; // rsi
  char v61; // dl
  __int64 v62; // r15
  int v63; // eax
  char v64; // al
  unsigned __int8 **v65; // rax
  unsigned __int8 v66; // r11
  unsigned __int8 **v67; // rbx
  unsigned int v68; // eax
  unsigned __int8 **v69; // rax
  unsigned __int64 *v70; // rax
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rdx
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rdx
  char v77; // al
  __int64 v78; // rax
  unsigned __int64 v79; // r12
  __int64 v80; // rdi
  _BYTE *v81; // rbx
  bool v82; // [rsp+8h] [rbp-D0h]
  unsigned __int8 v83; // [rsp+8h] [rbp-D0h]
  unsigned __int8 v84; // [rsp+8h] [rbp-D0h]
  unsigned __int8 v85; // [rsp+8h] [rbp-D0h]
  unsigned __int8 v86; // [rsp+8h] [rbp-D0h]
  unsigned __int8 v87; // [rsp+8h] [rbp-D0h]
  _WORD *v88; // [rsp+8h] [rbp-D0h]
  __int64 v89; // [rsp+8h] [rbp-D0h]
  int v90; // [rsp+8h] [rbp-D0h]
  unsigned __int8 v91; // [rsp+8h] [rbp-D0h]
  unsigned __int8 v92; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v94; // [rsp+18h] [rbp-C0h]
  _WORD *v95; // [rsp+18h] [rbp-C0h]
  unsigned __int8 v96; // [rsp+18h] [rbp-C0h]
  unsigned __int8 v97; // [rsp+18h] [rbp-C0h]
  __int64 v98; // [rsp+18h] [rbp-C0h]
  __int64 v99; // [rsp+20h] [rbp-B8h]
  unsigned __int8 v101; // [rsp+28h] [rbp-B0h]
  unsigned __int8 v102; // [rsp+2Fh] [rbp-A9h]
  __m128i v103; // [rsp+30h] [rbp-A8h] BYREF
  char *v104; // [rsp+40h] [rbp-98h]
  __int64 v105; // [rsp+48h] [rbp-90h]
  char v106[16]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v107[20]; // [rsp+60h] [rbp-78h] BYREF
  char v108; // [rsp+74h] [rbp-64h]
  _DWORD *v109; // [rsp+78h] [rbp-60h]
  __int64 v110; // [rsp+80h] [rbp-58h]
  _DWORD v111[4]; // [rsp+88h] [rbp-50h] BYREF
  char v112; // [rsp+98h] [rbp-40h]

  v6 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v10 = _mm_loadu_si128(a4);
  v11 = v10.m128i_i64[0];
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v103 = v10;
  v13 = *(unsigned __int8 *)(v12 + 16) - 42;
  v82 = v13 <= 1;
  if ( !v10.m128i_i64[0] )
  {
    v99 = 0;
    v17 = 0;
    v15 = 0;
    goto LABEL_10;
  }
  v14 = v10.m128i_i8[0] & 3;
  if ( v14 == 1 )
  {
    v31 = v10.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    v17 = v10.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    if ( a5 > 2 || a5 <= 0 || !v31 )
      goto LABEL_53;
    v32 = *(_WORD *)v31 & 0x1FF;
    if ( v32 != 10 )
    {
      if ( v32 != 49 )
      {
        if ( v32 == 19 )
        {
          v14 = 3;
          v33 = sub_806550((*(_BYTE *)(v31 + 2) >> 3) & 0xF);
          v35 = v34;
          goto LABEL_45;
        }
        goto LABEL_53;
      }
      v14 = 2;
    }
    v35 = 0;
    v33 = nullptr;
    goto LABEL_45;
  }
  if ( (v10.m128i_i8[0] & 3) != 0 )
  {
    if ( a5 > 2 || a5 <= 0 )
    {
      v99 = 0;
      v11 = 0;
      v17 = 0;
      v15 = 0;
      goto LABEL_10;
    }
    v17 = 0;
    if ( v14 == 2 )
    {
      v14 = 0;
      v35 = 0;
      v33 = nullptr;
      goto LABEL_45;
    }
LABEL_53:
    v99 = 0;
    v11 = 0;
    v15 = 0;
    goto LABEL_10;
  }
  v11 = v10.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  v15 = v10.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  if ( a5 <= 2 && a5 > 0 )
  {
    v16 = *(_BYTE *)(v11 + 28) & 0x7F;
    if ( v16 != 79 )
      goto LABEL_7;
    v35 = 0;
    v14 = 2;
    v33 = nullptr;
LABEL_45:
    v36 = (unsigned __int8 **)sub_A2E1A0(a1, a2, 103, 0);
    v37 = v36;
    if ( v36 )
    {
      sub_823450(v36, v82);
      sub_823450(v37, a4[3].m128i_i32[2] != 0);
      sub_823450(v37, v14);
      sub_838D50(v37, v33, v35);
    }
    return 0;
  }
  v16 = *(_BYTE *)(v11 + 28) & 0x7F;
LABEL_7:
  v94 = v6;
  if ( (unsigned int)v16 - 32 <= 5 && (unsigned __int8)sub_789EF0(v11) )
  {
    v53 = (unsigned __int8 **)sub_A2E1A0(a1, a2, 2164, 0);
    if ( v53 )
      sub_823450(
        v53,
        (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v94 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) != 33);
    sub_A2DD70(a1, *(unsigned int *)(v11 + 24), 105);
    return 0;
  }
  v99 = 1;
  v17 = 0;
LABEL_10:
  v95 = (_WORD *)v17;
  v18 = sub_82A730(v103.m128i_i64[0], v103.m128i_i64[1]);
  v19 = v95;
  v20 = v18;
  if ( !(_BYTE)v18 )
  {
    if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) == 0 )
    {
      sub_A2E1A0(a1, a2, 110, 0);
      return 0;
    }
    v41 = (unsigned __int8 **)sub_A2E1A0(a1, a2, 2255, 1);
    v42 = v41;
    if ( v41 )
    {
      sub_823450(v41, v82);
      sub_823450(v42, a4[3].m128i_i32[2] != 0);
      sub_823450(v42, v99);
      sub_8356A0(v42, v11, 0xAu);
    }
    if ( v15
      && (*(_BYTE *)(v15 + 28) & 0x7Fu) - 38 <= 6
      && (*(_BYTE *)(v15 + 28) & 0x7F) != 0x29
      && *(char *)(v15 + 97) < 0 )
    {
      v43 = (unsigned __int8 **)sub_A2DD70(a1, *(unsigned int *)(v15 + 24), 2257);
      v44 = (__int64 *)v43;
      if ( v43 )
        sub_8356A0(v43, v11, 0xAu);
      v108 = 0;
      strcpy(v106, "static ");
      v104 = v106;
      *(_QWORD *)&v107[12] = 0;
      v111[0] = *(_DWORD *)v106;
      v109 = v111;
      v112 = 0;
      v107[8] = 0;
      strcpy((char *)v111 + 3, "tic ");
      v110 = 7;
      v105 = 0;
      v106[0] = 0;
      *(_QWORD *)v107 = _mm_shuffle_epi32(_mm_cvtsi32_si128(sub_77AF80(v15)), 224).m128i_u64[0];
      std::string::_M_dispose();
      v112 = 0;
      if ( v44 && *(_DWORD *)v107 && *(_DWORD *)&v107[4] )
      {
        v45 = *v44;
        if ( !*v44 )
        {
          v78 = sub_779BF0(v44[1]);
          *v44 = v78;
          v45 = v78;
        }
        v46 = *(unsigned int *)(v45 + 536);
        v47 = v46 + 1;
        if ( *(unsigned int *)(v45 + 540) < (unsigned __int64)(v46 + 1) )
        {
          v79 = *(_QWORD *)(v45 + 528);
          v49 = v107;
          v80 = v45 + 528;
          if ( (unsigned __int64)v107 < v79 || (unsigned __int64)v107 >= v79 + (v46 << 6) )
          {
            sub_79CA60(v80, v47);
            v46 = *(unsigned int *)(v45 + 536);
            v48 = *(_QWORD *)(v45 + 528);
          }
          else
          {
            sub_79CA60(v80, v47);
            v81 = &v107[-v79];
            v48 = *(_QWORD *)(v45 + 528);
            v46 = *(unsigned int *)(v45 + 536);
            v49 = &v81[v48];
          }
        }
        else
        {
          v48 = *(_QWORD *)(v45 + 528);
          v49 = v107;
        }
        v50 = (v46 << 6) + v48;
        *(_QWORD *)v50 = *(_QWORD *)v49;
        *(_DWORD *)(v50 + 8) = *((_DWORD *)v49 + 2);
        *(_QWORD *)(v50 + 12) = *(_QWORD *)(v49 + 12);
        *(_DWORD *)(v50 + 20) = *((_DWORD *)v49 + 5);
        *(_QWORD *)(v50 + 24) = v50 + 40;
        sub_8212A0((__int64 *)(v50 + 24), *((_BYTE **)v49 + 3), *((_QWORD *)v49 + 3) + *((_QWORD *)v49 + 4));
        *(_BYTE *)(v50 + 56) = v49[56];
        ++*(_DWORD *)(v45 + 536);
      }
      std::string::_M_dispose();
      return 0;
    }
    goto LABEL_84;
  }
  if ( (~v103.m128i_i8[0] & 3) == 0 )
  {
    v51 = (unsigned __int8 **)sub_A2E1A0(a1, a2, 2205, 0);
    v52 = v51;
    if ( v51 )
    {
      sub_823450(v51, v82);
      sub_823450(v52, a4[3].m128i_i32[2] != 0);
    }
LABEL_84:
    sub_8219E0(a1, v103.m128i_u64[0], v103.m128i_i64[1]);
    return 0;
  }
  if ( !v15 )
  {
    if ( !v95 || (*v95 & 0x1FF) != 0x31 )
      goto LABEL_33;
    if ( !*(_BYTE *)(a6 + 20) )
      goto LABEL_111;
    v38 = *(_QWORD **)a6;
    v39 = *(unsigned int *)(a6 + 12);
    v40 = (_QWORD *)(*(_QWORD *)a6 + 8 * v39);
    if ( *(_QWORD **)a6 != v40 )
    {
      while ( v95 != (_WORD *)*v38 )
      {
        if ( v40 == ++v38 )
          goto LABEL_124;
      }
      goto LABEL_33;
    }
LABEL_124:
    if ( (unsigned int)v39 < *(_DWORD *)(a6 + 8) )
    {
      *(_DWORD *)(a6 + 12) = v39 + 1;
      *v40 = v95;
    }
    else
    {
LABEL_111:
      v60 = v95;
      v96 = v20;
      v88 = v19;
      sub_25D5540(a6, v60);
      v19 = v88;
      v20 = v96;
      if ( !v61 )
        goto LABEL_33;
    }
    v97 = v20;
    v89 = (__int64)v19;
    *(__m128i *)v107 = _mm_load_si128(&v103);
    v62 = sub_69F240((__int64 *)v107);
    if ( (unsigned int)sub_B19900(v62) )
    {
      v68 = sub_8124E0(v89);
      v69 = (unsigned __int8 **)sub_A2E1A0(a1, v68, 2296, 0);
      if ( v69 )
        sub_8356A0(v69, v62, 8u);
      return 0;
    }
    v102 = v97;
    v98 = v89;
    v90 = sub_7A7530(*(_QWORD *)(v89 + 16) & 0xFFFFFFFFFFFFFFF8LL, 0);
    v63 = sub_8124E0(v98);
    v64 = sub_849100(0, a1, v63, v62, v90, a5, 0, a6);
    v20 = v102;
    if ( v64 )
      goto LABEL_33;
    return 0;
  }
  v21 = *(_BYTE *)(v15 + 28) & 0x7F;
  if ( (unsigned int)(v21 - 38) <= 6 )
  {
    v83 = v20;
    if ( (unsigned int)sub_77B3E0(v15) )
      return 0;
    v20 = v83;
    if ( a5 != 1 && (*(_BYTE *)(v15 + 29) & 1) != 0 )
    {
      v57 = sub_79A2B0(v15);
      v20 = v83;
      v58 = *v57;
      v59 = *v57 + 8LL * *((unsigned int *)v57 + 2);
      if ( v58 < v59 )
      {
        while ( *(_WORD *)(*(_QWORD *)v58 + 32LL) != 191 )
        {
          v58 += 8LL;
          if ( v59 == v58 )
            goto LABEL_17;
        }
      }
      else
      {
        if ( v58 == v59 )
          goto LABEL_17;
        while ( *(_WORD *)(*(_QWORD *)v59 + 32LL) != 191 )
        {
          v59 += 8LL;
          if ( v58 == v59 )
            goto LABEL_17;
        }
      }
      if ( v58 != v59 )
        return 0;
    }
LABEL_17:
    v22 = *(_QWORD *)(a1 + 16);
    v23 = *(_QWORD *)(v22 + 2160);
    if ( (*(_BYTE *)(v23 + 60) & 0x10) == 0 || (*(_BYTE *)(v23 + 89) & 4) == 0 || !*(_BYTE *)(v22 + 18216) )
      goto LABEL_29;
    if ( (*(_BYTE *)(v15 + 29) & 1) == 0 )
      goto LABEL_21;
    v92 = v20;
    v70 = sub_79A2B0(v15);
    v20 = v92;
    v71 = *v70;
    v72 = *v70 + 8LL * *((unsigned int *)v70 + 2);
    if ( v71 < v72 )
    {
      while ( *(_WORD *)(*(_QWORD *)v71 + 32LL) != 154 )
      {
        v71 += 8LL;
        if ( v72 == v71 )
          goto LABEL_134;
      }
    }
    else
    {
      if ( v71 == v72 )
        goto LABEL_134;
      while ( *(_WORD *)(*(_QWORD *)v72 + 32LL) != 154 )
      {
        v72 += 8LL;
        if ( v71 == v72 )
          goto LABEL_134;
      }
    }
    if ( v71 != v72 )
      goto LABEL_22;
LABEL_134:
    if ( (*(_BYTE *)(v15 + 29) & 1) != 0 )
    {
      v73 = sub_79A2B0(v15);
      v20 = v92;
      v74 = v73;
      v75 = *v73;
      v76 = v75 + 8LL * *((unsigned int *)v74 + 2);
      if ( v75 < v76 )
      {
        while ( *(_WORD *)(*(_QWORD *)v75 + 32LL) != 153 )
        {
          v75 += 8LL;
          if ( v76 == v75 )
            goto LABEL_21;
        }
      }
      else
      {
        if ( v75 == v76 )
          goto LABEL_21;
        while ( *(_WORD *)(*(_QWORD *)v76 + 32LL) != 153 )
        {
          v76 += 8LL;
          if ( v75 == v76 )
            goto LABEL_21;
        }
      }
      if ( v75 != v76 )
        goto LABEL_22;
    }
LABEL_21:
    v84 = v20;
    v24 = sub_B173E0(*(_QWORD *)(*(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFFFF0LL));
    v20 = v84;
    if ( !v24 )
    {
      v77 = sub_B17480(*(_QWORD *)(*(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFFFF0LL));
      v20 = v84;
      if ( !v77 )
        return 0;
    }
LABEL_22:
    if ( (*(_BYTE *)(v15 + 29) & 1) != 0 )
    {
      v85 = v20;
      v25 = sub_79A2B0(v15);
      v20 = v85;
      v26 = *v25;
      v27 = *v25 + 8LL * *((unsigned int *)v25 + 2);
      if ( v26 < v27 )
      {
        while ( *(_WORD *)(*(_QWORD *)v26 + 32LL) != 218 )
        {
          v26 += 8LL;
          if ( v27 == v26 )
            goto LABEL_29;
        }
      }
      else
      {
        if ( v26 == v27 )
          goto LABEL_29;
        while ( *(_WORD *)(*(_QWORD *)v27 + 32LL) != 218 )
        {
          v27 += 8LL;
          if ( v26 == v27 )
            goto LABEL_29;
        }
      }
      if ( v26 != v27 )
        return 0;
    }
LABEL_29:
    v21 = *(_BYTE *)(v15 + 28) & 0x7F;
  }
  if ( (unsigned int)(v21 - 32) <= 5 )
  {
    v86 = v20;
    v28 = sub_A2CB40(a1);
    v20 = v86;
    if ( (*(_BYTE *)(v28 + 1) & 8) != 0 && a5 != 1 && (*(_BYTE *)(v15 + 29) & 1) != 0 )
    {
      v54 = sub_79A2B0(v15);
      v20 = v86;
      v55 = *v54;
      v56 = *v54 + 8LL * *((unsigned int *)v54 + 2);
      if ( v55 < v56 )
      {
        while ( *(_WORD *)(*(_QWORD *)v55 + 32LL) != 191 )
        {
          v55 += 8LL;
          if ( v56 == v55 )
            goto LABEL_33;
        }
      }
      else
      {
        if ( v55 == v56 )
          goto LABEL_33;
        while ( *(_WORD *)(*(_QWORD *)v56 + 32LL) != 191 )
        {
          v56 += 8LL;
          if ( v55 == v56 )
            goto LABEL_33;
        }
      }
      if ( v55 != v56 )
        return 0;
    }
  }
LABEL_33:
  if ( v13 <= 1 )
  {
    v87 = v20;
    v29 = sub_69F610(&v103);
    v20 = v87;
    if ( v29 )
    {
      if ( (a4[1].m128i_i8[8] & 1) == 0 && sub_820300((__int64)&a4[1].m128i_i64[1]) )
      {
        v91 = v20;
        v65 = (unsigned __int8 **)sub_A2E1A0(a1, a2, 2263, 1);
        v66 = v91;
        v67 = v65;
        if ( v65 )
        {
          sub_823450(v65, a4[3].m128i_i32[2] != 0);
          sub_823450(v67, v99);
          sub_8356A0(v67, v11, 0xAu);
          v66 = v91;
        }
        v101 = v66;
        sub_8219E0(a1, v103.m128i_u64[0], v103.m128i_i64[1]);
        return v101;
      }
    }
    else
    {
      sub_A2E050(a1, a2, 110, 0);
      return v87;
    }
  }
  return v20;
}

