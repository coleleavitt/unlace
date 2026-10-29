/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AED70
// Address: 0x00000000000AED70

//----- (00000000000AED70) ----------------------------------------------------
unsigned __int64 __fastcall sub_AED70(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 result; // rax

  sub_A8780(a1, a2, a3);
  result = cliopts_t_add(a2, (__int128 *)&qword_14F810, 6);
  if ( (a3 & 2) != 0 )
    return cliopts_t_add(a2, (__int128 *)&qword_14F900, 1);
  return result;
}
// 14F810: using guessed type __int64 qword_14F810;
// 14F900: using guessed type __int64 qword_14F900;
