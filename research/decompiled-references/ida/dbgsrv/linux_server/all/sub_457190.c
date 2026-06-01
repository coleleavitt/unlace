/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457190
// Address: 0x0000000000457190

//----- (0000000000457190) ----------------------------------------------------
__int64 __fastcall sub_457190(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 216LL))(
             a1,
             *(unsigned int *)(a2 + 4),
             1);
  if ( (int)result > 0 )
    return sub_457100(a1, a2);
  return result;
}
