_QWORD *__fastcall create_nodeval_merge_handler(
        __int64 *a1,
        __int64 a2,
        int a3,
        const char *a4,
        char a5,
        int a6,
        const __m128i *a7,
        char a8)
{
  __int64 *v8; // r10
  __int64 v11; // r12
  const __m128i *v12; // rbp
  __int64 v13; // r15
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  __int64 v15; // r12
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // r12
  void (__fastcall *v19)(__int128 *, const __m128i *, __int64); // rax
  __int64 i; // rbp
  __int64 v21; // rbx
  __int64 v22; // rax
  __m128i si128; // xmm1
  __int64 v24; // rdi
  size_t v25; // r15
  void *v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 (*v30)(); // rax
  bool v31; // zf
  const char *v32; // rsi
  __int64 v34; // rax
  char v35; // al
  __int64 v38; // [rsp+28h] [rbp-70h] BYREF
  __int128 v39; // [rsp+30h] [rbp-68h] BYREF
  __m128i v40; // [rsp+40h] [rbp-58h]
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]

  v8 = a1;
  v11 = a2;
  v12 = a7;
  v41 = __readfsqword(0x28u);
  if ( a4 && a8 )
  {
    v13 = *a1;
    v14 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*a1 + 16LL);
    if ( v14 == sub_454920 )
    {
      if ( *(int *)(v13 + 28) > 0 )
      {
        v15 = 0;
        while ( 1 )
        {
          v16 = switch_dbctx(*(int *)(v13 + 4 * v15 + 16));
          sub_7BEFF0(&v38, v16, a4, 0, 0);
          if ( v38 != -1 )
            break;
          if ( *(_DWORD *)(v13 + 28) <= (int)++v15 )
            return nullptr;
        }
        v11 = a2;
        v12 = a7;
        v8 = a1;
        goto LABEL_9;
      }
      return nullptr;
    }
    v35 = v14(v13, (__int64)a4);
    v8 = a1;
    if ( !v35 )
      return nullptr;
  }
LABEL_9:
  if ( !v12[1].m128i_i64[0] )
    a6 |= 0x4000u;
  v17 = sub_460AC0(v8, v11, a6);
  v40.m128i_i64[0] = 0;
  *((_DWORD *)v17 + 36) = a3;
  v18 = v17;
  v19 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))v12[1].m128i_i64[0];
  v40.m128i_i64[1] = 0;
  v39 = 0;
  if ( v19 )
  {
    v19(&v39, v12, 2);
    v40 = _mm_loadu_si128(v12 + 1);
  }
  v18[9] = 0;
  for ( i = 0; *(_DWORD *)(v18[1] + 28LL) > (int)i; *(_DWORD *)(v21 + 12) = i++ )
  {
    v21 = operator new(0x60u);
    v22 = v18[1];
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
    v24 = *(int *)(v22 + 4LL * (int)i + 16);
    *(_QWORD *)(v21 + 32) = v22;
    *(_DWORD *)(v21 + 12) = -1;
    *(_DWORD *)(v21 + 8) = v24;
    *(_QWORD *)v21 = &off_2B28A70;
    *(_QWORD *)(v21 + 40) = 0;
    *(__m128i *)(v21 + 16) = si128;
    *(_OWORD *)(v21 + 48) = 0;
    if ( a4 )
    {
      v25 = strlen(a4);
      v26 = (void *)qvector_reserve(v21 + 40, 0, v25 + 1, 1);
      *(_QWORD *)(v21 + 40) = v26;
      *(_QWORD *)(v21 + 48) = v25 + 1;
      memmove(v26, a4, v25);
      *(_BYTE *)(*(_QWORD *)(v21 + 40) + v25) = 0;
      v24 = *(int *)(v21 + 8);
    }
    *(_QWORD *)(v21 + 64) = 0;
    *(_QWORD *)(v21 + 72) = -1;
    *(_DWORD *)(v21 + 88) = a6;
    *(_QWORD *)(v21 + 80) = 0;
    *(_BYTE *)(v21 + 92) = a5;
    *(_WORD *)(v21 + 93) = 1;
    switch_dbctx(v24);
    if ( a3 != -1 )
    {
      if ( !a3 )
      {
        if ( !under_debugger )
          interr(2039);
        BUG();
      }
      *(_QWORD *)(v21 + 64) = get_module_data(a3);
    }
    if ( v40.m128i_i64[0] )
    {
      v27 = *(_QWORD *)(v21 + 32);
      LODWORD(v38) = *(_DWORD *)(v21 + 8);
      v28 = ((__int64 (__fastcall *)(__int128 *, __int64, __int64 *))v40.m128i_i64[1])(&v39, v27, &v38);
      *(_QWORD *)(v21 + 80) = v28;
      v29 = v28;
      v30 = *(__int64 (**)())(*(_QWORD *)v28 + 48LL);
      if ( v30 == sub_4541E0 )
      {
        v31 = *(_QWORD *)(v21 + 48) == 0;
        *(_QWORD *)(v21 + 72) = -1;
        v32 = haystack;
        if ( !v31 )
          goto LABEL_30;
        goto LABEL_22;
      }
      v34 = ((__int64 (__fastcall *)(__int64))v30)(v29);
      *(_QWORD *)(v21 + 72) = v34;
    }
    else
    {
      v34 = *(_QWORD *)(v21 + 72);
    }
    if ( v34 != -1 )
      goto LABEL_23;
    v32 = haystack;
    if ( *(_QWORD *)(v21 + 48) )
LABEL_30:
      v32 = *(const char **)(v21 + 40);
LABEL_22:
    netnode_check(&v38, v32, 0, 0);
    *(_QWORD *)(v21 + 72) = v38;
LABEL_23:
    v18[i + 7] = v21;
  }
  if ( v40.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v40.m128i_i64[0])(&v39, &v39, 3);
  return v18;
}
