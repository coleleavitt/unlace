unsigned __int64 __fastcall sub_301E0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  char v18; // al
  const char *v19; // r14
  __int64 (__fastcall *v20)(__int64); // rax
  int v21; // eax
  __int64 v22; // rcx
  const char *v23; // rdx
  __int64 (__fastcall *v24)(__int64); // rax
  int v25; // eax
  __int64 *v26; // r15
  int v27; // esi
  __int64 v28; // rax
  __int64 (__fastcall *v29)(__int64, __int64 *, const char *, int); // rax
  int v30; // r13d
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int8 v34; // r15
  __int64 v35; // rdx
  int v36; // eax
  signed int v37; // eax
  __int64 v38; // r14
  __int64 *v39; // r15
  __int64 (__fastcall *v40)(__int64 *, bool); // rax
  int v41; // eax
  void (__fastcall *v42)(__int64 *); // rax
  __int64 v43; // rax
  unsigned __int64 v44; // r13
  void *v45; // rcx
  __int64 v46; // rdi
  __int64 (__fastcall *v47)(__int64, __int64 *, void *, __m128, __m128, __m128, __m128, double, double, __m128, __m128); // rax
  int v48; // eax
  unsigned __int64 v49; // r13
  __int64 v50; // rdx
  void *v51; // r13
  __m128i v52; // xmm0
  __m128i v53; // xmm0
  __int64 v55; // rdi
  __int64 v56; // rcx
  void *v57; // r13
  __m128i v58; // xmm0
  __m128i v59; // xmm0
  __int64 v60; // rdi
  __int64 v61; // rcx
  void *v62; // r13
  __m128i v63; // xmm0
  __m128i v64; // xmm0
  __int64 v65; // rdi
  __int64 v66; // r9
  __int64 v67; // r8
  __int64 v68; // rcx
  const char *v69; // rdx
  __int64 (__fastcall *v70)(__int64, const char *, const char *, __int64, __int64, __int64); // rax
  __int64 v71; // rdi
  __int64 v72; // rcx
  void *v73; // r13
  __m128i v74; // xmm0
  __m128i v75; // xmm0
  __int64 v76; // rax
  size_t v77; // rcx
  __int64 v78; // rdi
  const void *v79; // rsi
  __int64 (__fastcall *v80)(__int64, size_t *, const void *); // rax
  int v81; // eax
  const char *v82; // rax
  const char *v83; // rbx
  size_t v84; // rax
  size_t v85; // r13
  void *v86; // rbx
  __m128i v87; // xmm0
  __m128i v88; // xmm0
  void *v89; // rdi
  size_t v90; // r15
  int v91; // eax
  const char *v92; // rsi
  unsigned __int64 *v93; // rsi
  __int64 *v94; // rdi
  __int64 v95; // rdx
  __int64 (__fastcall *v96)(__int64, const char *, int); // rax
  __int64 v97; // rsi
  int v98; // eax
  char *v99; // rsi
  void *v100; // r13
  __m128i v101; // xmm1
  __m128i v102; // xmm1
  __m128i v103; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v104; // [rsp+18h] [rbp-B0h] BYREF
  void *ptr; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v106; // [rsp+28h] [rbp-A0h]
  void *v107; // [rsp+40h] [rbp-88h] BYREF
  __m128i v108; // [rsp+48h] [rbp-80h] BYREF
  void *v109; // [rsp+60h] [rbp-68h] BYREF
  void *dest[2]; // [rsp+68h] [rbp-60h] BYREF
  __int128 v111; // [rsp+78h] [rbp-50h]
  unsigned __int64 v112; // [rsp+88h] [rbp-40h]

  v112 = __readfsqword(0x28u);
  sub_6E490(&ptr, 10);
  v18 = *(_BYTE *)(a2 + 8);
  if ( v18 != 12 )
  {
    switch ( v18 )
    {
      case '[':
        v19 = haystack;
        if ( *(_QWORD *)(a2 + 24) )
          v19 = *(const char **)(a2 + 16);
        v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL);
        if ( v20 == sub_2A450 )
        {
          v21 = *(unsigned __int8 *)(a1 + 312);
          if ( (((_BYTE)v21 - 79) & 0xFD) != 0 )
          {
            if ( (unsigned __int8)(v21 - 58) > 0x2Eu
              || (v22 = 0x400000155001LL, !_bittest64(&v22, (unsigned int)(v21 - 58))) )
            {
              sub_16AB0((__int64)"Wrong file request %d from the vault server", (unsigned __int8)v21);
            }
          }
        }
        else
        {
          v93 = (unsigned __int64 *)v19;
          v30 = ((__int64 (__fastcall *)(__int64, const char *))v20)(a1, v19);
          if ( v30 )
            goto LABEL_116;
        }
        v94 = *(__int64 **)(a1 + 112);
        v95 = *(unsigned int *)(a2 + 40);
        v96 = *(__int64 (__fastcall **)(__int64, const char *, int))(*v94 + 40);
        if ( v96 == sub_2F960 )
          v36 = sub_2FA80(v94[4], v19, v95);
        else
          v36 = v96((__int64)v94, v19, v95);
        goto LABEL_72;
      case '\\':
        v23 = haystack;
        if ( *(_QWORD *)(a2 + 24) )
          v23 = *(const char **)(a2 + 16);
        v24 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL);
        if ( v24 == sub_2A450 )
        {
          v25 = *(unsigned __int8 *)(a1 + 312);
          if ( (((_BYTE)v25 - 79) & 0xFD) != 0 )
          {
            if ( (unsigned __int8)(v25 - 58) > 0x2Eu
              || (v97 = 0x400000155001LL, !_bittest64(&v97, (unsigned int)(v25 - 58))) )
            {
              sub_16AB0((__int64)"Wrong file request %d from the vault server", (unsigned __int8)v25);
            }
          }
        }
        else
        {
          v103.m128i_i64[0] = (__int64)v23;
          v93 = (unsigned __int64 *)v23;
          v98 = ((__int64 (__fastcall *)(__int64, const char *))v24)(a1, v23);
          v23 = (const char *)v103.m128i_i64[0];
          v30 = v98;
          if ( v98 )
            goto LABEL_116;
        }
        v26 = *(__int64 **)(a1 + 112);
        v27 = *(_DWORD *)(a2 + 40);
        v28 = *v26;
        v103.m128i_i32[0] = v27;
        v29 = *(__int64 (__fastcall **)(__int64, __int64 *, const char *, int))(v28 + 32);
        if ( v29 == sub_2FCC0 )
        {
          v30 = sub_2FB70(v26[4], &v109, v23, v27);
          if ( v30 )
            goto LABEL_85;
          v31 = operator new(0x18u);
          v32 = v26[4];
          v104 = v31;
          *(_QWORD *)v31 = &off_1612B0;
          *(_QWORD *)(v31 + 8) = v32;
          *(_DWORD *)(v31 + 16) = (_DWORD)v109;
          v33 = v26[4];
          v34 = v103.m128i_i8[0];
          *(_DWORD *)(v33 + 248) = 0;
          *(_DWORD *)(v33 + 252) = v34 & 3;
          goto LABEL_17;
        }
        v93 = &v104;
        v30 = v29((__int64)v26, (__int64 *)&v104, v23, v103.m128i_u32[0]);
        if ( !v30 )
        {
          v31 = v104;
LABEL_17:
          v35 = 0;
          while ( *(_QWORD *)(a1 + 8 * v35 + 120) )
          {
            if ( ++v35 == 16 )
            {
              sub_8F890(0, "out of abstract file handles");
              v36 = sub_63E40(24, nullptr);
              goto LABEL_72;
            }
          }
          *(_QWORD *)(a1 + 8 * v35 + 120) = v31;
          v108.m128i_i8[0] = 93;
          v108.m128i_i32[1] = v35;
          v107 = off_162378;
          sub_6E490(&v109, 93);
          v100 = v109;
          v109 = nullptr;
          v101 = _mm_loadu_si128((const __m128i *)dest);
          *(_OWORD *)dest = 0;
          if ( ptr )
          {
            v103 = v101;
            v106.m128i_i64[0] = 0;
            j__free(ptr);
            v102 = _mm_load_si128(&v103);
            ptr = v100;
            v106 = v102;
            if ( v109 )
            {
              dest[0] = nullptr;
              j__free(v109);
            }
          }
          else
          {
            ptr = v100;
            v106 = v101;
          }
          sub_439B0(&v107, &ptr, *(unsigned int *)(a1 + 108));
          nullsub_25(&v107);
          if ( a2 )
            goto LABEL_43;
          goto LABEL_44;
        }
