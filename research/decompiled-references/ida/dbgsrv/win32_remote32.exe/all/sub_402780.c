/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_402780
// Address: 0x00402780

//----- (00402780) --------------------------------------------------------
int __thiscall sub_402780(void *this, unsigned int a2)
{
  _BYTE *v3; // eax
  _BYTE v5[5]; // [esp+4h] [ebp-Ch] BYREF
  _BYTE v6[3]; // [esp+9h] [ebp-7h] BYREF

  v3 = sub_4540B0(v5, (unsigned int)v6, a2);
  return sub_401600((int)this, (unsigned int)v5, v3 - v5);
}
