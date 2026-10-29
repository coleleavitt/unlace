unsigned __int64 __fastcall sub_6BFB00(_QWORD *a1, __int64 a2)
{
  size_t v2; // rbp
  __int64 *v3; // r12
  __int64 v4; // rax
  const char *v5; // rsi
  size_t v6; // rbp
  __int64 v7; // rax
  const char *v8; // rsi
  const char *v9; // rdx
  const char *v10; // rsi
  void *v12; // rax
  const void *v13; // rsi
  void *v14; // rax
  const void *v15; // rsi
  void *v16; // [rsp+0h] [rbp-58h] BYREF
  __int128 v17; // [rsp+8h] [rbp-50h]
  void *ptr; // [rsp+20h] [rbp-38h] BYREF
  __int128 v19; // [rsp+28h] [rbp-30h]
  unsigned __int64 v20; // [rsp+38h] [rbp-20h]

  v2 = a1[5];
  v3 = *(__int64 **)(a2 + 1672);
  v20 = __readfsqword(0x28u);
  v16 = nullptr;
  v17 = 0;
  if ( v2 )
  {
    v12 = (void *)qalloc_or_throw(v2);
    v13 = (const void *)a1[4];
    *((_QWORD *)&v17 + 1) = v2;
    v16 = v12;
    memcpy(v12, v13, v2);
    *(_QWORD *)&v17 = v2;
  }
  v4 = a1[9];
  v5 = haystack;
  if ( *(_QWORD *)(v4 + 24) )
    v5 = *(const char **)(v4 + 16);
  sub_6BCB20((__int64 *)&v16, v5);
  v6 = a1[5];
  ptr = nullptr;
  v19 = 0;
  if ( v6 )
  {
    v14 = (void *)qalloc_or_throw(v6);
    v15 = (const void *)a1[4];
    ptr = v14;
    *((_QWORD *)&v19 + 1) = v6;
    memcpy(v14, v15, v6);
    *(_QWORD *)&v19 = v6;
  }
  v7 = a1[12];
  v8 = haystack;
  if ( *(_QWORD *)(v7 + 24) )
    v8 = *(const char **)(v7 + 16);
  sub_6BCB20((__int64 *)&ptr, v8);
  v9 = haystack;
  if ( (_QWORD)v19 )
    v9 = (const char *)ptr;
  v10 = haystack;
  if ( (_QWORD)v17 )
    v10 = (const char *)v16;
  sub_6BF450(v3, v10, v9, 0xFFFFFFFFFFFFFFFFLL);
  if ( ptr )
  {
    *(_QWORD *)&v19 = 0;
    qfree(ptr);
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  return v20 - __readfsqword(0x28u);
}
