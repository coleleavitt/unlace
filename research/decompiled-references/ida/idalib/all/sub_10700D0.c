__int64 __fastcall sub_10700D0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // ebp
  bool v5; // r10
  bool v6; // r8
  char v7; // r11
  __int64 result; // rax
  bool v9; // cl
  char v10; // r9
  char v11; // dl
  char v12; // r8
  int v13; // r9d
  char v14; // cl
  unsigned int v15; // edi

  v5 = a3 != 9;
  v6 = a3 != 5;
  if ( a3 == 3 )
  {
    if ( *(_WORD *)a2 == 29281 && *(_BYTE *)(a2 + 2) == 109 )
    {
      v7 = *(_BYTE *)(a1 + 629);
      result = 1;
      v9 = 0;
      v10 = v7 & 4;
    }
    else
    {
      v7 = *(_BYTE *)(a1 + 629);
      result = 0;
      v9 = 0;
      v10 = v7 & 4;
    }
  }
  else if ( a3 == 7 )
  {
    if ( *(_DWORD *)a2 == 1668440417 && *(_WORD *)(a2 + 4) == 13160 && *(_BYTE *)(a2 + 6) == 50 )
    {
      v7 = *(_BYTE *)(a1 + 629);
      v9 = 1;
      result = 1;
      v10 = v7 & 4;
    }
    else
    {
      v7 = *(_BYTE *)(a1 + 629);
      v9 = 1;
      result = 0;
      v10 = v7 & 4;
    }
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 629);
    v10 = v7 & 4;
    if ( a3 == 9 )
    {
      if ( *(_QWORD *)a2 == 0x616F6C6674666F73LL && *(_BYTE *)(a2 + 8) == 116 )
      {
        v9 = 1;
        result = 1;
        LOBYTE(v3) = v10 != 0;
        LOBYTE(v4) = v10 == 0;
      }
      else
      {
        result = 0;
        v9 = 1;
        LOBYTE(v4) = v10 == 0;
        v3 = 1;
      }
LABEL_8:
      v11 = *(_BYTE *)(a1 + 628);
      if ( v9 | (unsigned __int8)result )
        goto LABEL_9;
      goto LABEL_20;
    }
    v9 = a3 != 3;
    if ( a3 == 5 )
    {
      if ( *(_DWORD *)a2 == 1836410996 && *(_BYTE *)(a2 + 4) == 98 )
      {
        v11 = *(_BYTE *)(a1 + 628);
        result = 1;
        LOBYTE(v3) = *(_DWORD *)(a1 + 612) == 2;
        goto LABEL_9;
      }
      v3 = 1;
      v11 = *(_BYTE *)(a1 + 628);
      LOBYTE(v4) = v10 == 0;
      result = 0;
      if ( v9 )
      {
LABEL_9:
        v12 = result | v6;
LABEL_10:
        v13 = v7 & 3;
        if ( v12 )
          goto LABEL_11;
        if ( *(_DWORD *)a2 == 1768191848 && *(_BYTE *)(a2 + 4) == 118 )
        {
          v14 = 1;
          result = 1;
          v3 = v7 & 1;
LABEL_13:
          if ( *(_DWORD *)(a1 + 616) != 36 )
            goto LABEL_14;
          goto LABEL_25;
        }
LABEL_12:
        v14 = result | v9;
        goto LABEL_13;
      }
LABEL_20:
      if ( *(_WORD *)a2 == 26230 && *(_BYTE *)(a2 + 2) == 112 )
      {
        result = 1;
        LOBYTE(v3) = (v11 & 0x1F) != 0;
        v3 &= v4;
        goto LABEL_12;
      }
      v13 = v7 & 3;
      if ( !((unsigned __int8)result | v5) )
        goto LABEL_22;
      goto LABEL_12;
    }
    result = 0;
  }
  v3 = 1;
  LOBYTE(v4) = v10 == 0;
  if ( (unsigned __int8)result | (a3 != 4) )
    goto LABEL_8;
  v12 = result | v6;
  v11 = *(_BYTE *)(a1 + 628);
  if ( *(_DWORD *)a2 != 1852794222 )
    goto LABEL_10;
  result = 1;
  v13 = v7 & 3;
  v3 = (unsigned __int8)v4 & ((unsigned __int8)(*(_BYTE *)(a1 + 628) & 0x1F) >> 3);
LABEL_11:
  if ( (unsigned __int8)result | v5 )
    goto LABEL_12;
LABEL_22:
  if ( *(_QWORD *)a2 == 0x72612D7669647768LL && *(_BYTE *)(a2 + 8) == 109 )
  {
    v3 = v13;
    LOBYTE(v3) = (unsigned __int8)v13 >> 1;
    if ( *(_DWORD *)(a1 + 616) != 36 )
      return v3;
    result = 1;
    v14 = v9 | 1;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 616) != 36 )
      goto LABEL_15;
    v14 = result | v9;
  }
LABEL_25:
  v15 = 1;
  if ( (v11 & 0x60) != 0 )
  {
    if ( !v14 )
      goto LABEL_27;
LABEL_15:
    if ( !(_BYTE)result )
      return result;
    return v3;
  }
LABEL_14:
  v15 = 0;
  if ( v14 )
    goto LABEL_15;
LABEL_27:
  if ( *(_WORD *)a2 != 30317 )
    return 0;
  result = v15;
  if ( *(_BYTE *)(a2 + 2) != 101 )
    return 0;
  return result;
}
