unsigned __int64 __fastcall sub_6CBF40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx

  if ( !a3 )
    return 0;
  v3 = a3 + 48;
  if ( (*(_BYTE *)(a3 + 28) & 0x7F) == 0x14 )
  {
    result = sub_79C190(v3);
    if ( !result )
      return 0;
    while ( (*(_BYTE *)(result + 28) & 0x7F) != 0xC )
    {
      v5 = *(_QWORD *)(result + 8);
      result = v5 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v5 <= 7 )
        return 0;
    }
LABEL_7:
    if ( *(_QWORD *)(result + 48) != a2 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(result + 8);
        result = v6 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v6 <= 7 )
          return 0;
        if ( (*(_BYTE *)(result + 28) & 0x7F) == 0xC )
          goto LABEL_7;
      }
    }
  }
  else
  {
    result = sub_79C190(v3);
    if ( !result )
      return 0;
    while ( (*(_BYTE *)(result + 28) & 0x7F) != 0xC )
    {
      v7 = *(_QWORD *)(result + 8);
      result = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v7 <= 7 )
        return 0;
    }
LABEL_16:
    if ( a2 != *(_QWORD *)(result + 48) )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(result + 8);
        result = v8 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v8 <= 7 )
          return 0;
        if ( (*(_BYTE *)(result + 28) & 0x7F) == 0xC )
          goto LABEL_16;
      }
    }
  }
  return result;
}

