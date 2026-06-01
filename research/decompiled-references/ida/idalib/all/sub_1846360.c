__int64 __fastcall sub_1846360(
        __int64 *a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  __int64 v8; // r13
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rbp
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 **v27; // rbp
  _BYTE *v28; // r14
  __int64 *v29; // r13
  __int64 v30; // rdi
  char v31; // r15
  __int64 *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // r12
  __int64 v35; // rsi
  __int64 v36; // r12
  __int64 v37; // rbx
  unsigned __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r11
  __int64 v46; // rbx
  unsigned __int64 v47; // r12
  __int64 v48; // rdx
  __int64 v49; // r15
  __int64 v50; // rax
  __int64 *v51; // rdi
  __int64 v52; // r15
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rax
  unsigned __int64 v59; // r12
  __int64 v60; // r15
  __int64 v61; // rdx
  __int64 v62; // r15
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  void *v65; // rax
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rsi
  __int64 v68; // rax
  unsigned int v69; // edx
  unsigned __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  unsigned __int64 v73; // rbp
  __int64 v74; // r8
  _BYTE *v75; // r12
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  _QWORD *v80; // rdx
  __int64 v81; // rsi
  unsigned __int64 v82; // r15
  __int64 v83; // rax
  unsigned __int64 v84; // rdx
  int v85; // edx
  __int64 v86; // r14
  void *v87; // r14
  __int64 v88; // rdi
  int v89; // ecx
  __int64 v90; // rdi
  int v91; // ecx
  unsigned __int64 v92; // rax
  _QWORD *v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rax
  bool v98; // zf
  _QWORD *v99; // rax
  __int64 v100; // [rsp-8h] [rbp-120h]
  __m128 v101; // [rsp+0h] [rbp-118h] BYREF
  __int128 *v102; // [rsp+10h] [rbp-108h]
  _QWORD *v103; // [rsp+18h] [rbp-100h]
  __m128 v104; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v105; // [rsp+30h] [rbp-E8h]
  __int64 v106; // [rsp+38h] [rbp-E0h]
  __int64 **v107; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v108; // [rsp+48h] [rbp-D0h]
  _BYTE *v109; // [rsp+50h] [rbp-C8h]
  __int64 v110; // [rsp+58h] [rbp-C0h]
  __int64 v111; // [rsp+60h] [rbp-B8h] BYREF
  int v112; // [rsp+68h] [rbp-B0h]
  __int64 v113; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v114; // [rsp+80h] [rbp-98h] BYREF
  void *v115[2]; // [rsp+90h] [rbp-88h] BYREF
  __int128 v116; // [rsp+A0h] [rbp-78h]
  void *ptr[2]; // [rsp+B0h] [rbp-68h] BYREF
  void *v118[2]; // [rsp+C0h] [rbp-58h]
  __int128 v119; // [rsp+D0h] [rbp-48h]

  v8 = a3;
  v109 = a2;
  v10 = *(_QWORD *)(a3 + 104);
  v105 = a4;
  sub_7052B0((__int64 *)(v10 + 96), v10, a3, a4, a5, a6);
  v15 = *(_QWORD *)(v8 + 128);
  if ( (*(_BYTE *)(v15 + 24) & 1) != 0 )
    v16 = sub_B96980(v15);
  else
    v16 = *(_QWORD *)(v15 + 24);
  sub_7052B0((__int64 *)(*(_QWORD *)(v8 + 104) + 96LL), *(_QWORD *)(v8 + 104), v11, v12, v13, v14);
  v17 = *(_QWORD *)(v8 + 104);
  v107 = (__int64 **)(v16 + 24LL * *(unsigned int *)(*(_QWORD *)(v8 + 128) + 16LL));
  sub_7052B0((__int64 *)(v17 + 96), v17, v18, v19, v20, v21);
  v26 = *(_QWORD *)(v8 + 128);
  if ( (*(_BYTE *)(v26 + 24) & 1) != 0 )
    v27 = (__int64 **)sub_B96980(v26);
  else
    v27 = *(__int64 ***)(v26 + 24);
  if ( v107 != v27 )
  {
    v28 = v109;
    v110 = v8;
    v102 = &v114;
    v29 = a1;
    v103 = v115;
    v101.m128_u64[0] = (unsigned __int64)ptr;
    v108 = v105 & 0xFFFFFFFFFFFFFFF8LL;
    while ( 1 )
    {
      v30 = v29[2];
      if ( (*(_BYTE *)(v30 + 28) & 0x7Fu) - 35 <= 3 )
      {
        v31 = sub_B98200((_QWORD *)v30, v17);
        if ( v31 )
        {
          v37 = 0;
          v96 = sub_19B4F60(*v29, *((unsigned int *)v29 + 44));
          v36 = v96;
          if ( v96 != 1 )
          {
            v36 = sub_19249E0(*v29, *((unsigned int *)v29 + 44), 5, v96 & 0xFFFFFFFFFFFFFFFELL, 0);
            v31 = v36 == 1;
          }
          goto LABEL_13;
        }
        v30 = v29[2];
      }
      v32 = *(__int64 **)(v30 + 120);
      v33 = *v29;
      v34 = *v32;
      v35 = *(_QWORD *)(*v32 + 40);
      DWORD2(v114) = *((_DWORD *)v29 + 44);
      *(_QWORD *)&v114 = v35;
      sub_B85890(v103, v35);
      *(_OWORD *)ptr = 0;
      *(_OWORD *)v118 = 0;
      v119 = 0;
      v36 = sub_190AE60(v33, v101.m128_i32[0], (_DWORD)v102, v34, 0, 0, 0);
      if ( HIDWORD(v118[1]) )
        free(v118[0]);
      v37 = 8;
      v31 = v36 == 1;
LABEL_13:
      v38 = *(_QWORD *)(*(_QWORD *)(v29[2] + 120) + v37);
      v39 = *((_DWORD *)v29 + 44);
      v40 = *v29;
      v41 = *(_QWORD *)(v38 + 40);
      v104.m128_u64[0] = v38;
      DWORD2(v114) = v39;
      *(_QWORD *)&v114 = v41;
      sub_B85890(v103, v41);
      a7 = 0.0;
      *(_OWORD *)ptr = 0;
      *(_OWORD *)v118 = 0;
      v119 = 0;
      v42 = sub_190AE60(v40, v101.m128_i32[0], (_DWORD)v102, v104.m128_i32[0], 0, 0, 0);
      v45 = v42;
      if ( HIDWORD(v118[1]) )
      {
        v104.m128_u64[0] = v42;
        free(v118[0]);
        v45 = v104.m128_u64[0];
      }
      v46 = *(_QWORD *)(*v29 + 248);
      if ( v45 == 1 || v31 )
      {
        v104.m128_u64[0] = 1;
        v106 = 1;
      }
      else
      {
        v47 = v36 & 0xFFFFFFFFFFFFFFFELL;
        v118[0] = v27;
        v48 = 0;
        ptr[0] = (void *)(v101.m128_u64[0] + 16);
        ptr[1] = (void *)0x400000001LL;
        v49 = *(_QWORD *)(v47 + 8);
        v50 = *(_QWORD *)&byte_8[v49 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v50 & 8) != 0 )
          v48 = *(__int64 *)((char *)&qword_18 + (v50 & 0xFFFFFFFFFFFFFFF0LL));
        v51 = v27[2];
        v104.m128_u64[0] = v45;
        v52 = v48 | ((unsigned __int8)v50 | (unsigned __int8)v49) & 7;
        v53 = sub_1839D10(v51, v101.m128_i64[0], v48, v43, v44);
        v54 = sub_A70F20(v46, v53, v52);
        v55 = v47;
        v106 = sub_160A600(*v29, v47, v54, 7u, 1u, v101.m128_i64[0], 0.0, *(double *)a8.m128_u64, 0);
        v57 = *(_QWORD *)(*v29 + 248);
        v58 = *(_QWORD *)((v104.m128_u64[0] & 0xFFFFFFFFFFFFFFFELL) + 8);
        v59 = v104.m128_u64[0] & 0xFFFFFFFFFFFFFFFELL;
        v60 = *(_QWORD *)&byte_8[v58 & 0xFFFFFFFFFFFFFFF0LL];
        v61 = 0;
        if ( (v60 & 8) != 0 )
          v61 = *(__int64 *)((char *)&qword_18 + (v60 & 0xFFFFFFFFFFFFFFF0LL));
        v62 = v61 | ((unsigned __int8)v58 | (unsigned __int8)v60) & 7;
        v63 = sub_1839D10(v27[2], v55, v61, v56, v100);
        v64 = sub_A70F20(v57, v63, v62);
        v104.m128_u64[0] = sub_160A600(*v29, v59, v64, 7u, 1u, v101.m128_i64[0], 0.0, *(double *)a8.m128_u64, 0);
        if ( ptr[0] != (void *)(v101.m128_u64[0] + 16) )
          free(ptr[0]);
        v46 = *(_QWORD *)(*v29 + 248);
      }
      v65 = (void *)*v27[2];
      a8 = _mm_loadh_ps((const double *)v104.m128_u64);
      v104 = a8;
      ptr[0] = v65;
      v66 = sub_6D5440(v101.m128_u64[0]);
      if ( v108 )
      {
        v94 = (_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL);
        v95 = v105 | v66 & 7;
        if ( (v66 & 8) != 0 )
        {
          v95 |= *(__int64 *)((char *)&qword_18 + (v66 & 0xFFFFFFFFFFFFFFF0LL));
          v94 = (_QWORD *)*v94;
        }
        v67 = sub_A70C40(v46, (__int64)v94, v95);
      }
      else
      {
        v67 = v66 & 0xFFFFFFFFFFFFFFF8LL | (unsigned int)v105 | v66 & 7;
      }
      v68 = sub_1843060(v29, v67, v104.m128_i64[0], v104.m128_i64[1], 0.0, *(double *)a8.m128_u64);
      LOBYTE(v69) = *v28 | (v68 == 1);
      *v28 = v69;
      if ( (_BYTE)v69 )
        return v69;
      v23 = *((unsigned int *)v28 + 4);
      v17 = *((unsigned int *)v28 + 5);
      v70 = v68 & 0xFFFFFFFFFFFFFFFELL;
      if ( v23 + 1 > v17 )
      {
        v17 = (unsigned __int64)(v28 + 24);
        v104.m128_u64[0] = v70;
        sub_2237220(v28 + 8, v28 + 24, v23 + 1, 8);
        v23 = *((unsigned int *)v28 + 4);
        v22 = *((_QWORD *)v28 + 1);
        v70 = v104.m128_u64[0];
      }
      else
      {
        v22 = *((_QWORD *)v28 + 1);
      }
      *(_QWORD *)(v22 + 8 * v23) = v70;
      v27 += 3;
      ++*((_DWORD *)v28 + 4);
      if ( v107 == v27 )
      {
        a1 = v29;
        v8 = v110;
        break;
      }
    }
  }
  v73 = sub_B7E900(v8, v17, v22, v23, v24, v25);
  if ( !v73 )
    return 0;
  v75 = v109;
  v103 = (_QWORD *)(v105 & 0xFFFFFFFFFFFFFFFELL);
  v104.m128_u64[0] = (unsigned __int64)&v113;
  v106 = (__int64)ptr;
