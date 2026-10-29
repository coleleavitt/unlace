__int64 __fastcall sub_3F1D70(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // cx
  int v4; // ecx
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int16 v8; // cx
  int v9; // ecx
  char v10; // si
  int v11; // eax

  v2 = *(_WORD *)(a1 + 24);
  if ( v2 > 0x60Bu )
    return a2;
  if ( v2 > 0x5EFu )
  {
    v7 = 1LL << ((unsigned __int8)v2 + 16);
    result = a2 + 133;
    if ( (v7 & 0xBBBB000) != 0 )
      return result;
    if ( (v7 & 0x4444000) != 0 )
    {
      result = a2 + 81;
      if ( (__int16)a2 >= 16 )
        return a2 + 101;
      return result;
    }
    if ( (v7 & 3) != 0 )
      goto LABEL_21;
    return a2;
  }
  if ( v2 > 0x3E4u )
  {
    v8 = v2 - 1469;
    if ( v8 <= 0x32u )
    {
      if ( ((1LL << v8) & 0x200000000000DLL) != 0 )
        goto LABEL_21;
      if ( ((1LL << v8) & 0x4000000000002LL) != 0 )
      {
        v4 = *(_DWORD *)(a1 + 28) & 0x10000;
        if ( (__int16)a2 > 15 )
        {
LABEL_10:
          v5 = 85;
          if ( v4 )
          {
            if ( *(char *)(a1 + 33) >= 0 )
              v5 = (*(_BYTE *)(a1 + 273) & 2) == 0 ? 85 : 101;
          }
          return a2 + v5;
        }
LABEL_30:
        v5 = 64;
        if ( v4 && *(char *)(a1 + 33) >= 0 )
          v5 = (*(_BYTE *)(a1 + 273) & 2) == 0 ? 64 : 81;
        return a2 + v5;
      }
    }
    return a2;
  }
  if ( v2 > 0x3E2u )
    goto LABEL_21;
  if ( v2 <= 0x378u )
  {
    if ( v2 <= 0x376u && v2 != 885 )
    {
      if ( v2 == 886 )
        goto LABEL_9;
      return a2;
    }
LABEL_21:
    v9 = *(_DWORD *)(a1 + 28);
    v10 = *(_BYTE *)(a1 + 33);
    v11 = v9 & 0x10000;
    if ( (__int16)a2 <= 15 )
    {
      if ( v11 )
      {
        if ( v10 < 0 )
        {
          v5 = 81;
          if ( (v9 & 0x24000) == 0 )
            v5 = (*(_BYTE *)(a1 + 273) & 2) == 0 ? 81 : 64;
        }
        else
        {
          v5 = (*(_BYTE *)(a1 + 273) & 2) == 0 ? 0xFFFFFFBB : 0;
          LOWORD(v5) = (*(_BYTE *)(a1 + 273) & 2) == 0 ? 64 : 133;
        }
      }
      else
      {
        v5 = 64;
        if ( v10 < 0 )
        {
          v5 = 81;
          if ( (v9 & 0x24000) == 0 )
            v5 = 64;
        }
      }
    }
    else if ( v11 )
    {
      if ( v10 < 0 )
      {
        v5 = 101;
        if ( (v9 & 0x24000) == 0 )
          v5 = (*(_BYTE *)(a1 + 273) & 2) == 0 ? 101 : 85;
      }
      else
      {
        v5 = (*(_BYTE *)(a1 + 273) & 2) == 0 ? 0xFFFFFFD0 : 0;
        LOWORD(v5) = (*(_BYTE *)(a1 + 273) & 2) == 0 ? 85 : 133;
      }
    }
    else
    {
      v5 = 85;
      if ( v10 < 0 )
        v5 = (v9 & 0x24000) == 0 ? 85 : 101;
    }
    return a2 + v5;
  }
  if ( v2 == 993 )
    goto LABEL_21;
  if ( v2 == 994 )
  {
LABEL_9:
    v4 = *(_DWORD *)(a1 + 28) & 0x10000;
    if ( (__int16)a2 > 15 )
      goto LABEL_10;
    goto LABEL_30;
  }
  return a2;
}
