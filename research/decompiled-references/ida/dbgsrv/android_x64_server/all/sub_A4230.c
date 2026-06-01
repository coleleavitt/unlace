/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4230
// Address: 0x00000000000A4230

//----- (00000000000A4230) ----------------------------------------------------
unsigned __int64 __fastcall sub_A4230(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 result; // rax

  sub_A8780(a1, a2, a3);
  result = cliopts_t_add(a2, (__int128 *)&off_14ED80, 1);
  if ( *(_BYTE *)(a1 + 136) )
    return cliopts_t_add(a2, (__int128 *)&qword_14EDB0, 2);
  return result;
}
// 14ED80: using guessed type int *off_14ED80;
// 14EDB0: using guessed type __int64 qword_14EDB0;
