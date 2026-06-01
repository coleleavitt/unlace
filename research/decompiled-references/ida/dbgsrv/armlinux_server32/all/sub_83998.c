/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83998
// Address: 0x00083998

//----- (00083998) --------------------------------------------------------
FILE *__fastcall sub_83998(FILE **a1, const void **a2)
{
  const char *v4; // r5
  FILE *result; // r0

  v4 = (const char *)*a2;
  if ( sub_820B8(a2, "default") )
  {
    if ( sub_820B8(a2, "/dev/urandom") && sub_820B8(a2, "/dev/random") )
LABEL_7:
      sub_83EC8("random_device::random_device(const std::string&)");
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
