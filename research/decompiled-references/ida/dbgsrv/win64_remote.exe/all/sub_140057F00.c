/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140057F00
// Address: 0x0000000140057F00

//----- (0000000140057F00) ----------------------------------------------------
__int64 __fastcall sub_140057F00(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  sub_1400545B0(*(_QWORD *)(a1 + 32));
  result = 0;
  *(_DWORD *)(a1 + 24) = -1;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( a3 )
  {
    if ( a2 > -1 )
    {
      *(_QWORD *)(a1 + 8) = a3;
      *(_QWORD *)(a1 + 16) = a4;
      *(_DWORD *)(a1 + 24) = a2;
    }
  }
  return result;
}
