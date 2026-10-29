/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7BDCC
// Address: 0x0007BDCC

//----- (0007BDCC) --------------------------------------------------------
_DWORD *__fastcall sub_7BDCC(int a1, int a2)
{
  _DWORD *v4; // r4
  _DWORD *v5; // r5

  v4 = operator new(0x38u);
  *v4 = &off_DB23C;
  v4[8] = 0;
  v4[9] = 0;
  v4[10] = 0;
  v4[11] = 0;
  v4[12] = 0;
  v4[2] = a2;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = a1;
  v4[6] = 0;
  v4[6] = qtmpfile();
  if ( (int)v4[3] < 0 || (int)v4[4] < 0 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v4 + 8))(v4);
    return nullptr;
  }
  else
  {
    v5 = operator new(0x30u);
    *v5 = 4;
    v5[2] = v4;
    sub_7B454((int)v5);
  }
  return v5;
}
// DB23C: using guessed type _UNKNOWN *off_DB23C;
