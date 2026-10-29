__int64 __fastcall sub_AB71C0(__int64 a1, __int64 a2)
{
  char **exception; // r12
  __int64 v3; // rdx
  unsigned int *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned int v11; // eax
  int *v12; // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  bool v18; // bl
  _DWORD *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // r13
  __int64 v26; // rdx
  int v27; // eax
  __int64 *v28; // rdx
  void *v29; // rdi
  void *v30; // rdi
  void *v31; // r15
  bool v33; // bl
  _DWORD *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // r15
  unsigned int v40; // eax
  unsigned int v41; // edx
  size_t v42; // rsi
  unsigned int *v43; // rax
  _DWORD *v44; // rcx
  __int64 v45; // r13
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // r13
  __int64 v49; // rax
  _QWORD *v51; // rax
  __int64 v53; // [rsp+10h] [rbp-120h]
  __int64 v54; // [rsp+20h] [rbp-110h]
  __int64 v55; // [rsp+28h] [rbp-108h]
  int v56; // [rsp+34h] [rbp-FCh]
  unsigned int v57; // [rsp+38h] [rbp-F8h]
  __int64 v58; // [rsp+40h] [rbp-F0h]
  __int64 v59; // [rsp+48h] [rbp-E8h]
  __int64 v60; // [rsp+50h] [rbp-E0h]
  __int64 v61; // [rsp+58h] [rbp-D8h]
  __int64 v62; // [rsp+78h] [rbp-B8h]
  unsigned int v63; // [rsp+84h] [rbp-ACh] BYREF
  int v64[2]; // [rsp+88h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+90h] [rbp-A0h] BYREF
  __int64 v66; // [rsp+98h] [rbp-98h]
  __int64 v67[2]; // [rsp+A0h] [rbp-90h] BYREF
  __m128i v68; // [rsp+B0h] [rbp-80h] BYREF
  _QWORD v69[2]; // [rsp+C0h] [rbp-70h] BYREF
  _QWORD v70[2]; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v71; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v72; // [rsp+E8h] [rbp-48h]
  __int64 v73; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v74; // [rsp+F8h] [rbp-38h]

  v60 = sub_15D1F10(a2);
  v5 = *(unsigned int **)(a2 + 32);
  v65 = *(_QWORD *)(a1 + 24);
  v10 = sub_AB3F30(a1, v5, v6, v7, v8, v9);
  v11 = sub_AB6F20(a1, v10);
  v66 = 0;
  sub_AB6A00(a1, v11, (__int64)&v65);
  v55 = v66;
  v12 = *(int **)(*(_QWORD *)(sub_15D1F10(v5) + 24) + 8LL);
  if ( *((_BYTE *)v12 + 8) )
    sub_DBF6E(0);
  v13 = *v12;
  v71 = 0;
  v72 = 0;
  v56 = v13;
  v14 = *(_QWORD *)(a1 + 24);
  v73 = 1;
  v53 = v14;
  v67[0] = v14;
  v54 = a1 + 104;
  v74 = 0;
  sub_182CBA0(qword_1C7F2C0, &v73);
  BYTE4(v73) &= ~1u;
  v18 = 0;
  LODWORD(v73) = 1;
  v19 = *(_DWORD **)(v60 + 24);
  if ( v19 && *v19 == 5 )
    v18 = v19[1] == 1;
  v20 = *(_QWORD *)(a1 + 112);
  if ( !v20 )
  {
    sub_16669E0(v54);
    v20 = *(_QWORD *)(a1 + 112);
  }
  v21 = sub_166A700(v20, (unsigned int)&v71, v18, v15, v16, v17);
  v61 = v21;
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  sub_25A130((char *)&v71);
  v69[0] = 1;
  v69[1] = 0;
  v70[0] = 1;
  v70[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v70);
  BYTE4(v70[0]) &= ~1u;
  LODWORD(v70[0]) = 1;
  if ( v56 )
  {
    v62 = 0;
    v25 = v55;
    v58 = v55 + 8LL * (unsigned int)(v56 - 1) + 8;
    do
    {
      while ( 1 )
      {
        v33 = 0;
        v59 = *(_QWORD *)(a1 + 24);
        v34 = *(_DWORD **)(v60 + 24);
        if ( v34 && *v34 == 5 )
          v33 = v34[1] == 1;
        v35 = *(_QWORD *)(a1 + 112);
        if ( !v35 )
        {
          sub_16669E0(v54);
          v35 = *(_QWORD *)(a1 + 112);
        }
        v36 = sub_166A700(v35, (unsigned int)v69, v33, v22, v23, v24);
        v37 = v36;
        if ( v36 )
          ++*(_DWORD *)(v36 + 8);
        v38 = sub_15E1BF0(*(_QWORD *)(a1 + 24));
        v39 = v38;
        if ( v38 )
          ++*(_DWORD *)(v38 + 8);
        if ( v62 )
        {
          v40 = *(_DWORD *)(v62 - 4);
          if ( v40 == *(_DWORD *)(v62 - 8) )
          {
            v41 = (3 * v40 + 1) >> 1;
            v42 = 8 * v41 + 8;
            if ( 8 * v40 + 8 >= (unsigned int)v42 || v40 >= v41 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_139F3A(&v71, "Overflow encountered when expanding vector", v3);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v71);
              sub_233E40((__int64)&v71);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v57 = (3 * v40 + 1) >> 1;
            v43 = (unsigned int *)sub_186B300((void *)(v62 - 8), v42);
            v44 = v43 + 2;
            v62 = (__int64)(v43 + 2);
            *v43 = v57;
            LODWORD(v43) = v43[1];
            v28 = (__int64 *)&v44[2 * (unsigned int)v43];
            v27 = (_DWORD)v43 + 1;
          }
          else
          {
            v26 = v40;
            v27 = v40 + 1;
            v28 = (__int64 *)(v62 + 8 * v26);
          }
        }
        else
        {
          v51 = (_QWORD *)sub_186B270(0x18u);
          *v51 = 2;
          v62 = (__int64)(v51 + 1);
          v28 = v51 + 1;
          v27 = 1;
        }
        v29 = qword_1C7F2C0;
        *v28 = v39;
        v71 = 2;
        v72 = 0;
        *(_DWORD *)(v62 - 4) = v27;
        v73 = 1;
        v74 = 0;
        sub_182CBA0(v29, &v73);
        v30 = qword_1C7F2C0;
        LODWORD(v73) = 1;
        BYTE4(v73) &= ~1u;
        if ( (v70[0] & 0x100000000LL) == 0 && LODWORD(v70[0]) == 1 )
        {
          sub_1831650(qword_1C7F2C0, v69, &v71);
          sub_182CBA0(v30, v70);
          BYTE4(v70[0]) &= ~1u;
          LODWORD(v70[0]) = 1;
        }
        else
        {
          sub_1848FF0(qword_1C7F2C0, v69, &v71);
        }
        v31 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v71);
        sub_182CBA0(v31, &v73);
        if ( v37 )
        {
          if ( (*(_DWORD *)(v37 + 8))-- == 1 )
            break;
        }
        v25 += 8;
        if ( v58 == v25 )
          goto LABEL_33;
      }
      v25 += 8;
      sub_15D7BC0(v59, v37);
    }
    while ( v58 != v25 );
LABEL_33:
    v45 = *(_QWORD *)(a1 + 24);
    v46 = *(_QWORD *)(a1 + 104);
    if ( v56 == 1 )
    {
      v47 = *(_QWORD *)v62;
      if ( !*(_WORD *)(*(_QWORD *)v62 + 4LL) )
      {
        v68 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v47, (__m128i)(unsigned __int64)v45);
        goto LABEL_36;
      }
    }
  }
  else
  {
    v45 = *(_QWORD *)(a1 + 24);
    v46 = *(_QWORD *)(a1 + 104);
    v62 = 0;
  }
  v47 = sub_15E1AF0(v46);
  v68.m128i_i64[1] = v45;
  v45 = *(_QWORD *)(a1 + 24);
  v68.m128i_i64[0] = v47;
  if ( v47 )
