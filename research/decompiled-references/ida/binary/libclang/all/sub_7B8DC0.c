unsigned __int64 __fastcall sub_7B8DC0(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx

  result = sub_79C190(a1 + 48);
  if ( result )
  {
    while ( (*(_BYTE *)(result + 28) & 0x7F) != 0xC )
    {
      v3 = *(_QWORD *)(result + 8);
      result = v3 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v3 <= 7 )
        return 0;
    }
LABEL_5:
    v4 = *(_QWORD *)(result + 56);
    if ( !v4 )
      goto LABEL_15;
    v5 = *(_QWORD *)(v4 + 40);
    v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v5 & 7) != 0 )
      v6 = 0;
    if ( a2 != v6 )
    {
LABEL_15:
      while ( 1 )
      {
        v7 = *(_QWORD *)(result + 8);
        result = v7 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v7 <= 7 )
          return 0;
        if ( (*(_BYTE *)(result + 28) & 0x7F) == 0xC )
          goto LABEL_5;
      }
    }
  }
  return result;
}

