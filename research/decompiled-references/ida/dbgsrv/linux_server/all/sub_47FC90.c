/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47FC90
// Address: 0x000000000047FC90

//----- (000000000047FC90) ----------------------------------------------------
_BYTE *__fastcall sub_47FC90(_BYTE *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  _BYTE *v4; // rax

  v3 = HIDWORD(a3);
  v4 = sub_47FB50(a1, a2, a3);
  return sub_47FB50(v4, a2, (unsigned int)v3);
}
