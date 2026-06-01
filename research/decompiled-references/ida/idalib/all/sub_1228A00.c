void __fastcall sub_1228A00(
        __int64 a1,
        _DWORD *a2,
        void *a3,
        _QWORD *a4,
        _BYTE *a5,
        __int64 a6,
        unsigned __int8 a7,
        char a8,
        char a9)
{
  size_t v10; // rax
  __m128i *v11; // rax
  __int64 v12; // rcx
  size_t v13; // rax
  __m128i *v14; // rax
  std::_V2 *v15; // rdi
  void **v16; // r13
  void **v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // r15
  __int64 v20; // rbp
  void (__fastcall *v21)(__int128 *, __int64, void **, int *); // r12
  _BYTE *v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  _BYTE *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rbp
  unsigned __int64 v32; // r12
  __int64 v33; // rax
  __int8 v34; // dl
  size_t v35; // rbx
  const void *v36; // r14
  size_t v37; // r13
  signed __int64 v38; // rax
  size_t v39; // r10
  const void *v40; // r11
  int v41; // eax
  unsigned int v42; // r12d
  __m128i *v43; // rsi
  __int64 v44; // rax
  __m128i *v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  volatile signed __int32 *v58; // rbx
  __int64 v59; // rax
  int v60; // eax
  int v61; // eax
  __m128i *s1; // [rsp+0h] [rbp-3D8h]
  __m128i *v63; // [rsp+8h] [rbp-3D0h]
  __int64 v64; // [rsp+10h] [rbp-3C8h]
  __int64 v65; // [rsp+20h] [rbp-3B8h]
  void **v66; // [rsp+28h] [rbp-3B0h]
  __m128i v67; // [rsp+30h] [rbp-3A8h]
  __int8 v73; // [rsp+86h] [rbp-352h]
  __int64 v74; // [rsp+A0h] [rbp-338h]
  int v75; // [rsp+B0h] [rbp-328h] BYREF
  __int64 v76; // [rsp+B8h] [rbp-320h]
  __int128 v77; // [rsp+C0h] [rbp-318h] BYREF
  void *v78[2]; // [rsp+D0h] [rbp-308h] BYREF
  __int64 v79; // [rsp+E0h] [rbp-2F8h] BYREF
  void *v80[2]; // [rsp+F0h] [rbp-2E8h] BYREF
  char v81; // [rsp+100h] [rbp-2D8h] BYREF
  __m128i v82[2]; // [rsp+110h] [rbp-2C8h] BYREF
  __int16 v83; // [rsp+130h] [rbp-2A8h]
  __m128i v84; // [rsp+140h] [rbp-298h] BYREF
  __int16 v85; // [rsp+160h] [rbp-278h]
  __m128i v86; // [rsp+170h] [rbp-268h] BYREF
  __int64 v87; // [rsp+180h] [rbp-258h] BYREF
  __m128i v88; // [rsp+1A0h] [rbp-238h] BYREF
  _WORD v89[16]; // [rsp+1B0h] [rbp-228h] BYREF
  __m128i v90; // [rsp+1D0h] [rbp-208h] BYREF
  _WORD v91[16]; // [rsp+1E0h] [rbp-1F8h] BYREF
  __m128i v92[2]; // [rsp+200h] [rbp-1D8h] BYREF
  __int16 v93; // [rsp+220h] [rbp-1B8h]
  __m128i v94; // [rsp+230h] [rbp-1A8h] BYREF
  __m128i v95; // [rsp+240h] [rbp-198h] BYREF
  __int16 v96; // [rsp+250h] [rbp-188h]
  void *v97; // [rsp+260h] [rbp-178h] BYREF
  __int64 v98; // [rsp+268h] [rbp-170h]
  _BYTE v99[16]; // [rsp+270h] [rbp-168h] BYREF
  __int64 v100; // [rsp+280h] [rbp-158h]
  int v101; // [rsp+288h] [rbp-150h]
  const void *v102; // [rsp+2D0h] [rbp-108h]
  size_t v103; // [rsp+2D8h] [rbp-100h]
  _QWORD v104[2]; // [rsp+2F0h] [rbp-E8h] BYREF
  __m128i v105; // [rsp+300h] [rbp-D8h] BYREF
  char *v106; // [rsp+310h] [rbp-C8h]
  __int64 v107; // [rsp+318h] [rbp-C0h]
  char v108; // [rsp+320h] [rbp-B8h]
  __m128i *v109; // [rsp+328h] [rbp-B0h]
  __int64 v110; // [rsp+330h] [rbp-A8h]
  __m128i v111; // [rsp+338h] [rbp-A0h] BYREF
  char *v112; // [rsp+348h] [rbp-90h]
  __int64 v113; // [rsp+350h] [rbp-88h]
  char v114; // [rsp+358h] [rbp-80h]
  _QWORD v115[2]; // [rsp+360h] [rbp-78h] BYREF
  _BYTE v116[16]; // [rsp+370h] [rbp-68h] BYREF
  char *v117; // [rsp+380h] [rbp-58h]
  __int64 v118; // [rsp+388h] [rbp-50h]
  bool v119; // [rsp+390h] [rbp-48h]
  _BYTE v120[64]; // [rsp+398h] [rbp-40h] BYREF

  if ( a5 )
  {
    v97 = v99;
    sub_1213C40(&v97, a5, (__int64)&a5[a6]);
  }
  else
  {
    v99[0] = 0;
    v98 = 0;
    v97 = v99;
  }
  v10 = j__strlen("gcc/");
  v11 = (__m128i *)sub_99BDC0(&v97, 0, 0, "gcc/", v10);
  v104[0] = &v105;
  if ( (__m128i *)v11->m128i_i64[0] == &v11[1] )
  {
    v105 = _mm_loadu_si128(v11 + 1);
  }
  else
  {
    v104[0] = v11->m128i_i64[0];
    v105.m128i_i64[0] = v11[1].m128i_i64[0];
  }
  v12 = v11->m128i_i64[1];
  v11[1].m128i_i8[0] = 0;
  v104[1] = v12;
  v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
  v11->m128i_i64[1] = 0;
  v106 = "../..";
  v107 = 5;
  v108 = a8;
  if ( v97 != v99 )
    operator delete(v97);
  v97 = v99;
  if ( a5 )
  {
    sub_1213C40(&v97, a5, (__int64)&a5[a6]);
  }
  else
  {
    v98 = 0;
    v99[0] = 0;
  }
  v13 = j__strlen("gcc-cross/");
  v14 = (__m128i *)sub_99BDC0(&v97, 0, 0, "gcc-cross/", v13);
  v109 = &v111;
  if ( (__m128i *)v14->m128i_i64[0] == &v14[1] )
  {
    v111 = _mm_loadu_si128(v14 + 1);
  }
  else
  {
    v109 = (__m128i *)v14->m128i_i64[0];
    v111.m128i_i64[0] = v14[1].m128i_i64[0];
  }
  v110 = v14->m128i_i64[1];
  v14->m128i_i64[0] = (__int64)v14[1].m128i_i64;
  v14->m128i_i64[1] = 0;
  v14[1].m128i_i8[0] = 0;
  v15 = (std::_V2 *)v97;
  v112 = "../..";
  v113 = 5;
  v114 = a9;
  if ( v97 != v99 )
    operator delete(v97);
  if ( a5 )
  {
    v15 = (std::_V2 *)v115;
    v115[0] = v116;
    sub_1213C40(v115, a5, (__int64)&a5[a6]);
  }
  else
  {
    v116[0] = 0;
    v115[1] = 0;
    v115[0] = v116;
  }
  v16 = &v97;
  v118 = 2;
  v117 = "..";
  v119 = a2[10] == 4 || a2[10] == 13;
  v63 = (__m128i *)v104;
  do
  {
    v73 = v63[3].m128i_i8[0];
    if ( !v73 )
      goto LABEL_17;
    v75 = 0;
    v18 = v63->m128i_i64[0];
    v19 = v63->m128i_i64[1];
    v74 = v63->m128i_i64[0];
    v76 = std::_V2::system_category(v15);
    v20 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
    v21 = *(void (__fastcall **)(__int128 *, __int64, void **, int *))(*(_QWORD *)v20 + 64LL);
    v94.m128i_i64[0] = v18;
    v96 = 261;
    v94.m128i_i64[1] = v19;
    v22 = (_BYTE *)*a4;
    v23 = a4[1];
    v90.m128i_i64[0] = (__int64)v91;
    sub_1213B80(&v90, v22, (__int64)&v22[v23]);
    v24 = j__strlen("/");
    if ( v24 > 0x7FFFFFFFFFFFFFFFLL - v90.m128i_i64[1] )
      std::__throw_length_error("basic_string::append");
    sub_9EE560(&v90, "/", v24);
    v92[0].m128i_i64[0] = (__int64)&v90;
    v93 = 260;
    sub_A41580((__m128i *)v16, v92, &v94, v25, v26, v27);
    v21(&v77, v20, v16, &v75);
    if ( (_WORD *)v90.m128i_i64[0] != v91 )
      operator delete((void *)v90.m128i_i64[0]);
    while ( !v75 && (_QWORD)v77 )
    {
      v67.m128i_i64[0] = sub_228AA60(*(_QWORD *)(v77 + 8), *(_QWORD *)(v77 + 16), 0);
      v67.m128i_i64[1] = v28;
      sub_1220870((__m128i *)v16, v67.m128i_i64[0], v28);
      if ( (_DWORD)v100 != -1 )
      {
        v29 = *(_BYTE **)(v77 + 8);
        v30 = *(_QWORD *)(v77 + 16);
        v94.m128i_i64[0] = (__int64)&v95;
        sub_1213C40(&v94, v29, (__int64)&v29[v30]);
        v31 = *(_QWORD *)(a1 + 688);
        v64 = a1 + 680;
        if ( v31 )
        {
          v32 = v94.m128i_u64[1];
          v65 = a1;
          v66 = v16;
          s1 = (__m128i *)v94.m128i_i64[0];
          while ( 1 )
          {
            v35 = *(_QWORD *)(v31 + 40);
            v36 = *(const void **)(v31 + 32);
            v37 = v35;
            if ( v32 <= v35 )
              v37 = v32;
            if ( !v37 || (LODWORD(v38) = memcmp(s1, *(const void **)(v31 + 32), v37), !(_DWORD)v38) )
            {
              v38 = v32 - v35;
              if ( (__int64)(v32 - v35) > 0x7FFFFFFF )
                goto LABEL_41;
              if ( v38 < (__int64)0xFFFFFFFF80000000LL )
                goto LABEL_32;
            }
            if ( (int)v38 < 0 )
            {
LABEL_32:
              v33 = *(_QWORD *)(v31 + 16);
              v34 = v73;
              if ( !v33 )
                goto LABEL_42;
              goto LABEL_33;
            }
LABEL_41:
            v33 = *(_QWORD *)(v31 + 24);
            v34 = 0;
            if ( !v33 )
            {
LABEL_42:
              v39 = v37;
              v40 = v36;
              v16 = v66;
              a1 = v65;
              if ( !v34 )
                goto LABEL_43;
              if ( *(_QWORD *)(v65 + 696) == v31 )
                goto LABEL_50;
LABEL_79:
              v59 = std::_Rb_tree_decrement(v31);
              v39 = v32;
              v35 = *(_QWORD *)(v59 + 40);
              v40 = *(const void **)(v59 + 32);
              if ( v35 <= v32 )
                v39 = *(_QWORD *)(v59 + 40);
LABEL_43:
              if ( v39 && (v41 = memcmp(v40, s1, v39)) != 0 )
              {
LABEL_48:
                if ( v41 < 0 )
                  goto LABEL_49;
              }
              else if ( (__int64)(v35 - v32) <= 0x7FFFFFFF )
              {
                if ( (__int64)(v35 - v32) >= (__int64)0xFFFFFFFF80000000LL )
                {
                  v41 = v35 - v32;
                  goto LABEL_48;
                }
LABEL_49:
                if ( v31 )
                {
LABEL_50:
                  v42 = 1;
                  if ( v64 != v31 )
                    v42 = (unsigned int)sub_9C4B50((__int64)&v94, v31 + 32) >> 31;
                  goto LABEL_52;
                }
              }
              if ( s1 != &v95 )
                operator delete(s1);
LABEL_77:
              sub_1213F50((__int64)v16);
              goto LABEL_68;
            }
LABEL_33:
            v31 = v33;
          }
        }
        v31 = a1 + 680;
        if ( a1 + 680 != *(_QWORD *)(a1 + 696) )
        {
          v32 = v94.m128i_u64[1];
          s1 = (__m128i *)v94.m128i_i64[0];
          goto LABEL_79;
        }
        v31 = a1 + 680;
        v42 = 1;
LABEL_52:
        v43 = (__m128i *)operator new(0x40u);
        v43[2].m128i_i64[0] = (__int64)v43[3].m128i_i64;
        if ( (__m128i *)v94.m128i_i64[0] == &v95 )
        {
          v43[3] = _mm_load_si128(&v95);
        }
        else
        {
          v43[2].m128i_i64[0] = v94.m128i_i64[0];
          v43[3].m128i_i64[0] = v95.m128i_i64[0];
        }
        v44 = v94.m128i_i64[1];
        v94.m128i_i64[0] = (__int64)&v95;
        v94.m128i_i64[1] = 0;
        v43[2].m128i_i64[1] = v44;
        v95.m128i_i8[0] = 0;
        std::_Rb_tree_insert_and_rebalance(v42, v43, v31, v64);
        v45 = (__m128i *)v94.m128i_i64[0];
        ++*(_QWORD *)(a1 + 712);
        if ( v45 != &v95 )
          operator delete(v45);
      }
      if ( (unsigned __int8)sub_1213FB0((__int64)v16, 4, 1, 1, nullptr, 0)
        || !(unsigned __int8)sub_1213FB0(a1 + 528, v100, SHIDWORD(v100), v101, v102, v103)
        || !(unsigned __int8)sub_1224500(a1, a2, a3, *(char **)(v77 + 8), *(char **)(v77 + 16), a7) )
      {
        goto LABEL_77;
      }
      sub_9EE8A0(a1 + 528, (__int64)v16);
      *(_QWORD *)(a1 + 560) = v100;
      *(_DWORD *)(a1 + 568) = v101;
      sub_9EE8A0(a1 + 576, (__int64)(v16 + 6));
      sub_9EE8A0(a1 + 608, (__int64)(v16 + 10));
      sub_9EE8A0(a1 + 640, (__int64)(v16 + 14));
      v96 = 261;
      v94.m128i_i64[0] = (__int64)a5;
      v94.m128i_i64[1] = a6;
      sub_22BA1F0(a1 + 8, &v94);
      v93 = 261;
      v92[0] = v67;
      v89[8] = 259;
      v88.m128i_i64[0] = (__int64)"/";
      v85 = 261;
      v84.m128i_i64[0] = v74;
      v84.m128i_i64[1] = v19;
      sub_F7DA00((size_t *)v78, (__int64)a4, "/");
      v82[0].m128i_i64[0] = (__int64)v78;
      v83 = 260;
      sub_A41580(&v86, v82, &v84, v46, v47, 260);
      sub_A41580(&v90, &v86, &v88, v48, v49, v50);
      sub_A41580(&v94, &v90, v92, v51, v52, v53);
      sub_2253560(v80, &v94);
      sub_A0AAD0(a1 + 72, v80);
      if ( v80[0] != &v81 )
        operator delete(v80[0]);
      if ( v78[0] != &v79 )
        operator delete(v78[0]);
      v93 = 261;
      v92[0] = v63[2];
      sub_F7DA00((size_t *)&v86, a1 + 72, "/../");
      v91[8] = 260;
      v90.m128i_i64[0] = (__int64)&v86;
      sub_A41580(&v94, &v90, v92, v54, v55, v56);
      sub_2253560(&v88, &v94);
      sub_A0AAD0(a1 + 104, &v88);
      if ( (_WORD *)v88.m128i_i64[0] != v89 )
        operator delete((void *)v88.m128i_i64[0]);
      if ( (__int64 *)v86.m128i_i64[0] != &v87 )
        operator delete((void *)v86.m128i_i64[0]);
      *(_BYTE *)a1 = 1;
      sub_1213F50((__int64)v16);
LABEL_68:
      v75 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v77 + 16LL))(v77);
      v76 = v57;
      if ( !*(_QWORD *)(v77 + 16) )
      {
        v58 = *((volatile signed __int32 **)&v77 + 1);
        v77 = 0;
        if ( v58 )
        {
          if ( &_pthread_key_create )
          {
            if ( !_InterlockedSub(v58 + 2, 1u) )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
              if ( !&_pthread_key_create )
                goto LABEL_88;
LABEL_73:
              if ( !_InterlockedSub(v58 + 3, 1u) )
                goto LABEL_74;
            }
          }
          else
          {
            v60 = *((_DWORD *)v58 + 2);
            *((_DWORD *)v58 + 2) = v60 - 1;
            if ( v60 == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
              if ( &_pthread_key_create )
                goto LABEL_73;
LABEL_88:
              v61 = *((_DWORD *)v58 + 3);
              *((_DWORD *)v58 + 3) = v61 - 1;
              if ( v61 == 1 )
LABEL_74:
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 24LL))(v58);
            }
          }
        }
      }
    }
    v15 = *((std::_V2 **)&v77 + 1);
    if ( *((_QWORD *)&v77 + 1) )
      sub_4343A0(*((volatile signed __int32 **)&v77 + 1));
LABEL_17:
    v63 = (__m128i *)((char *)v63 + 56);
  }
  while ( v120 != (_BYTE *)v63 );
  v17 = (void **)v120;
  do
  {
    while ( 1 )
    {
      v17 -= 7;
      if ( *v17 == v17 + 2 )
        break;
      operator delete(*v17);
      if ( v17 == v104 )
        return;
    }
  }
  while ( v17 != v104 );
}
