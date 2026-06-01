/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B008
// Address: 0x0008B008

//----- (0008B008) --------------------------------------------------------
int __fastcall sub_8B008(void *a1, unsigned int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // r9
  unsigned int v5; // r4
  unsigned int v6; // r3
  char *v7; // r9
  _BYTE v9[12]; // [sp+0h] [bp-18h] BYREF
  _DWORD v10[4]; // [sp+Ch] [bp-Ch] BYREF

  v10[3] = a4;
  v4 = v10;
  do
  {
    v5 = a3 / 0xA;
    v6 = a3 - 10 * v5;
    a3 = v5;
    *((_BYTE *)v4 - 1) = a0123456789_0[v6];
    v4 = (_DWORD *)((char *)v4 - 1);
  }
  while ( v5 );
  v7 = (char *)((char *)v10 - (char *)v4);
  if ( (unsigned int)v7 > a2 )
    return -1;
  memcpy(a1, &v9[12 - (_DWORD)v7], (size_t)v7);
  return (int)v7;
}
