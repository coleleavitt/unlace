/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83804
// Address: 0x00083804

//----- (00083804) --------------------------------------------------------
FILE *__fastcall sub_83804(FILE **a1, const void **a2)
{
  const char *v4; // r5
  FILE *result; // r0

  v4 = (const char *)*a2;
  if ( sub_81F1C(a2, "default") )
  {
    if ( sub_81F1C(a2, "/dev/urandom") && sub_81F1C(a2, "/dev/random") )
LABEL_7:
      sub_83BE0("random_device::random_device(const std::string&)");
  }
  else
  {
    v4 = "/dev/urandom";
  }
  result = fopen(v4, "rb");
  *a1 = result;
  if ( !result )
    goto LABEL_7;
  return result;
}
