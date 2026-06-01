__int64 __fastcall sub_C2CDF0(__int64 *a1, int a2, int a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // r15
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rdi
  _DWORD *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rdi
  _QWORD *v32; // rax
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rdi
  __int64 v37; // rax
  __m128 *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __m128 *v42; // rcx
  void *v43; // rbx
  unsigned int v44; // r13d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  char **exception; // r12
  int v50; // [rsp+0h] [rbp-C8h]
  int v51; // [rsp+8h] [rbp-C0h]
  __int64 v52; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v53; // [rsp+18h] [rbp-B0h]
  _QWORD *v54; // [rsp+20h] [rbp-A8h]
  void *v55; // [rsp+28h] [rbp-A0h]
  int v56[2]; // [rsp+30h] [rbp-98h]
  __int64 v57; // [rsp+38h] [rbp-90h]
  int v58; // [rsp+40h] [rbp-88h]
  void *v59; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v60[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v61[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v62; // [rsp+70h] [rbp-58h] BYREF
  __int64 v63; // [rsp+78h] [rbp-50h]
  __int64 v64; // [rsp+80h] [rbp-48h] BYREF
  __int64 v65; // [rsp+88h] [rbp-40h]

  v10 = sub_15DC610(
          **(_QWORD **)*a1,
          a2,
          a3,
          (int)a4,
          (int)a5,
          (int)a6,
          v50,
          v51,
          v52,
          v53,
          (int)v54,
          (char)v55,
          **(_QWORD **)*a1,
          v57,
          v58,
          v59);
  v11 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  result = sub_C292F0(a1, v10, a5, a6);
  if ( (_BYTE)result )
  {
    if ( v11 )
    {
      v17 = (*(_DWORD *)(v11 + 8))-- == 1;
      if ( v17 )
        return sub_15D7BC0(*(_QWORD *)v56, v11);
    }
  }
  else
  {
    v13 = sub_C2C130(a1, 0);
    v14 = v13;
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    v15 = *a5;
    if ( *a5 )
    {
      v16 = a5[1];
      v17 = (*(_DWORD *)(v15 + 8))-- == 1;
      if ( v17 )
        sub_15D7BC0(v16, v15);
    }
    *a5 = v14;
    sub_C294F0((_QWORD ***)a1, v14, v11, a6);
    sub_C2AB80((__int64)a1, v11, *a5, *a6);
    v18 = a4[1];
    v19 = *(_QWORD **)*a1;
    v53 = *a4;
    v52 = v18;
    sub_15E1B70(*v19);
    v54 = (_QWORD *)sub_15E1B70(**(_QWORD **)*a1);
    v20 = *(_QWORD *)*a1;
    v62 = 0;
    v63 = 0;
    v64 = 1;
    v65 = 0;
    sub_182CBA0(qword_1C7F2C0, &v64);
    v24 = *(_QWORD *)(v20 + 8);
    BYTE4(v64) &= ~1u;
    LODWORD(v64) = 1;
    if ( !v24 )
    {
      sub_16669E0(v20);
      v24 = *(_QWORD *)(v20 + 8);
    }
    sub_166A700(v24, (unsigned int)&v62, 0, v21, v22, v23);
    v55 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v62);
    sub_182CBA0(v55, &v64);
    sub_15E1B70(**(_QWORD **)*a1);
    v25 = (_DWORD *)sub_15E1B70(**(_QWORD **)*a1);
    v59 = v25;
    if ( v25 )
      ++v25[2];
    sub_C28530(a1 + 13, &v59);
    sub_C2BA80(a1, *a6);
    v61[0] = 1;
    v26 = *a1;
    v60[0] = 0;
    v60[1] = 0;
    v17 = *(_BYTE *)(v26 + 19) == 0;
    v61[1] = 0;
    if ( !v17 )
    {
      v27 = *(_QWORD **)v26;
      v62 = 0;
      v63 = 0;
      v54 = v27;
      v64 = 1;
      v65 = 0;
      sub_182CBA0(qword_1C7F2C0, &v64);
      BYTE4(v64) &= ~1u;
      LODWORD(v64) = 1;
      v31 = v54[1];
      if ( !v31 )
      {
        sub_16669E0(v54);
        v31 = v54[1];
      }
      v57 = sub_166A700(v31, (unsigned int)&v62, 0, v28, v29, v30);
      v55 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v62);
      sub_182CBA0(v55, &v64);
      sub_15E1B70(*v54);
      v55 = (void *)sub_15E1B70(**(_QWORD **)*a1);
      v32 = *(_QWORD **)*a1;
      v62 = 0;
      v63 = 0;
      v54 = v32;
      v64 = 1;
      v65 = 0;
      sub_182CBA0(qword_1C7F2C0, &v64);
      BYTE4(v64) &= ~1u;
      LODWORD(v64) = 1;
      v36 = v54[1];
      if ( !v36 )
      {
        sub_16669E0(v54);
        v36 = v54[1];
      }
      v57 = sub_166A700(v36, (unsigned int)&v62, 0, v33, v34, v35);
      v54 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v62);
      sub_182CBA0(v54, &v64);
      sub_15E1B70(**(_QWORD **)*a1);
      sub_15E1A70(**(_QWORD **)*a1);
      v37 = sub_15E1B70(**(_QWORD **)*a1);
      v62 = v37;
      if ( v37 )
        ++*(_DWORD *)(v37 + 8);
      sub_C28530(a1 + 13, &v62);
      sub_C2BA80(a1, *a6);
    }
    v38 = (__m128 *)a1[16];
    if ( v38 )
    {
      v39 = v38[-1].m128_u32[3];
      if ( v39 == v38[-1].m128_i32[2] )
      {
        v44 = (3 * v39 + 1) >> 1;
        v45 = 8 * (v44 + ((3 * v39 + 1) & 0xFFFFFFFE)) + 8;
        if ( 24 * v39 + 8 >= (unsigned int)v45 || v39 >= v44 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_C282D0(&v62, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v62);
          sub_233E40((__int64)&v62);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v46 = (unsigned int *)sub_186B300(&v38[-1].m128_u16[4], v45);
        v47 = v46[1];
        v38 = (__m128 *)(v46 + 2);
        *v46 = v44;
        a1[16] = (__int64)(v46 + 2);
        LODWORD(v46) = v47;
        v42 = (__m128 *)((char *)v38 + 24 * v47);
        v41 = (_DWORD)v46 + 1;
      }
      else
      {
        v40 = v39;
        v41 = v39 + 1;
        v42 = (__m128 *)((char *)v38 + 24 * v40);
      }
    }
    else
    {
      v48 = (_QWORD *)sub_186B270(0x38u);
      v38 = (__m128 *)(v48 + 1);
      *v48 = 2;
      v41 = 1;
      a1[16] = (__int64)v38;
      v42 = v38;
    }
    v43 = qword_1C7F2C0;
    v42[1].m128_u64[0] = v14;
    *v42 = _mm_loadh_ps((const double *)&v52);
    v38[-1].m128_i32[3] = v41;
    sub_182CBA0(v43, v60);
    result = sub_182CBA0(v43, v61);
    if ( v11 )
    {
      v17 = (*(_DWORD *)(v11 + 8))-- == 1;
      if ( v17 )
        return sub_15D7BC0(*(_QWORD *)v56, v11);
    }
  }
  return result;
}

