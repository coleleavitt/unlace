/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4217E0
// Address: 0x00000000004217E0

//----- (00000000004217E0) ----------------------------------------------------
__int64 __fastcall sub_4217E0(
        __int64 a1,
        __int64 a2,
        int a3,
        double a4,
        __m128 a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  void *v12; // rdi
  int v13; // edx
  int v14; // ecx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __m128i v18; // xmm2
  __int64 v19; // rax
  size_t v20; // rax
  size_t v21; // r12
  int v22; // ecx
  FILE *v23; // rax
  double v24; // xmm4_8
  double v25; // xmm5_8
  char *v26; // r12
  size_t v27; // rax
  size_t v28; // rbp
  void *v29; // rdi
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // rbp
  bool v32; // zf
  double v33; // xmm4_8
  double v34; // xmm5_8
  const char *v35; // rbp
  unsigned __int64 v36; // r12
  char *v37; // r14
  int v38; // r13d
  __int64 v39; // rax
  const char *v40; // rdi
  unsigned __int64 *v41; // r15
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  double v45; // xmm4_8
  double v46; // xmm5_8
  const char *v47; // rdi
  double v48; // xmm4_8
  double v49; // xmm5_8
  const char *v50; // r13
  size_t v51; // rax
  size_t v52; // r14
  size_t v53; // rbp
  size_t v54; // rbp
  __m128i si128; // xmm0
  size_t v56; // rbp
  _QWORD *v57; // rbx
  _QWORD *v58; // rbp
  void *v59; // rdi
  char *v60; // rdi
  __int64 v61; // r12
  __int64 v62; // rbp
  char *v63; // rbx
  void *v64; // rdi
  void *v65; // rdi
  __int64 v67; // rax
  char *v68; // rdi
  char *v69; // r13
  _QWORD *v70; // rdi
  void *v71; // rax
  int *v72; // rax
  const char *v73; // rax
  const void *v74; // r13
  void *v75; // rdi
  void *v76; // rax
  unsigned __int8 v77; // [rsp+Bh] [rbp-11CDh]
  int v79; // [rsp+2Ch] [rbp-11ACh] BYREF
  void *v80; // [rsp+30h] [rbp-11A8h] BYREF
  __int128 v81; // [rsp+38h] [rbp-11A0h]
  void *v82; // [rsp+50h] [rbp-1188h] BYREF
  size_t v83[3]; // [rsp+58h] [rbp-1180h]
  void *src; // [rsp+70h] [rbp-1168h] BYREF
  size_t n[3]; // [rsp+78h] [rbp-1160h]
  __m128 v86; // [rsp+90h] [rbp-1148h] BYREF
  void *ptr; // [rsp+A0h] [rbp-1138h]
  __int128 v88; // [rsp+A8h] [rbp-1130h]
  void *v89; // [rsp+B8h] [rbp-1120h]
  __int128 v90; // [rsp+C0h] [rbp-1118h]
  int v91; // [rsp+D8h] [rbp-1100h] BYREF
  void *v92; // [rsp+E0h] [rbp-10F8h]
  int *v93; // [rsp+E8h] [rbp-10F0h]
  int *v94; // [rsp+F0h] [rbp-10E8h]
  __int64 v95; // [rsp+F8h] [rbp-10E0h]
  void *v96; // [rsp+100h] [rbp-10D8h]
  __int128 v97; // [rsp+108h] [rbp-10D0h]
  void *v98; // [rsp+118h] [rbp-10C0h]
  __int128 v99; // [rsp+120h] [rbp-10B8h]
  int v100; // [rsp+130h] [rbp-10A8h]
  unsigned __int64 v101; // [rsp+140h] [rbp-1098h] BYREF
  __int64 v102; // [rsp+148h] [rbp-1090h]
  __int64 v103; // [rsp+150h] [rbp-1088h]
  char *v104[2]; // [rsp+158h] [rbp-1080h] BYREF
  __m128i v105[2]; // [rsp+168h] [rbp-1070h] BYREF
  char s[4104]; // [rsp+190h] [rbp-1048h] BYREF
  unsigned __int64 v107; // [rsp+1198h] [rbp-40h]

  v107 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 656) = a2;
  v12 = *(void **)(a1 + 1256);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 1264) = 0;
    j__free(v12);
    a2 = *(unsigned int *)(a1 + 656);
    *(_QWORD *)(a1 + 1256) = 0;
    *(_QWORD *)(a1 + 1272) = 0;
  }
  *(_DWORD *)(a1 + 1340) = a2;
  *(_BYTE *)(a1 + 1348) = 0;
  *(_DWORD *)(a1 + 1408) = 0;
  sub_417940((_QWORD *)a1, a2);
  v13 = 0;
  v14 = -1;
  if ( a3 == 2 )
  {
    v13 = 1;
    v14 = 0;
  }
  sub_4835F0(&v79, *(_DWORD *)(a1 + 656), v13, v14);
  sub_4563D0(a1, "process pid/tid: %d\n", *(_DWORD *)(a1 + 656));
  *(_BYTE *)(a1 + 1412) = 0;
  *(_OWORD *)v104 = 0;
  v101 = 0xFFFFFFFFLL;
  v102 = -1;
  v103 = 0;
  memset(v105, 0, sizeof(v105));
  sub_4787B0((__int64)&v101, 1);
  v15 = HIDWORD(v103) & 0xFFFFFFF;
  if ( (unsigned int)v15 > 0xB || (v16 = 2306, (v77 = _bittest64(&v16, v15)) == 0) )
    sub_40D8C0();
  v17 = *(unsigned int *)(a1 + 656);
  v18 = _mm_cvtsi32_si128(v17);
  v101 = _mm_shuffle_epi32(v18, 224).m128i_u64[0];
  v102 = ptrace(PTRACE_PEEKUSER, v17, 128, 0);
  v19 = *(_QWORD *)a1;
  LOBYTE(v103) = 1;
  (*(void (__fastcall **)(__int64, _QWORD, char *, __int64))(v19 + 624))(a1, *(unsigned int *)(a1 + 656), s, 4096);
  v20 = strlen(s);
  v21 = v20;
  if ( v20 )
  {
    v68 = v104[0];
    v69 = (char *)(v20 + 1);
    if ( v105[0].m128i_i64[0] < v20 + 1 )
    {
      v104[0] = (char *)sub_481540((__int64)v104, v104[0], (unsigned __int64)v69, 1u);
      v68 = v104[0];
    }
    v104[1] = v69;
    memmove(v68, s, v21);
    v104[0][v21] = 0;
  }
  else
  {
    v104[1] = nullptr;
  }
  v22 = *(_DWORD *)(a1 + 656);
  v105[1].m128i_i64[1] = -1;
  *(__m128i *)((char *)v105 + 8) = _mm_load_si128((const __m128i *)&xmmword_48F500);
  sub_485490(s, 4096, "/proc/%u/maps", v22);
  v23 = sub_47FA20(s);
  *(_QWORD *)(a1 + 1400) = v23;
  if ( !v23 )
  {
    v72 = __errno_location();
    v73 = (const char *)sub_481FB0(*v72);
    sub_411B10(a1, "%s: %s\n", s, v73);
    v77 = 0;
    goto LABEL_74;
  }
  if ( v104[1] && (v26 = v104[0]) != nullptr && (v27 = strlen(v104[0]), (v28 = v27) != 0) )
  {
    v29 = *(void **)(a1 + 1440);
    v30 = v27 + 1;
    if ( *(_QWORD *)(a1 + 1456) < v27 + 1 )
    {
      v71 = sub_481540(a1 + 1440, *(void **)(a1 + 1440), v30, 1u);
      *(_QWORD *)(a1 + 1440) = v71;
      v29 = v71;
    }
    *(_QWORD *)(a1 + 1448) = v30;
    memmove(v29, v26, v28);
    *(_BYTE *)(*(_QWORD *)(a1 + 1440) + v28) = 0;
    if ( !*(_BYTE *)(a1 + 861) )
    {
      v31 = *(_QWORD *)(a1 + 1448);
      if ( v31 <= 1 )
      {
LABEL_17:
        *(_QWORD *)(a1 + 592) = 0;
        goto LABEL_19;
      }
      v74 = *(const void **)(a1 + 1440);
      v75 = *(void **)(a1 + 584);
      if ( *(_QWORD *)(a1 + 600) < v31 )
      {
        v76 = sub_481540(a1 + 584, *(void **)(a1 + 584), *(_QWORD *)(a1 + 1448), 1u);
        *(_QWORD *)(a1 + 584) = v76;
        v75 = v76;
      }
      *(_QWORD *)(a1 + 592) = v31;
      memmove(v75, v74, v31 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 584) + v31 - 1) = 0;
    }
  }
  else
  {
    v32 = *(_BYTE *)(a1 + 861) == 0;
    *(_QWORD *)(a1 + 1448) = 0;
    if ( v32 )
      goto LABEL_17;
  }
