/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DA4F0
// Address: 0x000DA4F0

//----- (000DA4F0) --------------------------------------------------------
int __usercall sub_DA4F0@<eax>(_DWORD *a1@<eax>, int a2@<edx>, int a3)
{
  int v4; // ecx
  int v7; // [esp+10h] [ebp-DCh] BYREF
  _BYTE v8[148]; // [esp+14h] [ebp-D8h] BYREF
  int v9; // [esp+A8h] [ebp-44h]
  int v10; // [esp+ACh] [ebp-40h]
  int v11; // [esp+B4h] [ebp-38h]
  _UNKNOWN *retaddr; // [esp+F0h] [ebp+4h]

  memset(a1, 0, 0x80u);
  a1[24] = 0x40000000;
  a1[19] = retaddr;
  if ( sub_DA20C(a1, (int)v8) )
    abort();
  if ( (!&pthread_create || pthread_once(&dword_13E5D0, sub_D912B)) && !byte_13E5D4[0] )
    sub_D912B();
  sub_D91AB((int)a1, a2, v4, &v7);
  v11 = 1;
  v10 = 4;
  v9 = 0;
  sub_D9F44((int)a1, (int)v8);
  a1[19] = a3;
  return a3;
}
// DA587: variable 'v4' is possibly undefined
// 13E5D0: using guessed type int dword_13E5D0;
