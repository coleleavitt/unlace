__int64 __fastcall sub_15AF890(int *a1)
{
  __int16 v1; // ax
  char v2; // cl
  unsigned int v3; // edx
  __int64 *v4; // rdx
  __int64 v5; // rax
  __int64 *v6; // r9
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 *v9; // rsi
  __int64 result; // rax

  v1 = (((*((_BYTE *)a1 + 1) >> 2) & 3) << 7) | a1[70] & 0xFE7F;
  LOBYTE(v1) = ((*((_BYTE *)a1 + 1) >> 2) & 3) << 7;
  v2 = (2 * (*(_BYTE *)a1 >> 6)) | HIBYTE(v1) & 0xF9;
  v3 = *a1;
  *((_BYTE *)a1 + 281) = v2;
  LOBYTE(v1) = (v3 >> 12) & 0x7F | v1;
  v4 = *((__int64 **)a1 + 5);
  *((_BYTE *)a1 + 280) = v1;
  v5 = 8LL * (unsigned int)a1[12];
  v6 = &v4[(unsigned __int64)v5 / 8];
  v7 = v5 >> 3;
  v8 = v5 >> 5;
  if ( !v8 )
  {
    v9 = v4;
LABEL_14:
    if ( v7 != 2 )
    {
      if ( v7 != 3 )
      {
        LODWORD(v8) = 0;
        if ( v7 != 1 )
          goto LABEL_19;
LABEL_17:
        LODWORD(v8) = 0;
        if ( *(_WORD *)(*v9 + 32) != 201 )
          goto LABEL_19;
LABEL_18:
        LOBYTE(v8) = v6 != v9;
        goto LABEL_19;
      }
      v8 = *v9;
      if ( *(_WORD *)(*v9 + 32) == 201 )
        goto LABEL_18;
      ++v9;
    }
    v8 = *v9;
    if ( *(_WORD *)(*v9 + 32) == 201 )
      goto LABEL_18;
    ++v9;
    goto LABEL_17;
  }
  if ( *(_WORD *)(*v4 + 32) == 201 )
  {
    LOBYTE(v8) = v4 != v6;
    goto LABEL_19;
  }
  if ( *(_WORD *)(v4[1] + 32) == 201 )
  {
    LOBYTE(v8) = v6 != v4 + 1;
    goto LABEL_19;
  }
  if ( *(_WORD *)(v4[2] + 32) == 201 )
  {
    LOBYTE(v8) = v6 != v4 + 2;
    goto LABEL_19;
  }
  v8 = (__int64)&v4[4 * v8];
  if ( *(_WORD *)(v4[3] + 32) == 201 )
  {
    LOBYTE(v8) = v6 != v4 + 3;
LABEL_19:
    result = (unsigned int)(8 * v8);
    *((_BYTE *)a1 + 281) = result | v2 & 0xF7;
    return result;
  }
  while ( 1 )
  {
    v9 = v4 + 4;
    if ( v4 + 4 == (__int64 *)v8 )
    {
      v7 = ((__int64)v6 - v8) >> 3;
      goto LABEL_14;
    }
    if ( *(_WORD *)(v4[4] + 32) == 201 )
      goto LABEL_18;
    if ( *(_WORD *)(v4[5] + 32) == 201 )
    {
      LOBYTE(v8) = v6 != v4 + 5;
      result = (unsigned int)(8 * v8);
      *((_BYTE *)a1 + 281) = result | v2 & 0xF7;
      return result;
    }
    if ( *(_WORD *)(v4[6] + 32) == 201 )
    {
      LOBYTE(v8) = v6 != v4 + 6;
      result = (unsigned int)(8 * v8);
      *((_BYTE *)a1 + 281) = result | v2 & 0xF7;
      return result;
    }
    if ( *(_WORD *)(v4[7] + 32) == 201 )
      break;
    v4 += 4;
  }
  LOBYTE(v8) = v6 != v4 + 7;
  result = (unsigned int)(8 * v8);
  *((_BYTE *)a1 + 281) = result | v2 & 0xF7;
  return result;
}
