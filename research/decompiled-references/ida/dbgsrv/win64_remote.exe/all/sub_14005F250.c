/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005F250
// Address: 0x000000014005F250

//----- (000000014005F250) ----------------------------------------------------
__int64 __fastcall sub_14005F250(__int64 a1, char *a2, int a3)
{
  char v3; // al

  v3 = *a2;
  if ( (unsigned __int8)*a2 < 0x80u )
    return 1;
  if ( v3 == -114 )
  {
    if ( a3 < 2 )
    {
LABEL_5:
      *errno() = 22;
      return 0xFFFFFFFFLL;
    }
    if ( (unsigned __int8)(a2[1] + 95) > 0x3Eu )
      goto LABEL_7;
    return 2;
  }
  if ( v3 == -113 )
  {
    if ( a3 < 3 )
      goto LABEL_5;
    if ( (unsigned __int8)(a2[1] + 95) <= 0x5Du && (unsigned __int8)(a2[2] + 95) <= 0x5Du )
      return 3;
LABEL_7:
    *errno() = 42;
    return 0xFFFFFFFFLL;
  }
  if ( a3 < 2 )
    goto LABEL_5;
  if ( (unsigned __int8)(v3 + 95) > 0x5Du || (unsigned __int8)(a2[1] + 95) > 0x5Du )
    goto LABEL_7;
  return 2;
}