LABEL_116:
        if ( a2 )
        {
          (*(void (__fastcall **)(__int64, unsigned __int64 *, const char *))(*(_QWORD *)a2 + 8LL))(a2, v93, v23);
          goto LABEL_76;
        }
        v81 = v30;
        goto LABEL_77;
      case '^':
        v37 = *(_DWORD *)(a2 + 12);
        if ( (unsigned int)v37 > 0xF )
          goto LABEL_108;
        v38 = v37;
        v39 = *(__int64 **)(a1 + 8LL * v37 + 120);
        v40 = *(__int64 (__fastcall **)(__int64 *, bool))(*v39 + 48);
        if ( v40 == sub_2FE80 )
        {
          v41 = sub_2FD60(v39[1], *((_DWORD *)v39 + 4), *(_BYTE *)(a2 + 16));
          v39[1] = 0;
          v30 = v41;
          if ( v39 )
          {
            v42 = *(void (__fastcall **)(__int64 *))(*v39 + 8);
            if ( v42 == sub_296F0 )
              operator delete(v39, 0x18u);
            else
              v42(v39);
          }
        }
        else
        {
          v30 = v40(v39, *(_BYTE *)(a2 + 16));
        }
        *(_QWORD *)(a1 + 8 * v38 + 120) = 0;
        goto LABEL_73;
      case '_':
        v43 = *(unsigned int *)(a2 + 12);
        if ( (unsigned int)v43 > 0xF )
          goto LABEL_108;
        v44 = *(unsigned int *)(a2 + 16);
        LOBYTE(dest[0]) = 96;
        v45 = nullptr;
        v111 = 0;
        dest[1] = nullptr;
        v104 = v44;
        v109 = &off_162408;
        if ( v44 )
        {
          dest[1] = (void *)sub_96080(&dest[1], 0, v44, 1);
          memset((char *)dest[1] + v111, 0, v44 - v111);
          *(_QWORD *)&v111 = v44;
          v43 = *(unsigned int *)(a2 + 12);
          v45 = dest[1];
        }
        v46 = *(_QWORD *)(a1 + 8 * v43 + 120);
        v47 = *(__int64 (__fastcall **)(__int64, __int64 *, void *, __m128, __m128, __m128, __m128, double, double, __m128, __m128))(*(_QWORD *)v46 + 16LL);
        if ( v47 == sub_301C0 )
          v48 = sub_30090(
                  *(_QWORD *)(v46 + 8),
                  (__int64 *)&v104,
                  *(_DWORD *)(v46 + 16),
                  v45,
                  (__m128)0LL,
                  a4,
                  a5,
                  a6,
                  *(double *)v16.m128_u64,
                  *(double *)v17.m128_u64,
                  a9,
                  a10);
        else
          v48 = ((__int64 (__fastcall *)(__int64, unsigned __int64 *, void *))v47)(v46, &v104, v45);
        v30 = v48;
        if ( v48 )
        {
          sub_3C210(&v109);
          v81 = v30;
          if ( a2 )
            goto LABEL_86;
          goto LABEL_77;
        }
        v49 = v104;
        v50 = v111;
        if ( (unsigned __int64)v111 < v104 )
        {
          v99 = (char *)dest[1];
          if ( *((_QWORD *)&v111 + 1) < v104 )
          {
            dest[1] = (void *)sub_96080(&dest[1], dest[1], v104, 1);
            v50 = v111;
            v99 = (char *)dest[1];
          }
          memset(&v99[v50], 0, v49 - v50);
          *(_QWORD *)&v111 = v49;
        }
        else if ( v104 != (_QWORD)v111 )
        {
          *(_QWORD *)&v111 = v104;
        }
        sub_6E490(&v107, 96);
        v51 = v107;
        v107 = nullptr;
        v52 = _mm_loadu_si128(&v108);
        v108 = 0;
        if ( ptr )
        {
          v103 = v52;
          v106.m128i_i64[0] = 0;
          j__free(ptr);
          v53 = _mm_load_si128(&v103);
          ptr = v51;
          v106 = v53;
          if ( v107 )
          {
            v108.m128i_i64[0] = 0;
            j__free(v107);
          }
        }
        else
        {
          ptr = v51;
          v106 = v52;
        }
        sub_44090(&v109, &ptr, *(unsigned int *)(a1 + 108));
        sub_3C210(&v109);
        if ( a2 )
          goto LABEL_43;
        goto LABEL_44;
      case 'a':
        v76 = *(unsigned int *)(a2 + 12);
        if ( (unsigned int)v76 > 0xF )
        {
LABEL_108:
          sub_8F890(0, "bad abstract file handle");
          if ( a2 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
          v81 = 33;
          goto LABEL_77;
        }
        v77 = *(_QWORD *)(a2 + 24);
        v78 = *(_QWORD *)(a1 + 8 * v76 + 120);
        v79 = *(const void **)(a2 + 16);
        v109 = *(void **)(a2 + 24);
        v80 = *(__int64 (__fastcall **)(__int64, size_t *, const void *))(*(_QWORD *)v78 + 24LL);
        if ( v80 == sub_30070 )
          v36 = sub_2FEF0(*(_QWORD *)(v78 + 8), *(_DWORD *)(v78 + 16), v79, v77);
        else
          v36 = v80(v78, (size_t *)&v109, v79);
LABEL_72:
        v30 = v36;
LABEL_73:
        if ( a2 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
        if ( v30 )
          goto LABEL_76;
        goto LABEL_44;
      case 'b':
        v55 = *(_QWORD *)(a1 + 112);
        v56 = *(unsigned int *)(a2 + 40);
        LOBYTE(dest[0]) = 99;
        v111 = 0;
        dest[1] = nullptr;
        v109 = &off_162498;
        v30 = (*(__int64 (__fastcall **)(__int64, void **, __int64, __int64))(*(_QWORD *)v55 + 160LL))(
                v55,
                &dest[1],
                a2 + 16,
                v56);
        if ( v30 )
          goto LABEL_84;
        sub_6E490(&v107, 99);
        v57 = v107;
        v107 = nullptr;
        v58 = _mm_loadu_si128(&v108);
        v108 = 0;
        if ( ptr )
        {
          v103 = v58;
          v106.m128i_i64[0] = 0;
          j__free(ptr);
          v59 = _mm_load_si128(&v103);
          ptr = v57;
          v106 = v59;
          if ( v107 )
          {
            v108.m128i_i64[0] = 0;
            j__free(v107);
          }
        }
        else
        {
          ptr = v57;
          v106 = v58;
        }
        goto LABEL_57;
      case 'd':
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 192LL))(*(_QWORD *)(a1 + 112));
        goto LABEL_42;
      case 'e':
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 112) + 200LL))(
          *(_QWORD *)(a1 + 112),
          *(unsigned __int8 *)(a2 + 9),
          *(_QWORD *)(a2 + 16));
        goto LABEL_42;
      case 'l':
        v71 = *(_QWORD *)(a1 + 112);
        v72 = *(unsigned int *)(a2 + 40);
        LOBYTE(dest[0]) = 109;
        v111 = 0;
        dest[1] = nullptr;
        v109 = &off_162678;
        v30 = (*(__int64 (__fastcall **)(__int64, void **, __int64, __int64))(*(_QWORD *)v71 + 168LL))(
                v71,
                &dest[1],
                a2 + 16,
                v72);
        if ( v30 )
        {
          sub_3D4D0(&v109);
          v81 = v30;
          if ( a2 )
            goto LABEL_86;
          goto LABEL_77;
        }
        sub_6E490(&v107, 109);
        v73 = v107;
        v107 = nullptr;
        v74 = _mm_loadu_si128(&v108);
        v108 = 0;
        if ( ptr )
        {
          v103 = v74;
          v106.m128i_i64[0] = 0;
          j__free(ptr);
          v75 = _mm_load_si128(&v103);
          ptr = v73;
          v106 = v75;
          if ( v107 )
          {
            v108.m128i_i64[0] = 0;
            j__free(v107);
          }
        }
        else
        {
          ptr = v73;
          v106 = v74;
        }
        sub_47DB0(&v109, &ptr, *(unsigned int *)(a1 + 108));
        sub_3D4D0(&v109);
        if ( a2 )
          goto LABEL_43;
        goto LABEL_44;
      case 'n':
        v60 = *(_QWORD *)(a1 + 112);
        v61 = *(unsigned int *)(a2 + 40);
        LOBYTE(dest[0]) = 99;
        v111 = 0;
        dest[1] = nullptr;
        v109 = &off_162498;
        v30 = (*(__int64 (__fastcall **)(__int64, void **, __int64, __int64))(*(_QWORD *)v60 + 176LL))(
                v60,
                &dest[1],
                a2 + 16,
                v61);
        if ( v30 )
        {
LABEL_84:
          sub_3C290(&v109);
LABEL_85:
          v81 = v30;
          if ( a2 )
          {
LABEL_86:
            (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
LABEL_76:
            v81 = v30;
          }
LABEL_77:
          LOBYTE(dest[0]) = 11;
          dest[1] = nullptr;
          HIDWORD(dest[0]) = v81;
          v109 = &off_161418;
          v111 = 0;
          v82 = (const char *)sub_8FA30(0);
          v83 = v82;
          if ( v82 && (v84 = strlen(v82), (v85 = v84) != 0) )
          {
            v89 = dest[1];
            v90 = v84 + 1;
            if ( *((_QWORD *)&v111 + 1) < v84 + 1 )
            {
              dest[1] = (void *)sub_96080(&dest[1], dest[1], v90, 1);
              v89 = dest[1];
            }
            *(_QWORD *)&v111 = v90;
            memmove(v89, v83, v85);
            *((_BYTE *)dest[1] + v85) = 0;
          }
          else
          {
            *(_QWORD *)&v111 = 0;
          }
          sub_6E490(&v107, 11);
          v86 = v107;
          v107 = nullptr;
          v87 = _mm_loadu_si128(&v108);
          v108 = 0;
          if ( ptr )
          {
            v103 = v87;
            v106.m128i_i64[0] = 0;
            j__free(ptr);
            v88 = _mm_load_si128(&v103);
            ptr = v86;
            v106 = v88;
            if ( v107 )
            {
              v108.m128i_i64[0] = 0;
              j__free(v107);
            }
          }
          else
          {
            ptr = v86;
            v106 = v87;
          }
          sub_44580(&v109, &ptr, *(unsigned int *)(a1 + 108));
          sub_3B9F0(&v109);
        }
        else
        {
          sub_6E490(&v107, 99);
          v62 = v107;
          v107 = nullptr;
          v63 = _mm_loadu_si128(&v108);
          v108 = 0;
          if ( ptr )
          {
            v103 = v63;
            v106.m128i_i64[0] = 0;
            j__free(ptr);
            v64 = _mm_load_si128(&v103);
            ptr = v62;
            v106 = v64;
            if ( v107 )
            {
              v108.m128i_i64[0] = 0;
              j__free(v107);
            }
          }
          else
          {
            ptr = v62;
            v106 = v63;
          }
LABEL_57:
          sub_44150(&v109, &ptr, *(unsigned int *)(a1 + 108));
          sub_3C290(&v109);
          if ( a2 )
            goto LABEL_43;
        }
        goto LABEL_44;
      case 'o':
        v65 = *(_QWORD *)(a1 + 112);
        v66 = a2 + 112;
        v67 = a2 + 88;
        v68 = a2 + 64;
        v69 = haystack;
        v70 = *(__int64 (__fastcall **)(__int64, const char *, const char *, __int64, __int64, __int64))(*(_QWORD *)v65 + 136LL);
        if ( *(_QWORD *)(a2 + 48) )
          v69 = *(const char **)(a2 + 40);
        if ( *(_QWORD *)(a2 + 24) )
          v36 = v70(v65, *(const char **)(a2 + 16), v69, v68, v67, v66);
        else
          v36 = v70(v65, haystack, v69, v68, v67, v66);
        goto LABEL_72;
      default:
        if ( !byte_1671A1 )
          sub_96F80(2371);
        BUG();
    }
  }
  if ( *(_QWORD *)(a2 + 24) > 1u )
  {
    v91 = *(_DWORD *)(a2 + 12);
    v92 = *(const char **)(a2 + 16);
    if ( v91 == 1 )
    {
      (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 96LL))(a1, v92);
    }
    else
    {
      if ( v91 == 3 )
        sub_16AB0((__int64)"%s", v92);
      sub_2A490((int)"%s", (__int64)v92, v12, v13, v14, v15, a3, a4, a5, a6, v16, v17, a9, a10, v103.m128i_i8[0]);
    }
  }
LABEL_42:
  if ( a2 )
LABEL_43:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
LABEL_44:
  sub_6DB60(a1, &ptr);
  if ( ptr )
  {
    v106.m128i_i64[0] = 0;
    j__free(ptr);
  }
  return v112 - __readfsqword(0x28u);
}

