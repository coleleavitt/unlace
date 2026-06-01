/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_494C98
// Address: 0x0000000000494C98

//----- (0000000000494C98) ----------------------------------------------------
__int64 __fastcall sub_494C98(__pid_t a1, int *a2, int a3)
{
  int v3; // w3
  unsigned int v5; // w0
  unsigned int v6; // w19
  int v8; // [xsp+24h] [xbp-Ch] BYREF

  if ( a3 == 1 )
    v3 = -1;
  else
    v3 = a3;
  v5 = sub_494C58(&v8, a1, 0, v3);
  if ( v5 )
  {
    v6 = v5;
    if ( v5 == -1 )
    {
      if ( a2 )
        *a2 = *__errno_location();
    }
    else
    {
      v6 = v8 & 0x7F;
      if ( (v8 & 0x7F) != 0 )
      {
        if ( (int)((v6 + 1) << 24) >> 25 <= 0 )
        {
          if ( under_debugger )
            __break(0x3E8u);
          sub_492270(1150);
        }
        v6 = 0;
        if ( a2 )
          *a2 = -(v8 & 0x7F);
      }
      else if ( a2 )
      {
        *a2 = BYTE1(v8);
      }
    }
  }
  else
  {
    return 1;
  }
  return v6;
}
// 52451C: using guessed type char under_debugger;
