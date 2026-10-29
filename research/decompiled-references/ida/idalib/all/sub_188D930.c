__int64 __fastcall sub_188D930(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r14
  unsigned __int64 v15; // r14
  int v16; // r15d
  __m128 v17; // xmm0
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdi
  void **p_ptr; // rsi
  bool v27; // sf
  __int64 v28; // r15
  unsigned __int64 v29; // rax
  int v30; // r14d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r13
  unsigned __int64 v36; // r13
  __int64 v37; // rsi
  __int64 *v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdi
  __int64 v44; // r14
  __int64 v45; // rsi
  __int64 v46; // r14
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdi
  __int64 v55; // rdx
  char v56; // al
  unsigned __int64 v57; // r14
  char v58; // al
  __int64 v59; // rsi
  unsigned __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdi
  __int64 v65; // r13
  int v66; // eax
  unsigned __int64 v67; // rax
  __int64 v68; // rdi
  int v69; // ecx
  unsigned __int64 v71; // rax
  __int64 v72; // rdi
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  unsigned __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdi
  __int64 v82; // r14
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdi
  __int64 v88; // r14
  __int64 v89; // [rsp+8h] [rbp-100h] BYREF
  void **v90; // [rsp+10h] [rbp-F8h]
  __int64 v91; // [rsp+18h] [rbp-F0h]
  __int64 *v92; // [rsp+20h] [rbp-E8h]
  int v93; // [rsp+2Ch] [rbp-DCh]
  __m128 v94; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v95; // [rsp+40h] [rbp-C8h]
  __int64 v96; // [rsp+48h] [rbp-C0h]
  __int64 v97; // [rsp+50h] [rbp-B8h]
  __int64 v98; // [rsp+58h] [rbp-B0h]
  __int64 v99; // [rsp+60h] [rbp-A8h]
  void *v100[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v101; // [rsp+78h] [rbp-90h]
  char v102; // [rsp+7Ch] [rbp-8Ch]
  __int64 v103; // [rsp+80h] [rbp-88h] BYREF
  void *ptr; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v105; // [rsp+A8h] [rbp-60h]
  _BYTE v106[88]; // [rsp+B0h] [rbp-58h] BYREF

  v9 = a5;
  v89 = a6;
  v94.m128_i32[2] = a3;
  v95 = a4;
  v94.m128_i16[2] = 0;
  v96 = 0;
  v97 = 0;
  LODWORD(v98) = 0;
  v99 = 0;
  v100[0] = nullptr;
  v94.m128_i32[0] = 8;
  sub_1DBA9B0(a2, a2, a3, a4, a5, a6, v94.m128_u64[0], v94.m128_u64[1], a4, 0, 0, v98, 0, 0);
  v10 = sub_B8C1B0(a4 + 72);
  v13 = v89;
  v14 = *(_QWORD *)(v10 + 16);
  if ( (v14 & 4) != 0 )
    v15 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
  v89 = a2;
  v16 = *(_DWORD *)(a4 + 24);
  v89 = a4;
  if ( v15 )
    v15 -= 64LL;
  LODWORD(v95) = v9;
  v96 = v13;
  v17 = _mm_loadh_ps((const double *)&v89);
  LOWORD(v97) = 0;
  v94 = v17;
  BYTE2(v97) = 0;
  if ( v9 >= 0 )
  {
    if ( v9 <= 2 )
    {
      LOBYTE(v97) = 1;
    }
    else if ( v9 <= 4 )
    {
      BYTE1(v97) = 1;
    }
  }
  v18 = sub_B76070(a4, 0, v11, v12);
  if ( v18 != (unsigned __int8)sub_B981D0((_QWORD *)a4, 0) )
  {
    v71 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 120) + 8LL * (unsigned __int8)sub_B771C0(a4, 0, v19, v20)) + 48LL)
        & 0xFFFFFFFFFFFFFFF0LL;
    v72 = *(_QWORD *)v71;
    v73 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v71 + 16LL) - 43;
    if ( (unsigned int)v73 <= 1 || (v72 = sub_1838000(v72, 0, v73, v20)) != 0 )
    {
      v74 = sub_9B4870(v72, 0, v73, v20, v21);
      LOBYTE(v75) = 1;
      if ( (v74 & 1) == 0 )
        v75 = *(_QWORD *)&byte_8[v74 & 0xFFFFFFFFFFFFFFF0LL] & 1LL;
      BYTE2(v97) = v75;
    }
  }
  HIDWORD(v97) = v16;
  v23 = 5;
  v98 = a2;
  v100[0] = &v103;
  ptr = v106;
  v105 = 0x400000000LL;
  v24 = *(_QWORD *)(a2 + 232);
  LODWORD(v99) = 5;
  v100[1] = &byte_4;
  v101 = 0;
  v102 = 1;
  if ( (*(_BYTE *)(v24 + 1) & 0x10) == 0 )
  {
    LODWORD(v99) = 1;
    v23 = 1;
  }
  v25 = a1 + 16;
  p_ptr = (void **)(a1 + 40);
  v27 = *(char *)(v15 + 28) < 0;
  v91 = a1 + 16;
  v28 = a1 + 88;
  v90 = (void **)(a1 + 40);
  v92 = (__int64 *)(a1 + 72);
  if ( v27 )
  {
    *(_QWORD *)a1 = a2;
    *(_DWORD *)(a1 + 8) = v23;
    goto LABEL_44;
  }
  v29 = sub_A7A9D0(*(_QWORD *)(a2 + 248), v15, v23, v20, v21, v22);
  if ( (unsigned __int8)sub_1E63CF0(a2, *(unsigned int *)(a4 + 24), v29, 1, 3738) )
  {
    p_ptr = v90;
    v25 = v91;
    *(_QWORD *)a1 = v98;
    *(_DWORD *)(a1 + 8) = v99;
LABEL_44:
    sub_2236890(v25, p_ptr, v100);
    v69 = v105;
    *(_QWORD *)(a1 + 72) = v28;
    *(_QWORD *)(a1 + 80) = 0x400000000LL;
    if ( v69 )
    {
      p_ptr = &ptr;
      sub_18400F0((__int64 *)(a1 + 72), (__int64 *)&ptr);
    }
    goto LABEL_46;
  }
  v30 = 3 - ((_BYTE)v97 != 0);
  v35 = *(_QWORD *)(sub_B8C1B0(v94.m128_u64[1] + 72) + 16);
  if ( (v35 & 4) != 0 )
    v36 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v36 = v35 & 0xFFFFFFFFFFFFFFF8LL;
  v93 = 3;
  if ( v36 )
    v36 -= 64LL;
  v37 = *(_QWORD *)(v36 + 104);
  v38 = (__int64 *)(v37 + 96);
  if ( v30 == 2 )
  {
    sub_7052B0(v38, v37, v31, v32, v33, v34);
    v37 = *(_QWORD *)(v36 + 104);
    v38 = (__int64 *)(v37 + 96);
    if ( (*(_BYTE *)(*(_QWORD *)(v36 + 128) + 1LL) & 8) != 0 )
      v93 = 0;
  }
  sub_7052B0(v38, v37, v31, v32, v33, v34);
  v43 = *(_QWORD *)(v36 + 128);
  if ( (*(_BYTE *)(v43 + 24) & 1) != 0 )
    v44 = sub_B96980(v43);
  else
    v44 = *(_QWORD *)(v43 + 24);
  sub_7052B0((__int64 *)(*(_QWORD *)(v36 + 104) + 96LL), *(_QWORD *)(v36 + 104), v39, v40, v41, v42);
  v45 = *(_QWORD *)(v36 + 104);
  v46 = v44 + 24LL * *(unsigned int *)(*(_QWORD *)(v36 + 128) + 16LL);
  sub_7052B0((__int64 *)(v45 + 96), v45, v47, v48, v49, v50);
  v54 = *(_QWORD *)(v36 + 128);
  if ( (*(_BYTE *)(v54 + 24) & 1) != 0 )
    v55 = sub_B96980(v54);
  else
    v55 = *(_QWORD *)(v54 + 24);
  if ( v55 == v46 )
  {
LABEL_28:
    if ( v93 == 3
      && ((sub_7052B0((__int64 *)(*(_QWORD *)(v36 + 104) + 96LL), *(_QWORD *)(v36 + 104), v55, v51, v52, v53),
           v81 = *(_QWORD *)(v36 + 128),
           (*(_BYTE *)(v81 + 32) & 1) != 0)
        ? (v82 = sub_B969C0(v81))
        : (v82 = *(_QWORD *)(v81 + 32)),
          (sub_7052B0((__int64 *)(*(_QWORD *)(v36 + 104) + 96LL), *(_QWORD *)(v36 + 104), v77, v78, v79, v80),
           v45 = *(_QWORD *)(v36 + 104),
           v89 = v82 + 24LL * *(unsigned int *)(*(_QWORD *)(v36 + 128) + 20LL),
           sub_7052B0((__int64 *)(v45 + 96), v45, v83, v84, v85, v86),
           v87 = *(_QWORD *)(v36 + 128),
           (*(_BYTE *)(v87 + 32) & 1) != 0)
        ? (v88 = sub_B969C0(v87))
        : (v88 = *(_QWORD *)(v87 + 32)),
          v88 != v89) )
    {
      while ( 1 )
      {
        v45 = v88;
        if ( (unsigned __int8)sub_188D7E0((__int64 *)&v94, v88, v17) )
          break;
        v88 += 24;
        if ( v89 == v88 )
          goto LABEL_29;
      }
    }
    else
    {
LABEL_29:
      v57 = sub_B7E900(v36, v45, v55, v51, v52, v53);
      if ( v57 )
      {
LABEL_30:
        if ( *(char *)(v57 + 28) >= 0 )
        {
          v58 = *(_BYTE *)(v57 + 68);
          if ( (v58 & 1) == 0 || *(_QWORD *)(v57 + 40) )
          {
            if ( (_DWORD)v95 || (v58 & 0xC) == 0xC || (v58 & 0xC) == 0 )
            {
              v59 = *(_QWORD *)(v57 + 48);
              v60 = *(_QWORD *)(*(_QWORD *)(sub_A71450(*(_QWORD *)(v94.m128_u64[0] + 248), v59) & 0xFFFFFFFFFFFFFFF0LL)
                              + 8LL)
                  & 0xFFFFFFFFFFFFFFF0LL;
              v64 = *(_QWORD *)v60;
              if ( *(_BYTE *)(*(_QWORD *)v60 + 16LL) == 48 )
              {
                v65 = *(_QWORD *)(v57 + 48);
                v89 = v57 | 4;
                LODWORD(v65) = *(_DWORD *)&byte_8[v65 & 0xFFFFFFFFFFFFFFF0LL] | v65;
                v66 = (unsigned int)sub_F60F10(v64, v59, v57 | 4, v61, v62, v63);
                sub_183B060((__int64 *)&v94, v66, v89, v65 & 7, v17);
              }
            }
            else
            {
              v76 = sub_B780B0(v57);
              if ( (v76 || (v76 = sub_190FFF0(v94.m128_u64[0], HIDWORD(v97), v57) & 0xFFFFFFFFFFFFFFFELL) != 0)
                && (_DWORD)v99 != 3
                && (unsigned int)sub_18B2EA0(v98, v76) )
              {
                LODWORD(v99) = 0;
              }
            }
          }
        }
        while ( 1 )
        {
          v67 = *(_QWORD *)(v57 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v57 = v67;
          if ( !v67 )
            break;
          if ( (*(_BYTE *)(v67 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_30;
        }
      }
    }
  }
  else if ( v93 == 1 )
  {
    while ( 1 )
    {
      v45 = v55;
      v89 = v55;
      if ( (unsigned __int8)sub_188D7E0((__int64 *)&v94, v55, v17) )
        break;
      v55 = v89 + 24;
      if ( v46 == v89 + 24 )
        goto LABEL_29;
    }
  }
  else
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(v55 + 12) & 1) == 0 )
      {
        v45 = v55;
        v89 = v55;
        v56 = sub_188D7E0((__int64 *)&v94, v55, v17);
        v55 = v89;
        if ( v56 )
          break;
      }
      v55 += 24;
      if ( v46 == v55 )
        goto LABEL_28;
    }
  }
  p_ptr = v90;
  v68 = v91;
  *(_QWORD *)a1 = v98;
  *(_DWORD *)(a1 + 8) = v99;
  sub_2236890(v68, p_ptr, v100);
  *(_QWORD *)(a1 + 72) = v28;
  *(_QWORD *)(a1 + 80) = 0x400000000LL;
  if ( (_DWORD)v105 )
  {
    p_ptr = &ptr;
    sub_18400F0(v92, (__int64 *)&ptr);
  }
LABEL_46:
  if ( ptr != v106 )
    free(ptr);
  if ( !v102 )
    free(v100[0]);
  sub_1DBAAE0(a2, p_ptr);
  return a1;
}