LABEL_36:
    ++*(_DWORD *)(v47 + 8);
  *(_QWORD *)v64 = 0;
  sub_14B7810((int)&v71, v45, (int)v64, v22, v23, v24, v70);
  sub_18572D0(v64);
  sub_14B9B80(&v71, &v68);
  v63 = sub_966380(a1, (_DWORD *)a2, v68.m128i_i64[0]);
  sub_9936C0(*(_QWORD *)(a1 + 16), v63 >> 1);
  v48 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v48 + 912) )
  {
    *(_QWORD *)v64 = 0;
    v49 = sub_186B270(0x10u);
    *(_DWORD *)(v49 + 8) = v63;
    *(_QWORD *)v64 = v49 + 8;
    *(_QWORD *)v49 = 0x100000002LL;
    sub_966E60(a1, (unsigned int **)v64);
    if ( *(_QWORD *)v64 )
      sub_186B220((void *)(*(_QWORD *)v64 - 8LL));
  }
  sub_B69FE0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), 1, (unsigned int)&v63, 0, 0, 1);
  if ( *(_QWORD *)(v48 + 912) )
    std::__ostream_insert<char,std::char_traits<char>>();
  sub_14B63F0(&v71);
  sub_AB3AA0(v68.m128i_i64[0], v68.m128i_i64[1]);
  sub_25A130((char *)v69);
  sub_AB3AA0(v61, v53);
  v67[1] = v62;
  sub_2334C0(v67);
  v66 = v55;
  return sub_2334C0(&v65);
}

