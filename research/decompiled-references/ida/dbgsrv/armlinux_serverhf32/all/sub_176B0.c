/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_176B0
// Address: 0x000176B0

//----- (000176B0) --------------------------------------------------------
void sub_176B0()
{
  int v0; // r3

  if ( sub_7A72C("IDA_USE_LIBTHREAD_DB", 0) )
    goto LABEL_5;
  v0 = dword_D26C4;
  if ( dword_D26C4 == -1 )
  {
    sub_17054();
    v0 = dword_D26C4;
  }
  if ( v0 == 1 )
  {
    dword_D3978 = 2;
  }
  else
  {
LABEL_5:
    sub_17418();
    if ( byte_D3931 )
      dword_D3978 = 3;
    else
      dword_D3978 = 1;
  }
}
// D26C4: using guessed type int dword_D26C4;
// D3931: using guessed type char byte_D3931;
// D3978: using guessed type int dword_D3978;
