_BOOL8 __fastcall sub_B70930(__int64 a1)
{
  unsigned __int64 v1; // rcx
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v1 = *(_QWORD *)v1;
  result = 0;
  if ( (*(_BYTE *)(v1 + 8) & 0x7F) == 4 && v1 != 40 )
    return (*(_BYTE *)(v1 + 10) & 1) == 0;
  return result;
}
