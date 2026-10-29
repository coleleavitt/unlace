/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4539E0
// Address: 0x004539E0

//----- (004539E0) --------------------------------------------------------
LPVOID __stdcall sub_4539E0(signed int a1)
{
  LPVOID v1; // esi

  if ( !a1 )
    goto LABEL_7;
  if ( a1 <= 0 )
  {
    v1 = nullptr;
    *sub_46B984() = 12;
    goto LABEL_5;
  }
  v1 = sub_46D25F(a1);
  if ( !v1 )
  {
LABEL_5:
    sub_45CC20(1);
    if ( v1 )
      return v1;
LABEL_7:
    sub_453970();
  }
  return v1;
}
