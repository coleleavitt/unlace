bool __fastcall sub_BBDA50(__int64 a1, __int64 a2, unsigned int a3)
{
  bool result; // al
  __int64 v4; // rcx

  if ( !a2 )
    return 1;
  result = 1;
  if ( a3 < (*(_DWORD *)(a2 + 20) & 0x1FFFFFFFu) && (*(_BYTE *)(a1 + 5) & 8) == 0 )
  {
    result = 0;
    v4 = *(_QWORD *)(a2 + 8LL * a3 + 24);
    if ( (*(_BYTE *)(v4 + 28) & 0x7F) == 0x2F )
      return sub_F57E80(*(_QWORD *)(*(_QWORD *)(v4 + 48) & 0xFFFFFFFFFFFFFFF0LL)) != 0;
  }
  return result;
}
