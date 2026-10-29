/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83B6C
// Address: 0x00083B6C

//----- (00083B6C) --------------------------------------------------------
void __noreturn sub_83B6C(char *a1, ...)
{
  size_t v2; // r0
  char *v3; // r4
  char *v4; // r0
  char v5[4]; // [sp+0h] [bp+0h] BYREF
  va_list v6; // [sp+4h] [bp+4h]
  va_list varg_r1; // [sp+24h] [bp+24h] BYREF

  va_start(varg_r1, a1);
  v2 = strlen(a1);
  va_copy(v6, varg_r1);
  sub_8BA30(v5, v2 + 512, (unsigned __int8 *)a1, (unsigned int *)varg_r1);
  v3 = sub_8117C(8);
  v4 = gettext(v5);
  sub_8AFE4(v3, v4);
  sub_80D98((int)v3, (int)&`typeinfo for'std::out_of_range, (int)std::out_of_range::~out_of_range);
}
// D1DF0: using guessed type int *`typeinfo for'std::out_of_range;
