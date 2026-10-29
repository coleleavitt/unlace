/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: add_idc_class
// Address: 0x00053BA0

//----- (00053BA0) --------------------------------------------------------
_DWORD *__cdecl add_idc_class(char *s2, int a2)
{
  _DWORD *v3; // eax

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
  return sub_53CB0((_DWORD *)dword_13BD78, s2, a2);
}
// 13BD78: using guessed type int dword_13BD78;
// 13BD7C: using guessed type char byte_13BD7C;
