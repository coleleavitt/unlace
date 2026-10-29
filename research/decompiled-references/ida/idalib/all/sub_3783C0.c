__int64 __fastcall sub_3783C0(__int64 a1, __int64 a2, double a3, double a4, __m128 a5)
{
  __int64 v5; // r12
  __int64 v7; // rsi
  __int64 tinfo_property; // rax
  void *v9; // rdi
  __int64 v11; // [rsp+8h] [rbp-40h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __int128 v13; // [rsp+18h] [rbp-30h]
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v5 = *(_QWORD *)(a1 + 40);
  v14 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 8);
  v11 = 0;
  *(_QWORD *)(a2 + 8) = -1;
  get_type_by_tid(&v11, v7);
  tinfo_property = get_tinfo_property(v11, 310);
  if ( tinfo_property )
  {
    ptr = nullptr;
    v13 = 0;
    sub_377CC0((__int64)&ptr, tinfo_property, v5, 0.0, a4, a5);
    v9 = ptr;
    if ( (_QWORD)v13 )
      *(_QWORD *)(a2 + 8) = *(_QWORD *)ptr;
    if ( v9 )
      qfree(v9);
  }
  clear_tinfo_t(&v11);
  return 0;
}
