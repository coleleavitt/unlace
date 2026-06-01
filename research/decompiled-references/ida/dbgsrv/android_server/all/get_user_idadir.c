/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_user_idadir
// Address: 0x00000000000B7B34

//----- (00000000000B7B34) ----------------------------------------------------
char *get_user_idadir()
{
  sub_B7B68();
  if ( *(_QWORD *)(qword_167DB0 + 8) )
    return *(char **)qword_167DB0;
  else
    return &byte_F154B;
}
// F154B: using guessed type char byte_F154B;
// 167DB0: using guessed type __int64 qword_167DB0;
