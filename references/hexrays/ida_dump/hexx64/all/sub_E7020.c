__int64 __fastcall sub_E7020(__int64 a1, __int64 a2, char a3)
{
  bool v4; // zf
  __int64 v6; // rsi
  __int64 scalar_bt; // rax
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]

  v4 = *(_QWORD *)(a2 + 8) == 0;
  v10 = __readfsqword(0x28u);
  if ( !v4 )
  {
    v6 = *(_QWORD *)a2;
    if ( (*(_BYTE *)(v6 + 72) & 2) != 0 )
      return copy_tinfo_t(a2 + 32, v6 + 64);
  }
  sub_E60E0(&v9, a1, a2, a3);
  copy_tinfo_t(a2 + 32, &v9);
  clear_tinfo_t(&v9);
  if ( !*(_BYTE *)(a2 + 32) )
  {
    scalar_bt = 25;
    if ( !a3 )
      scalar_bt = (unsigned __int8)get_scalar_bt(*(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL) + 80LL));
    v9 = scalar_bt;
    copy_tinfo_t(a2 + 32, &v9);
    clear_tinfo_t(&v9);
  }
  return v10 - __readfsqword(0x28u);
}
