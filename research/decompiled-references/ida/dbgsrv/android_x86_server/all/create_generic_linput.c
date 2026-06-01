/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_generic_linput
// Address: 0x000AB690

//----- (000AB690) --------------------------------------------------------
_DWORD *__cdecl create_generic_linput(int *a1)
{
  _DWORD *v1; // esi

  v1 = nullptr;
  if ( a1 )
  {
    if ( a1[2] < 0 || a1[3] < 0 )
    {
      (*(void (__cdecl **)(int *))(*a1 + 8))(a1);
    }
    else
    {
      v1 = operator new(0x24u);
      *v1 = 4;
      v1[1] = a1;
      sub_AB220((int)v1);
    }
  }
  return v1;
}
