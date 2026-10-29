/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140066EC0
// Address: 0x0000000140066EC0

//----- (0000000140066EC0) ----------------------------------------------------
__int64 __fastcall sub_140066EC0(_QWORD *a1, __int128 *a2, char a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  result = sub_140064E90(&v5, a2, 63, a3);
  if ( (_DWORD)result == 1 )
    *a1 = v5;
  return result;
}
