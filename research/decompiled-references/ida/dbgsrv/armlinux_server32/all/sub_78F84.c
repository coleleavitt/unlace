/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78F84
// Address: 0x00078F84

//----- (00078F84) --------------------------------------------------------
int __fastcall sub_78F84(_BYTE *a1, unsigned int a2, int a3)
{
  time_t v6; // [sp+0h] [bp-2Ch] BYREF
  char buf[32]; // [sp+4h] [bp-28h] BYREF

  v6 = a3;
  if ( a3 >= 0 && ctime_r(&v6, buf) )
  {
    sub_7968C(a1, (unsigned __int8 *)buf, a2);
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
    sub_7968C(a1, "[wrong timestamp]\n", a2);
    return 0;
  }
}
