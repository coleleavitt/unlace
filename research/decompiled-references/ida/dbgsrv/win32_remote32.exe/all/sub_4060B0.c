/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4060B0
// Address: 0x004060B0

//----- (004060B0) --------------------------------------------------------
int __thiscall sub_4060B0(void *this, int a2)
{
  _BYTE *v3; // eax

  v3 = sub_454170(&a2, (unsigned int)&a2 + 3, a2);
  return sub_401600((int)this, (unsigned int)&a2, v3 - (_BYTE *)&a2);
}
