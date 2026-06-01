void __fastcall sub_E022C0(__int64 a1, __int64 *****a2)
{
  char **exception; // rbp
  __int64 ****v5; // rsi
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rsi
  __int64 ****v9; // rdi
  __int64 v10; // r15
  __int64 v11; // r12
  _DWORD *v12; // rbp
  const char *v13; // rbx
  __int64 v14; // rax
  __int64 ****v15; // rcx
  __int64 ***v16; // rax
  unsigned int v17; // ebx
  __int64 **v18; // r12
  __int64 v19; // rax
  __int64 ****v20; // rdx
  int v21; // r8d
  __int64 ****v22; // rcx
  __int64 v23; // r8
  __int64 ****i; // rax
  __int64 ***v25; // rbp
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r9
  unsigned int j; // ebp
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 ****v32; // r10
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 ****v35; // rcx
  int v36; // edx
  __int64 ****v37; // r11
  __int64 v38; // rdx
  __int64 ****k; // rax
  __int64 ***v40; // rdx
  __int64 v41; // rax
  __int64 ***v42; // rcx
  int v43; // edx
  __int64 v44; // rdx
  __int64 ***v45; // r10
  __int64 ****m; // rax
  __int64 ***v47; // rdx
  unsigned __int64 v48; // r10
  __int64 v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // r9
  int v52; // ecx
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rax
  int v58; // ecx
  __int64 v59; // r12
  int v60; // edx
  int v61; // ecx
  int v62; // r8d
  int v63; // r9d
  __int64 ***v64; // rax
  int v65; // eax
  __int64 **v66; // rax
  __int64 v67; // rax
  __int64 v68; // rbp
  __int64 v69; // rdi
  _QWORD *v70; // rax
  __m128i *v71; // rbx
  unsigned int v72; // edx
  unsigned int v73; // ecx
  unsigned int *v74; // rax
  unsigned int v75; // eax
  __m128i *v76; // rax
  __m128i v77; // xmm0
  unsigned __int64 v78; // rsi
  __m128i *v79; // rcx
  __int64 (__fastcall *v80)(_DWORD *, __int64, _QWORD, __m128i *); // rax
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rbp
  __int64 v84; // r12
  __int64 v85; // r15
  int v86; // edx
  int v87; // ecx
  int v88; // r8d
  int v89; // r9d
  __int64 v90; // r15
  __int64 ***v91; // rax
  __int64 v92; // [rsp+0h] [rbp-108h]
  __int64 v93; // [rsp+0h] [rbp-108h]
  unsigned int v94; // [rsp+0h] [rbp-108h]
  __int64 v95; // [rsp+0h] [rbp-108h]
  unsigned int v96; // [rsp+8h] [rbp-100h]
  unsigned int v97; // [rsp+8h] [rbp-100h]
  __int64 (__fastcall *v98)(_DWORD *, _QWORD, _QWORD, __m128i *); // [rsp+8h] [rbp-100h]
  __m128i v99; // [rsp+10h] [rbp-F8h] BYREF
  void *v100; // [rsp+20h] [rbp-E8h]
  __int64 v101; // [rsp+28h] [rbp-E0h]
  char *v102; // [rsp+30h] [rbp-D8h]
  _BYTE *v103; // [rsp+38h] [rbp-D0h]
  __int64 v104; // [rsp+40h] [rbp-C8h] BYREF
  char v105[8]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v106[16]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 ***v107[4]; // [rsp+60h] [rbp-A8h] BYREF
  int *v108; // [rsp+80h] [rbp-88h] BYREF
  __int64 v109; // [rsp+88h] [rbp-80h]
  __int128 v110; // [rsp+90h] [rbp-78h]
  __int128 v111; // [rsp+A0h] [rbp-68h]
  __int64 v112; // [rsp+B0h] [rbp-58h]
  __int16 v113; // [rsp+B8h] [rbp-50h]
  __int64 v114; // [rsp+C0h] [rbp-48h]

  if ( *a2 )
  {
    v99.m128i_i64[1] = (__int64)&v108;
    sub_17FBD10(&v108, "model.completion");
    if ( v109 == 4 && *v108 == 1702195828 )
    {
      sub_233E40((__int64)&v108);
      v104 = 0;
      v100 = &v104;
      sub_1862370(&v104, "max_degree", 0xFFFFFFFFLL);
      sub_1862370(&v104, "sort_store", 1);
      sub_1862300(&v104, "completion", 1);
      v5 = *a2;
      v102 = v105;
      sub_1360C00(v105, v5, &v104);
      sub_13608C0(v105, 0);
      sub_DFBCB0(a1);
      v101 = *(_QWORD *)(a1 + 296);
      sub_1829790(v101, 0);
      sub_DFBCB0(a1);
      v6 = *(_QWORD *)(a1 + 296);
      v7.m128i_i64[0] = 0;
      v113 = 0;
      LODWORD(v109) = 0;
      v108 = &off_1C4C9C8;
      v112 = 0;
      v114 = v6;
      v110 = 0;
      v111 = 0;
      sub_DFBCB0(a1);
      v8 = v99.m128i_i64[1];
      v9 = (__int64 ****)v106;
      v103 = v106;
      sub_18086F0(v106, v99.m128i_i64[1], 1);
      v10 = *(_QWORD *)(a1 + 672);
      v11 = v10 + 24LL * *(unsigned int *)(a1 + 680);
      if ( v11 != v10 )
      {
        while ( *(_DWORD *)(v10 + 4) != 2 )
        {
          v10 += 24;
          if ( v11 == v10 )
            goto LABEL_16;
        }
        if ( v10 != v11 )
        {
          while ( 1 )
          {
            v12 = *(_DWORD **)(v10 + 16);
            v13 = *(const char **)(v10 + 8);
            if ( v12[8] != 1 )
              goto LABEL_11;
            if ( (unsigned int)sub_180B130(v9) > 0xB )
            {
              if ( (unsigned __int8)sub_186A530(*(double *)v7.m128i_i64) )
              {
                sub_186A4C0(*(double *)v7.m128i_i64);
                v93 = sub_180B150(v9, v8);
                std::__ostream_insert<char,std::char_traits<char>>();
                v69 = sub_39A600(v93, v13);
                std::operator<<<std::char_traits<char>>();
                sub_186A500(v69, ")\n");
              }
              else
              {
                v95 = sub_180B150(v9, v8);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_39A600(v95, v13);
                std::operator<<<std::char_traits<char>>();
              }
            }
            sub_DFBCB0(a1);
            v94 = v12[3];
            if ( !v94 )
            {
              v71 = nullptr;
              v80 = *(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD, __m128i *))(*(_QWORD *)v12 + 64LL);
              goto LABEL_135;
            }
            v99.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(a1 + 296) + 840LL);
            v70 = (_QWORD *)sub_186B270(0x18u);
            v71 = (__m128i *)(v70 + 1);
            *v70 = 2;
            while ( 1 )
            {
              v75 = v71[-1].m128i_u32[2];
              if ( v75 >= v94 )
                break;
              v72 = (3 * v75 + 1) >> 1;
              v73 = 8 * v72 + 8;
              if ( 8 * v75 + 8 >= v73 || v75 >= v72 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_DF63A0((__int64 *)v107, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v107);
                sub_233E40((__int64)v107);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v97 = (3 * v75 + 1) >> 1;
              v74 = (unsigned int *)sub_186B300(&v71[-1].m128i_u64[1], v73);
              v71 = (__m128i *)(v74 + 2);
              *v74 = v97;
            }
            v71[-1].m128i_i32[3] = v94;
            v76 = v71;
            if ( v94 != 1 )
            {
              v77 = _mm_loadl_epi64(&v99);
              v78 = (unsigned __int64)v94 >> 1;
              v7 = _mm_unpacklo_epi64(v77, v77);
              v79 = &v71[v78];
              if ( ((v78 * 16) & 0x10) == 0 || (v76 = v71 + 1, *v71 = v7, v79 != &v71[1]) )
              {
                do
                {
                  *v76 = v7;
                  v76 += 2;
                  v76[-1] = v7;
                }
                while ( v79 != v76 );
              }
              if ( (v94 & 1) == 0 )
                goto LABEL_134;
              v76 = (__m128i *)((char *)v71 + 8 * (v94 & 0xFFFFFFFE));
            }
            v76->m128i_i64[0] = v99.m128i_i64[0];
LABEL_134:
            v80 = *(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD, __m128i *))(*(_QWORD *)v12 + 64LL);
LABEL_135:
            v81 = *(_QWORD *)(a1 + 312);
            if ( v81 )
            {
              v82 = v80(v12, v81, v94, v71);
            }
            else
            {
              v98 = v80;
              sub_DFBCB0(a1);
              v82 = v98(v12, *(_QWORD *)(a1 + 312), v94, v71);
            }
            v9 = *a2;
            v8 = v82;
            v83 = v82;
            if ( !(unsigned __int8)sub_13735C0(*a2, v82) )
            {
              sub_DFBCB0(a1);
              v91 = (__int64 ***)sub_15E1950(*(_QWORD *)(a1 + 296));
              v9 = *a2;
              v8 = v83;
              v107[0] = v91;
              sub_1376FA0(v9, v83, 1, v107);
            }
            if ( v71 )
            {
              v9 = (__int64 ****)&v71[-1].m128i_i64[1];
              sub_186B220(&v71[-1].m128i_u64[1]);
            }
LABEL_11:
            v14 = v10 + 24;
            if ( v11 != v10 + 24 )
            {
              while ( 1 )
              {
                v10 = v14;
                if ( *(_DWORD *)(v14 + 4) == 2 )
                  break;
                v14 += 24;
                if ( v11 == v14 )
                  goto LABEL_16;
              }
              if ( v11 != v14 )
                continue;
            }
            break;
          }
        }
      }
LABEL_16:
      v15 = *a2;
      v16 = (*a2)[11];
      if ( v16 )
      {
        v17 = 0;
        while ( 1 )
        {
          if ( v17 >= *((_DWORD *)v16 - 1) )
            goto LABEL_29;
          v18 = v16[v17];
          v19 = *((unsigned int *)v15 + 14);
          v20 = (__int64 ****)v15[6];
          v8 = *((unsigned int *)v18 + 3);
          v21 = v19 - 1;
          v19 *= 16;
          v22 = (__int64 ****)((char *)v20 + v19);
          v23 = 16LL * ((unsigned int)v8 & v21);
          v9 = &v20[(unsigned __int64)v23 / 8];
          if ( v23 != v19 )
          {
            for ( i = &v20[(unsigned __int64)v23 / 8]; v22 != i; i += 2 )
            {
              v25 = *i;
              if ( (unsigned __int64)*i > 1 )
              {
                if ( *((_DWORD *)v25 + 3) == (_DWORD)v8 && v18 == (__int64 **)v25 )
                  goto LABEL_108;
              }
              else if ( !v25 )
              {
                goto LABEL_26;
              }
            }
          }
          if ( v20 == v9 )
          {
LABEL_117:
            v25 = nullptr;
          }
          else
          {
            while ( 1 )
            {
              while ( 1 )
              {
                v25 = *v20;
                if ( (unsigned __int64)*v20 > 1 )
                  break;
                if ( !v25 )
                  goto LABEL_26;
                v20 += 2;
                if ( v9 == v20 )
                  goto LABEL_117;
              }
              if ( *((_DWORD *)v25 + 3) == (_DWORD)v8 && v18 == (__int64 **)v25 )
                break;
              v20 += 2;
              if ( v9 == v20 )
                goto LABEL_117;
            }
            i = v20;
LABEL_108:
            v25 = i[1];
          }
LABEL_26:
          if ( (unsigned int)sub_180B130(v9) <= 0xB )
            goto LABEL_27;
          if ( !(unsigned __int8)sub_186A530(*(double *)v7.m128i_i64) )
            break;
          sub_186A4C0(*(double *)v7.m128i_i64);
          v85 = sub_180B150(v9, v8);
          std::__ostream_insert<char,std::char_traits<char>>();
          v9 = (__int64 ****)sub_39A600(v85, (const char *)v18[2]);
          v8 = (__int64)")\n";
          std::operator<<<std::char_traits<char>>();
          sub_186A500(v9, ")\n");
          if ( !v25[3] )
          {
LABEL_144:
            sub_DFBCB0(a1);
            v8 = sub_15E1950(*(_QWORD *)(a1 + 296));
            v9 = (__int64 ****)v25;
            sub_1349280((_DWORD)v25, v8, v86, v87, v88, v89);
          }
LABEL_28:
          v15 = *a2;
          ++v17;
          v16 = (*a2)[11];
          if ( !v16 )
            goto LABEL_29;
        }
        v90 = sub_180B150(v9, v8);
        std::__ostream_insert<char,std::char_traits<char>>();
        v9 = (__int64 ****)sub_39A600(v90, (const char *)v18[2]);
        v8 = (__int64)")\n";
        std::operator<<<std::char_traits<char>>();
LABEL_27:
        if ( !v25[3] )
          goto LABEL_144;
        goto LABEL_28;
      }
LABEL_29:
      v26 = *(_QWORD *)(a1 + 624);
      v27 = v26 + 24LL * *(unsigned int *)(a1 + 632);
      v99.m128i_i64[0] = v27;
      if ( v26 != v27 )
      {
        while ( *(_DWORD *)(v26 + 4) != 2 )
        {
          v26 += 24;
          if ( v27 == v26 )
            goto LABEL_103;
        }
        if ( v99.m128i_i64[0] != v26 )
        {
LABEL_34:
          if ( (unsigned int)sub_180B130(v9) > 0xB )
          {
            if ( (unsigned __int8)sub_186A530(*(double *)v7.m128i_i64) )
            {
              sub_186A4C0(*(double *)v7.m128i_i64);
              v68 = sub_180B150(v9, v8);
              std::__ostream_insert<char,std::char_traits<char>>();
              v9 = (__int64 ****)sub_39A600(v68, *(const char **)(v26 + 8));
              v8 = (__int64)")\n";
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_186A500(v9, ")\n");
            }
            else
            {
              v84 = sub_180B150(v9, v8);
              std::__ostream_insert<char,std::char_traits<char>>();
              v9 = (__int64 ****)sub_39A600(v84, *(const char **)(v26 + 8));
              v8 = (__int64)")\n";
              std::__ostream_insert<char,std::char_traits<char>>();
            }
          }
          v28 = *(_QWORD *)(v26 + 16);
          for ( j = 0; ; ++j )
          {
            v30 = 1;
            if ( v28 )
            {
              if ( (v28 & 7) != 0 )
              {
                v30 = *(_DWORD *)((v28 & 0xFFFFFFFFFFFFFFF8LL) + 12);
                if ( !v30 )
                  v30 = 1;
              }
            }
            if ( j >= v30 )
            {
              v67 = v26 + 24;
              if ( v99.m128i_i64[0] == v26 + 24 )
                break;
              while ( 1 )
              {
                v26 = v67;
                if ( *(_DWORD *)(v67 + 4) == 2 )
                  break;
                v67 += 24;
                if ( v99.m128i_i64[0] == v67 )
                  goto LABEL_103;
              }
              if ( v67 == v99.m128i_i64[0] )
                break;
              goto LABEL_34;
            }
            v31 = sub_DF70C0((__int64 *)(v26 + 16), j);
            v32 = *a2;
            v33 = v31;
            v34 = *((unsigned int *)*a2 + 8);
            v8 = *(unsigned int *)(v33 + 12);
            v35 = (__int64 ****)(*a2)[3];
            v36 = v34 - 1;
            v34 *= 24;
            v37 = (__int64 ****)((char *)v35 + v34);
            v38 = 24LL * ((unsigned int)v8 & v36);
            v9 = &v35[(unsigned __int64)v38 / 8];
            if ( v38 != v34 )
            {
              for ( k = &v35[(unsigned __int64)v38 / 8]; v37 != k; k += 3 )
              {
                v40 = *k;
                if ( (unsigned __int64)*k > 1 )
                {
                  if ( *((_DWORD *)v40 + 3) == (_DWORD)v8 && (__int64 ***)v33 == v40 )
                    goto LABEL_70;
                }
                else if ( !v40 )
                {
                  goto LABEL_48;
                }
              }
            }
            for ( ; v9 != v35; v35 += 3 )
            {
              v64 = *v35;
              if ( (unsigned __int64)*v35 > 1 )
              {
                if ( *((_DWORD *)v64 + 3) == (_DWORD)v8 && (__int64 ***)v33 == v64 )
                  goto LABEL_70;
              }
              else if ( !v64 )
              {
                break;
              }
            }
LABEL_48:
            v41 = *((unsigned int *)v32 + 14);
            v42 = v32[6];
            v43 = v41 - 1;
            v41 *= 16;
            v9 = (__int64 ****)((char *)v42 + v41);
            v44 = 16LL * ((unsigned int)v8 & v43);
            v45 = &v42[(unsigned __int64)v44 / 8];
            if ( v44 != v41 )
            {
              for ( m = (__int64 ****)&v42[(unsigned __int64)v44 / 8]; v9 != m; m += 2 )
              {
                v47 = *m;
                if ( (unsigned __int64)*m > 1 )
                {
                  if ( *((_DWORD *)v47 + 3) == (_DWORD)v8 && (__int64 ***)v33 == v47 )
                    goto LABEL_70;
                }
                else if ( !v47 )
                {
                  goto LABEL_55;
                }
              }
            }
            for ( ; v45 != v42; v42 += 2 )
            {
              v66 = *v42;
              if ( (unsigned __int64)*v42 > 1 )
              {
                if ( *((_DWORD *)v66 + 3) == (_DWORD)v8 && (__int64 **)v33 == v66 )
                  goto LABEL_70;
              }
              else if ( !v66 )
              {
                break;
              }
            }
LABEL_55:
            v48 = *(_QWORD *)(v26 + 8);
            v49 = *(_QWORD *)(a1 + 696);
            v107[0] = nullptr;
            v50 = *(unsigned int *)(a1 + 704);
            if ( v48 )
            {
              if ( (v48 & 7) == 1 )
                v51 = v48 >> 3;
              else
                LODWORD(v51) = *(_DWORD *)(v48 - 8);
            }
            else
            {
              LODWORD(v51) = -1640531495;
            }
            v52 = v50 - 1;
            v53 = 24 * v50;
            v54 = v49 + v53;
            v55 = 24LL * ((unsigned int)v51 & v52);
            v56 = v49 + v55;
            if ( v55 == v53 )
            {
LABEL_79:
              while ( v56 != v49 )
              {
                v65 = *(_DWORD *)(v49 + 4);
                if ( v65 == 2 )
                {
                  if ( (_DWORD)v51 == *(_DWORD *)v49 && v48 == *(_QWORD *)(v49 + 8) )
                  {
                    v57 = v49;
                    goto LABEL_65;
                  }
                }
                else if ( !v65 )
                {
                  break;
                }
                v49 += 24;
              }
LABEL_87:
              sub_DFBCB0(a1);
              v59 = sub_15E1950(*(_QWORD *)(a1 + 296));
              if ( !*(_DWORD *)(v33 + 32) )
                goto LABEL_88;
LABEL_68:
              v92 = sub_186B270(0x38u);
              v96 = *(_DWORD *)(v33 + 32);
              sub_DFBCB0(a1);
              sub_13478B0(v92, *(_QWORD *)(a1 + 296), v96);
              sub_1349280(v92, v59, v60, v61, v62, v63);
              v9 = *a2;
              v8 = v33;
              sub_135F980(*a2, v33, v92);
              goto LABEL_69;
            }
            v57 = v49 + v55;
            while ( 1 )
            {
              v58 = *(_DWORD *)(v57 + 4);
              if ( v58 != 2 )
              {
                if ( !v58 )
                  goto LABEL_87;
                goto LABEL_61;
              }
              if ( (_DWORD)v51 == *(_DWORD *)v57 && v48 == *(_QWORD *)(v57 + 8) )
                break;
LABEL_61:
              v57 += 24;
              if ( v54 == v57 )
                goto LABEL_79;
            }
LABEL_65:
            v8 = *(unsigned int *)(v33 + 32);
            v9 = v107;
            v107[0] = *(__int64 ****)(v57 + 16);
            v59 = sub_DF7310(v107, v8, v33 + 48);
            if ( !v59 )
              goto LABEL_87;
            if ( !*(_BYTE *)(a1 + 193) )
            {
              if ( *(_DWORD *)(v33 + 32) )
                goto LABEL_68;
LABEL_88:
              v9 = *a2;
              v8 = v33;
              sub_135F9B0(*a2, v33, v59);
            }
LABEL_69:
            v28 = *(_QWORD *)(v26 + 16);
LABEL_70:
            ;
          }
        }
      }
LABEL_103:
      sub_1808900(v103);
      sub_2495F0(v99.m128i_i64[1]);
      sub_1829100(v101);
      sub_13606C0(v102);
      sub_18572D0(v100);
    }
    else
    {
      sub_233E40((__int64)&v108);
    }
  }
}

