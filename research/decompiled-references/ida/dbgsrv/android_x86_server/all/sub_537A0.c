/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_537A0
// Address: 0x000537A0

//----- (000537A0) --------------------------------------------------------
int __cdecl sub_537A0(unsigned int a1)
{
  _DWORD *v2; // eax

  if ( !byte_13BD7C && _cxa_guard_acquire((__guard *)&byte_13BD7C) )
  {
    v2 = operator new(0x48u);
    v2[1] = 0;
    *v2 = 0;
    v2[3] = 0;
    v2[2] = 0;
    v2[5] = 0;
    v2[4] = 0;
    v2[7] = 0;
    v2[6] = 0;
    v2[9] = 0;
    v2[8] = 0;
    v2[11] = 0;
    v2[10] = 0;
    v2[13] = 0;
    v2[12] = 0;
    v2[15] = 0;
    v2[14] = 0;
    *(_DWORD *)((char *)v2 + 65) = 0;
    *(_DWORD *)((char *)v2 + 61) = 0;
    dword_13BD78 = (int)v2;
    _cxa_guard_release((__guard *)&byte_13BD7C);
  }
  return sub_538B0(dword_13BD78, a1);
}
// 13BD78: using guessed type int dword_13BD78;
// 13BD7C: using guessed type char byte_13BD7C;
