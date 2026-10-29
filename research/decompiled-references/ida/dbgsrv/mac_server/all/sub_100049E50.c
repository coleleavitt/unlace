/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100049E50
// Address: 0x0000000100049E50

//----- (0000000100049E50) ----------------------------------------------------
unsigned __int8 *__fastcall sub_100049E50(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // r12
  int v3; // eax
  _BOOL4 v4; // ecx
  unsigned __int8 *v5; // r14
  unsigned __int8 *v6; // rbx
  _BOOL4 v7; // edx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // edx
  int v12; // eax

  v2 = *a2;
  if ( !*a2 )
  {
LABEL_39:
    v5 = a2;
    goto LABEL_40;
  }
  v3 = 1;
  v4 = 0;
  v5 = a2;
  v6 = a2;
  while ( *(_BYTE *)(a1 + 128) == 1 )
  {
    if ( v2 == 42 )
    {
      v8 = v6[1];
      if ( v8 != 47 )
      {
        if ( v8 != 41 || (*(_DWORD *)(a1 + 572) & 2) == 0 )
          goto LABEL_5;
LABEL_19:
        ++v6;
        *(_BYTE *)(a1 + 128) = 0;
        goto LABEL_5;
      }
      if ( (*(_DWORD *)(a1 + 572) & 1) != 0 )
        goto LABEL_19;
    }
LABEL_5:
    v2 = *++v6;
    if ( !v2 )
      goto LABEL_33;
  }
  if ( v2 == 34 )
  {
    v7 = !v4;
    v3 = 1;
LABEL_4:
    *v5++ = v2;
    v4 = v7;
    goto LABEL_5;
  }
  v7 = 1;
  if ( v4 )
    goto LABEL_4;
  if ( v2 != 59 )
  {
    if ( v2 == 47 )
    {
      v9 = *(_DWORD *)(a1 + 572);
      v10 = 1;
      if ( v6[1] == 47 && (v9 & 4) != 0 )
        goto LABEL_33;
    }
    else
    {
      if ( v2 != 40 )
        goto LABEL_25;
      v9 = *(_DWORD *)(a1 + 572);
      v10 = 2;
    }
    if ( (v10 & v9) != 0 && v6[1] == 42 )
    {
      ++v6;
      *(_BYTE *)(a1 + 128) = 1;
      v4 = 0;
      goto LABEL_5;
    }
LABEL_25:
    if ( v3 )
    {
      v4 = 0;
      v3 = 1;
      if ( (unsigned int)v2 - 9 < 5 || v2 == 32 )
        goto LABEL_5;
    }
    else if ( (unsigned __int8)(v2 - 9) < 0x18u )
    {
      LOBYTE(v3) = 1;
      v11 = 8388639;
      if ( _bittest(&v11, (unsigned __int8)(v2 - 9)) )
        goto LABEL_32;
    }
    LOBYTE(v3) = memchr("!%&*+-/<=>^|:?(),.[\\]`{};~@#", v2, 0x1Du) != nullptr;
LABEL_32:
    v3 = (unsigned __int8)v3;
    v7 = 0;
    goto LABEL_4;
  }
  if ( (*(_BYTE *)(a1 + 572) & 8) == 0 )
    goto LABEL_25;
LABEL_33:
  if ( v5 > a2 )
  {
    while ( 1 )
    {
      v12 = *(v5 - 1);
      if ( (unsigned int)(v12 - 9) >= 5 && v12 != 32 )
        break;
      if ( --v5 <= a2 )
        goto LABEL_39;
    }
  }
LABEL_40:
  *v5 = 0;
  return v5;
}
