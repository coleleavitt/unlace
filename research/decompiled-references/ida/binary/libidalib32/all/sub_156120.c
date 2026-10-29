__int64 __fastcall sub_156120(__int64 a1, unsigned __int64 a2, int a3, _BYTE *a4)
{
  size_t v6; // rax
  size_t v7; // rbx
  unsigned int v8; // ebp
  unsigned __int64 tinfo_by_edm_name; // rbx
  __int64 v12; // rax
  void *v13; // rdi
  size_t v14; // r12
  char v15; // dl
  __int64 (__fastcall **v16)(); // rax
  char v17; // cl
  __int64 v18; // rdi
  __int64 (__fastcall **v19)(); // rdi
  __int64 v20; // r13
  __int64 v21; // r15
  __int64 v22; // r12
  __int64 (__fastcall **v23)(); // rbx
  char *s[2]; // [rsp+0h] [rbp-C8h] BYREF
  const char *v25; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v26; // [rsp+18h] [rbp-B0h]
  void *dest; // [rsp+30h] [rbp-98h]
  __int128 v28; // [rsp+38h] [rbp-90h]
  __int64 (__fastcall **v29)(); // [rsp+50h] [rbp-78h]
  __m128i v30; // [rsp+58h] [rbp-70h]
  __int64 v31; // [rsp+68h] [rbp-60h]
  __int128 v32; // [rsp+70h] [rbp-58h]
  int v33; // [rsp+80h] [rbp-48h]
  char v34; // [rsp+84h] [rbp-44h]
  unsigned __int64 v35; // [rsp+88h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v29 = off_234340;
  v25 = nullptr;
  dest = nullptr;
  v26 = 0;
  v28 = 0;
  *(_OWORD *)s = 0;
  if ( (unsigned int)(a3 - 1) <= 6 )
  {
    v12 = extend_sign();
    v30.m128i_i64[1] = v12;
    if ( _bittest64((const __int64 *)&a2, (unsigned int)(8 * a3 - 1)) )
      v30.m128i_i64[0] = v12 & ~(-1LL << (8 * (unsigned __int8)a3));
    else
      v30.m128i_i64[0] = v12;
  }
  else
  {
    v30 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)a2);
  }
  if ( !(unsigned __int8)choose_named_type() )
    goto LABEL_15;
  if ( s[0] && (v6 = strlen(s[0]), (v7 = v6) != 0) )
  {
    v13 = dest;
    v14 = v6 + 1;
    if ( *((_QWORD *)&v28 + 1) < v6 + 1 )
    {
      dest = (void *)qvector_reserve();
      v13 = dest;
    }
    *(_QWORD *)&v28 = v14;
    memmove(v13, s[0], v7);
    *((_BYTE *)dest + v7) = 0;
  }
  else
  {
    *(_QWORD *)&v28 = 0;
  }
  if ( !(unsigned __int8)sub_14EC80((__int64)&v25, s) || !s[1] )
    goto LABEL_15;
  v8 = copy_named_type();
  if ( !v8 )
  {
    sub_92120((__int64)"ICON ERROR\nFailed to add standard enum '%s'", v25);
LABEL_15:
    v8 = 0;
    goto LABEL_16;
  }
  if ( a4 )
  {
    s[0] = nullptr;
    tinfo_by_edm_name = get_tinfo_by_edm_name();
    if ( tinfo_by_edm_name == -1 )
    {
      *a4 = 0;
    }
    else
    {
      v29 = nullptr;
      v31 = 0;
      v33 = 0;
      v34 = 0x80;
      v30 = 0;
      v32 = 0;
      get_tinfo_details();
      v15 = 0;
      if ( tinfo_by_edm_name < v30.m128i_i64[0] )
      {
        v16 = v29;
        if ( tinfo_by_edm_name )
        {
          do
          {
            v17 = v16[6] == v29[7 * tinfo_by_edm_name + 6];
            v16 += 7;
            v15 += v17;
          }
          while ( &v29[7 * tinfo_by_edm_name] != v16 );
        }
      }
      v18 = v31;
      *a4 = v15;
      if ( v18 )
      {
        *(_QWORD *)&v32 = 0;
        qfree();
      }
      v19 = v29;
      if ( v29 )
      {
        v20 = v30.m128i_i64[0];
        if ( v30.m128i_i64[0] )
        {
          v21 = 0;
          v22 = 0;
          do
          {
            v23 = &v19[v21];
            if ( v19[v21 + 3] )
            {
              v23[4] = nullptr;
              qfree();
            }
            if ( *v23 )
            {
              v23[1] = nullptr;
              qfree();
            }
            ++v22;
            v19 = v29;
            v21 += 7;
          }
          while ( v20 != v22 );
        }
        v30.m128i_i64[0] = 0;
        qfree();
      }
    }
    clear_tinfo_t();
  }
LABEL_16:
  if ( dest )
  {
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  return v8;
}

