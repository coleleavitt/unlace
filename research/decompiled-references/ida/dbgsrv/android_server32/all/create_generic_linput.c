/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_generic_linput
// Address: 0x0007B6F2

//----- (0007B6F2) --------------------------------------------------------
_DWORD *__fastcall create_generic_linput(int *a1)
{
  _DWORD *v2; // r5

  if ( a1 )
  {
    if ( a1[3] >= 0 && a1[4] >= 0 )
    {
      v2 = operator new(0x30u);
      *v2 = 4;
      v2[2] = a1;
      sub_7B454((int)v2);
      return v2;
    }
    (*(void (__fastcall **)(int *))(*a1 + 8))(a1);
  }
  return nullptr;
}
