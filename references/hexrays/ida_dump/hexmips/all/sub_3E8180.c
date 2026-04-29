__int64 __fastcall sub_3E8180(__int64 *a1)
{
  int v1; // ecx
  int v2; // edx
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // esi
  __int64 v6; // rcx
  int v7; // edx
  int v8; // edx

  v1 = *((_DWORD *)a1 + 2);
  if ( v1 == -2 )
    return 0;
  v2 = *((_DWORD *)a1 + 4);
  if ( v2 == 3 )
  {
    if ( v1 > 16 )
    {
      while ( --v1 != 15 )
      {
        if ( v1 <= 63 && (*a1 & (1LL << v1)) != 0 )
        {
LABEL_21:
          *((_DWORD *)a1 + 2) = v1;
          return 1;
        }
      }
      v1 = 8;
LABEL_18:
      while ( --v1 != 3 )
      {
        if ( v1 <= 63 && (*a1 & (1LL << v1)) != 0 )
          goto LABEL_21;
      }
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  if ( v2 > 3 )
  {
    if ( v2 != 4 )
      goto LABEL_23;
    v4 = *a1;
    if ( v1 == 28 )
    {
      if ( (v4 & 0x10000000) == 0 )
      {
        *((_DWORD *)a1 + 2) = 29;
        if ( (v4 & 0x20000000) == 0 )
          goto LABEL_7;
        return 1;
      }
      if ( (v4 & 0x28000000) == 0 )
        goto LABEL_7;
      *((_DWORD *)a1 + 2) = 29;
      if ( (v4 & 0x20000000) != 0 )
        return 1;
LABEL_15:
      if ( (v4 & 0x28000000) != 0 )
        goto LABEL_7;
      *((_DWORD *)a1 + 2) = 28;
      return 1;
    }
    v5 = v1 + 1;
    if ( v1 == 31 )
    {
      *((_DWORD *)a1 + 2) = 16;
      v6 = 0x10000;
    }
    else
    {
      *((_DWORD *)a1 + 2) = v5;
      if ( v5 > 63 )
      {
LABEL_14:
        if ( (v4 & 0x10000000) == 0 )
          goto LABEL_7;
        goto LABEL_15;
      }
      v6 = 1LL << v5;
    }
    if ( (v4 & v6) != 0 )
      return 1;
    goto LABEL_14;
  }
  if ( v2 != 1 )
  {
    if ( v2 == 2 )
    {
LABEL_6:
      if ( v1 > 4 )
        goto LABEL_18;
      goto LABEL_7;
    }
LABEL_23:
    if ( v1 <= 30 )
    {
      while ( ++v1 != 32 )
      {
        if ( (*a1 & (1LL << v1)) != 0 )
          goto LABEL_21;
      }
    }
    goto LABEL_7;
  }
  v7 = *((_DWORD *)a1 + 3);
  if ( v7 == 1 )
  {
LABEL_7:
    *((_DWORD *)a1 + 2) = -2;
    return 0;
  }
  result = 1;
  *((_DWORD *)a1 + 3) = v7 - 1;
  v8 = v1 + 1;
  if ( v1 == 31 )
    v8 = 16;
  *((_DWORD *)a1 + 2) = v8;
  return result;
}