LABEL_33:
  if ( (*(_BYTE *)(v73 + 68) & 1) != 0 && !*(_QWORD *)(v73 + 40) )
  {
LABEL_46:
    while ( 1 )
    {
      v92 = *(_QWORD *)(v73 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v73 = v92;
      if ( !v92 )
        return 0;
      if ( (*(_BYTE *)(v92 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_33;
    }
  }
  if ( (unsigned __int8)sub_B78060(v73, v17, v71, v72, v74) )
  {
    v99 = sub_F63270(*(_QWORD *)(*(_QWORD *)(v73 + 48) & 0xFFFFFFFFFFFFFFF0LL), v17, v76, v77, v78, v79);
    v17 = (unsigned __int64)v75;
    if ( !(unsigned __int8)sub_1846360(a1, v75, v99, v105) )
      goto LABEL_46;
  }
  else
  {
    v80 = (_QWORD *)v105;
    v81 = *(_QWORD *)(v73 + 48);
    if ( (*(_BYTE *)(v73 + 68) & 2) != 0 )
      v80 = v103;
    v82 = sub_A70F20(*(_QWORD *)(*a1 + 248), v81, (__int64)v80);
    v83 = sub_18391B0(a1, v81);
    v101.m128_u64[0] = v84;
    if ( v84 == 1 || (v102 = (__int128 *)v83, v83 == 1) )
    {
      v101.m128_u64[0] = 1;
      v102 = (_OWORD *)(&dword_0 + 1);
    }
    else
    {
      v85 = *((_DWORD *)a1 + 44);
      v86 = (*(_BYTE *)(v73 + 29) >> 5) & 3;
      v111 = *(_QWORD *)(v73 + 40);
      v87 = (void *)(v73 | v86);
      v112 = v85;
      ptr[0] = v87;
      sub_B85890(v104.m128_u64[0], v111);
      *(_OWORD *)ptr = 0;
      v88 = *a1;
      v89 = *((_DWORD *)a1 + 44);
      *(_OWORD *)v118 = 0;
      v119 = 0;
      a7 = 0.0;
      v102 = (__int128 *)sub_19C4FE0(
                           v88,
                           (unsigned int)v102 & 0xFFFFFFFE,
                           0,
                           v89,
                           v106,
                           v73,
                           (__int64)v87,
                           (__int64)&v111);
      v90 = *a1;
      v114 = 0;
      v91 = *((_DWORD *)a1 + 44);
      *(_OWORD *)v115 = 0;
      v116 = 0;
      v101.m128_u64[0] = sub_19C4FE0(
                           v90,
                           v101.m128_i32[0] & 0xFFFFFFFE,
                           0,
                           v91,
                           (unsigned int)&v114,
                           v73,
                           (__int64)v87,
                           (__int64)&v111);
      if ( HIDWORD(v115[1]) )
        free(v115[0]);
      if ( HIDWORD(v118[1]) )
        free(v118[0]);
    }
    v101 = _mm_loadh_ps((const double *)v101.m128_u64);
    v97 = sub_1843060(a1, v82, v101.m128_i64[0], v101.m128_i64[1], a7, *(double *)a8.m128_u64);
    v98 = ((v97 == 1) | *v75) == 0;
    *v75 |= v97 == 1;
    if ( v98 )
    {
      v17 = v97 & 0xFFFFFFFFFFFFFFFELL;
      sub_183F100((__int64)(v75 + 8), v97 & 0xFFFFFFFFFFFFFFFELL);
      goto LABEL_46;
    }
  }
  return 1;
}
