/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4060E0
// Address: 0x004060E0

//----- (004060E0) --------------------------------------------------------
int __thiscall sub_4060E0(void *this, unsigned int a2, int a3)
{
  int v3; // eax
  _BYTE *v5; // eax
  _BYTE v7[10]; // [esp+4h] [ebp-10h] BYREF
  _BYTE v8[2]; // [esp+Eh] [ebp-6h] BYREF

  v3 = a3;
  if ( a2 == -1 && !a3 )
    v3 = -1;
  v5 = sub_454140(v7, (unsigned int)v8, a2 + 1, (__PAIR64__(v3, a2) + 1) >> 32);
  return sub_401600((int)this, (unsigned int)v7, v5 - v7);
}
