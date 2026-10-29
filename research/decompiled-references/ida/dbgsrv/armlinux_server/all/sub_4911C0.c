/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4911C0
// Address: 0x00000000004911C0

//----- (00000000004911C0) ----------------------------------------------------
void *__fastcall sub_4911C0(char *a1)
{
  size_t v2; // x21
  void *v3; // x0
  void *v4; // x20

  if ( !a1 )
    return nullptr;
  v2 = strlen(a1) + 1;
  v3 = malloc(v2);
  v4 = v3;
  if ( v3 )
  {
    sub_493350((unsigned __int64)v3, (unsigned __int8 *)a1, v2);
    return v4;
  }
  sub_4869C8(1);
  *__errno_location() = 12;
  sub_4869C8(1);
  return nullptr;
}
