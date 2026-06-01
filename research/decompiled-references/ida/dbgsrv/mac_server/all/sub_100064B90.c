/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100064B90
// Address: 0x0000000100064B90

//----- (0000000100064B90) ----------------------------------------------------
__int64 __fastcall sub_100064B90(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  sub_100069C30(a1, a2, a3);
  result = cliopts_t_add(a2, (__int128 *)&qword_1000A9D80, 1);
  if ( *(_BYTE *)(a1 + 136) == 1 )
    return cliopts_t_add(a2, (__int128 *)&qword_1000A9DB0, 2);
  return result;
}
// 1000A9D80: using guessed type __int64 qword_1000A9D80;
// 1000A9DB0: using guessed type __int64 qword_1000A9DB0;
