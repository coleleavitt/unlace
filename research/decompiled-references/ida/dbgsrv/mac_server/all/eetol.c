/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eetol
// Address: 0x0000000100076570

//----- (0000000100076570) ----------------------------------------------------
__int64 __fastcall eetol(_QWORD *a1, __int128 *a2, int a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+8h] [rbp-18h] BYREF

  result = sub_1000765D0(&v4, a2, 63, a3);
  if ( (_DWORD)result == 1 )
    *a1 = v4;
  return result;
}
