/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83868
// Address: 0x00083868

//----- (00083868) --------------------------------------------------------
unsigned int __fastcall sub_83868(unsigned int *a1, const void **a2)
{
  unsigned int result; // r0
  unsigned int *v5; // r2
  int v6; // r3
  const char *v7; // r5
  char *endptr; // [sp+4h] [bp-8h] BYREF

  if ( sub_81F1C(a2, "mt19937") )
  {
    v7 = (const char *)*a2;
    result = strtoul(v7, &endptr, 0);
    if ( !*v7 || *endptr )
      sub_83BE0("random_device::random_device(const std::string&)");
  }
  else
  {
    result = 5489;
  }
  v5 = a1;
  v6 = 1;
  *a1 = result;
  do
  {
    result = v6 + 1812433253 * (result ^ (result >> 30));
    ++v6;
    v5[1] = result;
    ++v5;
  }
  while ( v6 != 624 );
  a1[624] = 624;
  return result;
}
