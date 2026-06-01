/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71740
// Address: 0x00071740

//----- (00071740) --------------------------------------------------------
__int64 __cdecl sub_71740(int a1, int a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)a1 || *(_BYTE *)a2 )
    result = *(_QWORD *)(a1 + 4) / *(_QWORD *)(a2 + 4);
  else
    result = *(_QWORD *)(a1 + 4) / *(__int64 *)(a2 + 4);
  *(_QWORD *)(a1 + 4) = result;
  return result;
}
