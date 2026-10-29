/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140056A70
// Address: 0x0000000140056A70

//----- (0000000140056A70) ----------------------------------------------------
int __fastcall sub_140056A70(__int64 a1, int a2)
{
  SOCKET v3; // rcx
  int result; // eax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 != -1 )
  {
    if ( a2 > -1 )
      shutdown(v3, a2);
    result = closesocket(*(_QWORD *)(a1 + 56));
    *(_QWORD *)(a1 + 56) = -1;
  }
  return result;
}
