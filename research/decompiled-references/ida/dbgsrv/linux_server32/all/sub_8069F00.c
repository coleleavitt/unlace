/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8069F00
// Address: 0x08069F00

//----- (08069F00) --------------------------------------------------------
int sub_8069F00(int a1, int a2, ...)
{
  int result; // eax
  _BYTE v3[1024]; // [esp+0h] [ebp-410h] BYREF
  unsigned int v4; // [esp+400h] [ebp-10h]
  va_list va; // [esp+41Ch] [ebp+Ch] BYREF

  va_start(va, a2);
  v4 = __readgsdword(0x14u);
  sub_8069D00(a1, v3, 1024, a2, (int *)va);
  result = sub_8069790();
  LOBYTE(result) = a2 <= 18;
  if ( v4 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
