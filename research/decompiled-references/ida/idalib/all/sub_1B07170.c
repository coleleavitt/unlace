__int64 __fastcall sub_1B07170(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, char *a6)
{
  int v8; // r14d
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  __int64 *v17; // rax
  __int64 *v18; // rax
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 i; // rcx
  __int64 v24; // r12
  char *v25; // r13
  int v26; // eax
  char v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 *v32; // r9
  void *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 *v38; // rbp
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 *v42; // r9
  __m128i v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  unsigned int v49; // ebx
  __int64 v50; // rax
  void *v51; // rdx
  __int64 v52; // rax
  _BOOL4 v53; // edx
  __int64 v54; // rax
  void *v55; // rdx
  __int64 v56; // rax
  unsigned __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  void *v60; // rdx
  unsigned __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rax
  void *v66; // rdx
  unsigned __int64 v67; // rbx
  __int64 v68; // rax
  __int64 v69; // [rsp-10h] [rbp-400h]
  unsigned int v71; // [rsp+0h] [rbp-3F0h]
  unsigned int v72; // [rsp+0h] [rbp-3F0h]
  unsigned int v73; // [rsp+0h] [rbp-3F0h]
  unsigned __int64 v74; // [rsp+8h] [rbp-3E8h]
  size_t v75; // [rsp+10h] [rbp-3E0h]
  size_t v76; // [rsp+10h] [rbp-3E0h]
  unsigned __int64 v77; // [rsp+20h] [rbp-3D0h]
  int v78; // [rsp+30h] [rbp-3C0h] BYREF
  _BOOL4 v79; // [rsp+34h] [rbp-3BCh] BYREF
  __int64 v80; // [rsp+38h] [rbp-3B8h] BYREF
  __int64 v81; // [rsp+40h] [rbp-3B0h] BYREF
  void *v82; // [rsp+48h] [rbp-3A8h] BYREF
  void *v83; // [rsp+50h] [rbp-3A0h]
  _QWORD v84[2]; // [rsp+58h] [rbp-398h] BYREF
  __int64 (__fastcall **v85)(); // [rsp+68h] [rbp-388h] BYREF
  int v86; // [rsp+70h] [rbp-380h]
  __int128 v87; // [rsp+78h] [rbp-378h]
  __int64 v88; // [rsp+88h] [rbp-368h]
  char v89; // [rsp+90h] [rbp-360h]
  int v90; // [rsp+94h] [rbp-35Ch]
  void **v91; // [rsp+98h] [rbp-358h]
  __int64 (__fastcall **v92)(); // [rsp+A8h] [rbp-348h] BYREF
  int v93; // [rsp+B0h] [rbp-340h]
  __int128 v94; // [rsp+B8h] [rbp-338h]
  __int64 v95; // [rsp+C8h] [rbp-328h]
  char v96; // [rsp+D0h] [rbp-320h]
  int v97; // [rsp+D4h] [rbp-31Ch]
  void **p_ptr; // [rsp+D8h] [rbp-318h]
  __m128i v99[9]; // [rsp+E8h] [rbp-308h] BYREF
  void *v100; // [rsp+178h] [rbp-278h] BYREF
  __m128i si128; // [rsp+180h] [rbp-270h] BYREF
  _BYTE v102[264]; // [rsp+190h] [rbp-260h] BYREF
  void *ptr; // [rsp+298h] [rbp-158h] BYREF
  __m128i v104; // [rsp+2A0h] [rbp-150h] BYREF
  _BYTE v105[320]; // [rsp+2B0h] [rbp-140h] BYREF

  if ( (*(_BYTE *)(a4 + 29) & 1) == 0 )
    return 0;
  v8 = a5;
  v11 = sub_B8C3D0(a4, a2, a3, a4, a5, (__int64)a6);
  v15 = *v11;
  v16 = *v11 + 8LL * *((unsigned int *)v11 + 2);
  if ( *v11 < v16 )
  {
    v18 = (__int64 *)*v11;
    while ( 1 )
    {
      v15 = *v18;
      if ( *(_WORD *)(*v18 + 36) == 292 )
        break;
      if ( (__int64 *)v16 == ++v18 )
        return 0;
    }
    if ( (__int64 *)v16 == v18 )
      return 0;
  }
  else
  {
    if ( v15 == v16 )
      return 0;
    if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 292 )
    {
      v17 = (__int64 *)(v16 + 8);
      while ( v17 != (__int64 *)v15 )
      {
        v12 = *v17++;
        if ( *(_WORD *)(v12 + 36) == 292 )
          goto LABEL_15;
      }
      return 0;
    }
  }
