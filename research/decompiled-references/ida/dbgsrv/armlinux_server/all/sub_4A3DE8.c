/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3DE8
// Address: 0x00000000004A3DE8

//----- (00000000004A3DE8) ----------------------------------------------------
__int64 __fastcall sub_4A3DE8(unsigned __int64 *a1, const void **a2)
{
  int v4; // w0
  unsigned __int64 v5; // x1
  __int64 v6; // x0
  const char *v8; // x20
  unsigned int v9; // w0
  char *endptr; // [xsp+28h] [xbp+28h] BYREF

  v4 = sub_4A15E8(a2, "mt19937");
  v5 = 5489;
  if ( v4 )
  {
    v8 = (const char *)*a2;
    v9 = strtoul(v8, &endptr, 0);
    if ( !*v8 || (v5 = v9, *endptr) )
      sub_4A0678("random_device::random_device(const std::string&)");
  }
  v6 = 1;
  *a1 = v5;
  while ( 1 )
  {
    v5 = (unsigned int)v6 + 1812433253 * ((unsigned int)v5 ^ (unsigned int)(v5 >> 30));
    a1[v6] = v5;
    if ( v6 == 623 )
      break;
    ++v6;
  }
  a1[624] = 624;
  return 624;
}
