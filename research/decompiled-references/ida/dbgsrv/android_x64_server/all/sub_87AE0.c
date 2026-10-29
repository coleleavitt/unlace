/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_87AE0
// Address: 0x0000000000087AE0

//----- (0000000000087AE0) ----------------------------------------------------
unsigned __int8 *__fastcall sub_87AE0(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // r13
  int v3; // eax
  _BOOL4 v4; // ecx
  unsigned __int8 *v5; // rbx
  unsigned __int8 *v6; // rbp
  int v7; // edx
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // cl
  int v10; // edx
  unsigned __int8 *v11; // rdx

  v2 = *a2;
  if ( !*a2 )
  {
    v5 = a2;
    goto LABEL_43;
  }
  v3 = 1;
  v4 = 0;
  v5 = a2;
  v6 = a2;
  while ( *(_BYTE *)(a1 + 128) )
  {
    if ( v2 == 42 )
    {
      v8 = v6[1];
      if ( v8 != 41 )
      {
        if ( v8 != 47 || (*(_BYTE *)(a1 + 508) & 1) == 0 )
          goto LABEL_35;
LABEL_20:
        ++v6;
        *(_BYTE *)(a1 + 128) = 0;
        goto LABEL_35;
      }
      if ( (*(_BYTE *)(a1 + 508) & 2) != 0 )
        goto LABEL_20;
    }
LABEL_35:
    v2 = *++v6;
    if ( !v2 )
      goto LABEL_38;
  }
  if ( v2 == 34 )
  {
    v3 = 1;
    v4 = !v4;
    goto LABEL_18;
  }
  if ( v4 )
    goto LABEL_18;
  if ( v2 == 40 )
  {
    if ( (*(_BYTE *)(a1 + 508) & 2) != 0 )
    {
      v11 = v6 + 1;
      if ( v6[1] == 42 )
      {
LABEL_31:
        *(_BYTE *)(a1 + 128) = 1;
        v4 = 0;
        v6 = v11;
        goto LABEL_35;
      }
    }
LABEL_33:
    if ( v3 )
    {
      v4 = 0;
      if ( (unsigned __int8)(v2 - 9) < 5u || v2 == 32 )
        goto LABEL_35;
    }
    else if ( (unsigned __int8)(v2 - 9) < 0x18u )
    {
      LOBYTE(v3) = 1;
      v7 = 8388639;
      if ( _bittest(&v7, (unsigned __int8)(v2 - 9)) )
        goto LABEL_8;
    }
    LOBYTE(v3) = __strchr_chk("!%&*+-/<=>^|:?(),.[\\]`{};~@#", v2, 29) != 0;
LABEL_8:
    v3 = (unsigned __int8)v3;
    v4 = 0;
LABEL_18:
    *v5++ = v2;
    goto LABEL_35;
  }
  if ( v2 == 59 )
  {
    if ( (*(_BYTE *)(a1 + 508) & 8) != 0 )
      goto LABEL_38;
    goto LABEL_33;
  }
  if ( v2 != 47 )
    goto LABEL_33;
  v9 = v6[1];
  v10 = *(_DWORD *)(a1 + 508);
  if ( v9 != 47 || (v10 & 4) == 0 )
  {
    if ( (v10 & 1) != 0 )
    {
      v11 = v6 + 1;
      if ( v9 == 42 )
        goto LABEL_31;
    }
    goto LABEL_33;
  }
LABEL_38:
  while ( v5 > a2 && ((unsigned __int8)(*(v5 - 1) - 9) < 5u || *(v5 - 1) == 32) )
    --v5;
LABEL_43:
  *v5 = 0;
  return v5;
}
// 33BA0: using guessed type __int64 __strchr_chk(const char *, ...);
