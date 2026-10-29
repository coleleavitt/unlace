unsigned __int64 __fastcall sub_49D110(__int64 *a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 (*v5)(void); // rax
  unsigned __int64 *v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rbx
  bool v10; // zf
  const char *v11; // rax
  void *v12; // rax
  void *ptr; // [rsp+0h] [rbp-60h] BYREF
  __m128i v14; // [rsp+8h] [rbp-58h]
  void *v15; // [rsp+20h] [rbp-40h] BYREF
  __m128i v16; // [rsp+28h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-28h]

  v3 = *a1;
  v17 = __readfsqword(0x28u);
  v5 = *(__int64 (**)(void))(v3 + 32);
  if ( (char *)v5 == (char *)sub_3DB7B0 )
    v6 = (unsigned __int64 *)(a1 + 2);
  else
    v6 = (unsigned __int64 *)v5();
  if ( a3 < *v6 )
    return v17 - __readfsqword(0x28u);
  if ( a3 >= v6[1] )
    return v17 - __readfsqword(0x28u);
  if ( a3 != (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, _QWORD))(*a1 + 40))(a1, a3, 0) )
    return v17 - __readfsqword(0x28u);
  v8 = 184 * a3;
  if ( !*(_BYTE *)(a1[5] + v8 + 176) )
    return v17 - __readfsqword(0x28u);
  switch_dbctx(*((int *)a1 + 2));
  v9 = a1[5] + v8;
  if ( *(_BYTE *)(v9 + 64) )
  {
    v10 = *(_QWORD *)(v9 + 24) == 0;
    v15 = nullptr;
    v16 = 0;
    v11 = haystack;
    if ( !v10 )
      v11 = *(const char **)(v9 + 16);
    print_tinfo((unsigned int)&v15, 0, 0, 0, 0, v9 + 64, (__int64)v11, 0);
    if ( !*((_BYTE *)a1 + 123) )
      sub_35A910((__int64 *)&v15);
    v12 = v15;
    v14 = _mm_loadu_si128(&v16);
  }
  else
  {
    ptr = nullptr;
    v14 = 0;
    sub_493230(&ptr, v9 + 16);
    v12 = ptr;
  }
  ptr = v12;
  sub_4790E0(a2, (unsigned __int64)&ptr);
  if ( ptr )
    qfree(ptr);
  return sub_49AEB0(a2, v9);
}
