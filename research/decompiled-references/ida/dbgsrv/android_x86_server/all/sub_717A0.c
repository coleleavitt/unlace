/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_717A0
// Address: 0x000717A0

//----- (000717A0) --------------------------------------------------------
__int64 __cdecl sub_717A0(int a1, int a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)a1 || *(_BYTE *)a2 )
    result = *(_QWORD *)(a1 + 4) % *(_QWORD *)(a2 + 4);
  else
    result = *(__int64 *)(a1 + 4) % *(_QWORD *)(a2 + 4);
  *(_QWORD *)(a1 + 4) = result;
  return result;
}
