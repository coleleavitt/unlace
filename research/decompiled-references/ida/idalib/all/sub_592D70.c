__int64 __fastcall sub_592D70(__m128i *a1, __int64 a2, __int64 a3)
{
  const char *v3; // r12
  __int64 v4; // rax
  __int64 v6; // rax
  const char *v7; // rdi
  unsigned __int64 free_disk_space; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  const char *v11; // rdi
  __m128i v12; // xmm0
  __int64 v13; // rax
  _DWORD *v14; // rbx
  void *v15; // rdi
  __int64 v17; // rax
  const char *v18; // rdi
  const char *v19; // rdx
  __int64 v20; // rax
  int v21; // ecx
  int v22; // r9d
  char *v23; // rsi
  __int64 v24; // r13
  char *v25; // rdx
  size_t v26; // r8
  __int64 v27; // r13
  __int64 v28; // r8
  unsigned __int64 v29; // r15
  __int64 v30; // r15
  size_t v31; // r9
  void *v32; // [rsp+8h] [rbp-2450h]
  char *v33; // [rsp+8h] [rbp-2450h]
  size_t v34; // [rsp+10h] [rbp-2448h]
  void *src; // [rsp+18h] [rbp-2440h]
  char *s; // [rsp+30h] [rbp-2428h] BYREF
  __int128 v37; // [rsp+38h] [rbp-2420h]
  __int64 v38[8]; // [rsp+70h] [rbp-23E8h] BYREF
  void *dest; // [rsp+B0h] [rbp-23A8h] BYREF
  __int128 v40; // [rsp+B8h] [rbp-23A0h]
  void *v41; // [rsp+C8h] [rbp-2390h]
  __int128 v42; // [rsp+D0h] [rbp-2388h] BYREF
  __int64 v43; // [rsp+E0h] [rbp-2378h]
  __int64 v44; // [rsp+E8h] [rbp-2370h]
  __int128 v45; // [rsp+F0h] [rbp-2368h] BYREF
  void (__fastcall *v46)(__int128 *, __int128 *, __int64); // [rsp+100h] [rbp-2358h]
  __int64 v47; // [rsp+108h] [rbp-2350h]
  _DWORD v48[84]; // [rsp+110h] [rbp-2348h] BYREF
  __int128 v49; // [rsp+260h] [rbp-21F8h] BYREF
  __m128i v50[9]; // [rsp+270h] [rbp-21E8h] BYREF
  void *v51; // [rsp+300h] [rbp-2158h]
  __int128 v52; // [rsp+308h] [rbp-2150h]
  __m128i si128; // [rsp+318h] [rbp-2140h]
  int v54; // [rsp+328h] [rbp-2130h]
  __int128 v55; // [rsp+330h] [rbp-2128h]
  void *v56[2]; // [rsp+340h] [rbp-2118h]
  __int128 v57; // [rsp+350h] [rbp-2108h]
  __int128 v58; // [rsp+360h] [rbp-20F8h]
  __int64 v59; // [rsp+370h] [rbp-20E8h]
  __int64 v60; // [rsp+378h] [rbp-20E0h]
  __int64 v61; // [rsp+380h] [rbp-20D8h]
  __int128 v62; // [rsp+388h] [rbp-20D0h]
  _BYTE v63[88]; // [rsp+398h] [rbp-20C0h] BYREF
  __int64 v64; // [rsp+3F0h] [rbp-2068h]
  char v65; // [rsp+3F8h] [rbp-2060h]
  __int16 v66; // [rsp+400h] [rbp-2058h]
  char v67; // [rsp+402h] [rbp-2056h]
  _BYTE v68[4096]; // [rsp+410h] [rbp-2048h] BYREF
  unsigned __int64 v69; // [rsp+2418h] [rbp-40h]

  v3 = haystack;
  v4 = a1->m128i_i64[0];
  v69 = __readfsqword(0x28u);
  a1[16].m128i_i8[8] = 0;
  if ( *(_QWORD *)(v4 + 32) )
    v3 = *(const char **)(v4 + 24);
  if ( (unsigned __int8)is_cvt64(a1, a2, a3) )
  {
    v19 = v3;
    v3 = v68;
    set_file_ext(v68, 4096, v19, "idb");
  }
  v46 = nullptr;
  memset(v48, 0, sizeof(v48));
  dest = nullptr;
  memset(v63, 0, sizeof(v63));
  v41 = nullptr;
  v43 = 0;
  v44 = 0;
  v47 = 0;
  v48[10] = 2;
  v48[24] = 2;
  v48[38] = 2;
  v48[52] = 2;
  v48[66] = 2;
  v48[80] = 2;
  v51 = nullptr;
  v54 = 64;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v64 = 0;
  v40 = 0;
  v42 = 0;
  v45 = 0;
  v49 = 0;
  v52 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7C00);
  v55 = 0;
  *(_OWORD *)v56 = 0;
  v57 = 0;
  v58 = 0;
  v62 = 0;
  v65 = 0;
  v66 = 256;
  v67 = 0;
  if ( (unsigned __int8)sub_72CDA0(&dest, v3, 0) )
  {
    v6 = a1->m128i_i64[0];
    v7 = haystack;
    if ( *(_QWORD *)(a1->m128i_i64[0] + 56) )
      v7 = *(const char **)(v6 + 48);
    free_disk_space = get_free_disk_space(v7, 0.0, 0.0);
    v10 = v44 + 0x100000;
    if ( free_disk_space < v44 + 0x100000 )
      sub_378C70(
        (__int64)"Not enough disk space to unpack database\n(wanted: %llu, available: %llu)",
        v10,
        free_disk_space);
    if ( BYTE2(v54) )
    {
      if ( !(unsigned __int8)is_cvt64(v7, v10, v9) )
        sub_378D50();
    }
    else if ( (_BYTE)v54 != 64 && (!(unsigned __int8)is_cvt64(v7, v10, v9) || (_BYTE)v54 != 32) )
    {
      if ( !(_BYTE)v54 )
        sub_378D50();
      sub_378D50();
    }
    sub_697EA0(a1->m128i_i64[0], &v49);
    v11 = haystack;
    v12 = _mm_load_si128(v50);
    a1[16].m128i_i32[1] = si128.m128i_i32[1];
    v13 = a1->m128i_i64[0];
    a1[15] = v12;
    if ( *(_QWORD *)(v13 + 56) )
      v11 = *(const char **)(v13 + 48);
    if ( (unsigned __int8)qfileexist(v11, &v49) )
    {
      v37 = 0;
      s = nullptr;
      v20 = qvector_reserve(&s, 0, 48, 1);
      s = (char *)v20;
      *(_QWORD *)&v37 = 48;
      *(__m128i *)v20 = _mm_load_si128((const __m128i *)&xmmword_23A7C10);
      v23 = s;
      *(__m128i *)(v20 + 16) = _mm_load_si128((const __m128i *)&xmmword_23A7C20);
      *(__m128i *)(v20 + 31) = _mm_load_si128((const __m128i *)&xmmword_23A7C30);
      v23[47] = 0;
      v24 = a1->m128i_i64[0];
      v25 = *(char **)(a1->m128i_i64[0] + 32);
      if ( v25 )
      {
        v26 = (size_t)(v25 - 1);
        if ( v25 != (_BYTE *)&dword_0 + 1 )
        {
          v30 = v37;
          v31 = (size_t)(v25 - 1);
          if ( (_QWORD)v37 )
          {
            v30 = v37 - 1;
            v31 = v26 + v37 - 1;
            v25 += v37 - 1;
          }
          if ( *((_QWORD *)&v37 + 1) < (unsigned __int64)v25 )
          {
            src = (void *)v31;
            v34 = v26;
            v33 = v25;
            s = (char *)qvector_reserve(&s, v23, v25, 1);
            v31 = (size_t)src;
            v23 = s;
            v26 = v34;
            v25 = v33;
          }
          *(_QWORD *)&v37 = v25;
          v23[v31] = 0;
          memcpy(&s[v30], *(const void **)(v24 + 24), v26);
          v23 = s;
        }
      }
      v27 = v37;
      if ( (_QWORD)v37 )
      {
        v28 = v37 + 13;
        v29 = v37 + 14;
        v27 = v37 - 1;
      }
      else
      {
        v29 = 15;
        v28 = 14;
      }
      if ( *((_QWORD *)&v37 + 1) < v29 )
      {
        v32 = (void *)v28;
        s = (char *)qvector_reserve(&s, v23, v29, 1);
        v28 = (__int64)v32;
        v23 = s;
      }
      *(_QWORD *)&v37 = v29;
      v23[v28] = 0;
      qmemcpy(&s[v27], "\non the disk.\n", 14);
      callui(53, (int)v23, (int)&callui, v21, v28, v22);
    }
    v38[0] = 0;
    a1[16].m128i_i8[8] = 1;
    if ( (unsigned __int8)sub_72BD60(&dest, v38) )
      sub_387AC0();
    goto LABEL_19;
  }
  if ( (unsigned __int8)qfileexist(v3, v3) )
    goto LABEL_19;
  v17 = a1->m128i_i64[0];
  v18 = haystack;
  if ( *(_QWORD *)(a1->m128i_i64[0] + 56) )
    v18 = *(const char **)(v17 + 48);
  if ( !(unsigned __int8)qfileexist(v18, v3) )
LABEL_19:
    sub_378D50();
  sub_72AFB0(&dest);
  if ( v56[1] )
  {
    *(_QWORD *)&v57 = 0;
    qfree(v56[1]);
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51);
  }
  v14 = &v48[70];
  do
  {
    v15 = *((void **)v14 + 4);
    v14 -= 14;
    close_linput(v15);
  }
  while ( (_DWORD *)((char *)&v42 + 8) != v14 );
  if ( v46 )
    v46(&v45, &v45, 3);
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  if ( dest )
  {
    *(_QWORD *)&v40 = 0;
    qfree(dest);
  }
  return 1;
}
