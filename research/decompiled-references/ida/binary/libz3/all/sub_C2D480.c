__int64 __fastcall sub_C2D480(__int64 *a1, int a2, int a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  _QWORD **v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  __int64 *v16; // r14
  __int64 *v17; // rax
  __int64 v18; // rdi
  double v19; // rax
  __int64 v20; // rax
  __int64 v21; // r12
  __m128 *v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __m128 *v26; // rcx
  __m128 v27; // xmm1
  __int64 *v28; // rax
  __int64 v29; // r13
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rdi
  void *v34; // r14
  _QWORD *v35; // r14
  __int64 v36; // rax
  __int64 **v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // r14
  int v45; // ecx
  int v46; // r8d
  int v47; // r9d
  __int64 v48; // rdi
  __int64 v49; // rax
  void *v50; // r14
  __int64 v51; // rax
  __m128i *v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  __m128i *v56; // rcx
  __m128i v57; // xmm2
  void *v58; // rbx
  __int64 result; // rax
  __int64 v60; // rbx
  __int64 v61; // rbx
  unsigned int v62; // r13d
  size_t v63; // rsi
  unsigned int *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rax
  unsigned int v69; // r13d
  size_t v70; // rsi
  unsigned int *v71; // rax
  __int64 v72; // rcx
  _QWORD *v73; // rax
  char **exception; // rbx
  char **v75; // rbx
  void *v76; // r15
  _QWORD *v77; // rsi
  int v78; // [rsp-8h] [rbp-138h]
  int v79; // [rsp+0h] [rbp-130h]
  int v80; // [rsp+0h] [rbp-130h]
  int v81; // [rsp+8h] [rbp-128h]
  __int64 v82; // [rsp+8h] [rbp-128h]
  __m128i v83; // [rsp+10h] [rbp-120h] BYREF
  __int64 v84; // [rsp+20h] [rbp-110h]
  __int64 v85; // [rsp+28h] [rbp-108h]
  __int64 v86; // [rsp+30h] [rbp-100h]
  __int64 v87; // [rsp+38h] [rbp-F8h]
  __int64 *v88; // [rsp+40h] [rbp-F0h]
  _QWORD *v89; // [rsp+48h] [rbp-E8h]
  __int64 *v90; // [rsp+50h] [rbp-E0h]
  void *v91; // [rsp+58h] [rbp-D8h]
  __int64 v92; // [rsp+60h] [rbp-D0h] BYREF
  __int64 v93; // [rsp+68h] [rbp-C8h]
  __int64 v94; // [rsp+70h] [rbp-C0h]
  double v95; // [rsp+78h] [rbp-B8h] BYREF
  char v96; // [rsp+87h] [rbp-A9h] BYREF
  __int64 v97; // [rsp+88h] [rbp-A8h] BYREF
  __int64 v98; // [rsp+90h] [rbp-A0h] BYREF
  __int64 v99; // [rsp+98h] [rbp-98h] BYREF
  __int64 v100; // [rsp+A0h] [rbp-90h] BYREF
  __int64 v101; // [rsp+A8h] [rbp-88h] BYREF
  __int64 v102; // [rsp+B0h] [rbp-80h] BYREF
  __int64 v103; // [rsp+B8h] [rbp-78h]
  _QWORD v104[2]; // [rsp+C0h] [rbp-70h] BYREF
  _QWORD v105[2]; // [rsp+D0h] [rbp-60h] BYREF
  __m128 v106; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v107; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v108; // [rsp+F8h] [rbp-38h]

  v9 = (_QWORD **)*a1;
  v90 = a6;
  v10 = sub_15DC610(
          **v9,
          a2,
          a3,
          (int)a4,
          (int)a5,
          (int)a6,
          v79,
          v81,
          v83.m128i_i32[0],
          v83.m128i_i32[2],
          v84,
          v85,
          **v9,
          v87,
          (int)v88,
          v89);
  v94 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  if ( (unsigned __int8)sub_C292F0(a1, v10, a5, v90) )
    return sub_C28290(v94, v86);
  v11 = sub_C2C130(a1, 1);
  v12 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v13 = *a5;
  if ( *a5 )
  {
    v14 = a5[1];
    v15 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v15 )
      sub_15D7BC0(v14, v13);
  }
  v16 = v90;
  *a5 = v12;
  sub_C294F0((_QWORD ***)a1, v12, v94, v16);
  sub_C2AB80((__int64)a1, v94, *a5, *v16);
  v93 = sub_C2C130(a1, 1);
  v17 = *(__int64 **)*a1;
  v87 = *a4;
  v18 = *v17;
  v19 = *((double *)a4 + 1);
  v85 = v18;
  v95 = v19;
  v20 = sub_15E1B70(v18);
  v21 = v20;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  v102 = 0;
  v103 = v85;
  sub_C294F0((_QWORD ***)a1, v93, v20, &v102);
  v92 = v102;
  v84 = v103;
  sub_C2AB80((__int64)a1, v21, v93, v102);
  v22 = (__m128 *)a1[18];
  if ( v22 )
  {
    v23 = v22[-1].m128_u32[3];
    if ( v23 == v22[-1].m128_i32[2] )
    {
      v62 = (3 * v23 + 1) >> 1;
      v63 = 8 * (v62 + ((3 * v23 + 1) & 0xFFFFFFFE)) + 8;
      if ( 24 * v23 + 8 >= (unsigned int)v63 || v23 >= v62 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_C282D0((__int64 *)&v106, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v106);
        sub_233E40((__int64)&v106);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v64 = (unsigned int *)sub_186B300(&v22[-1].m128_u16[4], v63);
      v65 = v64[1];
      v22 = (__m128 *)(v64 + 2);
      *v64 = v62;
      a1[18] = (__int64)(v64 + 2);
      LODWORD(v64) = v65;
      v26 = (__m128 *)((char *)v22 + 24 * v65);
      v25 = (_DWORD)v64 + 1;
    }
    else
    {
      v24 = v23;
      v25 = v23 + 1;
      v26 = (__m128 *)((char *)v22 + 24 * v24);
    }
  }
  else
  {
    v73 = (_QWORD *)sub_186B270(0x38u);
    v22 = (__m128 *)(v73 + 1);
    *v73 = 2;
    v25 = 1;
    a1[18] = (__int64)v22;
    v26 = v22;
  }
  v27 = _mm_loadh_ps(&v95);
  v26[1].m128_u64[0] = v93;
  *v26 = v27;
  v22[-1].m128_i32[3] = v25;
  v28 = (__int64 *)*a1;
  v83 = (__m128i)v27;
  v29 = *v28;
  v106 = 0u;
  v107 = 1;
  v108 = 0;
  v88 = &v107;
  sub_182CBA0(qword_1C7F2C0, &v107);
  v33 = *(_QWORD *)(v29 + 8);
  BYTE4(v107) &= ~1u;
  LODWORD(v107) = 1;
  if ( !v33 )
  {
    v91 = &v106;
    sub_16669E0(v29);
    v33 = *(_QWORD *)(v29 + 8);
  }
  v91 = &v106;
  sub_166A700(v33, (unsigned int)&v106, 1, v30, v31, v32);
  v34 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v106);
  sub_182CBA0(v34, v88);
  v35 = *(_QWORD **)*a1;
  sub_15E1B70(*v35);
  sub_15E1B70(*v35);
  sub_15E1B70(**(_QWORD **)*a1);
  sub_15E1B70(**(_QWORD **)*a1);
  v36 = sub_15E1B70(**(_QWORD **)*a1);
  v97 = v36;
  if ( v36 )
    ++*(_DWORD *)(v36 + 8);
  v89 = a1 + 13;
  sub_C28530(a1 + 13, &v97);
  v37 = (__int64 **)*a1;
  if ( *(_BYTE *)(*a1 + 16) )
  {
    v38 = a1[13];
    v39 = **v37;
    v82 = *v90;
    v40 = 0x7FFFFFFF8LL;
    v106 = _mm_loadh_ps((const double *)&v92);
    if ( v38 )
      v40 = 8LL * (unsigned int)(*(_DWORD *)(v38 - 4) - 1);
    v41 = sub_15E0A80(
            v39,
            5,
            *(_QWORD *)(v38 + v40),
            2,
            (int)v91,
            0,
            0,
            v78,
            v80,
            v82,
            v83.m128i_i32[0],
            v83.m128i_i32[2],
            v84,
            v85,
            v86,
            v87,
            (int)v88,
            v89);
    v104[0] = v41;
    if ( v41 )
      ++*(_DWORD *)(v41 + 8);
    sub_C28470(a1 + 15, v104);
    v37 = (__int64 **)*a1;
  }
  sub_15E1B70(**v37);
  sub_15E1B70(**(_QWORD **)*a1);
  v42 = sub_15E1B70(**(_QWORD **)*a1);
  v98 = v42;
  if ( v42 )
    ++*(_DWORD *)(v42 + 8);
  sub_C28530(v89, &v98);
  sub_C2BA80(a1, v92);
  sub_15E1B70(**(_QWORD **)*a1);
  sub_15E1B70(**(_QWORD **)*a1);
  v43 = sub_15E1B70(**(_QWORD **)*a1);
  v99 = v43;
  if ( v43 )
    ++*(_DWORD *)(v43 + 8);
  sub_C28530(v89, &v99);
  sub_C2BA80(a1, v92);
  v44 = *(_QWORD **)*a1;
  v107 = 1;
  v108 = 0;
  v106 = (__m128)0xFFFFFFFFuLL;
  sub_182CBA0(qword_1C7F2C0, v88);
  v48 = v44[1];
  BYTE4(v107) &= ~1u;
  LODWORD(v107) = 1;
  if ( !v48 )
  {
    sub_16669E0(v44);
    v48 = v44[1];
  }
  sub_166A700(v48, (_DWORD)v91, 1, v45, v46, v47);
  sub_15E1B70(*v44);
  sub_15E1B70(*v44);
  sub_15E1B70(**(_QWORD **)*a1);
  v49 = sub_15E1B70(**(_QWORD **)*a1);
  v100 = v49;
  if ( v49 )
    ++*(_DWORD *)(v49 + 8);
  sub_C28530(v89, &v100);
  v50 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v91);
  sub_182CBA0(v50, v88);
  sub_C2BA80(a1, v92);
  v51 = *a1;
  v104[0] = 0;
  v105[0] = 1;
  v15 = *(_BYTE *)(v51 + 19) == 0;
  v104[1] = 0;
  v105[1] = 0;
  if ( v15 || (unsigned __int8)sub_1666AE0(*(_QWORD *)v51, *(_QWORD *)&v95, v104, &v96) && LODWORD(v104[0]) )
  {
    v52 = (__m128i *)a1[17];
    if ( v52 )
    {
LABEL_36:
      v53 = v52[-1].m128i_u32[3];
      if ( v53 == v52[-1].m128i_i32[2] )
      {
        v69 = (3 * v53 + 1) >> 1;
        v70 = 8 * (v69 + ((3 * v53 + 1) & 0xFFFFFFFE)) + 8;
        if ( 24 * v53 + 8 >= (unsigned int)v70 || v53 >= v69 )
        {
          v75 = (char **)__cxa_allocate_exception(0x28u);
          sub_C282D0((__int64 *)v91, "Overflow encountered when expanding vector");
          v76 = v91;
          v77 = v91;
          *v75 = (char *)off_1C63128;
          sub_2333C0(v75 + 1, v77);
          sub_233E40((__int64)v76);
          __cxa_throw(v75, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v71 = (unsigned int *)sub_186B300(&v52[-1].m128i_u64[1], v70);
        v72 = v71[1];
        v52 = (__m128i *)(v71 + 2);
        *v71 = v69;
        a1[17] = (__int64)(v71 + 2);
        LODWORD(v71) = v72;
        v56 = (__m128i *)((char *)v52 + 24 * v72);
        v55 = (_DWORD)v71 + 1;
      }
      else
      {
        v54 = v53;
        v55 = v53 + 1;
        v56 = (__m128i *)((char *)v52 + 24 * v54);
      }
      goto LABEL_38;
    }
  }
  else
  {
    sub_15E1B70(**(_QWORD **)*a1);
    v88 = (__int64 *)sub_15E1B70(**(_QWORD **)*a1);
    sub_15E1B70(**(_QWORD **)*a1);
    sub_15E1A70(**(_QWORD **)*a1);
    v66 = sub_15E1B70(**(_QWORD **)*a1);
    v101 = v66;
    if ( v66 )
      ++*(_DWORD *)(v66 + 8);
    sub_C28530(v89, &v101);
    sub_C2BA80(a1, *v90);
    sub_15E1B70(**(_QWORD **)*a1);
    v93 = sub_15E1B70(**(_QWORD **)*a1);
    sub_15E1B70(**(_QWORD **)*a1);
    sub_15E1A70(**(_QWORD **)*a1);
    v67 = sub_15E1B70(**(_QWORD **)*a1);
    v106.m128_u64[0] = v67;
    if ( v67 )
      ++*(_DWORD *)(v67 + 8);
    sub_C28530(v89, v91);
    sub_C2BA80(a1, v92);
    v52 = (__m128i *)a1[17];
    if ( v52 )
      goto LABEL_36;
  }
  v68 = (_QWORD *)sub_186B270(0x38u);
  v52 = (__m128i *)(v68 + 1);
  *v68 = 2;
  v55 = 1;
  a1[17] = (__int64)v52;
  v56 = v52;
LABEL_38:
  v57 = _mm_load_si128(&v83);
  v56[1].m128i_i64[0] = v12;
  *v56 = v57;
  v52[-1].m128i_i32[3] = v55;
  v58 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v104);
  result = sub_182CBA0(v58, v105);
  v60 = v92;
  if ( v92 )
  {
    LODWORD(v95) = *(_DWORD *)(v92 + 8);
    v15 = LODWORD(v95) == 1;
    result = (unsigned int)(LODWORD(v95) - 1);
    *(_DWORD *)(v92 + 8) = result;
    if ( v15 )
      result = sub_15D7BC0(v84, v60);
  }
  if ( v21 )
  {
    v15 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v15 )
      result = sub_15D7BC0(v85, v21);
  }
  v61 = v94;
  if ( v94 )
  {
    LODWORD(v95) = *(_DWORD *)(v94 + 8);
    v15 = LODWORD(v95) == 1;
    result = (unsigned int)(LODWORD(v95) - 1);
    *(_DWORD *)(v94 + 8) = result;
    if ( v15 )
      return sub_15D7BC0(v86, v61);
  }
  return result;
}

