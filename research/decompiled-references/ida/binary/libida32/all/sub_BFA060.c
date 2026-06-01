bool __fastcall sub_BFA060(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  bool result; // al

  v1 = *(_QWORD *)(sub_B68470(a1 + 72) + 16);
  if ( (v1 & 4) != 0 )
  {
    v2 = *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v2 )
      return 0;
  }
  else
  {
    v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v2 )
      return 0;
  }
  if ( v2 == 64 )
    return 0;
  v3 = *(_QWORD *)(v2 + 64);
  result = 0;
  if ( v3 )
  {
    if ( (*(_BYTE *)(v3 + 10) & 0x20) != 0 )
      return (unsigned int)sub_B53B50(a1) == 42;
  }
  return result;
}

