/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140037FE0
// Address: 0x0000000140037FE0

//----- (0000000140037FE0) ----------------------------------------------------
__int64 __fastcall sub_140037FE0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = sub_14003C3B0(a1, a2, 0, a3);
  if ( *(_QWORD *)(a1 + 64) )
  {
    if ( !(_DWORD)result )
      return sub_14003A960(a1, a2);
  }
  return result;
}
