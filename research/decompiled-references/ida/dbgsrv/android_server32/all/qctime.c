/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qctime
// Address: 0x0007F1F4

//----- (0007F1F4) --------------------------------------------------------
int __fastcall qctime(unsigned int a1, unsigned int a2, int a3)
{
  int result; // r0
  time_t v6; // [sp+4h] [bp-28h] BYREF
  char buf[32]; // [sp+8h] [bp-24h] BYREF

  v6 = a3;
  if ( a3 >= 0 && ctime_r(&v6, buf) )
  {
    qstrncpy(a1, (unsigned __int8 *)buf, a2);
    result = 1;
    if ( a2 >= 9 && *(_BYTE *)(a1 + 8) == 32 )
      *(_BYTE *)(a1 + 8) = 48;
  }
  else
  {
    qstrncpy(a1, "[wrong timestamp]\n", a2);
    return 0;
  }
  return result;
}
