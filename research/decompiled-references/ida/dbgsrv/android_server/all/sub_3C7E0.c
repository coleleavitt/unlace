/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C7E0
// Address: 0x000000000003C7E0

//----- (000000000003C7E0) ----------------------------------------------------
void __fastcall sub_3C7E0(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  int v4; // w20
  __int64 v5; // x9

  v2 = *(_QWORD *)(a1 + 1744);
  v4 = a2;
  if ( !v2 )
    goto LABEL_8;
  v5 = a1 + 1744;
  do
  {
    if ( *(_DWORD *)(v2 + 32) >= (int)a2 )
      v5 = v2;
    v2 = *(_QWORD *)(v2 + 8LL * (*(_DWORD *)(v2 + 32) < (int)a2));
  }
  while ( v2 );
  if ( v5 == a1 + 1744 || *(_DWORD *)(v5 + 32) > (int)a2 )
  {
LABEL_8:
    if ( *(_DWORD *)(a1 + 1844) != a2 )
      sub_3B6B4(a1, a2, 0);
    sub_3B234(a1, v4, -1);
  }
}
