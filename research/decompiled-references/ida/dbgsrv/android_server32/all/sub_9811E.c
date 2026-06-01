/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9811E
// Address: 0x0009811E

//----- (0009811E) --------------------------------------------------------
int __fastcall sub_9811E(int result, int a2)
{
  __int64 v2; // r2
  int v3; // r0

  HIDWORD(v2) = *(_DWORD *)(result + 12);
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
  {
    v3 = *(_DWORD *)(*(_DWORD *)(result + 8) + 4 * v2);
    return (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  return result;
}
