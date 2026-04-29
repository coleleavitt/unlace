__int64 __fastcall sub_37B10(__int64 a1, __int64 a2, int a3, void *a4, int a5, __int32 a6)
{
  int v9; // ecx
  unsigned int v10; // ebx
  int v11; // r8d
  int v12; // r9d
  const char *v13; // r15
  __int64 flags; // rcx
  int v16; // r8d
  int v17; // r9d
  const char *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  const char *v21; // rsi
  const char *v22; // rsi
  const char *v23; // rsi
  void *v24; // rdx
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  __int64 v27; // rdx
  _BYTE *v28; // rsi
  __int64 v29; // r13
  size_t v30; // r14
  __m128i v31; // [rsp+0h] [rbp-C8h] BYREF
  void *v32; // [rsp+10h] [rbp-B8h]
  __int64 v33; // [rsp+18h] [rbp-B0h]
  const char *v34; // [rsp+28h] [rbp-A0h] BYREF
  const char *v35; // [rsp+30h] [rbp-98h] BYREF
  __int128 v36; // [rsp+38h] [rbp-90h]
  void *v37; // [rsp+50h] [rbp-78h] BYREF
  __m128i v38; // [rsp+58h] [rbp-70h]
  void *src; // [rsp+70h] [rbp-58h] BYREF
  __m128i v40; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v41; // [rsp+88h] [rbp-40h]

  v32 = a4;
  v31.m128i_i32[0] = a6;
  v41 = __readfsqword(0x28u);
  v10 = sub_1D300(a1, &v34, a2);
  if ( !(_BYTE)v10 )
    return v10;
  v13 = v34;
  if ( v34 == (const char *)-1LL || (*(_BYTE *)(*(_QWORD *)a1 + 12LL) & 8) == 0 )
  {
    flags = get_flags_ex(v34, 4);
    if ( a3 == 5 )
      goto LABEL_20;
    if ( (unsigned int)(a3 - 9) > 1 )
      return v10;
  }
  else
  {
    if ( (unsigned int)(a3 - 9) > 1 )
    {
      LODWORD(flags) = get_flags_ex(v34, 4);
      if ( a3 != 5 )
        return v10;
LABEL_20:
      src = 0;
      v40 = 0;
      if ( (flags & 0x600) != 0x400 || (flags & 0xF0000000) != 0x50000000 )
        return v10;
      v22 = v13;
      if ( get_ea_name(&src, v13, 0, 0) <= 0 )
        goto LABEL_23;
      v27 = v40.m128i_i64[0];
      v28 = src;
      if ( v40.m128i_i64[0] )
      {
        v29 = v40.m128i_i64[0] + 1;
        v30 = v40.m128i_i64[0] - 1;
        if ( v40.m128i_i64[1] >= (unsigned __int64)(v40.m128i_i64[0] + 1) )
          goto LABEL_39;
      }
      else
      {
        if ( v40.m128i_i64[1] > 1uLL )
        {
          v40.m128i_i64[0] = 2;
          *((_BYTE *)src + 1) = 0;
LABEL_41:
          *(_BYTE *)src = 112;
          v22 = (const char *)src;
          set_name(a2, src, 1281);
LABEL_23:
          if ( src )
          {
            v40.m128i_i64[0] = 0;
            qfree(src, v22);
          }
          return v10;
        }
        v30 = 0;
        v29 = 2;
      }
      src = (void *)qvector_reserve(&src, src, v29, 1);
      v28 = src;
      v27 = v30 + 1;
LABEL_39:
      v40.m128i_i64[0] = v29;
      v28[v27] = 0;
      if ( v30 )
        memmove((char *)src + 1, src, v30);
      goto LABEL_41;
    }
    v13 = (const char *)((unsigned __int64)v34 & 0xFFFFFFFFFFFFFFFELL);
    sub_1A010(87, (_DWORD)v34, (unsigned __int8)v34 & 1, v9, v11, v12, v31.m128i_i8[0]);
    v34 = v13;
    flags = get_flags_ex(v13, 4);
  }
  v35 = 0;
  v36 = 0;
  if ( a3 != 9 )
  {
    v31.m128i_i64[0] = flags;
    v18 = "TermFunc_%d";
    sub_35470((unsigned int)&v35, (unsigned int)"TermFunc_%d", a5, flags, v16, v17);
    v20 = v31.m128i_i64[0];
    goto LABEL_11;
  }
  v33 = flags;
  v18 = "InitFunc_%d";
  sub_35470((unsigned int)&v35, (unsigned int)"InitFunc_%d", a5, flags, v16, v17);
  v20 = v33;
  if ( v31.m128i_i8[0] )
  {
    v37 = 0;
    v38 = 0;
    if ( (v33 & 0x4000) == 0 || (get_ea_name(&v37, v13, 0, 0), v38.m128i_i64[0] <= 1uLL) )
    {
      v23 = v35;
      sub_18920(&src, v35, v32);
      v24 = src;
      src = 0;
      v25 = _mm_loadu_si128(&v40);
      v40 = 0;
      if ( !v37 )
      {
        v37 = v24;
        v38 = v25;
LABEL_32:
        v18 = v13;
        add_entry(v13, v13, v24, 1, 1);
        if ( v37 )
        {
          v38.m128i_i64[0] = 0;
          qfree(v37, v13);
        }
        goto LABEL_18;
      }
      v32 = v24;
      v31 = v25;
      v38.m128i_i64[0] = 0;
      qfree(v37, v23);
      v24 = v32;
      v26 = _mm_load_si128(&v31);
      v37 = v32;
      v38 = v26;
      if ( !src )
        goto LABEL_32;
      v40.m128i_i64[0] = 0;
      qfree(src, v23);
    }
    v24 = v37;
    goto LABEL_32;
  }
LABEL_11:
  BYTE1(v20) &= 0x40u;
  if ( !BYTE1(v20) )
  {
    v21 = s1;
    if ( (_QWORD)v36 )
      v21 = v35;
    sub_18920(&src, v21, v32);
    v18 = s1;
    if ( v40.m128i_i64[0] )
      v18 = (const char *)src;
    set_name(v13, v18, 1281);
    if ( src )
    {
      v40.m128i_i64[0] = 0;
      qfree(src, v18);
    }
  }
LABEL_18:
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35, v18, v19, v20);
  }
  return v10;
}
