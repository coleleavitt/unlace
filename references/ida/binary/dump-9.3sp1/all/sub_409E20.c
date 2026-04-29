void __fastcall sub_409E20(__int64 a1)
{
  unsigned __int16 v1; // ax
  int v2; // r14d
  int v3; // r13d
  __int64 v4; // rbx
  int v5; // ebp
  int dtype_size; // eax

  v1 = *(_WORD *)(a1 + 48);
  if ( v1 == 18 )
  {
LABEL_18:
    v3 = 31;
    v2 = 0;
    goto LABEL_8;
  }
  if ( v1 > 0x12u )
  {
    if ( v1 == 209 )
      goto LABEL_7;
    if ( v1 != 216 )
      return;
  }
  else if ( v1 != 7 )
  {
    if ( v1 != 16 )
    {
      if ( v1 != 6 )
        return;
LABEL_7:
      v2 = 0;
      v3 = 31;
      if ( *(_BYTE *)(a1 + 65) != 1 )
        goto LABEL_8;
LABEL_16:
      if ( *(_WORD *)(a1 + 70) == 4 )
      {
        v3 = 20;
        v2 = 11;
      }
      goto LABEL_8;
    }
    goto LABEL_18;
  }
  v3 = 22;
  v2 = 9;
  if ( *(_BYTE *)(a1 + 65) == 1 )
    goto LABEL_16;
LABEL_8:
  v4 = 0;
  v5 = 1;
  do
  {
    if ( (v5 & v2) != 0 )
    {
      dtype_size = get_dtype_size();
      sub_1D6310(a1, 3u, dtype_size, 0, 0x3BEA45E214ADDC55LL, v4, 0);
    }
    ++v4;
    v5 *= 2;
  }
  while ( v4 != 5 );
  sub_3FB370(a1, v3);
}
