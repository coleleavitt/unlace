__int64 __fastcall sub_5EA6A0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax

  if ( (*(_BYTE *)(a2 + 186) & 0x3F) != 0x2D )
    return 0;
  v3 = *(__int64 **)(a2 + 48);
  if ( !v3 )
    return 0;
  v4 = sub_414D20(*(_QWORD *)(a2 + 48));
  if ( !v4 )
  {
    v4 = sub_414F40(v3, a2, v5, v6, v7, v8);
    if ( !v4 )
      return 0;
  }
  v9 = tinfo_errstr(v4);
  set_error_string(0, v9);
  return set_qerrno(1753);
}
