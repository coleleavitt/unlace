__int64 __fastcall srcdbg_get_local_vars(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 **a11)
{
  __int64 *v12; // rdi
  __int64 (*v14)(); // rax
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  const char *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  __int64 v31; // r13
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 *v36; // rax
  double v37; // xmm4_8
  double v38; // xmm5_8
  char v39; // [rsp+0h] [rbp-E8h]
  char v40; // [rsp+0h] [rbp-E8h]
  __int64 v41; // [rsp+8h] [rbp-E0h]
  _QWORD v42[5]; // [rsp+10h] [rbp-D8h] BYREF
  __int16 v43; // [rsp+38h] [rbp-B0h]
  __int128 v44; // [rsp+40h] [rbp-A8h]
  __int64 v45; // [rsp+50h] [rbp-98h]
  __int64 v46; // [rsp+58h] [rbp-90h]
  int v47; // [rsp+60h] [rbp-88h]
  __int64 v48; // [rsp+68h] [rbp-80h]
  int v49; // [rsp+70h] [rbp-78h]
  __int64 v50; // [rsp+78h] [rbp-70h]
  int v51; // [rsp+80h] [rbp-68h]
  __int64 v52; // [rsp+88h] [rbp-60h]
  int v53; // [rsp+90h] [rbp-58h]
  __int64 v54; // [rsp+98h] [rbp-50h]
  unsigned __int64 v55; // [rsp+A8h] [rbp-40h]

  v12 = *a11;
  v55 = __readfsqword(0x28u);
  v14 = *(__int64 (**)())(*v12 + 120);
  if ( v14 == sub_2269E0 || ((unsigned int (__fastcall *)(__int64 *, _QWORD))v14)(v12, *(_QWORD *)(a1 + 8)) != 2 )
    return 0;
  v16 = (*(__int64 (__fastcall **)(__int64 *))(**a11 + 56))(*a11);
  v17 = **(_QWORD **)(a1 + 16);
  if ( v17 != -1 && v16 == v17 )
    return 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(**a11 + 72))(*a11, a1 + 32) )
  {
    if ( (debug[2] & 4) != 0 )
    {
      v24 = "<unnamed>";
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(**a11 + 16))(*a11, &qword_8CBFD0) )
      {
        v24 = &s1;
        if ( (_QWORD)xmmword_8CBFD8 )
          v24 = (const char *)qword_8CBFD0;
      }
      sub_16B860(
        (int)"Lookup local variable for function: %s. (bounds: ",
        (__int64)v24,
        v18,
        v19,
        v20,
        v21,
        a2,
        a3,
        a4,
        a5,
        v22,
        v23,
        a8,
        a9,
        v39);
      v31 = *(_QWORD *)(a1 + 40);
      v32 = *(_DWORD *)debug;
      if ( !v31 )
      {
LABEL_21:
        if ( (v32 & 0x40000) != 0 )
          sub_16B860((int)")\n", (__int64)v24, v25, v26, v27, v28, a2, a3, a4, a5, v29, v30, a8, a9, v40);
        goto LABEL_14;
      }
      v33 = *(_QWORD *)(a1 + 32);
      v34 = 0;
      if ( (*(_DWORD *)debug & 0x40000) != 0 )
      {
        while ( 1 )
        {
          v35 = (int)v34++;
          v36 = (__int64 *)(v33 + 16 * v35);
          v24 = (const char *)*v36;
          sub_16B860((int)"[%a -> %a[", *v36, v36[1], v26, v27, v28, a2, a3, a4, a5, v29, v30, a8, a9, v40);
          v32 = *(_DWORD *)debug;
          if ( v31 == v34 )
            goto LABEL_21;
          if ( (*(_DWORD *)debug & 0x40000) != 0 )
          {
            v41 = *(_QWORD *)(a1 + 32);
            sub_16B860((int)" ", (__int64)v24, v41, v26, v27, v28, a2, a3, a4, a5, v29, v30, a8, a9, v40);
            v33 = v41;
            if ( (*(_DWORD *)debug & 0x40000) != 0 )
              continue;
          }
          break;
        }
      }
    }
LABEL_14:
    if ( !get_func(v16) )
    {
      a2 = 0;
      v42[0] = v16;
      v43 = 0;
      v42[1] = -1;
      v42[2] = 512;
      v42[3] = -1;
      v42[4] = 0;
      v45 = 0xFFFFFFFFLL;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v49 = 0;
      v50 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0;
      v44 = 0;
      if ( !(unsigned __int8)add_func_ex(v42) )
        return 0xFFFFFFFFLL;
    }
    **(_QWORD **)(a1 + 16) = v16;
    sub_254FD0(a1, *a11, a2, a3, a4, a5, v37, v38, a8, a9);
    return 1;
  }
  return 0xFFFFFFFFLL;
}
