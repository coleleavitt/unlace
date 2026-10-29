/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D728
// Address: 0x0006D728

//----- (0006D728) --------------------------------------------------------
int sub_6D728(const char *a1, ...)
{
  const char *v1; // r1
  char *v3; // [sp+4h] [bp-30h] BYREF
  int v4; // [sp+8h] [bp-2Ch]
  int v5; // [sp+Ch] [bp-28h]
  va_list v6; // [sp+10h] [bp-24h]
  int v7; // [sp+24h] [bp-10h]
  va_list va; // [sp+28h] [bp-Ch] BYREF

  va_start(va, a1);
  va_copy(v6, va);
  v4 = 0;
  v3 = nullptr;
  v5 = 0;
  sub_26F18((int)&v3, a1, (int)va);
  if ( v4 )
    v1 = v3;
  else
    v1 = &byte_B3CBE;
  sub_6F20C("%s\n", v1);
  sub_2BC80((int)"%s");
  if ( v3 )
  {
    v4 = 0;
    qfree(v3);
    v5 = 0;
    v3 = nullptr;
  }
  return v7;
}
// B3CBE: using guessed type char byte_B3CBE;
