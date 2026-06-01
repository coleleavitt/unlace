__int64 __fastcall sub_6EBE60(__m128i *a1, __int64 *a2, unsigned int a3, _QWORD *a4)
{
  unsigned int *v5; // rbp
  _Unwind_Exception_Cleanup_Fn exception_cleanup; // rax
  unsigned int v7; // ebx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  int v12; // eax
  __int64 v13; // rax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  _Unwind_Exception_Cleanup_Fn v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rbx
  _Unwind_Exception_Cleanup_Fn v21; // rax
  unsigned int v22; // r13d
  unsigned int v23; // eax
  unsigned int v24; // ecx
  size_t v25; // rsi
  unsigned int v26; // r14d
  unsigned int *v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r14
  _QWORD *v31; // r14
  __int64 v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r13
  __m128i v37; // xmm0
  __int64 v38; // r14
  _DWORD *v39; // rdx
  unsigned int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  _DWORD *v43; // rcx
  _DWORD *v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  _DWORD *v48; // rcx
  unsigned __int64 v50; // rcx
  __int64 *v51; // r14
  __int64 v52; // rsi
  unsigned int v54; // r14d
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rcx
  unsigned int v58; // ecx
  size_t v59; // rsi
  unsigned int *v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  char **exception; // r12
  char **v65; // r14
  char **v66; // r14
  struct _Unwind_Exception *v67; // [rsp+0h] [rbp-168h]
  __int64 v69; // [rsp+10h] [rbp-158h]
  __int64 v70; // [rsp+18h] [rbp-150h]
  unsigned int v71; // [rsp+20h] [rbp-148h]
  __int64 v72; // [rsp+20h] [rbp-148h]
  unsigned __int64 v73; // [rsp+20h] [rbp-148h]
  __int64 v74; // [rsp+28h] [rbp-140h]
  __int64 v75; // [rsp+38h] [rbp-130h]
  __int64 v76; // [rsp+40h] [rbp-128h]
  __int64 v77; // [rsp+50h] [rbp-118h]
  __int64 v78; // [rsp+58h] [rbp-110h]
  unsigned int v79; // [rsp+60h] [rbp-108h]
  _QWORD *v80; // [rsp+78h] [rbp-F0h] BYREF
  _QWORD *v81; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v82; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v83; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v84; // [rsp+98h] [rbp-D0h] BYREF
  struct _Unwind_Exception *v85; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v86; // [rsp+A8h] [rbp-C0h] BYREF
  __int64 v87; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned int *v88; // [rsp+B8h] [rbp-B0h] BYREF
  __int64 v89; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v90; // [rsp+C8h] [rbp-A0h]
  __int64 v91; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v92; // [rsp+D8h] [rbp-90h]
  _Unwind_Exception_Class exception_class; // [rsp+E0h] [rbp-88h] BYREF
  _QWORD *v94; // [rsp+E8h] [rbp-80h]
  _QWORD v95[4]; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v96[11]; // [rsp+110h] [rbp-58h] BYREF

  v5 = nullptr;
  v75 = a3;
  v67 = (struct _Unwind_Exception *)(a2[7] + 16LL * a3);
  exception_cleanup = v67->exception_cleanup;
  v69 = a1->m128i_i64[0];
  v87 = a1->m128i_i64[0];
  if ( exception_cleanup )
  {
    v7 = 1;
    do
    {
      if ( v7 >= *((_DWORD *)exception_cleanup - 1) )
        break;
      v8 = *((_QWORD *)exception_cleanup + v7);
      v9 = sub_6DF7C0((__int64)a1, v7);
      v10 = sub_6E1C90(a1, v9, v8);
      v11 = v10;
      if ( v10 )
        ++*(_DWORD *)(v10 + 8);
      if ( v5 )
      {
        v12 = *(v5 - 1);
        if ( v12 != *(v5 - 2) )
          continue;
      }
      v88 = v5;
      sub_3A6B20(&v88);
      v5 = v88;
      v12 = *(v88 - 1);
      ++v7;
      *(_QWORD *)&v5[2 * v12] = v11;
      *(v5 - 1) = v12 + 1;
      exception_cleanup = v67->exception_cleanup;
    }
    while ( exception_cleanup );
    v69 = a1->m128i_i64[0];
  }
  v13 = a2[4];
  v95[1] = a1;
  v95[0] = off_1C53298;
  v95[2] = v13;
  v88 = v5;
  v90 = v69;
  v89 = 0;
  sub_6E27D0((__int64)v95, (__int64)&v87, &v89);
  v74 = v89;
  v77 = v90;
  v17 = v67->exception_cleanup;
  v18 = 0x7FFFFFFF8LL;
  if ( v17 )
    v18 = 8LL * (unsigned int)(*((_DWORD *)v17 - 1) - 1);
  v19 = sub_6E15B0((_DWORD)a1, *(_QWORD *)((char *)v17 + v18), (_DWORD)v17, v14, v15, v16);
  v70 = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  v94 = nullptr;
  exception_class = v67->exception_class;
  sub_3EE030((__int64)&exception_class, (__int64)v67);
  v20 = v94;
  v78 = exception_class;
  v21 = v67->exception_cleanup;
  if ( v21 )
  {
    v22 = *((_DWORD *)v21 - 1) - 1;
    if ( v94 )
    {
      v23 = *((_DWORD *)v94 - 1);
      v71 = v23;
      if ( v22 < v23 )
      {
        v50 = (unsigned __int64)&v94[v23];
        v51 = &v94[v22];
        if ( (unsigned __int64)v51 >= v50 )
          goto LABEL_18;
        do
        {
          while ( 1 )
          {
            v52 = *v51;
            if ( *v51 )
            {
              if ( (*(_DWORD *)(v52 + 8))-- == 1 )
                break;
            }
            if ( (unsigned __int64)++v51 >= v50 )
              goto LABEL_49;
          }
          v73 = v50;
          sub_15D7BC0(v78, v52);
          v50 = v73;
          ++v51;
        }
        while ( (unsigned __int64)v51 < v73 );
LABEL_49:
        v71 = *((_DWORD *)v20 - 1);
        if ( v71 >= v22 )
          goto LABEL_18;
      }
      else if ( v23 >= v22 )
      {
LABEL_18:
        *((_DWORD *)v20 - 1) = v22;
        goto LABEL_25;
      }
      goto LABEL_22;
    }
    if ( *((_DWORD *)v21 - 1) == 1 )
      goto LABEL_25;
  }
  else
  {
    if ( v94 )
    {
      v22 = -1;
      v71 = *((_DWORD *)v94 - 1);
      if ( v71 == -1 )
        goto LABEL_18;
      goto LABEL_22;
    }
    v22 = -1;
  }
  v61 = (_QWORD *)sub_186B270(0x18u);
  *v61 = 2;
  v20 = v61 + 1;
  v71 = 0;
LABEL_22:
  while ( 1 )
  {
    v28 = *((_DWORD *)v20 - 2);
    if ( v28 >= v22 )
      break;
    v24 = (3 * v28 + 1) >> 1;
    v25 = 8 * v24 + 8;
    v26 = v24;
    if ( 8 * v28 + 8 >= (unsigned int)v25 || v28 >= v24 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v96, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v96);
      sub_233E40((__int64)v96);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v27 = (unsigned int *)sub_186B300(v20 - 1, v25);
    *v27 = v26;
    v20 = v27 + 2;
  }
  *((_DWORD *)v20 - 1) = v22;
  v29 = 8LL * v22;
  v30 = 8LL * v71;
  if ( v30 != v29 )
    memset(&v20[(unsigned __int64)v30 / 8], 0, v29 - v30);
LABEL_25:
  v94 = v20;
  v91 = 0;
  v92 = v69;
  sub_6E27D0((__int64)v95, (__int64)&exception_class, &v91);
  v72 = v91;
  v76 = v92;
  v31 = (_QWORD *)sub_186B270(0x30u);
  v32 = sub_15E1A70(a1->m128i_i64[0]);
  v33 = a1->m128i_i64[0];
  v31[1] = v32;
  *v31 = &off_1C53418;
  v31[2] = v33;
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  v31[3] = v33;
  v31[4] = 0;
  v31[5] = 0;
  v80 = v31;
  sub_6DE5F0(a4, &v80);
  v34 = (_QWORD *)sub_186B270(0x30u);
  v35 = a1->m128i_i64[0];
  *v34 = &off_1C53418;
  v34[1] = v74;
  v34[2] = v35;
  if ( v74 )
    ++*(_DWORD *)(v74 + 8);
  v34[3] = v35;
  v34[4] = 0;
  v34[5] = 0;
  v81 = v34;
  sub_6DE5F0(a4, &v81);
  v36 = sub_186B270(0x30u);
  v37 = _mm_loadl_epi64(a1);
  v38 = *(_QWORD *)(a2[6] + 8 * v75);
  *(__m128i *)(v36 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v70, v37);
  if ( v70 )
    ++*(_DWORD *)(v70 + 8);
  *(_QWORD *)(v36 + 32) = 0;
  *(_QWORD *)v36 = &off_1C53448;
  *(_QWORD *)(v36 + 40) = 0;
  v86 = v72;
  *(_QWORD *)(v36 + 24) = v37.m128i_i64[0];
  if ( v72 )
    ++*(_DWORD *)(v72 + 8);
  sub_6DE970((unsigned int **)(v36 + 32), &v86);
  v39 = *(_DWORD **)(v36 + 40);
  if ( v39 )
  {
    v40 = *(v39 - 1);
    if ( v40 == *(v39 - 2) )
    {
      v58 = (3 * v40 + 1) >> 1;
      v59 = 4 * v58 + 8;
      if ( 4 * v40 + 8 >= (unsigned int)v59 || v40 >= v58 )
      {
        v66 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v96, "Overflow encountered when expanding vector");
        *v66 = (char *)off_1C63128;
        sub_2333C0(v66 + 1, v96);
        sub_233E40((__int64)v96);
        __cxa_throw(v66, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v79 = (3 * v40 + 1) >> 1;
      v60 = (unsigned int *)sub_186B300(v39 - 2, v59);
      v39 = v60 + 2;
      *(_QWORD *)(v36 + 40) = v60 + 2;
      *v60 = v79;
      LODWORD(v60) = v60[1];
      v43 = &v39[(unsigned int)v60];
      v42 = (_DWORD)v60 + 1;
    }
    else
    {
      v41 = v40;
      v42 = v40 + 1;
      v43 = &v39[v41];
    }
  }
  else
  {
    v62 = (_QWORD *)sub_186B270(0x10u);
    v39 = v62 + 1;
    *v62 = 2;
    v42 = 1;
    *(_QWORD *)(v36 + 40) = v39;
    v43 = v39;
  }
  *v43 = 0;
  *(v39 - 1) = v42;
  v96[0] = v38;
  if ( v38 )
    ++*(_DWORD *)(v38 + 8);
  sub_6DE970((unsigned int **)(v36 + 32), v96);
  v44 = *(_DWORD **)(v36 + 40);
  if ( v44 )
  {
    v45 = *(v44 - 1);
    if ( v45 == *(v44 - 2) )
    {
      v54 = (3 * v45 + 1) >> 1;
      v55 = 4 * v54 + 8;
      if ( 4 * v45 + 8 >= (unsigned int)v55 || v45 >= v54 )
      {
        v65 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v96, "Overflow encountered when expanding vector");
        *v65 = (char *)off_1C63128;
        sub_2333C0(v65 + 1, v96);
        sub_233E40((__int64)v96);
        __cxa_throw(v65, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v56 = (unsigned int *)sub_186B300(v44 - 2, v55);
      v57 = v56[1];
      v44 = v56 + 2;
      *v56 = v54;
      *(_QWORD *)(v36 + 40) = v56 + 2;
      LODWORD(v56) = v57;
      v48 = &v44[v57];
      v47 = (_DWORD)v56 + 1;
    }
    else
    {
      v46 = v45;
      v47 = v45 + 1;
      v48 = &v44[v46];
    }
  }
  else
  {
    v63 = (_QWORD *)sub_186B270(0x10u);
    v44 = v63 + 1;
    *v63 = 2;
    v47 = 1;
    *(_QWORD *)(v36 + 40) = v44;
    v48 = v44;
  }
  *v48 = 1;
  *(v44 - 1) = v47;
  v82 = v36;
  sub_6DE5F0(a4, &v82);
  v83 = sub_6EA710(a1->m128i_i64, a2, 1);
  sub_6DE5F0(a4, &v83);
  v84 = sub_6EA710(a1->m128i_i64, a2, 0);
  sub_6DE5F0(a4, &v84);
  v85 = sub_6EACB0(a1->m128i_i64, a2, v67, &v87, a2[4]);
  sub_6DE5F0(a4, &v85);
  sub_2B4F40((__int64 *)&exception_class);
  sub_6DE2A0(v72, v76);
  sub_6DE2A0(v70, v69);
  sub_6DE2A0(v74, v77);
  return sub_2B4F40(&v87);
}

