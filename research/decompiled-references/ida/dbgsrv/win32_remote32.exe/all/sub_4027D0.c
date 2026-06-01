/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4027D0
// Address: 0x004027D0

//----- (004027D0) --------------------------------------------------------
int __thiscall sub_4027D0(void *this, unsigned int a2, unsigned int a3)
{
  _BYTE *v4; // eax
  _BYTE v6[10]; // [esp+4h] [ebp-10h] BYREF
  _BYTE v7[2]; // [esp+Eh] [ebp-6h] BYREF

  v4 = sub_454140(v6, (unsigned int)v7, a2, a3);
  return sub_401600((int)this, (unsigned int)v6, v4 - v6);
}
