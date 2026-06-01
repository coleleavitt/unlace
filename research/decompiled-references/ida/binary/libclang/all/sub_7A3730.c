_BOOL8 __fastcall sub_7A3730(__int64 a1)
{
  __int64 v1; // rdx
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(a1 + 128);
  result = 0;
  if ( v1 )
  {
    if ( (*(_BYTE *)(v1 + 10) & 0x20) != 0 )
      return (*(_BYTE *)(v1 + 104) & 4) != 0;
  }
  return result;
}

