struct _Unwind_Exception *__fastcall sub_6EACB0(
        __int64 *a1,
        __int64 *a2,
        struct _Unwind_Exception *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v7; // rax
  __int64 exception_class; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int *v12; // r14
  unsigned int *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r15
  __m128 v23; // xmm0
  __m128i v24; // xmm2
  __int64 v25; // rax
  __int64 v26; // r15
  __m128 v27; // xmm1
  __m128i v28; // xmm3
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int *v31; // r13
  unsigned int *v32; // r14
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // rsi
  __int64 v38; // rax
  struct _Unwind_Exception *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 *v43; // rbx
  __int64 v45; // r9
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // [rsp+18h] [rbp-218h]
  __m128i v49; // [rsp+20h] [rbp-210h] BYREF
  __m128i v50; // [rsp+30h] [rbp-200h] BYREF
  __int64 v51; // [rsp+40h] [rbp-1F0h]
  __int64 v52; // [rsp+48h] [rbp-1E8h]
  __int64 v53; // [rsp+50h] [rbp-1E0h]
  __int64 *v54; // [rsp+58h] [rbp-1D8h]
  __int64 *v55; // [rsp+60h] [rbp-1D0h]
  __int64 v56; // [rsp+68h] [rbp-1C8h]
  _QWORD *v57; // [rsp+70h] [rbp-1C0h]
  __int64 *v58; // [rsp+78h] [rbp-1B8h]
  __int64 v59; // [rsp+80h] [rbp-1B0h]
  struct _Unwind_Exception *v60; // [rsp+88h] [rbp-1A8h]
  unsigned int **v61; // [rsp+90h] [rbp-1A0h]
  __int64 v62; // [rsp+98h] [rbp-198h] BYREF
  unsigned int **v63; // [rsp+A0h] [rbp-190h]
  int v64[2]; // [rsp+A8h] [rbp-188h]
  __int64 v65; // [rsp+B8h] [rbp-178h] BYREF
  __int64 v66; // [rsp+C0h] [rbp-170h] BYREF
  __int64 v67; // [rsp+C8h] [rbp-168h] BYREF
  __int64 v68; // [rsp+D0h] [rbp-160h] BYREF
  __int64 v69; // [rsp+D8h] [rbp-158h] BYREF
  __int64 v70; // [rsp+E0h] [rbp-150h] BYREF
  _QWORD *v71; // [rsp+E8h] [rbp-148h] BYREF
  __int64 v72; // [rsp+F0h] [rbp-140h] BYREF
  __int64 v73; // [rsp+F8h] [rbp-138h] BYREF
  __int64 v74; // [rsp+100h] [rbp-130h] BYREF
  __int64 v75; // [rsp+108h] [rbp-128h]
  __int64 v76; // [rsp+110h] [rbp-120h] BYREF
  __int64 v77; // [rsp+118h] [rbp-118h]
  _QWORD *v78; // [rsp+120h] [rbp-110h] BYREF
  __int64 v79; // [rsp+128h] [rbp-108h]
  __int64 v80; // [rsp+130h] [rbp-100h] BYREF
  __int64 v81; // [rsp+138h] [rbp-F8h]
  __int64 v82; // [rsp+140h] [rbp-F0h] BYREF
  unsigned int *v83; // [rsp+148h] [rbp-E8h] BYREF
  __int64 v84; // [rsp+150h] [rbp-E0h] BYREF
  unsigned int *v85; // [rsp+158h] [rbp-D8h] BYREF
  __int64 v86[2]; // [rsp+160h] [rbp-D0h] BYREF
  __int64 v87[2]; // [rsp+170h] [rbp-C0h] BYREF
  __m128i v88; // [rsp+180h] [rbp-B0h] BYREF
  __m128i v89; // [rsp+190h] [rbp-A0h] BYREF
  _QWORD v90[4]; // [rsp+1A0h] [rbp-90h] BYREF
  _QWORD v91[4]; // [rsp+1C0h] [rbp-70h] BYREF
  _QWORD v92[10]; // [rsp+1E0h] [rbp-50h] BYREF

  v7 = *a1;
  v60 = a3;
  v58 = a4;
  v59 = v7;
  v82 = v7;
  v84 = v7;
  exception_class = a3->exception_class;
  v86[1] = 0;
  v86[0] = exception_class;
  v55 = v86;
  sub_3EE030((__int64)v86, (__int64)a3);
  v87[1] = 0;
  v87[0] = *v58;
  v54 = v87;
  sub_3EE030((__int64)v87, (__int64)v58);
  sub_6E08C0((__int64)a1, v86);
  sub_6E08C0((__int64)a1, v87);
  *(_QWORD *)v64 = *a2;
  if ( !*(_QWORD *)v64 )
  {
    sub_6E03A0(a2, "inf", a2);
    *(_QWORD *)v64 = *a2;
  }
  v9 = sub_6E10F0((__int64)a1, a2[4], v64[0]);
  v10 = sub_6E1010((__int64)a1, v9);
  *(_QWORD *)v64 = v10;
  v92[0] = v10;
  if ( v10 )
  {
    ++*(_DWORD *)(v10 + 8);
    v57 = v92;
    v83 = nullptr;
    v63 = &v83;
    sub_6DE970(&v83, v92);
    v11 = *(_QWORD *)v64;
    v12 = v83;
    ++*(_DWORD *)(*(_QWORD *)v64 + 8LL);
    v92[0] = v11;
  }
  else
  {
    v83 = nullptr;
    v57 = v92;
    v63 = &v83;
    sub_6DE970(&v83, v92);
    v92[0] = 0;
    v12 = v83;
  }
  v85 = nullptr;
  v61 = &v85;
  sub_6DE920(&v85, v57);
  v13 = v85;
  v14 = a2[4];
  *(_QWORD *)v64 = a2[2];
  if ( !*(_QWORD *)v64 )
  {
    v62 = v14;
    sub_6E03A0(a2, "sup", a2 + 2);
    LODWORD(v14) = v62;
    *(_QWORD *)v64 = a2[2];
  }
  v15 = sub_6E10F0((__int64)a1, v64[0], v14);
  v16 = sub_6E1010((__int64)a1, v15);
  *(_QWORD *)v64 = v16;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  if ( !v12 || (v17 = *(v12 - 1), v17 == *(v12 - 2)) )
  {
    v83 = v12;
    sub_3A6B20(v63);
    v12 = v83;
    v17 = *(v83 - 1);
  }
  v18 = *(_QWORD *)v64;
  *(_QWORD *)&v12[2 * v17] = *(_QWORD *)v64;
  *(v12 - 1) = v17 + 1;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  if ( !v13 || (v19 = *(v13 - 1), v19 == *(v13 - 2)) )
  {
    sub_23A6F0(v61);
    v13 = v85;
    v19 = *(v85 - 1);
  }
  v90[2] = a5;
  v90[1] = a1;
  *(_QWORD *)&v13[2 * v19] = *(_QWORD *)v64;
  *(v13 - 1) = v19 + 1;
  v90[0] = off_1C53298;
  v20 = a2[2];
  if ( !v20 )
  {
    sub_6E03A0(a2, "sup", a2 + 2);
    v20 = a2[2];
  }
  v91[2] = v20;
  v21 = *a2;
  v91[1] = a1;
  v91[0] = off_1C53298;
  if ( !v21 )
  {
    sub_6E03A0(a2, "inf", a2);
    v21 = *a2;
  }
  v92[2] = v21;
  v92[0] = off_1C53298;
  v75 = v59;
  v92[1] = a1;
  v74 = 0;
  v49.m128i_i64[0] = (__int64)v91;
  sub_6E28A0((__int64)v91, (__int64)v60, &v74);
  v76 = 0;
  v22 = v74;
  v52 = v75;
  v77 = v59;
  sub_6E28A0((__int64)v57, (__int64)v55, &v76);
  v80 = 0;
  v62 = v76;
  v53 = v77;
  v23 = _mm_loadh_ps((const double *)&v62);
  v81 = v59;
  v50 = (__m128i)v23;
  sub_6E28A0((__int64)v90, (__int64)v54, &v80);
  v65 = v22;
  v56 = v80;
  v51 = v81;
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  v83 = v12;
  sub_6DE970(v63, &v65);
  v66 = v62;
  if ( v62 )
    ++*(_DWORD *)(v62 + 8);
  sub_6DE970(v63, &v66);
  v67 = v56;
  if ( v56 )
    ++*(_DWORD *)(v56 + 8);
  sub_6DE970(v63, &v67);
  v24 = _mm_load_si128(&v50);
  *(_QWORD *)v64 = *a1;
  v88 = v24;
  sub_6E3580(a1, 2, &v88);
  v25 = sub_15E1B70(v64[0]);
  v68 = v25;
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  v85 = v13;
  sub_6DE920(v61, &v68);
  sub_6E28A0(v49.m128i_i64[0], (__int64)v55, &v74);
  v52 = v75;
  v26 = v74;
  sub_6E28A0((__int64)v57, (__int64)v60, &v76);
  v78 = nullptr;
  v62 = v76;
  v53 = v77;
  v27 = _mm_loadh_ps((const double *)&v62);
  v79 = v59;
  v49 = (__m128i)v27;
  sub_6E28A0((__int64)v90, (__int64)v58, (__int64 *)&v78);
  v69 = v26;
  v57 = v78;
  v50.m128i_i64[0] = v79;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  sub_6DE970(v63, &v69);
  v70 = v62;
  if ( v62 )
    ++*(_DWORD *)(v62 + 8);
  sub_6DE970(v63, &v70);
  v71 = v57;
  if ( v57 )
    ++*((_DWORD *)v57 + 2);
  sub_6DE970(v63, &v71);
  v28 = _mm_load_si128(&v49);
  *(_QWORD *)v64 = *a1;
  v89 = v28;
  sub_6E3580(a1, 2, &v89);
  v29 = sub_15E1B70(v64[0]);
  v72 = v29;
  if ( v29 )
    ++*(_DWORD *)(v29 + 8);
  sub_6DE920(v61, &v72);
  v73 = 0;
  sub_6DE920(v61, &v73);
  v61 = (unsigned int **)&v84;
  v63 = (unsigned int **)&v82;
  sub_6E9E50(a1, a2, 1, (__int64)v58, (__int64)&v84, (__int64)&v82);
  sub_6E9E50(a1, a2, 0, (__int64)v58, (__int64)v61, (__int64)v63);
  v30 = a2[6];
  v31 = v85;
  v32 = v83;
  if ( v30 )
  {
    v64[0] = 0;
    do
    {
      if ( v64[0] >= *(_DWORD *)(v30 - 4) )
        break;
      v33 = (unsigned int)v64[0];
      if ( *(_DWORD *)(a2[8] + 4LL * (unsigned int)v64[0]) == 1 )
      {
        v45 = *a2;
        if ( !*a2 )
        {
          v49.m128i_i64[0] = (unsigned int)v64[0];
          sub_6E03A0(a2, "inf", a2);
          v33 = v49.m128i_i64[0];
          v45 = *a2;
        }
        v46 = a2[2];
        if ( !v46 )
        {
          v48 = v33;
          v49.m128i_i64[0] = v45;
          sub_6E03A0(a2, "sup", a2 + 2);
          v45 = v49.m128i_i64[0];
          v33 = v48;
          v46 = a2[2];
        }
        v47 = a2[6];
        v85 = v31;
        v83 = v32;
        sub_6E8FE0(a1, *(_QWORD *)(v47 + 8 * v33), a2[7] + 16 * v33, (__int64)v60, v46, v45, (__int64)v61, (__int64)v63);
        v30 = a2[6];
        v31 = v85;
        v32 = v83;
      }
      ++v64[0];
    }
    while ( v30 );
  }
  v34 = *a2;
  if ( *a2 )
  {
    v35 = a2[2];
    if ( v35 )
      goto LABEL_42;
  }
  else
  {
    sub_6E03A0(a2, "inf", a2);
    v35 = a2[2];
    v34 = *a2;
    if ( v35 )
      goto LABEL_42;
  }
  *(_QWORD *)v64 = v34;
  sub_6E03A0(a2, "sup", a2 + 2);
  v34 = *(_QWORD *)v64;
  v35 = a2[2];
LABEL_42:
  v85 = v31;
  v83 = v32;
  sub_6E8FE0(a1, (__int64)v57, (__int64)v58, (__int64)v60, v35, v34, (__int64)v61, (__int64)v63);
  *(_QWORD *)v64 = *a2;
  if ( *(_QWORD *)v64 )
  {
    v36 = a2[2];
    if ( v36 )
      goto LABEL_44;
  }
  else
  {
    sub_6E03A0(a2, "inf", a2);
    v36 = a2[2];
    *(_QWORD *)v64 = *a2;
    if ( v36 )
      goto LABEL_44;
  }
  sub_6E03A0(a2, "sup", a2 + 2);
  v36 = a2[2];
LABEL_44:
  sub_6E8FE0(a1, v56, (__int64)v54, (__int64)v60, v36, *(__int64 *)v64, (__int64)v61, (__int64)v63);
  if ( v85 )
    v37 = *(v85 - 1);
  else
    v37 = 0;
  v38 = sub_6E3580(a1, v37, v85);
  *(_QWORD *)v64 = v38;
  if ( v38 )
  {
    ++*(_DWORD *)(v38 + 8);
    v39 = (struct _Unwind_Exception *)sub_186B270(0x30u);
    v40 = *(_QWORD *)v64;
    v41 = *a1;
    v39->exception_class = (_Unwind_Exception_Class)&off_1C53418;
    ++*(_DWORD *)(v40 + 8);
    v39->exception_cleanup = (_Unwind_Exception_Cleanup_Fn)v40;
  }
  else
  {
    v39 = (struct _Unwind_Exception *)sub_186B270(0x30u);
    v41 = *a1;
    v39->exception_cleanup = nullptr;
    v39->exception_class = (_Unwind_Exception_Class)&off_1C53418;
  }
  v39->private_1 = v41;
  v39->private_2 = v41;
  v42 = (__int64)(a2 + 5);
  v43 = (__int64 *)v63;
  v39[1].exception_class = 0;
  v39[1].exception_cleanup = nullptr;
  v60 = v39;
  sub_6DF010((__int64)v39, v42, (__int64)v43);
  sub_2B4F40(v54);
  sub_2B4F40(v55);
  sub_2334C0((__int64 *)v61);
  sub_2B4F40(v43);
  sub_6DE2A0(v56, v51);
  sub_6DE2A0((__int64)v57, v50.m128i_i64[0]);
  sub_6DE2A0(v62, v53);
  sub_6DE2A0(v26, v52);
  sub_6DE2A0(*(__int64 *)v64, v59);
  return v60;
}

