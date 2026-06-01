__int64 __fastcall sub_5794C0(__m128i *a1)
{
  const char *v1; // r12
  __int64 v2; // rax
  __int64 v4; // rax
  const char *v5; // rdi
  unsigned __int64 free_disk_space; // rax
  const char *v7; // rdi
  __m128i v8; // xmm0
  __int64 v9; // rax
  _DWORD *v10; // rbx
  void *v11; // rdi
  __int64 v13; // rax
  const char *v14; // rdi
  __int64 v15; // rax
  int v16; // ecx
  int v17; // r9d
  char *v18; // rsi
  __int64 v19; // r13
  char *v20; // rdx
  size_t v21; // r8
  __int64 v22; // r13
  __int64 v23; // r8
  unsigned __int64 v24; // r15
  __int64 v25; // r15
  size_t v26; // r9
  void *v27; // [rsp+8h] [rbp-1450h]
  char *v28; // [rsp+8h] [rbp-1450h]
  size_t v29; // [rsp+10h] [rbp-1448h]
  void *src; // [rsp+18h] [rbp-1440h]
  char *s; // [rsp+30h] [rbp-1428h] BYREF
  __int128 v32; // [rsp+38h] [rbp-1420h]
  __int64 v33[8]; // [rsp+70h] [rbp-13E8h] BYREF
  void *dest; // [rsp+B0h] [rbp-13A8h] BYREF
  __int128 v35; // [rsp+B8h] [rbp-13A0h]
  void *v36; // [rsp+C8h] [rbp-1390h]
  __int128 v37; // [rsp+D0h] [rbp-1388h] BYREF
  __int64 v38; // [rsp+E0h] [rbp-1378h]
  __int64 v39; // [rsp+E8h] [rbp-1370h]
  __int128 v40; // [rsp+F0h] [rbp-1368h] BYREF
  void (__fastcall *v41)(__int128 *, __int128 *, __int64); // [rsp+100h] [rbp-1358h]
  __int64 v42; // [rsp+108h] [rbp-1350h]
  _DWORD v43[84]; // [rsp+110h] [rbp-1348h] BYREF
  __int128 v44; // [rsp+260h] [rbp-11F8h] BYREF
  __m128i v45[9]; // [rsp+270h] [rbp-11E8h] BYREF
  void *v46; // [rsp+300h] [rbp-1158h]
  __int128 v47; // [rsp+308h] [rbp-1150h]
  __m128i si128; // [rsp+318h] [rbp-1140h]
  int v49; // [rsp+328h] [rbp-1130h]
  __int128 v50; // [rsp+330h] [rbp-1128h]
  void *v51[2]; // [rsp+340h] [rbp-1118h]
  __int128 v52; // [rsp+350h] [rbp-1108h]
  __int128 v53; // [rsp+360h] [rbp-10F8h]
  __int64 v54; // [rsp+370h] [rbp-10E8h]
  __int64 v55; // [rsp+378h] [rbp-10E0h]
  __int64 v56; // [rsp+380h] [rbp-10D8h]
  __int128 v57; // [rsp+388h] [rbp-10D0h]
  _BYTE v58[88]; // [rsp+398h] [rbp-10C0h] BYREF
  __int64 v59; // [rsp+3F0h] [rbp-1068h]
  char v60; // [rsp+3F8h] [rbp-1060h]
  __int16 v61; // [rsp+400h] [rbp-1058h]
  char v62; // [rsp+402h] [rbp-1056h]
  unsigned __int64 v63; // [rsp+1418h] [rbp-40h]

  v1 = haystack;
  v2 = a1->m128i_i64[0];
  v63 = __readfsqword(0x28u);
  a1[16].m128i_i8[8] = 0;
  if ( *(_QWORD *)(v2 + 32) )
    v1 = *(const char **)(v2 + 24);
  v41 = nullptr;
  memset(v43, 0, sizeof(v43));
  dest = nullptr;
  memset(v58, 0, sizeof(v58));
  v36 = nullptr;
  v38 = 0;
  v39 = 0;
  v42 = 0;
  v43[10] = 2;
  v43[24] = 2;
  v43[38] = 2;
  v43[52] = 2;
  v43[66] = 2;
  v43[80] = 2;
  v46 = nullptr;
  v49 = 64;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v59 = 0;
  v35 = 0;
  v37 = 0;
  v40 = 0;
  v44 = 0;
  v47 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2383BD0);
  v50 = 0;
  *(_OWORD *)v51 = 0;
  v52 = 0;
  v53 = 0;
  v57 = 0;
  v60 = 0;
  v61 = 256;
  v62 = 0;
  if ( (unsigned __int8)sub_70C850(&dest, v1, 0) )
  {
    v4 = a1->m128i_i64[0];
    v5 = haystack;
    if ( *(_QWORD *)(a1->m128i_i64[0] + 56) )
      v5 = *(const char **)(v4 + 48);
    free_disk_space = get_free_disk_space(v5, 0.0, 0.0);
    if ( free_disk_space < (unsigned __int64)&stru_100000 + v39 )
      sub_375320(
        (__int64)"Not enough disk space to unpack database\n(wanted: %llu, available: %llu)",
        (char *)&stru_100000 + v39,
        free_disk_space);
    if ( !BYTE2(v49) && (_BYTE)v49 != 32 )
    {
      if ( !(_BYTE)v49 )
        sub_375400();
      sub_375400();
    }
    sub_6780A0(a1->m128i_i64[0], &v44);
    v7 = haystack;
    v8 = _mm_load_si128(v45);
    a1[16].m128i_i32[1] = si128.m128i_i32[1];
    v9 = a1->m128i_i64[0];
    a1[15] = v8;
    if ( *(_QWORD *)(v9 + 56) )
      v7 = *(const char **)(v9 + 48);
    if ( (unsigned __int8)qfileexist(v7, &v44) )
    {
      v32 = 0;
      s = nullptr;
      v15 = qvector_reserve(&s, 0, 48, 1);
      s = (char *)v15;
      *(_QWORD *)&v32 = 48;
      *(__m128i *)v15 = _mm_load_si128((const __m128i *)&xmmword_2383BE0);
      v18 = s;
      *(__m128i *)(v15 + 16) = _mm_load_si128((const __m128i *)&xmmword_2383BF0);
      *(__m128i *)(v15 + 31) = _mm_load_si128((const __m128i *)&xmmword_2383C00);
      v18[47] = 0;
      v19 = a1->m128i_i64[0];
      v20 = *(char **)(a1->m128i_i64[0] + 32);
      if ( v20 )
      {
        v21 = (size_t)(v20 - 1);
        if ( v20 != (_BYTE *)&dword_0 + 1 )
        {
          v25 = v32;
          v26 = (size_t)(v20 - 1);
          if ( (_QWORD)v32 )
          {
            v25 = v32 - 1;
            v26 = v21 + v32 - 1;
            v20 += v32 - 1;
          }
          if ( *((_QWORD *)&v32 + 1) < (unsigned __int64)v20 )
          {
            src = (void *)v21;
            v29 = v26;
            v28 = v20;
            s = (char *)qvector_reserve(&s, v18, v20, 1);
            v21 = (size_t)src;
            v18 = s;
            v26 = v29;
            v20 = v28;
          }
          *(_QWORD *)&v32 = v20;
          v18[v26] = 0;
          memcpy(&s[v25], *(const void **)(v19 + 24), v21);
          v18 = s;
        }
      }
      v22 = v32;
      if ( (_QWORD)v32 )
      {
        v23 = v32 + 13;
        v24 = v32 + 14;
        v22 = v32 - 1;
      }
      else
      {
        v24 = 15;
        v23 = 14;
      }
      if ( *((_QWORD *)&v32 + 1) < v24 )
      {
        v27 = (void *)v23;
        s = (char *)qvector_reserve(&s, v18, v24, 1);
        v23 = (__int64)v27;
        v18 = s;
      }
      *(_QWORD *)&v32 = v24;
      v18[v23] = 0;
      qmemcpy(&s[v22], "\non the disk.\n", 14);
      callui(53, (int)v18, (int)&callui, v16, v23, v17);
    }
    v33[0] = 0;
    a1[16].m128i_i8[8] = 1;
    if ( (unsigned __int8)sub_70B780(&dest, v33) )
      sub_395C70((int)&unk_231D028, v1);
    goto LABEL_15;
  }
  if ( (unsigned __int8)qfileexist(v1, v1) )
    goto LABEL_15;
  v13 = a1->m128i_i64[0];
  v14 = haystack;
  if ( *(_QWORD *)(a1->m128i_i64[0] + 56) )
    v14 = *(const char **)(v13 + 48);
  if ( !(unsigned __int8)qfileexist(v14, v1) )
LABEL_15:
    sub_375400();
  sub_70A9D0(&dest);
  if ( v51[1] )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51[1]);
  }
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46);
  }
  v10 = &v43[70];
  do
  {
    v11 = *((void **)v10 + 4);
    v10 -= 14;
    close_linput(v11);
  }
  while ( (_DWORD *)((char *)&v37 + 8) != v10 );
  if ( v41 )
    v41(&v40, &v40, 3);
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  if ( dest )
  {
    *(_QWORD *)&v35 = 0;
    qfree(dest);
  }
  return 1;
}

