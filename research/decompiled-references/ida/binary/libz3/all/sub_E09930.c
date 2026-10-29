void __fastcall sub_E09930(__int64 a1)
{
  _QWORD *exception; // rbx
  bool v2; // zf
  __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // r13
  __int64 v11; // r12
  __int16 v12; // dx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // edx
  __int64 v17; // rdi
  void (__fastcall ***v18)(_QWORD); // rbx
  int v19; // eax
  __int64 v20; // [rsp+0h] [rbp-208h]
  int v21; // [rsp+8h] [rbp-200h]
  char v22; // [rsp+Fh] [rbp-1F9h]
  char v23; // [rsp+Fh] [rbp-1F9h]
  int *v24; // [rsp+10h] [rbp-1F8h]
  void *v25; // [rsp+18h] [rbp-1F0h]
  int v26; // [rsp+38h] [rbp-1D0h]
  int v27; // [rsp+38h] [rbp-1D0h]
  void *v28; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-1B8h] BYREF
  char v30[8]; // [rsp+58h] [rbp-1B0h] BYREF
  int v31[2]; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-1A0h]
  _BYTE v33[16]; // [rsp+70h] [rbp-198h] BYREF
  char v34[8]; // [rsp+80h] [rbp-188h] BYREF
  __int64 v35; // [rsp+88h] [rbp-180h]
  void *v36; // [rsp+90h] [rbp-178h]
  char v37[8]; // [rsp+A0h] [rbp-168h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-160h]
  void *ptr; // [rsp+B0h] [rbp-158h]
  int *v40; // [rsp+C0h] [rbp-148h] BYREF
  int v41; // [rsp+C8h] [rbp-140h]
  __int128 v42; // [rsp+D0h] [rbp-138h]
  __int128 v43; // [rsp+E0h] [rbp-128h]
  __int64 v44; // [rsp+F0h] [rbp-118h]
  __int16 v45; // [rsp+F8h] [rbp-110h]
  __int64 v46; // [rsp+100h] [rbp-108h]
  int v47; // [rsp+110h] [rbp-F8h] BYREF
  char v48[24]; // [rsp+118h] [rbp-F0h] BYREF
  char v49[16]; // [rsp+130h] [rbp-D8h] BYREF
  __int64 v50; // [rsp+140h] [rbp-C8h] BYREF
  __m128 v51; // [rsp+148h] [rbp-C0h]
  int v52; // [rsp+158h] [rbp-B0h]
  __int64 *v53; // [rsp+160h] [rbp-A8h]
  __int64 v54; // [rsp+168h] [rbp-A0h]
  int v55; // [rsp+170h] [rbp-98h]
  __int64 *v56; // [rsp+178h] [rbp-90h]
  __int64 v57; // [rsp+180h] [rbp-88h]
  int v58; // [rsp+188h] [rbp-80h]
  __int64 v59; // [rsp+190h] [rbp-78h]
  __int64 v60[6]; // [rsp+198h] [rbp-70h] BYREF
  int v61; // [rsp+1C8h] [rbp-40h]

  v2 = *(_BYTE *)(a1 + 190) == 0;
  v28 = nullptr;
  if ( v2 )
    return;
  if ( !(unsigned __int8)sub_E02DB0(a1, (__int64 *****)&v28) )
  {
    v18 = (void (__fastcall ***)(_QWORD))v28;
    if ( v28 )
    {
      v2 = (*((_DWORD *)v28 + 4))-- == 1;
      if ( v2 )
        goto LABEL_30;
    }
    return;
  }
  v29 = 0;
  sub_1862370(&v29, "max_degree", 0xFFFFFFFFLL);
  sub_1862370(&v29, "sort_store", 1);
  sub_1862300(&v29, "completion", 1);
  sub_1360C00(v30, v28, &v29);
  sub_13608C0(v30, 0);
  sub_DFBCB0(a1);
  v4 = *(_QWORD *)(a1 + 296);
  sub_180C5A0(v37, "array");
  v47 = sub_15DA4C0(v4 + 560, v37);
  sub_15F01E0(v48, v4);
  sub_16669D0(v49, v4);
  v50 = v4;
  sub_180C5A0(&v40, "seq");
  v5 = sub_15DA4C0(v4 + 560, &v40);
  v6 = sub_15D2690(v4, v5);
  v51 = _mm_loadh_ps((const double *)(v6 + 88));
  LODWORD(v6) = *(_DWORD *)(v6 + 16);
  v53 = &v50;
  v56 = &v50;
  v52 = v6;
  v54 = v50;
  v55 = v6;
  v57 = v50;
  v58 = v6;
  v59 = 0;
  v60[0] = v50;
  memset(&v60[1], 0, 24);
  v60[4] = 0xFFFFFFFFLL;
  v60[5] = 0;
  v61 = v6;
  sub_DFBCB0(a1);
  v25 = *(void **)(a1 + 296);
  sub_1829790(v25, 0);
  sub_DFBCB0(a1);
  v7 = *(_QWORD *)(a1 + 296);
  v45 = 0;
  v41 = 0;
  v40 = &off_1C4C9C8;
  v44 = 0;
  v46 = v7;
  v42 = 0;
  v43 = 0;
  sub_DFBCB0(a1);
  v8 = *(_QWORD *)(a1 + 296);
  *(_QWORD *)v31 = 0;
  v32 = v8;
  sub_18086F0(v33, &v40, 1);
  v9 = *(__int64 **)(a1 + 760);
  v35 = 0;
  v36 = nullptr;
  if ( !v9 )
    goto LABEL_26;
  v22 = 0;
  v10 = &v9[*((unsigned int *)v9 - 1)];
  v24 = v31;
  if ( v9 == v10 )
    goto LABEL_26;
  do
  {
    while ( 1 )
    {
      v11 = *v9;
      if ( *(_WORD *)(*v9 + 4) )
        goto LABEL_7;
      if ( (*(_BYTE *)(v11 + 30) & 1) == 0 )
        goto LABEL_7;
      sub_DF6300(*(__int64 *)v31, v32);
      *(_QWORD *)v31 = 0;
      sub_1361190(v30, v11, v24);
      sub_DFBCB0(a1);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 296) + 856LL) == *(_QWORD *)v31 )
        goto LABEL_7;
      v12 = *(_WORD *)(*(_QWORD *)v31 + 4LL);
      if ( v12 )
        break;
      if ( (*(_BYTE *)(*(_QWORD *)v31 + 30LL) & 2) == 0 )
        goto LABEL_13;
