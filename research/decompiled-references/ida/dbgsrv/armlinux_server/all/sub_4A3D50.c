/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3D50
// Address: 0x00000000004A3D50

//----- (00000000004A3D50) ----------------------------------------------------
FILE *__fastcall sub_4A3D50(FILE **a1, const void **a2)
{
  const char *v3; // x20
  FILE *result; // x0

  v3 = (const char *)*a2;
  if ( (unsigned int)sub_4A15E8(a2, "default") )
  {
    if ( (unsigned int)sub_4A15E8(a2, "/dev/urandom") && (unsigned int)sub_4A15E8(a2, "/dev/random") )
LABEL_7:
      sub_4A0678("random_device::random_device(const std::string&)");
  }
  else
  {
    v3 = "/dev/urandom";
  }
  result = fopen(v3, "rb");
  *a1 = result;
  if ( !result )
    goto LABEL_7;
  return result;
}
