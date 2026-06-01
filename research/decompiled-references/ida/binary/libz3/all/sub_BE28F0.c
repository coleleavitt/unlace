__int64 __fastcall sub_BE28F0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  char **exception; // r12
  __int64 *v4; // r15
  __int64 *v5; // rsi
  char **v6; // r12
  __int64 *v7; // r15
  __int64 *v8; // rsi
  _DWORD *v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // edi
  unsigned int v16; // edx
  __int64 *v17; // rsi
  __int64 v18; // rdx
  __int64 *v19; // r8
  __int64 *i; // rax
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // r14
  _QWORD *v26; // rax
  int v27; // r8d
  int v28; // r9d
  int v29; // r11d
  _QWORD *v30; // rbx
  __m128i v31; // xmm2
  __int64 v32; // r13
  _DWORD *v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rdi
  __int64 v36; // rsi
  _DWORD *v37; // rax
  unsigned int v38; // eax
  unsigned int v39; // ecx
  size_t v40; // rsi
  _DWORD *v41; // rax
  unsigned int v42; // ecx
  size_t v43; // rsi
  _DWORD *v44; // rax
  __int64 v45; // rax
  _DWORD *v46; // r12
  _DWORD *v47; // rax
  __int64 v48; // r13
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rdi
  bool v55; // zf
  __int64 v56; // rax
  __int64 v57; // r13
  int v58; // esi
  __int64 v59; // rdi
  _DWORD *v60; // rcx
  __int64 *v61; // r15
  unsigned __int64 v62; // r12
  __int64 v63; // rsi
  _QWORD *v64; // rdi
  __int64 *v65; // rbx
  unsigned __int64 v66; // r15
  __int64 v67; // rsi
  __int64 v69; // rax
  int v70; // [rsp-8h] [rbp-E8h]
  int v71; // [rsp+0h] [rbp-E0h]
  int v72; // [rsp+8h] [rbp-D8h]
  __int64 v73; // [rsp+8h] [rbp-D8h]
  int v74; // [rsp+10h] [rbp-D0h]
  __int64 v75; // [rsp+10h] [rbp-D0h]
  void *v76; // [rsp+18h] [rbp-C8h]
  _DWORD *v77; // [rsp+20h] [rbp-C0h]
  __m128i v78; // [rsp+28h] [rbp-B8h] BYREF
  __int64 v79; // [rsp+38h] [rbp-A8h]
  __m128i v80; // [rsp+40h] [rbp-A0h] BYREF
  int v81[2]; // [rsp+50h] [rbp-90h]
  _DWORD *v82; // [rsp+58h] [rbp-88h]
  _QWORD v83[4]; // [rsp+68h] [rbp-78h] BYREF
  __int64 v84[2]; // [rsp+90h] [rbp-50h] BYREF

  v10 = (_DWORD *)*a3;
  v78.m128i_i64[0] = *a2;
  v77 = v10;
  v11 = sub_15D1F10(v78.m128i_i64[0]);
  v12 = *(__int64 **)(a1 + 120);
  v13 = v11;
  v14 = *(unsigned int *)(a1 + 128);
  v15 = *(_DWORD *)(v13 + 12);
  v16 = v14 - 1;
  v14 *= 16;
  v17 = (__int64 *)((char *)v12 + v14);
  v18 = 16LL * (v15 & v16);
  v19 = &v12[(unsigned __int64)v18 / 8];
  if ( v18 != v14 )
  {
    for ( i = &v12[(unsigned __int64)v18 / 8]; v17 != i; i += 2 )
    {
      v21 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v21 + 12) == v15 && v13 == v21 )
          goto LABEL_10;
      }
      else if ( !v21 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v12 == v19 )
  {
LABEL_8:
    sub_1872CE0("");
    sub_1873130(114, 342);
  }
  while ( 1 )
  {
    v69 = *v12;
    if ( (unsigned __int64)*v12 > 1 )
      break;
    if ( !v69 )
      goto LABEL_8;
LABEL_68:
    v12 += 2;
    if ( v19 == v12 )
      goto LABEL_8;
  }
  if ( *(_DWORD *)(v69 + 12) != v15 || v13 != v69 )
    goto LABEL_68;
  i = v12;
