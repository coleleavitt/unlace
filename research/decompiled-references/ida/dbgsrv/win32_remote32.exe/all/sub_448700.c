/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448700
// Address: 0x00448700

//----- (00448700) --------------------------------------------------------
BOOL __userpurge sub_448700@<eax>(int a1@<ecx>, int a2@<edi>, __m128i a3@<xmm0>, int a4)
{
  const CHAR *v5; // esi
  int *v6; // esi
  int v7; // edi

  v5 = (const CHAR *)(a1 + 4);
  if ( !sub_457B00((LPCCH)(a1 + 4)) )
    return 0;
  if ( a4 != 1 )
    return 1;
  v6 = sub_45C5A0(a1, a2, a3, v5, 0);
  v7 = sub_4613F0(a2, (int)v6);
  sub_45C550(a1, v7, v6);
  return *(_DWORD *)(a1 + 1076) == v7;
}
