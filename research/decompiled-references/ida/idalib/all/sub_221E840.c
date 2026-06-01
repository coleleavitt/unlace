void **__fastcall sub_221E840(void **a1, __int64 a2, unsigned int a3)
{
  std::_V2 *v3; // r14
  const char **v5; // r12
  _QWORD *v6; // rbp
  std::_V2 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  _QWORD *v11; // r13
  int v13; // r15d
  unsigned __int8 v14; // r13
  unsigned int v15; // r15d
  std::_V2 *v16; // rdi
  char **v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rdx
  const char *v21; // rsi
  __int64 v22; // r13
  unsigned int v23; // r15d
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbp
  unsigned __int64 v30; // [rsp+10h] [rbp-168h]
  char *v32; // [rsp+20h] [rbp-158h]
  __int64 v33; // [rsp+28h] [rbp-150h]
  char v34; // [rsp+38h] [rbp-140h]
  char v35; // [rsp+38h] [rbp-140h]
  __int64 v36; // [rsp+40h] [rbp-138h] BYREF
  __int64 v37; // [rsp+48h] [rbp-130h] BYREF
  std::_V2 *v38; // [rsp+50h] [rbp-128h] BYREF
  __int64 v39; // [rsp+58h] [rbp-120h]
  void *ptr; // [rsp+60h] [rbp-118h] BYREF
  __m128i si128; // [rsp+68h] [rbp-110h] BYREF
  _BYTE v42[8]; // [rsp+78h] [rbp-100h] BYREF
  void *v43[2]; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v44; // [rsp+90h] [rbp-E8h] BYREF
  _QWORD v45[2]; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 *v46; // [rsp+C0h] [rbp-B8h]
  __int16 v47; // [rsp+D0h] [rbp-A8h]
  _QWORD v48[2]; // [rsp+E0h] [rbp-98h] BYREF
  char *v49; // [rsp+F0h] [rbp-88h]
  __int16 v50; // [rsp+100h] [rbp-78h]
  void *s1; // [rsp+110h] [rbp-68h] BYREF
  size_t n; // [rsp+118h] [rbp-60h]
  _QWORD v53[2]; // [rsp+120h] [rbp-58h] BYREF
  __int16 v54; // [rsp+130h] [rbp-48h]

  v3 = (std::_V2 *)(a2 + 160);
  v5 = (const char **)(a2 + 184);
  v6 = (_QWORD *)(a2 + 192);
  v30 = a3 + *(_QWORD *)(a2 + 184) - 4LL;
  v8 = sub_2219E40((std::_V2 *)(a2 + 160), (unsigned __int64 *)(a2 + 184), (_QWORD *)(a2 + 192));
  v9 = *(_QWORD *)(a2 + 136);
  v38 = v8;
  v39 = v10;
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64, const char *, __int64, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, "SectionLength", 13, a3);
    (*(void (__fastcall **)(_QWORD, const char *, __int64, std::_V2 *, __int64))(**(_QWORD **)(a2 + 136) + 232LL))(
      *(_QWORD *)(a2 + 136),
      "Vendor",
      6,
      v38,
      v39);
  }
  sub_2246450(&s1, &v38);
  v11 = s1;
  if ( *(_QWORD *)(a2 + 16) != n )
  {
    if ( s1 != v53 )
      operator delete(s1);
LABEL_6:
    *(_QWORD *)(a2 + 184) = v30;
    *a1 = nullptr;
    return a1;
  }
  if ( n )
  {
    v13 = memcmp(s1, *(const void **)(a2 + 8), n);
    if ( v11 != v53 )
      operator delete(v11);
    if ( v13 )
      goto LABEL_6;
  }
  else if ( s1 != v53 )
  {
    operator delete(s1);
  }
  if ( v30 <= *(_QWORD *)(a2 + 184) )
  {
LABEL_36:
    *a1 = nullptr;
    return a1;
  }
  while ( 1 )
  {
    v14 = sub_2219D60(v3, v5, v6);
    v15 = sub_2219DE0(v3, v5, v6);
    if ( *(_QWORD *)(a2 + 192) )
    {
      *a1 = nullptr;
      *a1 = *(void **)(a2 + 192);
      *(_QWORD *)(a2 + 192) = 0;
      return a1;
    }
    v16 = *(std::_V2 **)(a2 + 136);
    if ( v16 )
    {
      if ( v14 == 1 )
      {
        v17 = &off_2BEACE0;
      }
      else if ( v14 == 2 )
      {
        v17 = &off_2BEAD08;
      }
      else
      {
        v17 = &off_2BEAD30;
        if ( v14 != 3 )
        {
          (*(void (__fastcall **)(std::_V2 *, char *, __int64, _QWORD))(*(_QWORD *)v16 + 336LL))(v16, "Tag", 3, v14);
LABEL_19:
          v16 = *(std::_V2 **)(a2 + 136);
          (*(void (__fastcall **)(std::_V2 *, char *, __int64, _QWORD))(*(_QWORD *)v16 + 64LL))(v16, "Size", 4, v15);
          goto LABEL_20;
        }
      }
      (*(void (__fastcall **)(std::_V2 *, char *, __int64, char *, char *, _QWORD))(*(_QWORD *)v16 + 344LL))(
        v16,
        "Tag",
        3,
        *v17,
        v17[1],
        v14);
      goto LABEL_19;
    }
LABEL_20:
    if ( v15 <= 4 )
      break;
    v32 = nullptr;
    v33 = 0;
    ptr = v42;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
    if ( v14 == 2 )
    {
      v33 = 8;
      v32 = "Sections";
      while ( 1 )
      {
        v26 = sub_2219FE0((char *)v3, (char *)v5, v6);
        if ( *(_QWORD *)(a2 + 192) || !v26 )
          break;
        v27 = si128.m128i_i64[0];
        if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
        {
          v35 = v26;
          sub_2236E10(&ptr, v42, si128.m128i_i64[0] + 1, 1);
          v27 = si128.m128i_i64[0];
          LOBYTE(v26) = v35;
        }
        *((_BYTE *)ptr + v27) = v26;
        ++si128.m128i_i64[0];
      }
      v20 = 17;
      v21 = "SectionAttributes";
      goto LABEL_29;
    }
    if ( v14 != 3 )
    {
      if ( v14 != 1 )
      {
        v18 = *(_QWORD *)(a2 + 184);
        v36 = v14;
        v50 = 770;
        v37 = v18 - 5;
        v45[0] = "unrecognized tag 0x";
        v46 = &v36;
        v47 = 3843;
        v48[0] = v45;
        v49 = " at offset 0x";
        s1 = v48;
        v54 = 3842;
        v53[0] = &v37;
        v19 = std::_V2::generic_category(v16);
        sub_2253560(v43, &s1);
        sub_22205D0(a1, v43, 22, v19);
        if ( v43[0] != &v44 )
          operator delete(v43[0]);
        goto LABEL_26;
      }
      v20 = 14;
      v21 = "FileAttributes";
LABEL_29:
      v22 = *(_QWORD *)(a2 + 136);
      v23 = v15 - 5;
      if ( v22 )
        goto LABEL_30;
      goto LABEL_48;
    }
    v33 = 7;
    v32 = "Symbols";
    while ( 1 )
    {
      v24 = sub_2219FE0((char *)v3, (char *)v5, v6);
      if ( *(_QWORD *)(a2 + 192) || !v24 )
        break;
      v25 = si128.m128i_i64[0];
      if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
      {
        v34 = v24;
        sub_2236E10(&ptr, v42, si128.m128i_i64[0] + 1, 1);
        v25 = si128.m128i_i64[0];
        LOBYTE(v24) = v34;
      }
      *((_BYTE *)ptr + v25) = v24;
      ++si128.m128i_i64[0];
    }
    v22 = *(_QWORD *)(a2 + 136);
    v20 = 16;
    v21 = "SymbolAttributes";
    v23 = v15 - 5;
    if ( v22 )
    {
LABEL_30:
      (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v22 + 248LL))(v22, v21, v20);
      if ( si128.m128i_i64[0] )
        (*(void (__fastcall **)(_QWORD, char *, __int64, void *))(**(_QWORD **)(a2 + 136) + 176LL))(
          *(_QWORD *)(a2 + 136),
          v32,
          v33,
          ptr);
      sub_221E660(&s1, a2, v23);
      if ( s1 )
      {
        *a1 = s1;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 256LL))(v22);
