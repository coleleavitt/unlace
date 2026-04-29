__int64 __fastcall sub_1BF0(__int64 a1, unsigned int *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned int v8; // ecx
  int v9; // r12d
  unsigned __int64 v10; // rax
  int v11; // ecx
  unsigned __int64 v12; // rdx

  if ( qlread(a1, a2, 32) != 32 )
    return 0;
  v3 = *a2;
  v4 = (unsigned __int16)*a2;
  v5 = v4 - 204;
  if ( (unsigned int)v5 > 0x3F || (v6 = 0x9800000000000001LL, !_bittest64((const __int64 *)&v6, v5)) )
  {
    sub_13F0(a2);
    v3 = *a2;
    v8 = (unsigned __int8)BYTE2(*a2);
    if ( BYTE2(*a2) > 0x8Du )
    {
      if ( v8 != 143 )
        return 0;
    }
    else if ( v8 <= 0x85 && v8 != 3 )
    {
      return 0;
    }
    v4 = (unsigned __int16)v3;
    if ( (unsigned __int16)v3 != 264 )
    {
      if ( (unsigned __int16)v3 > 0x108u )
      {
        if ( (unsigned __int16)v3 != 267 )
        {
          if ( (unsigned __int16)v3 != 273 )
            return 0;
          v9 = 3;
          goto LABEL_17;
        }
        goto LABEL_16;
      }
LABEL_23:
      if ( v4 == 204 )
      {
        v9 = 0;
      }
      else
      {
        v9 = 1;
        if ( v4 != 263 )
          return 0;
      }
      goto LABEL_17;
    }
LABEL_22:
    v9 = 4;
    goto LABEL_17;
  }
  if ( v4 == 264 )
    goto LABEL_22;
  if ( v4 <= 0x108 )
    goto LABEL_23;
  if ( v4 != 267 )
    return 0;
LABEL_16:
  v9 = 2;
LABEL_17:
  if ( (v3 & 0xFF0000) == 0x30000 )
    return (unsigned int)(v9 + 1);
  v10 = qlsize(a1);
  v11 = *(unsigned __int16 *)a2;
  v12 = a2[4] + a2[1] + a2[2];
  if ( v11 != 267 )
  {
    if ( v11 == 204 )
    {
      if ( v10 < v12 )
        return 0;
    }
    else if ( v10 < v12 + 32 )
    {
      return 0;
    }
    return (unsigned int)(v9 + 1);
  }
  if ( v10 >= v12 + 1024 )
    return (unsigned int)(v9 + 1);
  if ( a2[4] + a2[1] + a2[2] > qlsize(a1) )
    return 0;
  return 6;
}
