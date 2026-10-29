unsigned __int64 __fastcall sub_B83520(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 result; // rax
  char v5; // si
  __int64 v6; // rdx
  char v7; // si
  __int64 v8; // rdx

  v3 = a2 + 48;
  if ( !**(_BYTE **)a1 )
  {
    result = sub_B6AC30(v3);
    if ( result )
    {
      if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x4B )
        goto LABEL_13;
      while ( 1 )
      {
        result = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !result )
          break;
        if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x4B )
        {
LABEL_13:
          if ( (*(_BYTE *)(result + 73) & 0x40) != 0 )
          {
            v5 = **(_BYTE **)(a1 + 8);
            if ( v5 )
LABEL_15:
              v6 = *(_QWORD *)(result + 80);
            else
LABEL_21:
              v6 = *(_QWORD *)(result + 88);
            if ( v6 != **(_QWORD **)(a1 + 16) )
            {
              while ( 1 )
              {
                result = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
                if ( !result )
                  return 0;
                if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x4B && (*(_BYTE *)(result + 73) & 0x40) != 0 )
                {
                  if ( v5 )
                    goto LABEL_15;
                  goto LABEL_21;
                }
              }
            }
            return result;
          }
        }
      }
    }
    return 0;
  }
  result = sub_B6AC30(v3);
  if ( !result )
    return 0;
  while ( (*(_BYTE *)(result + 28) & 0x7F) != 0x4B || (*(_BYTE *)(result + 73) & 0x40) != 0 )
  {
    result = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !result )
      return 0;
  }
  v7 = **(_BYTE **)(a1 + 8);
  if ( v7 )
LABEL_23:
    v8 = *(_QWORD *)(result + 80);
  else
LABEL_29:
    v8 = *(_QWORD *)(result + 88);
  if ( v8 != **(_QWORD **)(a1 + 16) )
  {
    while ( 1 )
    {
      result = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !result )
        return 0;
      if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x4B && (*(_BYTE *)(result + 73) & 0x40) == 0 )
      {
        if ( v7 )
          goto LABEL_23;
        goto LABEL_29;
      }
    }
  }
  return result;
}

