unsigned __int64 __fastcall sub_1654A20(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx

  result = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    result = *(_QWORD *)result;
  if ( (*(_BYTE *)(result + 8) & 0x7F) != 0x3E )
  {
LABEL_4:
    result -= 64LL;
    if ( (*(_BYTE *)(result + 75) & 1) != 0 )
      goto LABEL_5;
    return result;
  }
  v4 = *(_QWORD *)(result - 48);
  result = v4 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v4 & 4) != 0 )
  {
    result = *(_QWORD *)result;
    if ( result )
      goto LABEL_4;
  }
  else if ( result )
  {
    goto LABEL_4;
  }
  if ( (*(_BYTE *)(result + 75) & 1) != 0 )
  {
    while ( 1 )
    {
LABEL_5:
      v2 = *(_QWORD *)(result + 16);
      v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v2 & 4) != 0 )
        v3 = *(_QWORD *)v3;
      if ( !v3 )
        break;
      result = v3 - 64;
      if ( (*(_BYTE *)(v3 + 11) & 1) == 0 )
        return result;
    }
    return 0;
  }
  return result;
}