LABEL_10:
  v22 = i[1];
  v23 = *(_QWORD *)(v22 + 8);
  if ( v23 )
    LODWORD(v82) = *(_DWORD *)(v23 - 4);
  else
    LODWORD(v82) = 0;
  v76 = *(void **)(a1 + 24);
  v83[1] = v76;
  v83[3] = v76;
  if ( v78.m128i_i64[0] )
    ++*(_DWORD *)(v78.m128i_i64[0] + 8);
  v24 = (_QWORD *)sub_186B270(0x18u);
  v25 = v24 + 1;
  v24[1] = v78.m128i_i64[0];
  *v24 = 0x100000002LL;
  if ( v77 )
    ++v77[2];
  v26 = (_QWORD *)sub_186B270(0x18u);
  v29 = (int)v82;
  *v26 = 0x100000002LL;
  v30 = v26 + 1;
  v31 = _mm_loadl_epi64(&v78);
  v26[1] = v77;
  v80 = _mm_unpacklo_epi64(v31, (__m128i)(unsigned __int64)v77);
  if ( v29 )
  {
    v32 = 0;
    v79 = 8LL * (unsigned int)v82;
    *(_QWORD *)v81 = v84;
    do
    {
      v35 = *(_QWORD *)(a1 + 24);
      v36 = *(_QWORD *)(*(_QWORD *)(v22 + 8) + v32);
      *(__m128i *)v84 = _mm_load_si128(&v80);
      v37 = (_DWORD *)sub_15DC610(
                        v35,
                        v36,
                        2,
                        v81[0],
                        v27,
                        v28,
                        v71,
                        v72,
                        v74,
                        (int)v76,
                        (int)v77,
                        v78.m128i_i8[0],
                        v78.m128i_i32[2],
                        v79,
                        v80.m128i_i32[0],
                        (void *)v80.m128i_i64[1]);
      v82 = v37;
      if ( v37 )
        ++v37[2];
      v38 = *((_DWORD *)v25 - 1);
      if ( v38 == *((_DWORD *)v25 - 2) )
      {
        v39 = (3 * v38 + 1) >> 1;
        v40 = 8 * v39 + 8;
        if ( 8 * v38 + 8 >= (unsigned int)v40 || v38 >= v39 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(*(__int64 **)v81, "Overflow encountered when expanding vector");
          v4 = *(__int64 **)v81;
          v5 = *(__int64 **)v81;
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v5);
          sub_233E40((__int64)v4);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v78.m128i_i32[2] = (3 * v38 + 1) >> 1;
        v41 = (_DWORD *)sub_186B300(v25 - 1, v40);
        v25 = v41 + 2;
        *v41 = v78.m128i_i32[2];
        v38 = v41[1];
      }
      v33 = v82;
      v25[v38] = v82;
      *((_DWORD *)v25 - 1) = v38 + 1;
      if ( v33 )
        ++v33[2];
      v34 = *((_DWORD *)v30 - 1);
      if ( v34 == *((_DWORD *)v30 - 2) )
      {
        v42 = (3 * v34 + 1) >> 1;
        v43 = 8 * v42 + 8;
        if ( 8 * v34 + 8 >= (unsigned int)v43 || v34 >= v42 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(*(__int64 **)v81, "Overflow encountered when expanding vector");
          v7 = *(__int64 **)v81;
          v8 = *(__int64 **)v81;
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v8);
          sub_233E40((__int64)v7);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v78.m128i_i32[2] = (3 * v34 + 1) >> 1;
        v44 = (_DWORD *)sub_186B300(v30 - 1, v43);
        v30 = v44 + 2;
        *v44 = v78.m128i_i32[2];
        v34 = v44[1];
      }
      v32 += 8;
      v30[v34] = v82;
      *((_DWORD *)v30 - 1) = v34 + 1;
    }
    while ( v32 != v79 );
  }
  v75 = *(_QWORD *)(a1 + 24);
  v45 = sub_15DCAD0(v75, (int)v25, 0);
  v46 = (_DWORD *)v45;
  if ( v45 )
    ++*(_DWORD *)(v45 + 8);
  v73 = *(_QWORD *)(a1 + 24);
  v47 = (_DWORD *)sub_15DCAD0(v73, (int)v30, 0);
  v82 = v47;
  if ( v47 )
    ++v47[2];
  v80.m128i_i32[0] = sub_966380(a1, v78.m128i_i64[0], v77);
  v81[0] = sub_966380(a1, v46, v82);
  v48 = *(_QWORD *)(a1 + 16);
  v49 = *(_QWORD *)(v48 + 7488);
  v50 = *(_QWORD *)(v48 + 8840);
  v79 = (unsigned __int32)v80.m128i_i32[0] >> 1;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v49 + 48LL))(v49, *(_QWORD *)(v50 + 8 * v79));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v48 + 7488) + 64LL))(*(_QWORD *)(v48 + 7488));
  v51 = *(_QWORD *)(a1 + 16);
  v52 = *(_QWORD *)(v51 + 8840);
  v53 = *(_QWORD *)(v51 + 7488);
  v78.m128i_i64[1] = v51;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v53 + 48LL))(
    v53,
    *(_QWORD *)(v52 + 8LL * ((unsigned int)v81[0] >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v78.m128i_i64[1] + 7488) + 64LL))(*(_QWORD *)(v78.m128i_i64[1] + 7488));
  v54 = *(_QWORD *)(a1 + 24);
  v55 = *(_QWORD *)(v54 + 912) == 0;
  v78.m128i_i64[1] = v54;
  if ( !v55 )
  {
    sub_15E1A70(v54);
    sub_15E1A70(*(_QWORD *)(a1 + 24));
    v56 = sub_15E1B70(v78.m128i_i32[2]);
    v57 = v56;
    if ( v56 )
      ++*(_DWORD *)(v56 + 8);
    v84[0] = 0;
    sub_966750(a1, v56, -1, 0, 0, -1, (__int64 ***)v84, v70, v71, v73, v75, v76);
    if ( v84[0] )
      sub_186B220((void *)(v84[0] - 8));
    if ( v57 )
    {
      v55 = (*(_DWORD *)(v57 + 8))-- == 1;
      if ( v55 )
        sub_15D7BC0(v78.m128i_i64[1], v57);
    }
  }
  v58 = *(_DWORD *)(a1 + 8);
  v59 = *(_QWORD *)(a1 + 16);
  v83[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v80.m128i_u32[0]), _mm_cvtsi32_si128(v81[0] ^ 1u)).m128i_u64[0];
  sub_B69FE0(v59, v58, 2, (unsigned int *)v83, 0, 0, 1u);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
    std::__ostream_insert<char,std::char_traits<char>>();
  v60 = v82;
  if ( v82 )
  {
    v80.m128i_i32[0] = v82[2];
    v55 = v80.m128i_i32[0] == 1;
    v82[2] = v80.m128i_i32[0] - 1;
    if ( v55 )
      sub_15D7BC0(v73, v60);
  }
  if ( v46 )
  {
    v55 = v46[2]-- == 1;
    if ( v55 )
      sub_15D7BC0(v75, v46);
  }
  v61 = v30;
  v62 = (unsigned __int64)&v30[*((unsigned int *)v30 - 1)];
  if ( (unsigned __int64)v30 < v62 )
  {
    do
    {
      while ( 1 )
      {
        v63 = *v61;
        if ( *v61 )
        {
          v55 = (*(_DWORD *)(v63 + 8))-- == 1;
          if ( v55 )
            break;
        }
        if ( (unsigned __int64)++v61 >= v62 )
          goto LABEL_57;
      }
      sub_15D7BC0(v76, v63);
      ++v61;
    }
    while ( (unsigned __int64)v61 < v62 );
  }
LABEL_57:
  v64 = v30 - 1;
  v65 = v25;
  sub_186B220(v64);
  if ( v25 < &v25[*((unsigned int *)v25 - 1)] )
  {
    v66 = (unsigned __int64)&v25[*((unsigned int *)v25 - 1)];
    do
    {
      while ( 1 )
      {
        v67 = *v65;
        if ( *v65 )
        {
          v55 = (*(_DWORD *)(v67 + 8))-- == 1;
          if ( v55 )
            break;
        }
        if ( (unsigned __int64)++v65 >= v66 )
          return sub_186B220(v25 - 1);
      }
      ++v65;
      sub_15D7BC0(v76, v67);
    }
    while ( (unsigned __int64)v65 < v66 );
  }
  return sub_186B220(v25 - 1);
}

