/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481490
// Address: 0x0000000000481490

//----- (0000000000481490) ----------------------------------------------------
_BYTE *__fastcall sub_481490(char *a1)
{
  size_t v1; // r12
  _BYTE *v2; // rax
  _BYTE *v3; // rbp

  if ( !a1 )
    return nullptr;
  v1 = strlen(a1) + 1;
  v2 = malloc(v1);
  v3 = v2;
  if ( !v2 )
  {
    sub_479EB0(1u);
    *__errno_location() = 12;
    sub_479EB0(1u);
    return nullptr;
  }
  sub_4821A0(v2, a1, v1);
  return v3;
}
