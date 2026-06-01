/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78E1C
// Address: 0x00078E1C

//----- (00078E1C) --------------------------------------------------------
int __fastcall sub_78E1C(_BYTE *a1, unsigned int a2, int a3)
{
  time_t v6; // [sp+0h] [bp-2Ch] BYREF
  char buf[32]; // [sp+4h] [bp-28h] BYREF

  v6 = a3;
  if ( a3 >= 0 && ctime_r(&v6, buf) )
  {
    sub_79524(a1, (unsigned __int8 *)buf, a2);
    if ( a2 > 8 && a1[8] == 32 )
    {
      a1[8] = 48;
      return 1;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    sub_79524(a1, "[wrong timestamp]\n", a2);
    return 0;
  }
}
