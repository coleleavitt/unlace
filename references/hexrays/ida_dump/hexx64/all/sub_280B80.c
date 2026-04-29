__int64 __fastcall sub_280B80(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v6; // rdi
  char tinfo_property; // al
  char v9; // al
  __int64 v11; // rdi
  __int64 v12; // rax
  char *v13; // rbx
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v15; // [rsp+8h] [rbp-40h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v6 = *a3;
  v16 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property(v6, 2);
  if ( (tinfo_property & 0x3E) != 0 && ((tinfo_property & 0xFu) <= 9 || (tinfo_property & 0x3F) == 0x2D) )
  {
    v9 = get_tinfo_property(*a4, 2);
    if ( (v9 & 0x3E) != 0 )
    {
      if ( (v9 & 0xFu) <= 9 )
        return 0;
      if ( (v9 & 0x3F) == 0x2D )
        return 0;
    }
  }
  if ( (unsigned __int8)sub_32A510(a1, a4, a3) )
    return 0;
  if ( *(_DWORD *)(a2 + 8) != 61
    || sub_255A30(*(__int64 **)(a2 + 24), (_QWORD *)(a2 + 48))
    || (get_tinfo_property(*a3, 2) & 0x2F) == 0xD )
  {
    return 1;
  }
  v11 = *(_QWORD *)(a2 + 24);
  v15 = 0;
  s1 = nullptr;
  sub_266270(v11, (__int64 *)&s1, (_QWORD *)(a2 + 48), 0, nullptr);
  v12 = v15;
  if ( (unsigned __int64)v15 > 1 )
  {
    tag_remove(&s1, s1, 0);
    v12 = v15;
  }
  v13 = s1;
  if ( !v12 || (*s1 != 48 || s1[1]) && strcmp(s1, "NULL") && strcmp(v13, "nullptr") )
  {
    if ( v13 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v13);
    }
    return 1;
  }
  if ( !v13 )
    return 0;
  *(_QWORD *)&v15 = 0;
  qfree(v13);
  return 0;
}
