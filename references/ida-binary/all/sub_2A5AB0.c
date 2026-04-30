__int64 __fastcall sub_2A5AB0(__int64 a1, double a2)
{
  __int64 (__fastcall *v2)(); // rax
  __int64 (__fastcall *v5)(); // rax
  __int64 (__fastcall *v6)(__int64); // rax
  int v7; // r15d
  __int64 (__fastcall *v8)(__int64); // rax
  unsigned int v9; // r15d
  __int64 (__fastcall *v10)(); // rax
  __int64 (*v11)(); // rax
  __int64 v12; // rcx
  double v13; // xmm0_8
  const char *v14; // rsi
  __int64 (*v15)(); // rax
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rbp
  __int64 v19; // rbx
  void *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rbp
  __int64 v23; // rbx
  __int64 *v24; // rax
  __int64 v25; // rdi
  int v26; // [rsp+Ch] [rbp-1BCh]
  _QWORD v27[2]; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v28; // [rsp+30h] [rbp-198h] BYREF
  __int128 v29; // [rsp+38h] [rbp-190h]
  __int64 v30; // [rsp+50h] [rbp-178h] BYREF
  __int128 v31; // [rsp+58h] [rbp-170h]
  __int64 v32; // [rsp+70h] [rbp-158h] BYREF
  __int128 v33; // [rsp+78h] [rbp-150h]
  _BYTE v34[8]; // [rsp+90h] [rbp-138h] BYREF
  int v35; // [rsp+98h] [rbp-130h] BYREF
  _QWORD *v36; // [rsp+A0h] [rbp-128h]
  int *v37; // [rsp+A8h] [rbp-120h]
  int *v38; // [rsp+B0h] [rbp-118h]
  __int64 v39; // [rsp+B8h] [rbp-110h]
  __int64 v40; // [rsp+C0h] [rbp-108h] BYREF
  int v41; // [rsp+C8h] [rbp-100h] BYREF
  _QWORD *v42; // [rsp+D0h] [rbp-F8h]
  int *v43; // [rsp+D8h] [rbp-F0h]
  int *v44; // [rsp+E0h] [rbp-E8h]
  __int64 v45; // [rsp+E8h] [rbp-E0h]
  __int64 v46; // [rsp+F0h] [rbp-D8h] BYREF
  __int128 v47; // [rsp+F8h] [rbp-D0h]
  __int64 v48; // [rsp+108h] [rbp-C0h]
  __int128 v49; // [rsp+110h] [rbp-B8h]
  __int64 v50; // [rsp+120h] [rbp-A8h] BYREF
  int v51; // [rsp+128h] [rbp-A0h] BYREF
  _QWORD *v52; // [rsp+130h] [rbp-98h]
  int *v53; // [rsp+138h] [rbp-90h]
  int *v54; // [rsp+140h] [rbp-88h]
  __int64 v55; // [rsp+148h] [rbp-80h]
  __int64 (__fastcall **v56)(); // [rsp+150h] [rbp-78h] BYREF
  int v57; // [rsp+158h] [rbp-70h] BYREF
  _QWORD *v58; // [rsp+160h] [rbp-68h]
  int *v59; // [rsp+168h] [rbp-60h]
  int *v60; // [rsp+170h] [rbp-58h]
  __int64 v61; // [rsp+178h] [rbp-50h]
  unsigned __int64 v62; // [rsp+188h] [rbp-40h]

  v2 = *(__int64 (__fastcall **)())a1;
  v62 = __readfsqword(0x28u);
  if ( !(*((unsigned __int8 (__fastcall **)(__int64))v2 + 16))(a1) )
  {
    v56 = drawable_graph_t::clear_layout_info;
    sub_298EA0(a1, &v56, 1, a2);
    *(_BYTE *)(a1 + 32) = 0;
    v37 = &v35;
    v38 = &v35;
    *(_DWORD *)(a1 + 36) = 0;
    v43 = &v41;
    v44 = &v41;
    v35 = 0;
    v36 = nullptr;
    v39 = 0;
    v41 = 0;
    v42 = nullptr;
    v45 = 0;
    v46 = 0;
    v48 = 0;
    v47 = 0;
    v49 = 0;
    sub_29E840((__int64 (__fastcall **)())a1, nullptr, (__int64)&v40, (unsigned __int64)v34, nullptr, &v46);
    v51 = 0;
    v53 = &v51;
    v54 = &v51;
    v5 = *(__int64 (__fastcall **)())a1;
    v52 = nullptr;
    v55 = 0;
    v6 = *((__int64 (__fastcall **)(__int64))v5 + 7);
    if ( v6 == interactive_graph_t__::vfunc_7 )
      v26 = *(_DWORD *)(a1 + 184);
    else
      v26 = v6(a1);
    sub_2A07E0(a1, (__int64)v34, &v50, &v40);
    v28 = 0;
    v30 = 0;
    v29 = 0;
    v31 = 0;
    v7 = sub_295E00((int *)a1, (__int64)&v40, &v30, 1u);
    sub_296220((int *)a1, &v30, &v46, v26, 1);
    sub_296300((_DWORD *)a1, (const char *)&v30, &v28, v7);
    sub_2967A0(a1, &v28);
    v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    if ( v8 == interactive_graph_t__::vfunc_7 )
      v9 = *(_DWORD *)(a1 + 184);
    else
      v9 = v8(a1);
    sub_2968E0(a1, &v28, &v30);
    sub_29C700((__int64 *)a1, (char *)&v28);
    v57 = 0;
    v59 = &v57;
    v60 = &v57;
    v10 = *(__int64 (__fastcall **)())a1;
    v58 = nullptr;
    v61 = 0;
    v11 = *((__int64 (**)())v10 + 33);
    if ( v11 == interactive_graph_t__::vfunc_33 || !((unsigned __int8 (__fastcall *)(__int64))v11)(a1) )
      sub_293820((__int64)&v56, (__int64)&v50);
    sub_2991A0((__int64 *)a1, &v28, (int *)&v56, 0.0);
    sub_297BA0((_QWORD *)a1, &v28, (__int64)&v56, v9, (__m128)0LL);
    sub_298340(a1, (unsigned __int64)&v28, v9, v12, 0.0);
    v13 = 0.0;
    v33 = 0;
    v32 = 0;
    sub_29FF20((_QWORD *)a1, (const char *)&v28, &v32);
    sub_2A4DC0(a1, (__int64)&v28, &v32, v26, 0.0);
    sub_299870(a1, (__int64)&v50);
    sub_2943A0((int *)a1, v26, 0);
    v14 = (const char *)v27;
    v27[0] = remove_superfluous_points;
    sub_298EA0(a1, v27, 0, 0.0);
    v15 = *(__int64 (**)())(*(_QWORD *)a1 + 264LL);
    if ( v15 == interactive_graph_t__::vfunc_33 || !((unsigned __int8 (__fastcall *)(__int64))v15)(a1) )
    {
      v14 = v34;
      sub_299E80(a1, (__int64)v34, (__int64)&v50, 0.0);
    }
    v16 = v32;
    *(_DWORD *)(a1 + 36) = 1;
    if ( v16 )
    {
      v17 = v33;
      if ( (_QWORD)v33 )
      {
        v18 = 0;
        do
        {
          v19 = *(_QWORD *)(v16 + 48 * v18 + 16);
          if ( v19 )
          {
            do
            {
              sub_290E80(*(_QWORD **)(v19 + 24));
              v20 = (void *)v19;
              v19 = *(_QWORD *)(v19 + 16);
              v14 = (const char *)&word_38;
              operator delete(v20, 0x38u);
            }
            while ( v19 );
            v16 = v32;
          }
          ++v18;
        }
        while ( v17 != v18 );
      }
      *(_QWORD *)&v33 = 0;
      v13 = qfree(v16, v14);
    }
    sub_292340(v58);
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      v13 = qfree(v30, v14, v13);
    }
    v21 = v28;
    if ( v28 )
    {
      v22 = v29;
      if ( (_QWORD)v29 )
      {
        v23 = 0;
        do
        {
          v24 = (__int64 *)(v21 + 32 * v23);
          v25 = *v24;
          if ( *v24 )
          {
            v24[1] = 0;
            v13 = qfree(v25, v14, v13);
            v21 = v28;
          }
          ++v23;
        }
        while ( v22 != v23 );
      }
      *(_QWORD *)&v29 = 0;
      v13 = qfree(v21, v14, v13);
    }
    sub_2919A0(v52, v14);
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      v13 = qfree(v48, v14, v13);
    }
    if ( v46 )
    {
      *(_QWORD *)&v47 = 0;
      qfree(v46, v14, v13);
    }
    sub_292340(v42);
    sub_291410(v36);
  }
  return 1;
}
