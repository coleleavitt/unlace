/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448030
// Address: 0x00448030

//----- (00448030) --------------------------------------------------------
int __thiscall sub_448030(int *this, int a2, unsigned int a3)
{
  int v3; // edi
  _BYTE *v4; // eax
  int v5; // esi
  void *v7[3]; // [esp+Ch] [ebp-24h] BYREF
  _BYTE v8[5]; // [esp+18h] [ebp-18h] BYREF
  _BYTE v9[3]; // [esp+1Dh] [ebp-13h] BYREF
  int v10; // [esp+2Ch] [ebp-4h]

  v3 = *(this + 50);
  sub_44DD50((int *)v7, 55);
  v10 = 0;
  sub_449950((int)v7, a2);
  v4 = sub_4540B0(v8, (unsigned int)v9, a3);
  sub_401600((int)v7, (unsigned int)v8, v4 - v8);
  if ( !v3 )
    v3 = 112;
  v5 = sub_44ACB0((void *)v3, (int)v7, -1, 0);
  v10 = 1;
  if ( v7[0] )
  {
    v7[1] = nullptr;
    sub_453A20(v7[0]);
  }
  return v5;
}
