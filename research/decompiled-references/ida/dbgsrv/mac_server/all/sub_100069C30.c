/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100069C30
// Address: 0x0000000100069C30

//----- (0000000100069C30) ----------------------------------------------------
__int64 __fastcall sub_100069C30(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = cliopts_t_add(a2, (__int128 *)&qword_1000AA500, 5);
  if ( (a3 & 1) != 0 )
    return cliopts_t_add(a2, (__int128 *)&qword_1000AA5D0, 1);
  return result;
}
// 1000AA500: using guessed type __int64 qword_1000AA500;
// 1000AA5D0: using guessed type __int64 qword_1000AA5D0;
