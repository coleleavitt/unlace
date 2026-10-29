/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_980F8
// Address: 0x000980F8

//----- (000980F8) --------------------------------------------------------
int __fastcall sub_980F8(int a1, int a2)
{
  __int64 v2; // r2

  HIDWORD(v2) = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(a2 + 16) == -1 )
  {
    LODWORD(v2) = 0;
    *(_QWORD *)(a2 + 12) = v2;
  }
  else
  {
    LODWORD(v2) = *(_DWORD *)(a2 + 12);
  }
  if ( (unsigned int)v2 < HIDWORD(v2) )
    return sub_9484A(*(unsigned __int8 **)(*(_DWORD *)(a1 + 8) + 4 * v2));
  else
    return 0;
}