LABEL_26:
        if ( ptr != v42 )
          free(ptr);
        return a1;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 256LL))(v22);
      goto LABEL_34;
    }
LABEL_48:
    sub_221E660(&s1, a2, v23);
    if ( s1 )
    {
      *a1 = s1;
      goto LABEL_26;
    }
LABEL_34:
    if ( ptr == v42 )
    {
      if ( v30 <= *(_QWORD *)(a2 + 184) )
        goto LABEL_36;
    }
    else
    {
      free(ptr);
      if ( v30 <= *(_QWORD *)(a2 + 184) )
        goto LABEL_36;
    }
  }
  v28 = *(_QWORD *)(a2 + 184);
  LODWORD(v43[0]) = v15;
  v47 = 2307;
  v37 = v28 - 5;
  v45[0] = "invalid attribute size ";
  v54 = 3842;
  v46 = (__int64 *)v43[0];
  v48[0] = v45;
  v49 = " at offset 0x";
  s1 = v48;
  v50 = (unsigned __int16)&elf_gnu_hash_indexes[11] + 2;
  v53[0] = &v37;
  v29 = std::_V2::generic_category((std::_V2 *)((char *)&elf_gnu_hash_indexes[11] + 2));
  sub_2253560(&ptr, &s1);
  sub_22205D0(a1, &ptr, 22, v29);
  if ( ptr != &si128.m128i_u64[1] )
    operator delete(ptr);
  return a1;
}
