__int64 __fastcall sub_B853F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx

  result = sub_B6AC30(a1 + 48);
  if ( result )
  {
    if ( (*(_BYTE *)(result + 28) & 0x7F) == 0xE )
    {
LABEL_7:
      v4 = *(_QWORD *)(result + 56);
      if ( !v4 )
        goto LABEL_16;
      v5 = *(_QWORD *)(v4 + 40);
      v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v5 & 7) != 0 )
        v6 = 0;
      if ( a2 != v6 )
      {
LABEL_16:
        while ( 1 )
        {
          v7 = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
          result = v7;
          if ( !v7 )
            break;
          if ( (*(_BYTE *)(v7 + 28) & 0x7F) == 0xE )
            goto LABEL_7;
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v3 = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
        result = v3;
        if ( !v3 )
          break;
        if ( (*(_BYTE *)(v3 + 28) & 0x7F) == 0xE )
          goto LABEL_7;
      }
    }
  }
  return result;
}

