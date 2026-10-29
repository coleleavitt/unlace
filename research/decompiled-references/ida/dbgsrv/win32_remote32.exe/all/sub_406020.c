/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_406020
// Address: 0x00406020

//----- (00406020) --------------------------------------------------------
int __thiscall sub_406020(void *this, unsigned int a2, unsigned int a3)
{
  _BYTE *v4; // eax
  _BYTE v6[5]; // [esp+8h] [ebp-Ch] BYREF
  _BYTE v7[3]; // [esp+Dh] [ebp-7h] BYREF

  v4 = sub_4540B0(v6, (unsigned int)v7, a3);
  sub_401600((int)this, (unsigned int)v6, v4 - v6);
  return sub_401600((int)this, a2, a3);
}
