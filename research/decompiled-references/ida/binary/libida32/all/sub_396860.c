__int64 __fastcall sub_396860(_QWORD *a1, const char *a2, __int64 a3)
{
  unsigned int v5; // r14d
  __m128i *v6; // rsi
  __m128i si128; // xmm0
  unsigned __int8 (__fastcall *v8)(const char *, void **); // rax
  const char *v10; // rsi
  const char *v11; // rax
  const char *v12; // rdx
  const char *v13; // [rsp+8h] [rbp-4D0h]
  void *ptr; // [rsp+30h] [rbp-4A8h] BYREF
  __int128 v15; // [rsp+38h] [rbp-4A0h]
  char v16[8]; // [rsp+50h] [rbp-488h] BYREF
  __int128 v17; // [rsp+58h] [rbp-480h]
  __int64 v18; // [rsp+68h] [rbp-470h]
  char v19[8]; // [rsp+70h] [rbp-468h] BYREF
  __int128 v20; // [rsp+78h] [rbp-460h]
  __int64 v21; // [rsp+88h] [rbp-450h]
  char v22[1032]; // [rsp+90h] [rbp-448h] BYREF
  unsigned __int64 v23; // [rsp+498h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v15 = 0;
  v16[0] = 2;
  ptr = nullptr;
  v18 = 0;
  v17 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(char *, const char *, void **))(a3 + 112))(v16, a2, &ptr) )
  {
LABEL_9:
    if ( (unsigned __int64)v15 > 1 )
      sub_375400();
    free_idcv(v16);
    goto LABEL_11;
  }
  if ( v16[0] != 5 )
  {
    v6 = (__m128i *)ptr;
    if ( *((_QWORD *)&v15 + 1) <= 0x18u )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, 25, 1);
      v6 = (__m128i *)ptr;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_2383720);
    *(_QWORD *)&v15 = 25;
    v6[1].m128i_i64[0] = 0x217463656A626F20LL;
    *v6 = si128;
    *((_BYTE *)ptr + 24) = 0;
    goto LABEL_9;
  }
  v19[0] = 2;
  v20 = 0;
  v21 = 0;
  v5 = (*(__int64 (__fastcall **)(char *, char *, const char *, _QWORD, _QWORD, void **))(a3 + 104))(
         v19,
         v16,
         "get_idpdesc",
         0,
         0,
         &ptr);
  if ( !(_BYTE)v5 )
    sub_375400();
  if ( v19[0] != 7 )
  {
    free_idcv(v19);
    free_idcv(v16);
LABEL_11:
    v5 = 0;
    goto LABEL_12;
  }
  v10 = haystack;
  if ( *((_QWORD *)&v20 + 1) )
    v10 = (const char *)v20;
  qstrncpy(v22, v10, 1024);
  if ( strchr(v22, 1) )
  {
    while ( 1 )
    {
      v13 = (const char *)qstrtok(v22, (char *)&byte_2389195);
      v11 = (const char *)qstrtok(nullptr, (char *)&byte_2389195);
      if ( !v13 || !v11 )
        break;
      sub_3963A0(a1, v13, v11);
    }
  }
  else
  {
    if ( !qstrtok(v22, ":") )
      sub_375320((__int64)"Invalid processor description \"%s\" in module:\n%s", v22, a2);
    while ( 1 )
    {
      v12 = (const char *)qstrtok(nullptr, ":");
      if ( !v12 )
        break;
      sub_3963A0(a1, v22, v12);
    }
  }
  free_idcv(v19);
  free_idcv(v16);
LABEL_12:
  v8 = *(unsigned __int8 (__fastcall **)(const char *, void **))(a3 + 120);
  if ( v8 && !v8(a2, &ptr) )
    sub_375400();
  if ( ptr )
  {
    *(_QWORD *)&v15 = 0;
    qfree(ptr);
  }
  return v5;
}

