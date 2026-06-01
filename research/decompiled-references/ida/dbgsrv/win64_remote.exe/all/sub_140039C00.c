/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140039C00
// Address: 0x0000000140039C00

//----- (0000000140039C00) ----------------------------------------------------
unsigned __int8 *__fastcall sub_140039C00(__int64 a1, unsigned __int8 *a2)
{
  BOOL v3; // r15d
  int v5; // edx
  unsigned __int8 *v6; // rbp
  unsigned __int8 *v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // r12
  unsigned __int8 v10; // al
  char v11; // al
  unsigned __int8 *v12; // rcx

  v3 = 0;
  v5 = 1;
  v6 = a2;
  v7 = a2;
  v8 = *a2;
  if ( !(_BYTE)v8 )
  {
    *a2 = 0;
    return v7;
  }
  v9 = 0x100002E00LL;
  while ( *(_BYTE *)(a1 + 152) )
  {
    if ( (_BYTE)v8 == 42 )
    {
      v10 = a2[1];
      if ( v10 == 47 )
      {
        if ( (*(_BYTE *)(a1 + 724) & 1) == 0 )
          goto LABEL_15;
      }
      else if ( v10 != 41 || (*(_BYTE *)(a1 + 724) & 2) == 0 )
      {
        goto LABEL_15;
      }
      ++a2;
      *(_BYTE *)(a1 + 152) = 0;
    }
LABEL_15:
    v8 = *++a2;
    if ( !(_BYTE)v8 )
      goto LABEL_16;
  }
  if ( (_BYTE)v8 == 34 )
  {
    v3 = !v3;
LABEL_13:
    v5 = 1;
LABEL_14:
    *v7++ = v8;
    goto LABEL_15;
  }
  if ( v3 )
    goto LABEL_14;
  if ( (_BYTE)v8 != 47 )
  {
    if ( (_BYTE)v8 == 59 )
    {
      if ( (*(_BYTE *)(a1 + 724) & 8) != 0 )
        goto LABEL_16;
      goto LABEL_26;
    }
    if ( (_BYTE)v8 != 40 || (*(_BYTE *)(a1 + 724) & 2) == 0 )
      goto LABEL_26;
LABEL_35:
    if ( a2[1] == 42 )
    {
      ++a2;
      *(_BYTE *)(a1 + 152) = 1;
      goto LABEL_15;
    }
LABEL_26:
    if ( v5 )
    {
      if ( (_BYTE)v8 == 32 || (unsigned __int8)(v8 - 9) <= 4u )
        goto LABEL_15;
    }
    else if ( (unsigned __int8)v8 <= 0x20u && _bittest64(&v9, v8) )
    {
      goto LABEL_13;
    }
    if ( (_BYTE)v8 != 12 && !sub_14006CA14((__int64)"!%&*+-/<=>^|:?(),.[\\]`{};~@#", v8) )
    {
      v5 = 0;
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  if ( a2[1] != 47 || (*(_BYTE *)(a1 + 724) & 4) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 724) & 1) == 0 )
      goto LABEL_26;
    goto LABEL_35;
  }
LABEL_16:
  if ( v7 > v6 )
  {
    while ( 1 )
    {
      v11 = *(v7 - 1);
      v12 = v7 - 1;
      if ( v11 != 32 && (unsigned __int8)(v11 - 9) > 4u )
        break;
      --v7;
      if ( v12 <= v6 )
      {
        *v12 = 0;
        return v7;
      }
    }
  }
  *v7 = 0;
  return v7;
}
