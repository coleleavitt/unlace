/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50F20
// Address: 0x00050F20

//----- (00050F20) --------------------------------------------------------
int sub_50F20()
{
  _DWORD *v1; // eax

  if ( !byte_13BD7C && _cxa_guard_acquire((__guard *)&byte_13BD7C) )
  {
    v1 = operator new(0x48u);
    v1[1] = 0;
    *v1 = 0;
    v1[3] = 0;
    v1[2] = 0;
    v1[5] = 0;
    v1[4] = 0;
    v1[7] = 0;
    v1[6] = 0;
    v1[9] = 0;
    v1[8] = 0;
    v1[11] = 0;
    v1[10] = 0;
    v1[13] = 0;
    v1[12] = 0;
    v1[15] = 0;
    v1[14] = 0;
    *(_DWORD *)((char *)v1 + 65) = 0;
    *(_DWORD *)((char *)v1 + 61) = 0;
    dword_13BD78 = (int)v1;
    _cxa_guard_release((__guard *)&byte_13BD7C);
  }
  return dword_13BD78;
}
// 13BD78: using guessed type int dword_13BD78;
// 13BD7C: using guessed type char byte_13BD7C;
