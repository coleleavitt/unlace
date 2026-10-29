unsigned __int64 __fastcall sub_7B4220(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax
  __int64 v4; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rdx
  char v7; // si
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  char v11; // si
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx

  v2 = *(_BYTE **)a1;
  v4 = a2 + 48;
  if ( *v2 )
  {
    result = sub_79C190(v4);
    if ( !result )
      return 0;
    while ( (*(_BYTE *)(result + 28) & 0x7F) != 0x49 || (*(_BYTE *)(result + 73) & 0x40) != 0 )
    {
      v6 = *(_QWORD *)(result + 8);
      result = v6 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v6 <= 7 )
        return 0;
    }
    v7 = **(_BYTE **)(a1 + 8);
    if ( v7 )
LABEL_10:
      v8 = *(_QWORD *)(result + 80);
    else
LABEL_16:
      v8 = *(_QWORD *)(result + 88);
    if ( **(_QWORD **)(a1 + 16) != v8 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(result + 8);
        result = v9 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v9 <= 7 )
          return 0;
        if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x49 && (*(_BYTE *)(result + 73) & 0x40) == 0 )
        {
          if ( v7 )
            goto LABEL_10;
          goto LABEL_16;
        }
      }
    }
  }
  else
  {
    result = sub_79C190(v4);
    if ( !result )
      return 0;
    while ( (*(_BYTE *)(result + 28) & 0x7F) != 0x49 || (*(_BYTE *)(result + 73) & 0x40) == 0 )
    {
      v10 = *(_QWORD *)(result + 8);
      result = v10 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v10 <= 7 )
        return 0;
    }
    v11 = **(_BYTE **)(a1 + 8);
    if ( v11 )
LABEL_23:
      v12 = *(_QWORD *)(result + 80);
    else
LABEL_29:
      v12 = *(_QWORD *)(result + 88);
    if ( **(_QWORD **)(a1 + 16) != v12 )
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(result + 8);
        result = v13 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v13 <= 7 )
          return 0;
        if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x49 && (*(_BYTE *)(result + 73) & 0x40) != 0 )
        {
          if ( v11 )
            goto LABEL_23;
          goto LABEL_29;
        }
      }
    }
  }
  return result;
}

