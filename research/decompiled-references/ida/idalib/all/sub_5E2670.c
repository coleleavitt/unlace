__int64 __fastcall sub_5E2670(__int64 a1)
{
  __int64 v2; // rdi

  if ( !*(_QWORD *)(a1 + 48) )
    return set_qerrno(47);
  v2 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)v2 != 67 || *(_BYTE *)(v2 + 1) )
  {
    if ( strcmp((const char *)v2, "C++") )
      return set_qerrno(47);
  }
  *(_BYTE *)(a1 + 755) = 1;
  *(_QWORD *)(a1 + 216) = 0;
  return 0;
}
