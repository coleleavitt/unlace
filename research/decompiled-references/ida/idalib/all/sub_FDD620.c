__int64 __fastcall sub_FDD620(__int64 a1, int a2)
{
  char v2; // r9
  char v3; // r10
  char v4; // bp
  char v5; // r11
  __int64 result; // rax
  unsigned int v7; // edx
  int v8; // ecx

  if ( a2 == 469755903 )
    return 4;
  if ( (*(_BYTE *)(a1 + 47) & 0x20) != 0 && (a2 & 0x1000) != 0 )
    return 1;
  v2 = *(_BYTE *)a1;
  if ( (*(_BYTE *)a1 & 0x20) == 0 || (a2 & 0x800) == 0 )
  {
    v3 = *(_BYTE *)(a1 + 1);
    v4 = v3 & 1;
    if ( a2 )
      goto LABEL_8;
    return 1;
  }
  if ( *(_DWORD *)(a1 + 152) <= 0xB532B7Fu )
    return 1;
  v3 = *(_BYTE *)(a1 + 1);
  v4 = v3 & 1;
LABEL_8:
  v5 = v3 & 8;
  result = 0;
  do
  {
    v7 = a2 & -a2;
    a2 &= ~v7;
    if ( v7 == 0x4000 )
    {
      if ( (*(_BYTE *)(a1 + 3) & 8) == 0 )
        continue;
LABEL_29:
      v8 = 4;
      v7 = 4;
      goto LABEL_30;
    }
    if ( v7 > 0x4000 )
    {
      if ( v7 == (_DWORD)&stru_200000 )
      {
        if ( (*(_BYTE *)(a1 + 52) & 1) == 0 )
          continue;
        goto LABEL_29;
      }
      if ( v7 <= (unsigned int)&stru_200000 )
      {
        if ( v7 == (_DWORD)&stru_20000 )
        {
          if ( (*(_BYTE *)(a1 + 13) & 4) == 0 )
            continue;
          goto LABEL_29;
        }
        if ( v7 <= (unsigned int)&stru_20000 )
        {
          if ( v7 == 0x8000 )
          {
            if ( (*(_BYTE *)(a1 + 3) & 0x20) != 0 )
              goto LABEL_29;
            if ( v3 < 0 )
              continue;
            goto LABEL_69;
          }
          if ( v7 == (_DWORD)&stru_10000 )
          {
            if ( (*(_BYTE *)(a1 + 2) & 4) == 0 )
              continue;
            goto LABEL_29;
          }
LABEL_54:
          while ( v7 != 4096 )
          {
            if ( v7 == 0x2000 )
            {
              if ( (*(_BYTE *)(a1 + 3) & 0x10) == 0 )
                goto LABEL_32;
              goto LABEL_29;
            }
            if ( v7 == 2048 )
              break;
          }
LABEL_72:
          v8 = 0;
          v7 = 0;
LABEL_30:
          if ( (int)result < v8 )
            result = v7;
          continue;
        }
        if ( v7 == (_DWORD)&stru_80000 )
          goto LABEL_72;
        if ( v7 == 0x100000 )
        {
          if ( v3 >= 0 )
            goto LABEL_69;
          goto LABEL_29;
        }
        if ( v7 != 0x40000 )
          goto LABEL_54;
        if ( (*(_BYTE *)(a1 + 15) & 8) != 0 )
          goto LABEL_29;
      }
      else
      {
        if ( v7 == 0x2000000 )
        {
          if ( !v4 )
            continue;
          goto LABEL_29;
        }
        if ( v7 > 0x2000000 )
        {
          if ( v7 != 0x8000000 )
          {
            if ( v7 != 0x10000000 )
              goto LABEL_54;
            v8 = (*(_BYTE *)(a1 + 164) & 1) == 0 ? 1 : 4;
            v7 = v8;
            goto LABEL_30;
          }
          if ( (*(_BYTE *)(a1 + 89) & 1) == 0 )
            continue;
          goto LABEL_29;
        }
        if ( v7 == (_DWORD)&loc_800000 )
        {
          if ( (*(_BYTE *)(a1 + 96) & 0x30) == 0 )
            continue;
          goto LABEL_29;
        }
        if ( v7 == (_DWORD)&loc_1000000 )
        {
          if ( (*(_BYTE *)(a1 + 60) & 0x10) == 0 )
            continue;
          goto LABEL_29;
        }
        if ( v7 != 0x400000 )
          goto LABEL_54;
        if ( (*(_BYTE *)a1 & 0x20) != 0 )
          goto LABEL_29;
      }
      continue;
    }
    if ( v7 == 64 )
    {
      if ( (*(_BYTE *)(a1 + 13) & 2) == 0 )
        continue;
      goto LABEL_29;
    }
    if ( v7 > 0x40 )
    {
      if ( v7 == 1024 )
      {
        if ( (v2 & 8) != 0 )
          goto LABEL_29;
        if ( v5 )
          continue;
        goto LABEL_19;
      }
      if ( v7 > 0x400 )
        goto LABEL_54;
      if ( v7 == 256 )
      {
        if ( (v3 & 4) == 0 )
          continue;
LABEL_38:
        v8 = 3;
        v7 = 3;
        goto LABEL_30;
      }
      if ( v7 == 512 )
      {
        if ( (*(_BYTE *)(a1 + 47) & 0x20) == 0 || (*(_BYTE *)(a1 + 52) & 1) != 0 )
          continue;
        goto LABEL_29;
      }
      if ( v7 != 128 )
        goto LABEL_54;
      if ( !v5 )
        goto LABEL_29;
    }
    else
    {
      if ( v7 == 4 )
      {
        if ( (v3 & 0x10) == 0 )
        {
LABEL_69:
          if ( !v5 )
            continue;
          v8 = 2;
          v7 = 2;
          goto LABEL_30;
        }
        v8 = 4;
        goto LABEL_30;
      }
      if ( v7 <= 4 )
      {
        if ( v7 == 1 )
        {
          if ( (v2 & 1) != 0 )
            goto LABEL_29;
          if ( v5 )
            continue;
          goto LABEL_19;
        }
        if ( v7 != 2 )
          goto LABEL_54;
        if ( v5 )
          goto LABEL_29;
      }
      else
      {
        if ( v7 == 16 )
        {
          if ( v2 >= 0 )
            continue;
          goto LABEL_38;
        }
        if ( v7 == 32 )
        {
          if ( (*(_BYTE *)(a1 + 3) & 4) != 0 )
            goto LABEL_29;
          if ( v5 )
            continue;
LABEL_19:
          v8 = 2;
          v7 = 2;
          goto LABEL_30;
        }
        if ( v7 != 8 )
          goto LABEL_54;
        if ( (*(_BYTE *)(a1 + 4) & 8) != 0 )
          goto LABEL_38;
      }
    }
LABEL_32:
    ;
  }
  while ( a2 );
  if ( !(_DWORD)result )
    return 1;
  return result;
}
