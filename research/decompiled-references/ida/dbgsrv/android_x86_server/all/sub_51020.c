/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51020
// Address: 0x00051020

//----- (00051020) --------------------------------------------------------
int __cdecl sub_51020(_DWORD *a1, int a2)
{
  int result; // eax
  _DWORD *v3; // eax

  a1[1] = 0;
  a1[2] = 0;
  *a1 = a1 + 1;
  a1[3] = 1;
  a1[4] = a2;
  if ( !byte_13BD7C && _cxa_guard_acquire((__guard *)&byte_13BD7C) )
  {
    v3 = operator new(0x48u);
    v3[1] = 0;
    *v3 = 0;
    v3[3] = 0;
    v3[2] = 0;
    v3[5] = 0;
    v3[4] = 0;
    v3[7] = 0;
    v3[6] = 0;
    v3[9] = 0;
    v3[8] = 0;
    v3[11] = 0;
    v3[10] = 0;
    v3[13] = 0;
    v3[12] = 0;
    v3[15] = 0;
    v3[14] = 0;
    *(_DWORD *)((char *)v3 + 65) = 0;
    *(_DWORD *)((char *)v3 + 61) = 0;
    dword_13BD78 = (int)v3;
    _cxa_guard_release((__guard *)&byte_13BD7C);
  }
  result = dword_13BD78;
  if ( a1[4] >= *(_DWORD *)(dword_13BD78 + 40) )
    a1[4] = 0;
  return result;
}
// 13BD78: using guessed type int dword_13BD78;
// 13BD7C: using guessed type char byte_13BD7C;
