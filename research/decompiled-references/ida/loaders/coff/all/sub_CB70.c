unsigned __int64 __fastcall sub_CB70(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r13
  __int64 v4; // r15
  char *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  char *v8; // r14
  size_t v9; // rax
  const char *v10; // r14
  size_t v11; // rax
  size_t v12; // r15
  size_t v13; // r13
  char *v14; // rsi
  char v15; // dl
  unsigned __int64 v16; // rax
  __m128i v17; // xmm1
  char *v18; // rax
  __m128 v19; // xmm0
  char *v20; // r13
  char *v21; // rax
  char *v22; // r14
  __int16 v23; // ax
  __int16 v24; // ax
  const char *v25; // rbx
  __int16 v26; // ax
  __int64 ash; // rax
  char *v28; // rdi
  char *v30; // rsi
  char j; // al
  char *v32; // rax
  char *v33; // rsi
  char i; // al
  __int64 v35; // [rsp-8h] [rbp-4D8h]
  char *v36; // [rsp+8h] [rbp-4C8h]
  char *s; // [rsp+10h] [rbp-4C0h] BYREF
  __int128 v38; // [rsp+18h] [rbp-4B8h]
  char *v39; // [rsp+30h] [rbp-4A0h] BYREF
  __m128i v40; // [rsp+38h] [rbp-498h] BYREF
  char *v41; // [rsp+50h] [rbp-480h] BYREF
  __m128i v42; // [rsp+58h] [rbp-478h] BYREF
  const char *v43; // [rsp+70h] [rbp-460h] BYREF
  __int128 v44; // [rsp+78h] [rbp-458h]
  char v45[1032]; // [rsp+90h] [rbp-440h] BYREF
  unsigned __int64 v46; // [rsp+498h] [rbp-38h]

  v46 = __readfsqword(0x28u);
  v38 = 0;
  s = nullptr;
  v3 = (unsigned int)(*(_DWORD *)(a2 + 12) + 2) + 1LL;
  v4 = (unsigned int)(*(_DWORD *)(a2 + 12) + 2);
  v5 = (char *)qvector_reserve(&s, 0, v3, 1);
  v6 = v38;
  s = v5;
  if ( (unsigned __int64)v38 < v3 )
  {
    do
    {
      v7 = v6;
      v5[v6++] = 0;
      v5 = s;
    }
    while ( v4 != v7 );
  }
  *(_QWORD *)&v38 = v3;
  v5[v4] = 0;
  v8 = s;
  v36 = s;
  lread(*(_QWORD *)(a1 + 8), s, *(unsigned int *)(a2 + 12));
  v8[*(unsigned int *)(a2 + 12)] = 0;
  v8[*(_DWORD *)(a2 + 12) + 1] = 0;
  v9 = strlen(v8);
  v39 = nullptr;
  v10 = &v8[v9 + 1];
  v40 = 0;
  v11 = strlen(v10);
  v12 = v11 + 1;
  v13 = v11;
  v39 = (char *)qvector_reserve(&v39, 0, v11 + 1, 1);
  v40.m128i_i64[0] = v12;
  memmove(v39, v10, v13);
  v14 = (char *)&unk_1E0EC;
  v39[v13] = 0;
  v41 = nullptr;
  v42 = 0;
  if ( v40.m128i_i64[0] )
    v14 = v39;
  v15 = idb_utf8(&v41, v14, 0xFFFFFFFFLL, 0);
  v16 = v40.m128i_i64[0];
  if ( v15 )
  {
    v17 = _mm_loadu_si128(&v42);
    v18 = v41;
    v19 = _mm_loadh_ps((const double *)&v40.m128i_i64[1]);
    v41 = v39;
    v39 = v18;
    v16 = v42.m128i_i64[0];
    v40 = v17;
    v42 = (__m128i)v19;
  }
  if ( v16 <= 1 )
  {
    if ( v41 )
    {
      v42.m128i_i64[0] = 0;
      qfree(v41);
    }
    if ( v39 )
    {
      v40.m128i_i64[0] = 0;
      qfree(v39);
    }
    v28 = s;
    if ( s )
      goto LABEL_28;
  }
  else
  {
    v20 = v39;
    v21 = strrchr(v39, 46);
    v22 = v21;
    if ( v21 && !strcasecmp(v21, ".dll") )
      *v22 = 0;
    sub_BCE0(a1, 0, 0, 2, (__int64)"IMPORT", (__int64)"XTRN");
    v23 = *(_WORD *)(a2 + 18) & 0x1C;
    if ( v23 == 8 )
    {
      v33 = v36;
      for ( i = *v36; (unsigned __int8)(i - 63) <= 1u; ++v33 )
        i = v33[1];
      qstrncpy(v45, &v33[i == 95]);
    }
    else if ( (*(_WORD *)(a2 + 18) & 0x1Cu) > 8 )
    {
      if ( v23 == 12 )
      {
        v30 = v36;
        for ( j = *v36; (unsigned __int8)(j - 63) <= 1u; ++v30 )
          j = v30[1];
        qstrncpy(v45, &v30[j == 95]);
        v32 = strchr(v45, 64);
        if ( v32 )
          *v32 = 0;
      }
      else
      {
        sub_5A70((__int64)"Unknown import name type %x", *(unsigned __int16 *)(a2 + 18));
      }
    }
    else if ( v23 )
    {
      qstrncpy(v45, v36);
    }
    else
    {
      qsnprintf(v45, 1024, "%d", *(unsigned __int16 *)(a2 + 16));
    }
    v24 = *(_WORD *)(a2 + 18);
    v25 = "data";
    v26 = v24 & 3;
    if ( v26 != 1 )
    {
      v25 = "const";
      if ( v26 != 2 )
      {
        v25 = "code";
        if ( v26 )
          v25 = "unknown";
      }
    }
    create_filename_cmt();
    ash = get_ash();
    sub_5740(0, 0, (__int64)"\n%s = %s.%s %s %s", v36, v20, v45, *(const char **)(ash + 48), v25);
    v43 = nullptr;
    v44 = 0;
    if ( (int)demangle_name(&v43, v36, 104857607, 2, v35) > 0 )
      sub_5740(0, 0, (__int64)"Demangled form: %s", v43);
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v43);
    }
    if ( v41 )
    {
      v42.m128i_i64[0] = 0;
      qfree(v41);
    }
    if ( v39 )
    {
      v40.m128i_i64[0] = 0;
      qfree(v39);
    }
    v28 = s;
    if ( s )
    {
LABEL_28:
      *(_QWORD *)&v38 = 0;
      qfree(v28);
    }
  }
  return v46 - __readfsqword(0x28u);
}

