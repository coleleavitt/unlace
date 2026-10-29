/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A8780
// Address: 0x00000000000A8780

//----- (00000000000A8780) ----------------------------------------------------
unsigned __int64 __fastcall sub_A8780(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 result; // rax

  result = cliopts_t_add(a2, (__int128 *)&off_14F4F0, 5);
  if ( (a3 & 1) != 0 )
    return cliopts_t_add(a2, (__int128 *)&qword_14F5C0, 1);
  return result;
}
// 14F4F0: using guessed type __int64 off_14F4F0;
// 14F5C0: using guessed type __int64 qword_14F5C0;
