unsigned __int64 __fastcall watchplace_t__::vfunc_0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  unsigned __int64 v3; // rax
  const char *v5; // rbp
  char v6; // al
  const char *v7; // rdx
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v3 = *(unsigned int *)(a1 + 12);
  if ( v3 < a3[1] )
  {
    v5 = *(const char **)(*a3 + 8 * v3);
    v6 = getinf_flag(48, 2);
    v8 = 0;
    v9 = 0;
    get_nice_colored_name(&v8, v5, v6 == 0 ? 2 : 10);
    sub_169A50(a2, (__int64)"%08a: %s", 0.0, v5);
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v8, "%08a: %s", 0.0, v7);
    }
  }
  return v10 - __readfsqword(0x28u);
}
