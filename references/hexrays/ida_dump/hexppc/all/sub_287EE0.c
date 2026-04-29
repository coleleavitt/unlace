unsigned __int64 __fastcall sub_287EE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r14
  int tinfo_size; // r12d
  int tinfo_property; // r15d
  bool v7; // r12
  __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 24);
  v3 = *(_QWORD *)(a2 + 32);
  v9 = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(v2 + 48), 0);
  if ( tinfo_size < (int)get_tinfo_size(0, *(_QWORD *)(v3 + 48), 0)
    || (tinfo_property = get_tinfo_property(*(_QWORD *)(v2 + 48), 3),
        (unsigned int)get_tinfo_property(*(_QWORD *)(v3 + 48), 3) != tinfo_property) )
  {
    sub_3695A0(&v8, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL), 0);
    if ( tinfo_size < (int)get_tinfo_size(0, v8, 0)
      || (v7 = (get_tinfo_property(v8, 2) & 0xF) == 9, v7 != ((get_tinfo_property(*(_QWORD *)(v2 + 48), 2) & 0xF) == 9)) )
    {
      sub_241100(*(__int64 **)(a2 + 32), v2 + 48);
    }
    clear_tinfo_t(&v8);
  }
  return v9 - __readfsqword(0x28u);
}
