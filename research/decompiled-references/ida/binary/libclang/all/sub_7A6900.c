bool __fastcall sub_7A6900(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  bool result; // al
  __int64 v5; // rax
  __int64 v6; // rbx
  char v7; // dl
  __int64 v8; // rax

  v3 = a2;
  if ( !a2 )
  {
    v3 = a1[21];
    if ( !v3 )
      return 1;
  }
  if ( !sub_77F690(v3) )
    return 1;
  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
  v6 = v5;
  if ( (*(_BYTE *)(v5 + 82) & 0xC) != 0 )
    return 1;
  v7 = *(_BYTE *)(v5 + 28);
  result = 0;
  if ( (v7 & 0x7F) != 0x24 )
  {
    v8 = sub_798D40(v6);
    return (unsigned int)sub_6BE4E0(v8, v6) != 0;
  }
  return result;
}

