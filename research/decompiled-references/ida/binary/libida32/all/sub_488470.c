unsigned __int64 __fastcall sub_488470(__int64 *a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 (*v5)(void); // rax
  unsigned __int64 *v6; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r14
  bool v11; // zf
  int v12; // r9d
  const char *v13; // rax
  void *v14; // rax
  void *ptr; // [rsp+0h] [rbp-60h] BYREF
  __m128i v16; // [rsp+8h] [rbp-58h]
  void *v17; // [rsp+20h] [rbp-40h] BYREF
  __m128i v18; // [rsp+28h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-28h]

  v3 = *a1;
  v19 = __readfsqword(0x28u);
  v5 = *(__int64 (**)(void))(v3 + 32);
  if ( (char *)v5 == (char *)sub_3D58E0 )
    v6 = (unsigned __int64 *)(a1 + 2);
  else
    v6 = (unsigned __int64 *)v5();
  if ( a3 < *v6 )
    return v19 - __readfsqword(0x28u);
  if ( a3 >= v6[1] )
    return v19 - __readfsqword(0x28u);
  if ( a3 != (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, _QWORD))(*a1 + 40))(a1, a3, 0) )
    return v19 - __readfsqword(0x28u);
  v8 = 160 * a3;
  if ( !*(_BYTE *)(a1[5] + v8 + 156) )
    return v19 - __readfsqword(0x28u);
  switch_dbctx(*((int *)a1 + 2));
  v9 = v8 + a1[5];
  v10 = v9;
  if ( *(_BYTE *)(v9 + 64) )
  {
    v11 = *(_QWORD *)(v9 + 24) == 0;
    v12 = v9 + 64;
    v17 = nullptr;
    v18 = 0;
    v13 = haystack;
    if ( !v11 )
      v13 = *(const char **)(v10 + 16);
    print_tinfo((int)&v17, 0, 0, 0, 0, v12, (__int64)v13, 0);
    if ( !*((_BYTE *)a1 + 123) )
      sub_357520((__int64 *)&v17);
    v14 = v17;
    v16 = _mm_loadu_si128(&v18);
  }
  else
  {
    ptr = nullptr;
    v16 = 0;
    sub_47E730(&ptr, v9 + 16);
    v14 = ptr;
  }
  ptr = v14;
  sub_464BE0(a2, (unsigned __int64)&ptr);
  if ( ptr )
    qfree(ptr);
  return sub_486220(a2, v10);
}

