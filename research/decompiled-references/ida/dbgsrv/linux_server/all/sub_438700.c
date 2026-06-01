/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438700
// Address: 0x0000000000438700

//----- (0000000000438700) ----------------------------------------------------
__int64 __fastcall sub_438700(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 8;
  *(_QWORD *)(a1 + 32) = a1 + 8;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 1;
  *(_DWORD *)(a1 + 52) = a2;
  result = sub_438630();
  if ( (unsigned __int64)*(int *)(a1 + 52) >= *(_QWORD *)(result + 72) )
    *(_DWORD *)(a1 + 52) = 0;
  return result;
}