LABEL_7:
      if ( v10 == ++v9 )
        goto LABEL_23;
    }
    if ( v12 == 2 )
      goto LABEL_7;
LABEL_13:
    sub_DFBCB0(a1);
    v16 = v31[0];
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 296) + 864LL) != *(_QWORD *)v31 )
    {
      v38 = 0;
      ptr = nullptr;
      sub_E0FC00((int)&v47, (int)v37, v11, v13, v14, v15, v20, v21, (int)v24, v25);
      if ( ptr )
        sub_186B220(ptr);
      v16 = v31[0];
    }
    v38 = 0;
    ptr = nullptr;
    sub_E0FC00((int)&v47, (int)v37, v16, v13, v14, v15, v20, v21, (int)v24, v25);
    if ( ptr )
      sub_186B220(ptr);
    sub_DFE220((_BYTE *)a1, (unsigned __int64)v34, (__int64)v30, v11, 1u, 0.0);
    if ( (unsigned int)sub_180B130(a1) > 0xA )
    {
      if ( (unsigned __int8)sub_186A530(0.0) )
      {
        sub_186A4C0(0.0);
        v26 = (int)v28;
        v17 = sub_180B150(a1, v34);
        sub_134F450(v17, a1 + 104, v26, 0);
        sub_186A500(v17, a1 + 104);
      }
      else
      {
        v27 = (int)v28;
        v19 = sub_180B150(a1, v34);
        sub_134F450(v19, a1 + 104, v27, 0);
      }
    }
    sub_DFBCB0(a1);
    ++v9;
    v22 = (*(_QWORD *)(*(_QWORD *)(a1 + 296) + 864LL) == *(_QWORD *)v31) | v23;
  }
  while ( v10 != v9 );
LABEL_23:
  if ( v22 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "an invalid model was generated");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  if ( v36 )
    sub_186B220(v36);
LABEL_26:
  sub_1808900(v33);
  sub_DF6300(*(__int64 *)v31, v32);
  sub_2495F0((__int64)&v40);
  sub_1829100(v25);
  sub_2334C0(v60);
  if ( v59 )
    sub_186B220((void *)(v59 - 8));
  sub_13606C0(v30);
  sub_18572D0(&v29);
  v18 = (void (__fastcall ***)(_QWORD))v28;
  if ( v28 )
  {
    v2 = (*((_DWORD *)v28 + 4))-- == 1;
    if ( v2 )
    {
LABEL_30:
      (**v18)(v18);
      sub_186B220(v18);
    }
  }
}