LABEL_19:
  v32 = *(_BYTE *)(a1 + 36) == 0;
  v80 = nullptr;
  v81 = 0;
  if ( !v32 )
  {
    v67 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 32) = 4;
    *(_QWORD *)(a1 + 24) = v67;
  }
  *(_DWORD *)(a1 + 276) = 4;
  if ( (unsigned int)sub_4211A0(a1, (__int64 *)&v80, 0, 0.0, a5, (__m128)v18, a7, v24, v25, a10, a11) != 1 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(30065);
    BUG();
  }
  sub_412500((__int64 *)a1);
  v35 = s1;
  if ( v104[1] )
    v35 = v104[0];
  v36 = v81;
  if ( !(_QWORD)v81 )
    goto LABEL_75;
  v37 = (char *)v80;
  v38 = 0;
  v39 = 0;
  while ( 1 )
  {
    v40 = s1;
    v41 = (unsigned __int64 *)&v37[80 * v39];
    if ( v41[3] )
      v40 = (const char *)v41[2];
    if ( !strcmp(v40, v35) )
      break;
    v39 = ++v38;
    if ( v38 >= v36 )
      goto LABEL_75;
  }
  if ( v41 )
  {
    v105[0].m128i_i64[1] = *v41;
    v42 = sub_414B50(a1, &v80, v41);
    v32 = *(_BYTE *)(a1 + 861) == 0;
    v105[1].m128i_i64[0] = v42;
    if ( v32 )
      v105[1].m128i_i64[1] = *v41;
  }
  else
  {
LABEL_75:
    if ( !*(_BYTE *)(a1 + 861) )
      sub_411B10(a1, "%s: nowhere in the process memory?!\n", v35);
  }
  if ( !(unsigned __int8)sub_41DAF0(a1, (__int64 *)&v80, 0.0, a5, (__m128)v18, a7, v33, v34, a10, a11) )
    sub_411B10(a1, "Could not set the shlib bpt, shared object events will not be handled\n");
  if ( (v103 & 0xFFFFFFF00000000LL) != 0 )
  {
    v70 = *(_QWORD **)(a1 + 168);
    if ( v70 == (_QWORD *)(*(_QWORD *)(a1 + 184) - 72LL) )
    {
      sub_41C280((_QWORD *)(a1 + 120), (__int64)&v101);
    }
    else
    {
      v70[1] = -1;
      v70[2] = 0;
      *v70 = 0xFFFFFFFFLL;
      sub_4788F0((__int64)v70, (__int64)&v101);
      *(_QWORD *)(a1 + 168) += 72LL;
    }
    *(_BYTE *)(a1 + 1412) = 0;
  }
  if ( a3 )
  {
    sub_4787B0((__int64)&v101, 11);
    v43 = HIDWORD(v103) & 0xFFFFFFF;
    if ( (unsigned int)v43 > 0xB || (v44 = 2306, !_bittest64(&v44, v43)) )
      sub_40D8C0();
    sub_41C3B0(a1, (__int64)&v101, 1);
    if ( !(unsigned __int8)sub_4837D0("IDA_SKIP_SYMS", 0) )
    {
      v47 = s1;
      v82 = nullptr;
      *(_OWORD *)v83 = 0;
      if ( v104[1] )
        v47 = v104[0];
      LODWORD(n[0]) = 4;
      src = off_4C2200;
      n[1] = (size_t)&v82;
      sub_42BC30(v47, &src, 0, 0.0, a5, (__m128)v18, a7, v45, v46, a10, a11);
      v50 = s1;
      if ( v104[1] )
        v50 = v104[0];
      src = nullptr;
      *(_OWORD *)n = 0;
      if ( v50 )
      {
        v51 = strlen(v50);
        v52 = v51 + 1;
        v53 = v51;
        src = sub_481540((__int64)&src, nullptr, v51 + 1, 1u);
        n[0] = v52;
        memmove(src, v50, v53);
        *((_BYTE *)src + v53) = 0;
        v54 = n[0];
        si128 = _mm_load_si128((const __m128i *)&v105[0].m128i_u64[1]);
        ptr = nullptr;
        v86 = (__m128)si128;
        v88 = 0;
        if ( n[0] )
        {
          ptr = sub_4814F0(n[0]);
          *((_QWORD *)&v88 + 1) = v54;
          memcpy(ptr, src, v54);
          *(_QWORD *)&v88 = v54;
        }
      }
      else
      {
        a5 = (__m128)_mm_load_si128((const __m128i *)&v105[0].m128i_u64[1]);
        v88 = 0;
        ptr = nullptr;
        v86 = a5;
      }
      v56 = v83[0];
      v89 = nullptr;
      v90 = 0;
      if ( v83[0] )
      {
        v89 = sub_4814F0(v83[0]);
        *((_QWORD *)&v90 + 1) = v56;
        memcpy(v89, v82, v56);
        *(_QWORD *)&v90 = v56;
      }
      v91 = 0;
      v92 = nullptr;
      v93 = &v91;
      v94 = &v91;
      v95 = 0;
      v96 = nullptr;
      v98 = nullptr;
      v100 = 0;
      v97 = 0;
      v99 = 0;
      if ( src )
      {
        n[0] = 0;
        j__free(src);
      }
      sub_416760((_QWORD *)a1, (__int64 *)&v86, (__m128)0LL, a5, (__m128)v18, a7, v48, v49, a10, a11);
      if ( v98 )
      {
        *(_QWORD *)&v99 = 0;
        j__free(v98);
      }
      if ( v96 )
      {
        *(_QWORD *)&v97 = 0;
        j__free(v96);
      }
      v57 = v92;
      if ( v92 )
      {
        do
        {
          v58 = v57;
          sub_40F970((_QWORD *)v57[3]);
          v59 = (void *)v57[5];
          v57 = (_QWORD *)v57[2];
          if ( v59 )
          {
            v58[6] = 0;
            j__free(v59);
          }
          operator delete(v58, 0x40u);
        }
        while ( v57 );
      }
      if ( v89 )
      {
        *(_QWORD *)&v90 = 0;
        j__free(v89);
      }
      if ( ptr )
      {
        *(_QWORD *)&v88 = 0;
        j__free(ptr);
      }
      if ( v82 )
      {
        v83[0] = 0;
        j__free(v82);
      }
    }
  }
  v60 = (char *)v80;
  if ( v80 )
  {
    v61 = v81;
    if ( (_QWORD)v81 )
    {
      v62 = 0;
      do
      {
        v63 = &v60[80 * v62];
        v64 = *((void **)v63 + 5);
        if ( v64 )
        {
          *((_QWORD *)v63 + 6) = 0;
          j__free(v64);
        }
        v65 = *((void **)v63 + 2);
        if ( v65 )
        {
          *((_QWORD *)v63 + 3) = 0;
          j__free(v65);
        }
        ++v62;
        v60 = (char *)v80;
      }
      while ( v61 != v62 );
    }
    *(_QWORD *)&v81 = 0;
    j__free(v60);
  }
LABEL_74:
  sub_478720((__int64)&v101);
  return v77;
}
// 421AE4: variable 'v24' is possibly undefined
// 421AE4: variable 'v25' is possibly undefined
// 421BBF: variable 'v33' is possibly undefined
// 421BBF: variable 'v34' is possibly undefined
// 421CA2: variable 'v45' is possibly undefined
// 421CA2: variable 'v46' is possibly undefined
// 421E3B: variable 'v48' is possibly undefined
// 421E3B: variable 'v49' is possibly undefined
// 48F500: using guessed type __int128 xmmword_48F500;
// 4C2200: using guessed type __int64 (__fastcall *off_4C2200[3])();
// 4C94E1: using guessed type char byte_4C94E1;
