/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qctime_utc
// Address: 0x0007F25C

//----- (0007F25C) --------------------------------------------------------
int __fastcall qctime_utc(unsigned int a1, unsigned int a2, int a3)
{
  size_t v5; // r1
  size_t v6; // r7
  int v7; // r0
  int v8; // r6
  unsigned int v10; // [sp+8h] [bp-58h]
  struct tm tp; // [sp+10h] [bp-50h] BYREF
  time_t timer[8]; // [sp+3Ch] [bp-24h] BYREF

  timer[0] = a3;
  if ( a3 >= 0 && gmtime_r(timer, &tp) && asctime_r(&tp, (char *)timer) )
  {
    qstrncpy(a1, (unsigned __int8 *)timer, a2);
    if ( a2 >= 9 && *(_BYTE *)(a1 + 8) == 32 )
      *(_BYTE *)(a1 + 8) = 48;
    v10 = a2;
    v5 = strlen((const char *)a1) + 6;
    do
    {
      v6 = v5;
      if ( v5 == 6 )
        break;
      if ( *(char *)(a1 + v5 - 7) < 0 )
        break;
      v7 = isspace(*(unsigned __int8 *)(a1 + v5 - 7));
      v5 = v6 - 1;
    }
    while ( v7 );
    v8 = 1;
    if ( v6 <= v10 )
      qstrncpy(a1 + v6 - 6, " UTC\n", 6);
  }
  else
  {
    qstrncpy(a1, "[wrong timestamp]\n", a2);
    return 0;
  }
  return v8;
}
