/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140054ED0
// Address: 0x0000000140054ED0

//----- (0000000140054ED0) ----------------------------------------------------
_QWORD *__fastcall sub_140054ED0(_QWORD *a1, char a2)
{
  *a1 = off_140099B28;
  if ( (a2 & 1) != 0 )
    j_j_free(a1);
  return a1;
}
// 140099B28: using guessed type __int64 (__fastcall *off_140099B28[4])();