LABEL_15:
  if ( (*(_BYTE *)(a4 + 29) & 1) == 0 )
    goto LABEL_57;
  v19 = sub_B8C3D0(a4, v16, v15, v12, v13, v14);
  v20 = *v19;
  v21 = *v19 + 8LL * *((unsigned int *)v19 + 2);
  if ( v20 >= v21 )
  {
    if ( v20 != v21 )
    {
      if ( *(_WORD *)(*(_QWORD *)v21 + 36LL) == 292 )
        goto LABEL_24;
      v22 = v21 + 8;
      for ( i = v22; v22 != v20; i = v22 )
      {
        v22 += 8LL;
        if ( *(_WORD *)(*(_QWORD *)i + 36LL) == 292 )
          goto LABEL_24;
      }
    }
LABEL_57:
    BUG();
  }
  v57 = v20;
  while ( *(_WORD *)(*(_QWORD *)v57 + 36LL) != 292 )
  {
    v57 += 8LL;
    if ( v21 == v57 )
      goto LABEL_57;
  }
  if ( v21 == v57 )
    goto LABEL_57;
LABEL_24:
  while ( 1 )
  {
    v24 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 36LL) == 292 )
      break;
    v20 += 8LL;
  }
  v25 = *(char **)(v24 + 48);
  if ( !v25 )
  {
    v27 = v8 == 0;
    goto LABEL_35;
  }
  v26 = 9;
  if ( (*(_DWORD *)v25 & 0x3C000) == 0 )
    v26 = sub_1AE80F0(a1, a2, *(_QWORD *)(v24 + 48));
  v27 = v8 == v26;
  if ( v8 == 9 )
  {
    if ( v26 != 9 )
      goto LABEL_36;
    if ( a6 )
    {
      v74 = sub_BFBAE0((unsigned __int64)a6);
      v77 = sub_BFBAE0((unsigned __int64)v25);
      v100 = &si128.m128i_u64[1];
      si128.m128i_i64[0] = 0x2000000000LL;
      v104.m128i_i64[0] = 0x2000000000LL;
      v28 = *(_QWORD *)(a1 + 248);
      ptr = &v104.m128i_u64[1];
      sub_F1A490(v74, (__int64)&v100, v28, 1, 0);
      sub_F1A490(v77, (__int64)&ptr, *(_QWORD *)(a1 + 248), 1, 0);
      v27 = sub_2222ED0(&v100, &ptr);
      if ( ptr != &v104.m128i_u64[1] )
        free(ptr);
      if ( v100 != &si128.m128i_u64[1] )
        free(v100);
      goto LABEL_35;
    }
    return 0;
  }
LABEL_35:
  if ( v27 )
    return 0;
