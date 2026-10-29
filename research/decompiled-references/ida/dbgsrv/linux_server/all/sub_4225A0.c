/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4225A0
// Address: 0x00000000004225A0

//----- (00000000004225A0) ----------------------------------------------------
__int64 __fastcall sub_4225A0(
        __int64 a1,
        __int64 a2,
        int a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  char v13; // al
  double v14; // xmm4_8
  double v15; // xmm5_8
  char v16; // r15
  unsigned int v17; // ebp
  __int64 v18; // rax
  __int64 v19; // r14
  __int16 v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  bool v26; // zf
  __int64 v27; // r9
  __int64 v28; // r11
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // esi
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rdx
  __m128i v36; // xmm1
  __m128 v37; // xmm0
  __int64 v38; // rsi
  int v39; // ebp
  char *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __m128 v44; // xmm4
  __m128 v45; // xmm5
  __int64 v46; // rax
  unsigned int v47; // r13d
  __m128 v48; // xmm4
  __m128 v49; // xmm5
  _QWORD *v50; // rax
  const char *v51; // rcx
  const char *v52; // rdx
  char v53; // al
  double v54; // xmm4_8
  double v55; // xmm5_8
  __int64 v56; // r9
  __int64 v57; // r11
  __int64 v58; // rax
  double v59; // xmm4_8
  double v60; // xmm5_8
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // r9
  _QWORD *v67; // rax
  _QWORD *v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rcx
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  unsigned __int64 v73; // r13
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rcx
  _QWORD *v80; // rax
  _QWORD *v81; // rdi
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __m128 v86; // xmm4
  __m128 v87; // xmm5
  __int64 v88; // [rsp+0h] [rbp-108h]
  __int64 v89; // [rsp+0h] [rbp-108h]
  __int64 v90; // [rsp+0h] [rbp-108h]
  __int64 v91; // [rsp+8h] [rbp-100h]
  __int64 v92; // [rsp+8h] [rbp-100h]
  __int64 v93; // [rsp+8h] [rbp-100h]
  __int64 v94; // [rsp+8h] [rbp-100h]
  __int64 v95; // [rsp+8h] [rbp-100h]
  __int64 v96; // [rsp+10h] [rbp-F8h]
  __int64 v97; // [rsp+10h] [rbp-F8h]
  __int64 v98; // [rsp+10h] [rbp-F8h]
  __int64 v99; // [rsp+10h] [rbp-F8h]
  __int64 v100; // [rsp+10h] [rbp-F8h]
  __int64 v101; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v102; // [rsp+18h] [rbp-F0h]
  __int64 v103; // [rsp+18h] [rbp-F0h]
  char v104; // [rsp+2Fh] [rbp-D9h] BYREF
  __int64 v105; // [rsp+30h] [rbp-D8h] BYREF
  int v106; // [rsp+38h] [rbp-D0h]
  char v107[16]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v108; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v109; // [rsp+C8h] [rbp-40h]

  v109 = __readfsqword(0x28u);
  v106 = a3;
  v105 = 0;
  v104 = 0;
  v13 = sub_41B640(a1, (int *)&v105, &v104, a4, a5, a6, a7, a8, a9, a10, a11);
  if ( !v13 )
    return 0;
  v16 = v13;
  v17 = v105;
  v18 = *(_QWORD *)(a1 + 1224);
  v19 = a1 + 1216;
  v20 = WORD2(v105);
  if ( !v18 )
    goto LABEL_9;
  v21 = a1 + 1216;
  do
  {
    while ( 1 )
    {
      v22 = *(_QWORD *)(v18 + 16);
      v23 = *(_QWORD *)(v18 + 24);
      if ( (int)v105 > *(_DWORD *)(v18 + 32) )
        break;
      v21 = v18;
      v18 = *(_QWORD *)(v18 + 16);
      if ( !v22 )
        goto LABEL_7;
    }
    v18 = *(_QWORD *)(v18 + 24);
  }
  while ( v23 );
LABEL_7:
  if ( v21 == v19 || (int)v105 < *(_DWORD *)(v21 + 32) )
  {
LABEL_9:
    sub_4563D0(a1, "EVENT FOR UNKNOWN THREAD %d, IGNORED...\n", v105);
    v24 = HIBYTE(v20);
    if ( (_BYTE)v20 != 127 )
      v24 = 0;
    ptrace(PTRACE_CONT, v17, 0, v24);
    return 0;
  }
  if ( *(_DWORD *)(v21 + 60) == 1
    && !*(_BYTE *)(a1 + 1349)
    && (v105 & 0x7F00000000LL) != 0
    && (char)((BYTE4(v105) & 0x7F) + 1) <= 1 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(30057);
    BUG();
  }
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(v21 + 60) = 1;
  sub_41C660(a1, 0, 1, *(double *)a4.m128_u64, a5, a6, a7, v14, v15, a10, a11);
  v26 = v104 == 0;
  *(_BYTE *)(a1 + 1412) = 0;
  if ( !v26 )
    goto LABEL_24;
  v27 = *(_QWORD *)(a1 + 1224);
  if ( !v27 )
    goto LABEL_23;
  v28 = a1 + 1216;
  do
  {
    while ( 1 )
    {
      v29 = *(_QWORD *)(v27 + 16);
      v30 = *(_QWORD *)(v27 + 24);
      if ( (signed int)v17 > *(_DWORD *)(v27 + 32) )
        break;
      v28 = v27;
      v27 = *(_QWORD *)(v27 + 16);
      if ( !v29 )
        goto LABEL_21;
    }
    v27 = *(_QWORD *)(v27 + 24);
  }
  while ( v30 );
LABEL_21:
  if ( v28 == v19 || (signed int)v17 < *(_DWORD *)(v28 + 32) )
  {
LABEL_23:
    sub_4563D0(a1, "thread %d disappeared after freezing?!...\n", v17);
LABEL_24:
    v31 = *(_QWORD *)(a1 + 1224);
    v32 = *(_DWORD *)(a2 + 4);
    if ( v31 )
    {
      v33 = a1 + 1216;
      do
      {
        while ( 1 )
        {
          v34 = *(_QWORD *)(v31 + 16);
          v35 = *(_QWORD *)(v31 + 24);
          if ( v32 > *(_DWORD *)(v31 + 32) )
            break;
          v33 = v31;
          v31 = *(_QWORD *)(v31 + 16);
          if ( !v34 )
            goto LABEL_29;
        }
        v31 = *(_QWORD *)(v31 + 24);
      }
      while ( v35 );
LABEL_29:
      if ( v19 != v33 && v32 >= *(_DWORD *)(v33 + 32) )
        *(_BYTE *)(v33 + 56) = 0;
    }
    sub_4788F0(a1 + 200, a2);
    return 1;
  }
  v36 = _mm_cvtsi32_si128(v17);
  v37 = (__m128)_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 1340)), v36);
  *(_QWORD *)a2 = v37.m128_u64[0];
  if ( *(_BYTE *)(a1 + 1349) )
  {
    *(_QWORD *)(a2 + 8) = -1;
    *(_BYTE *)(a2 + 16) = 0;
    if ( (unsigned __int8)v20 == 127 )
      goto LABEL_51;
    if ( !__OFSUB__((v20 & 0x7F) + 1, 1) && (v20 & 0x7F) != 0 )
    {
      LOBYTE(v38) = -1;
      goto LABEL_37;
    }
LABEL_43:
    v39 = HIBYTE(v20);
    goto LABEL_38;
  }
  v91 = v28;
  v88 = v27;
  if ( !__OFSUB__((v20 & 0x7F) + 1, 1) && (v20 & 0x7F) != 0 )
  {
    ptrace(PTRACE_GETSIGINFO, v17, 0, v107);
    v38 = v108;
    *(_BYTE *)(a2 + 16) = 0;
    v27 = v88;
    v28 = v91;
    *(_QWORD *)(a2 + 8) = v38;
    if ( (unsigned __int8)v20 != 127 )
    {
LABEL_37:
      v92 = v28;
      v39 = v20 & 0x7F;
      LOBYTE(v88) = v38;
      v40 = strsignal(v39);
      sub_4563D0(
        a1,
        "SIGNALED pid=%d tid=%d signal='%s'(%d) pc=%a\n",
        *(_DWORD *)a2,
        *(_DWORD *)(a2 + 4),
        v40,
        v39,
        *(double *)v37.m128_u64);
      v28 = v92;
LABEL_38:
      if ( *(_QWORD *)(a1 + 1248) <= 1u || *(_DWORD *)(v28 + 40) == *(_DWORD *)(a1 + 1340) )
      {
        sub_4787B0(a2, 2);
        if ( (((*(_DWORD *)(a2 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
          sub_40D8E0();
        *(_DWORD *)(a2 + 24) = v39;
        *(_BYTE *)(a1 + 1349) = 1;
      }
      else
      {
        sub_478720(a2);
        sub_41C480(a1, *(_DWORD *)(a2 + 4), 3, v41, v42, v43, v37, (__m128)v36, a6, a7, v44, v45, a10, a11, v88);
      }
      goto LABEL_24;
    }
    goto LABEL_51;
  }
  v46 = ptrace(PTRACE_PEEKUSER, v17, 128, 0);
  *(_BYTE *)(a2 + 16) = 0;
  v27 = v88;
  v28 = v91;
  *(_QWORD *)(a2 + 8) = v46;
  if ( (unsigned __int8)v20 != 127 )
    goto LABEL_43;
LABEL_51:
  v93 = v28;
  v89 = v27;
  v47 = HIBYTE(v20);
  sub_4787B0(a2, 7);
  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
    goto LABEL_134;
  *(_DWORD *)(a2 + 24) = v47;
  *(_BYTE *)(a2 + 28) = 1;
  *(_QWORD *)(a2 + 32) = -1;
  if ( v47 == 19 && *(_BYTE *)(v93 + 64) )
  {
    *(_BYTE *)(v93 + 64) = 0;
    goto LABEL_66;
  }
  v96 = v93;
  v94 = v89;
  v50 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, v47);
  v90 = (__int64)v50;
  if ( v50 )
  {
    v51 = s1;
    if ( v50[5] )
      v51 = (const char *)v50[4];
    v52 = s1;
    if ( v50[2] )
      v52 = (const char *)v50[1];
    sub_4172B0(a2 + 40, "got %s signal (%s)", v52, v51);
    v53 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 472LL))(a1, a2, v90);
    v56 = v94;
    v57 = v96;
    v16 = v53;
    if ( !v53 && (*(_BYTE *)(v90 + 4) & 2) != 0 )
      v47 = 0;
  }
  else
  {
    sub_4172B0(a2 + 40, "got unknown signal #%d", v47);
    v57 = v96;
    v56 = v94;
  }
  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
    goto LABEL_134;
  v95 = a1 + 1208;
  if ( *(_DWORD *)(a2 + 24) != 5 )
    goto LABEL_61;
  v61 = *(_QWORD *)(a2 + 8);
  v62 = v61 - 1;
  if ( !v61 )
    goto LABEL_61;
  v63 = *(_QWORD *)(a1 + 992);
  if ( v63 == v62 && v63 )
  {
    v101 = v62;
    if ( !sub_41DA10(a1, v17, v37, (__m128)v36, a6, a7, v54, v55, a10, a11) )
    {
      sub_410EA0(
        (int)"%a: could not return from the shlib breakpoint!\n",
        v101,
        v101,
        v83,
        v84,
        v85,
        v37,
        (__m128)v36,
        a6,
        a7,
        v86,
        v87,
        a10,
        a11,
        v90);
      return 1;
    }
    if ( !(unsigned __int8)sub_4223D0(
                             (_QWORD *)a1,
                             *(double *)v37.m128_u64,
                             (__m128)v36,
                             a6,
                             a7,
                             *(double *)v86.m128_u64,
                             *(double *)v87.m128_u64,
                             a10,
                             a11) )
      goto LABEL_66;
LABEL_95:
    sub_4787B0(a2, 0);
    goto LABEL_96;
  }
  v64 = *(_QWORD *)(a1 + 960);
  if ( v64 == v62 && v64 || (v65 = *(_QWORD *)(a1 + 976)) != 0 && v65 == v62 )
  {
    v69 = *(_QWORD *)(a1 + 168);
    v70 = *(_QWORD *)(a1 + 152);
    *(_DWORD *)(a1 + 1344) = v17;
    v71 = 0x8E38E38E38E38E39LL * (((v69 - *(_QWORD *)(a1 + 176)) >> 3) + ((v70 - *(_QWORD *)(a1 + 136)) >> 3));
    v72 = (*(_QWORD *)(a1 + 192) == 0) + ((__int64)(*(_QWORD *)(a1 + 192) - *(_QWORD *)(a1 + 160)) >> 3) - 1;
    v73 = v71 + 8 * v72 - v72;
    if ( *(_QWORD *)(a1 + 952) )
    {
      v98 = v62;
      sub_41EFC0(a1, v37, (__m128)v36, a6, a7, v54, v55, a10, a11);
      v62 = v98;
    }
    v99 = v62;
    if ( !sub_41DA10(a1, v17, v37, (__m128)v36, a6, a7, v54, v55, a10, a11) )
    {
      sub_410EA0(
        (int)"%a: could not return from the thread breakpoint!\n",
        v99,
        v99,
        v74,
        v75,
        v76,
        v37,
        (__m128)v36,
        a6,
        a7,
        v48,
        v49,
        a10,
        a11,
        v90);
      return 1;
    }
    v77 = (*(_QWORD *)(a1 + 192) == 0) + ((__int64)(*(_QWORD *)(a1 + 192) - *(_QWORD *)(a1 + 160)) >> 3) - 1;
    if ( v73 == 0x8E38E38E38E38E39LL
              * (((__int64)(*(_QWORD *)(a1 + 168) - *(_QWORD *)(a1 + 176)) >> 3)
               + ((__int64)(*(_QWORD *)(a1 + 152) - *(_QWORD *)(a1 + 136)) >> 3))
              + 8 * v77
              - v77 )
      goto LABEL_66;
    goto LABEL_95;
  }
  if ( *(_QWORD *)(a1 + 1424) <= 1u )
  {
    v103 = v62;
    v100 = v56;
    sub_4223D0((_QWORD *)a1, *(double *)v37.m128_u64, (__m128)v36, a6, a7, v54, v55, a10, a11);
    v82 = sub_40DE20(v95, v17);
    v66 = v100;
    v62 = v103;
    if ( v19 != v82 )
      v66 = v82 + 40;
  }
  else
  {
    v66 = v57 + 40;
  }
  v102 = v62;
  v97 = v66;
  if ( !(unsigned __int8)sub_412EB0(a1, a2) )
  {
    v67 = *(_QWORD **)(a1 + 528);
    if ( v67 )
    {
      v68 = (_QWORD *)(a1 + 520);
      do
      {
        if ( v67[4] >= v102 )
        {
          v68 = v67;
          v67 = (_QWORD *)v67[2];
        }
        else
        {
          v67 = (_QWORD *)v67[3];
        }
      }
      while ( v67 );
      if ( (_QWORD *)(a1 + 520) != v68 && v102 >= v68[4] )
      {
        v78 = *(_QWORD **)(a1 + 432);
        v79 = &v78[*(_QWORD *)(a1 + 440)];
        if ( v78 == v79 )
          goto LABEL_113;
        while ( v102 != *v78 )
        {
          if ( v79 == ++v78 )
            goto LABEL_113;
        }
        if ( v79 == v78 )
        {
LABEL_113:
          v80 = *(_QWORD **)(a1 + 1368);
          if ( v80 )
          {
            v81 = (_QWORD *)(a1 + 1360);
            do
            {
              if ( v80[4] >= v102 )
              {
                v81 = v80;
                v80 = (_QWORD *)v80[2];
              }
              else
              {
                v80 = (_QWORD *)v80[3];
              }
            }
            while ( v80 );
            if ( (_QWORD *)(a1 + 1360) != v81 && v102 >= v81[4] )
              goto LABEL_66;
          }
          sub_4787B0(a2, 5);
          if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 5 )
            sub_40D920();
          v37 = (__m128)-1LL;
          *(_QWORD *)(a2 + 8) = v102;
          *(_OWORD *)(a2 + 24) = -1;
          goto LABEL_96;
        }
      }
    }
    if ( v97 && *(_BYTE *)(v97 + 16) )
    {
      sub_4787B0(a2, 6);
    }
    else if ( !v90 || (*(_BYTE *)(v90 + 4) & 2) == 0 )
    {
      if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7 )
      {
        v47 = *(_DWORD *)(a2 + 24);
        goto LABEL_61;
      }
LABEL_134:
      sub_40D940();
    }
  }
