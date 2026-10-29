__m128i *__fastcall sub_DC86B0(__m128i *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // rax
  bool v10; // zf
  void *v11; // r13
  __int64 v12; // rbx
  int v13; // eax
  void *v14; // r13
  __int64 v15; // rax
  void (***v16)(void); // rdi
  __int64 **v17; // rbx
  __int64 v18; // rcx
  __int64 *v19; // rbx
  __int64 *v20; // r13
  __int64 v21; // r14
  __int64 v22; // r15
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rbp
  unsigned __int64 v28; // rbx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  void (***v33)(void); // rdi
  __int64 v34; // rbx
  unsigned __int64 v35; // r12
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r14
  void *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // r14
  void *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // r14
  __int64 v45; // r13
  __int64 v46; // rax
  __int64 v47; // r13
  __int64 v48; // rbx
  __int64 v49; // r13
  __m128 v50; // xmm0
  __int64 v51; // r13
  __int64 v52; // rbx
  __m128 v53; // xmm0
  char **exception; // rbp
  char *ptr; // [rsp+0h] [rbp-218h]
  __m128i *v56; // [rsp+8h] [rbp-210h]
  int v57[2]; // [rsp+10h] [rbp-208h]
  int v58; // [rsp+18h] [rbp-200h]
  __int64 v59; // [rsp+20h] [rbp-1F8h] BYREF
  char v60[8]; // [rsp+28h] [rbp-1F0h] BYREF
  int v61[4]; // [rsp+30h] [rbp-1E8h] BYREF
  __m128 v62; // [rsp+40h] [rbp-1D8h] BYREF
  char v63[8]; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v64[54]; // [rsp+68h] [rbp-1B0h] BYREF

  v56 = a1;
  *(_QWORD *)v57 = a3;
  v7 = sub_15D1F10(a3);
  if ( v7 != sub_15D1F10(a4) )
  {
    std::ostringstream::basic_ostringstream(v63);
    std::__ostream_insert<char,std::char_traits<char>>();
    v49 = *a2;
    sub_DFBCB0(*a2);
    v50 = _mm_loadh_ps((const double *)(v49 + 296));
    ++*(_DWORD *)(a4 + 8);
    *(__m128 *)v61 = v50;
    v51 = sub_160EBE0(v63, v61);
    std::__ostream_insert<char,std::char_traits<char>>();
    v52 = *a2;
    sub_DFBCB0(*a2);
    v53 = _mm_loadh_ps((const double *)(v52 + 296));
    ++*(_DWORD *)(*(_QWORD *)v57 + 8LL);
    v62 = v53;
    sub_160EBE0(v51, &v62);
    std::operator<<<std::char_traits<char>>();
    sub_DBF390(v62.m128_i64[0], v62.m128_i64[1]);
    sub_DBF390(*(__int64 *)v61, *(__int64 *)&v61[2]);
    exception = (char **)__cxa_allocate_exception(0x30u);
    std::stringbuf::str(&v62, v64);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v62);
    exception[5] = (char *)-1LL;
    *exception = (char *)off_1C64218;
    sub_233E40((__int64)&v62);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v8 = *a2;
  sub_DFBCB0(*a2);
  v9 = *(_QWORD *)(v8 + 296);
  v10 = *(_WORD *)(a4 + 4) == 1;
  *(_QWORD *)v63 = 0;
  v64[0] = v9;
  if ( v10 )
  {
    v33 = (void (***)(void))a2[214];
    if ( !v33 )
    {
      v46 = sub_186B270(0xA0u);
      v47 = *a2;
      v48 = v46;
      sub_DFBCB0(*a2);
      sub_1584DD0(v48, *(_QWORD *)(v47 + 296), 0);
      v33 = (void (***)(void))a2[214];
      *(_QWORD *)(v48 + 144) = 0;
      *(_DWORD *)(v48 + 152) = 0;
      *(_QWORD *)v48 = &off_1C61DB8;
      if ( (void (***)(void))v48 != v33 )
      {
        if ( v33 )
        {
          (**v33)();
          sub_186B220(v33);
        }
        a2[214] = v48;
        v33 = (void (***)(void))v48;
      }
    }
    sub_1585D20(v33, *(_QWORD *)v57, 0, 1, 0, v63);
    v59 = *(_QWORD *)v63;
    if ( *(_QWORD *)v63 )
      ++*(_DWORD *)(*(_QWORD *)v63 + 8LL);
    sub_DBF5A0((_QWORD *)(a5 + 8), &v59);
    v34 = *a2;
    sub_DFBCB0(*a2);
    v35 = *(_QWORD *)(v34 + 296);
    v36 = *a2;
    sub_DFBCB0(*a2);
    v31 = *(_QWORD *)(*(_QWORD *)(v36 + 296) + 856LL);
    *v56 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)v35);
    if ( v31 )
      goto LABEL_15;
  }
  else
  {
    v11 = (void *)a2[211];
    v12 = *(_QWORD *)(a4 + 16);
    if ( !v11 )
    {
      v37 = sub_186B270(0x18u);
      v38 = *a2;
      v11 = (void *)v37;
      sub_DFBCB0(*a2);
      sub_15F01E0(v11, *(_QWORD *)(v38 + 296));
      v39 = (void *)a2[211];
      if ( v11 != v39 )
      {
        if ( v39 )
          sub_186B220(v39);
        a2[211] = v11;
      }
    }
    v13 = sub_15F0A30(v11, v12);
    v14 = (void *)a2[211];
    v58 = v13;
    if ( !v14 )
    {
      v40 = sub_186B270(0x18u);
      v41 = *a2;
      v14 = (void *)v40;
      sub_DFBCB0(*a2);
      sub_15F01E0(v14, *(_QWORD *)(v41 + 296));
      v42 = (void *)a2[211];
      if ( v14 != v42 )
      {
        if ( v42 )
          sub_186B220(v42);
        a2[211] = v14;
      }
    }
    v15 = sub_15FB1F0(v14, v12);
    v16 = (void (***)(void))a2[214];
    v17 = (__int64 **)v15;
    if ( !v16 )
    {
      v43 = sub_186B270(0xA0u);
      v44 = *a2;
      v45 = v43;
      sub_DFBCB0(*a2);
      sub_1584DD0(v45, *(_QWORD *)(v44 + 296), 0);
      v16 = (void (***)(void))a2[214];
      *(_QWORD *)(v45 + 144) = 0;
      *(_DWORD *)(v45 + 152) = 0;
      *(_QWORD *)v45 = &off_1C61DB8;
      if ( (void (***)(void))v45 != v16 )
      {
        sub_DC7BF0(v16);
        a2[214] = v45;
        v16 = (void (***)(void))v45;
      }
    }
    if ( *v17 )
      v18 = *((unsigned int *)*v17 - 1);
    else
      v18 = 0;
    sub_1585D20(v16, *(_QWORD *)v57, 0, v18, 0, v63);
    v19 = *v17;
    if ( v19 )
    {
      v20 = &v19[*((unsigned int *)v19 - 1)];
      if ( v20 != v19 )
      {
        ptr = v60;
        do
        {
          v21 = *a2;
          v22 = *v19;
          sub_DFBCB0(*a2);
          v25 = sub_15DC610(
                  *(_QWORD *)(v21 + 296),
                  v22,
                  1,
                  (int)ptr,
                  v23,
                  v24,
                  (int)ptr,
                  (int)v56,
                  v57[0],
                  v58,
                  v59,
                  v63[0],
                  v61[0],
                  v61[2],
                  v62.m128_i32[0],
                  (void *)v62.m128_u64[1]);
          *(_QWORD *)v61 = v25;
          if ( v25 )
            ++*(_DWORD *)(v25 + 8);
          sub_DBF5A0((_QWORD *)(a5 + 8), v61);
          ++v19;
        }
        while ( v20 != v19 );
      }
    }
    v26 = *a2;
    sub_DFBCB0(*a2);
    v27 = *a2;
    v28 = *(_QWORD *)(v26 + 296);
    sub_DFBCB0(*a2);
    v31 = sub_15DC610(
            *(_QWORD *)(v27 + 296),
            v58,
            1,
            (int)&v62,
            v29,
            v30,
            (int)ptr,
            (int)v56,
            v57[0],
            v58,
            v59,
            v60[0],
            v61[0],
            v61[2],
            v57[0],
            (void *)v62.m128_u64[1]);
    *v56 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)v28);
    if ( v31 )
LABEL_15:
      ++*(_DWORD *)(v31 + 8);
  }
  sub_DBF390(*(__int64 *)v63, v64[0]);
  return v56;
}

