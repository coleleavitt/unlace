__int64 __fastcall sub_1ABF60(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __m128 v12; // xmm0
  __int64 v15; // rsi
  char *v16; // rbp
  size_t v17; // rax
  size_t v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // ebp
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  const char *v26; // rdx
  unsigned __int64 tinfo_by_edm_name; // rbx
  __int64 v30; // rax
  void *v31; // rdi
  size_t v32; // r12
  char v33; // dl
  __int64 (__fastcall **v34)(); // rax
  char v35; // cl
  __int64 v36; // rdi
  __int64 (__fastcall **v37)(); // rdi
  unsigned __int64 v38; // r13
  __int64 v39; // r15
  __int64 v40; // r12
  __int64 (__fastcall **v41)(); // rbx
  __int64 (__fastcall *v42)(); // rdi
  __int64 (__fastcall *v43)(); // rdi
  char *s[2]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v46; // [rsp+18h] [rbp-B0h]
  void *dest; // [rsp+30h] [rbp-98h] BYREF
  __int128 v48; // [rsp+38h] [rbp-90h]
  __int64 (__fastcall **v49)(); // [rsp+50h] [rbp-78h] BYREF
  __m128 v50; // [rsp+58h] [rbp-70h]
  __int64 v51; // [rsp+68h] [rbp-60h]
  __int128 v52; // [rsp+70h] [rbp-58h]
  int v53; // [rsp+80h] [rbp-48h]
  char v54; // [rsp+84h] [rbp-44h]
  unsigned __int64 v55; // [rsp+88h] [rbp-40h]

  v12 = 0;
  v55 = __readfsqword(0x28u);
  v49 = choose_std_enum_by_value;
  v45 = 0;
  dest = nullptr;
  v46 = 0;
  v48 = 0;
  *(_OWORD *)s = 0;
  if ( a3 - 1 <= 6 )
  {
    v30 = extend_sign(a2, a3, 1);
    v50.m128_u64[1] = v30;
    if ( _bittest64((const __int64 *)&a2, 8 * a3 - 1) )
      v50.m128_u64[0] = v30 & ~(-1LL << (8 * (unsigned __int8)a3));
    else
      v50.m128_u64[0] = v30;
  }
  else
  {
    v12 = (__m128)_mm_unpacklo_epi64((__m128i)a2, (__m128i)a2);
    v50 = v12;
  }
  v15 = 0;
  if ( !(unsigned __int8)choose_named_type(s, 0, a1, 32, &v49) )
    goto LABEL_17;
  v16 = s[0];
  if ( s[0] && (v17 = strlen(s[0]), (v18 = v17) != 0) )
  {
    v31 = dest;
    v32 = v17 + 1;
    if ( *((_QWORD *)&v48 + 1) < v17 + 1 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v32, 1);
      v31 = dest;
    }
    *(_QWORD *)&v48 = v32;
    memmove(v31, v16, v18);
    *((_BYTE *)dest + v18) = 0;
  }
  else
  {
    *(_QWORD *)&v48 = 0;
  }
  v15 = (__int64)s;
  if ( !(unsigned __int8)sub_3A6E30(&v45, s) )
    goto LABEL_17;
  v15 = (__int64)s[1];
  if ( !s[1] )
    goto LABEL_17;
  v21 = copy_named_type(0, s[1], v45);
  if ( !v21 )
  {
    v15 = v45;
    sub_169630(
      (int)"ICON ERROR\nFailed to add standard enum '%s'",
      v45,
      v19,
      v20,
      v22,
      v23,
      v12,
      a6,
      a7,
      a8,
      v24,
      v25,
      a11,
      a12,
      (char)s[0]);
LABEL_17:
    v21 = 0;
    goto LABEL_18;
  }
  if ( a4 )
  {
    s[0] = nullptr;
    v26 = &s1;
    if ( (_QWORD)v48 )
      v26 = (const char *)dest;
    v15 = 0;
    tinfo_by_edm_name = get_tinfo_by_edm_name(s, 0, v26);
    if ( tinfo_by_edm_name == -1 )
    {
      *a4 = 0;
    }
    else
    {
      v15 = 45;
      v49 = nullptr;
      v51 = 0;
      v53 = 0;
      v54 = 0x80;
      v50 = 0;
      v52 = 0;
      get_tinfo_details(s[0], 45, &v49);
      v33 = 0;
      if ( tinfo_by_edm_name < v50.m128_u64[0] )
      {
        v34 = v49;
        v15 = 56 * tinfo_by_edm_name;
        if ( tinfo_by_edm_name )
        {
          v15 += (__int64)v49;
          do
          {
            v35 = v34[6] == v49[7 * tinfo_by_edm_name + 6];
            v34 += 7;
            v33 += v35;
          }
          while ( (__int64 (__fastcall **)())v15 != v34 );
        }
      }
      v36 = v51;
      *a4 = v33;
      if ( v36 )
      {
        *(_QWORD *)&v52 = 0;
        qfree(v36, (const char *)v15);
      }
      v37 = v49;
      if ( v49 )
      {
        v38 = v50.m128_u64[0];
        if ( v50.m128_u64[0] )
        {
          v39 = 0;
          v40 = 0;
          do
          {
            v41 = &v37[v39];
            v42 = v37[v39 + 3];
            if ( v42 )
            {
              v41[4] = nullptr;
              qfree(v42, (const char *)v15);
            }
            v43 = *v41;
            if ( *v41 )
            {
              v41[1] = nullptr;
              qfree(v43, (const char *)v15);
            }
            ++v40;
            v37 = v49;
            v39 += 7;
          }
          while ( v38 != v40 );
        }
        v50.m128_u64[0] = 0;
        qfree(v37, (const char *)v15);
      }
    }
    clear_tinfo_t(s);
  }
LABEL_18:
  if ( dest )
  {
    *(_QWORD *)&v48 = 0;
    qfree(dest, (const char *)v15);
  }
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45, (const char *)v15);
  }
  return v21;
}