LABEL_36:
  v86 = 2;
  v100 = v102;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v89 = 0;
  v85 = &off_2BEBEE0;
  v87 = 0;
  v90 = 1;
  v88 = 0;
  v91 = &v100;
  sub_227B8B0(&v85, 0, 0, 0);
  if ( a6 )
  {
    v75 = j__strlen("\n");
    v33 = (void *)sub_16043A0(*(_QWORD **)(a1 + 248), *(_QWORD **)(a1 + 240), v29, v30, v31, v32);
    v104.m128i_i64[0] = v34;
    ptr = v33;
    sub_F07C00(a6, (__int64)&v85, 0, (const __m128i *)&ptr, 0, 0, "\n", v75);
  }
  ptr = v105;
  v104 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v93 = 2;
  v92 = &off_2BEBEE0;
  v96 = 0;
  v97 = 1;
  v95 = 0;
  v94 = 0;
  p_ptr = &ptr;
  sub_227B8B0(&v92, 0, 0, 0);
  if ( !v25 )
  {
    v38 = (__int64 *)(a1 + 8);
    if ( a6 )
    {
      v72 = sub_C00A40((unsigned __int64)a6, 0, v35, v36, v37);
      v58 = sub_EEC8C0((unsigned __int64)a6, 0, 0.0);
      v49 = *(_DWORD *)(v24 + 24);
      v80 = v58;
      v81 = __PAIR64__(*(_DWORD *)(v24 + 28), v49);
      sub_168B9F0((__int64)v99, v38, v72, 0x1C3Bu, 0);
      v78 = 1;
      v59 = sub_1587D10((__int64)v99, &v78);
      v60 = *v91;
      v83 = v91[1];
      v82 = v60;
      v52 = sub_166BAF0(v59, (__int64)&v82);
      v53 = 0;
      goto LABEL_41;
    }
    v67 = a3;
    v73 = sub_C00A40(a3, 0, v35, v36, v37);
    v68 = sub_EEC8C0(v67, 0, 0.0);
    v49 = *(_DWORD *)(v24 + 24);
    v80 = v68;
    v81 = __PAIR64__(*(_DWORD *)(v24 + 28), v49);
LABEL_55:
    sub_168B9F0((__int64)v99, v38, v73, 0x1C3Bu, 0);
    v78 = 0;
    v65 = sub_1587D10((__int64)v99, &v78);
    v66 = *v91;
    v83 = v91[1];
    v82 = v66;
    v52 = sub_166BAF0(v65, (__int64)&v82);
    v53 = v25 != nullptr;
    goto LABEL_41;
  }
  v38 = (__int64 *)(a1 + 8);
  v76 = j__strlen("\n");
  v43.m128i_i64[0] = sub_16043A0(*(_QWORD **)(a1 + 248), *(_QWORD **)(a1 + 240), v39, v40, v41, v42);
  v99[0] = v43;
  sub_F07C00(v25, (__int64)&v92, 0, v99, 0, 0, "\n", v76);
  if ( !a6 )
  {
    v61 = a3;
    v73 = sub_C00A40(a3, (__int64)&v92, v69, v44, v45);
    v80 = sub_EEC8C0(v61, (__int64)&v92, 0.0);
    v49 = sub_C00A40((unsigned __int64)v25, (__int64)&v92, v62, v63, v64);
    v81 = sub_EEC8C0((unsigned __int64)v25, (__int64)&v92, 0.0);
    goto LABEL_55;
  }
  v71 = sub_C00A40((unsigned __int64)a6, (__int64)&v92, v69, v44, v45);
  v80 = sub_EEC8C0((unsigned __int64)a6, (__int64)&v92, 0.0);
  v49 = sub_C00A40((unsigned __int64)v25, (__int64)&v92, v46, v47, v48);
  v81 = sub_EEC8C0((unsigned __int64)v25, (__int64)&v92, 0.0);
  sub_168B9F0((__int64)v99, v38, v71, 0x1C3Bu, 0);
  v78 = 1;
  v50 = sub_1587D10((__int64)v99, &v78);
  v51 = *v91;
  v83 = v91[1];
  v82 = v51;
  v52 = sub_166BAF0(v50, (__int64)&v82);
  v53 = 1;
LABEL_41:
  v79 = v53;
  v54 = sub_1587D10(v52, (int *)&v79);
  v55 = *p_ptr;
  v84[1] = p_ptr[1];
  v84[0] = v55;
  v56 = sub_166BAF0(v54, (__int64)v84);
  sub_15884C0(v56, &v80);
  sub_15F7200(v99);
  sub_168B9F0((__int64)v99, v38, v49, 0x1829u, 0);
  sub_15884C0((__int64)v99, &v81);
  sub_15F7200(v99);
  v92 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v92);
  if ( ptr != v105 )
    free(ptr);
  v85 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v85);
  if ( v100 != v102 )
    free(v100);
  return 1;
}
