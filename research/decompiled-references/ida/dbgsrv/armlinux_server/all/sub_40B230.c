/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B230
// Address: 0x000000000040B230

//----- (000000000040B230) ----------------------------------------------------
__int64 *sub_40B230()
{
  int v0; // w0

  if ( (unsigned __int8)sub_4950A8("IDA_USE_LIBTHREAD_DB", 0) )
    goto LABEL_5;
  v0 = dword_51F73C;
  if ( dword_51F73C == -1 )
  {
    sub_40A748();
    v0 = dword_51F73C;
  }
  if ( v0 == 1 )
  {
    dword_5220C0 = 2;
    return &qword_522000;
  }
  else
  {
LABEL_5:
    sub_40AE50();
    if ( byte_522031 )
      dword_5220C0 = 3;
    else
      dword_5220C0 = 1;
    return &qword_522000;
  }
}
// 51F73C: using guessed type int dword_51F73C;
// 522000: using guessed type __int64 qword_522000;
// 522031: using guessed type char byte_522031;
// 5220C0: using guessed type int dword_5220C0;
