bool __fastcall sub_1A0A5D0(__int64 **a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  bool result; // al
  __int64 v5; // rbp

  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 60 > 1 )
    return 1;
  v2 = **a1;
  v3 = sub_BBF290(a2);
  result = v3 == 0 || v2 == 0;
  if ( result )
    return 1;
  if ( v2 != v3 )
  {
    v5 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 32LL))(v3);
    return v5 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  }
  return result;
}