LABEL_96:
  v47 = 0;
LABEL_61:
  v58 = sub_40DE20(v95, v17);
  if ( v58 == v19 )
    goto LABEL_24;
  *(_DWORD *)(v58 + 52) = v47;
  if ( !*(_BYTE *)(a1 + 1413) && sub_457B50(a1, a2, 0, *(double *)v37.m128_u64, (__m128)v36, a6, a7, v59, v60, a10, a11) )
    return 0;
  if ( v16 || (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
    goto LABEL_24;
  sub_457DE0(a1, a2, v90, *(double *)v37.m128_u64, *(double *)v36.m128i_i64);
LABEL_66:
  if ( !*(_BYTE *)(a1 + 1413) && !*(_BYTE *)(a1 + 1414) )
  {
    sub_41E9C0(a1, 0, v37, (__m128)v36, a6, a7, *(double *)v48.m128_u64, *(double *)v49.m128_u64, a10, a11);
    return 0;
  }
  sub_4787B0(a2, 13);
  return 1;
}
// 4226DD: variable 'v14' is possibly undefined
// 4226DD: variable 'v15' is possibly undefined
// 4228ED: variable 'v41' is possibly undefined
// 4228ED: variable 'v42' is possibly undefined
// 4228ED: variable 'v43' is possibly undefined
// 4228ED: variable 'v44' is possibly undefined
// 4228ED: variable 'v45' is possibly undefined
// 4228ED: variable 'v88' is possibly undefined
// 422D06: variable 'v54' is possibly undefined
// 422D06: variable 'v55' is possibly undefined
// 422DA8: variable 'v59' is possibly undefined
// 422DA8: variable 'v60' is possibly undefined
// 422EE4: variable 'v48' is possibly undefined
// 422EE4: variable 'v49' is possibly undefined
// 422F0F: variable 'v86' is possibly undefined
// 422F0F: variable 'v87' is possibly undefined
// 422F74: variable 'v74' is possibly undefined
// 422F74: variable 'v75' is possibly undefined
// 422F74: variable 'v76' is possibly undefined
// 422F9A: variable 'v83' is possibly undefined
// 422F9A: variable 'v84' is possibly undefined
// 422F9A: variable 'v85' is possibly undefined
// 4C94E1: using guessed type char byte_4C94E1;
