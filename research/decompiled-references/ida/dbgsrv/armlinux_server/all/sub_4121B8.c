/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4121B8
// Address: 0x00000000004121B8

//----- (00000000004121B8) ----------------------------------------------------
__int64 __fastcall sub_4121B8(__int64 a1, __int64 a2)
{
  __int64 v2; // x2
  __int64 v3; // x5
  unsigned int v5; // w20

  v2 = *(_QWORD *)(a1 + 1928);
  if ( v2 )
  {
    v3 = a1 + 1920;
    do
    {
      while ( (int)a2 <= *(_DWORD *)(v2 + 32) )
      {
        v3 = v2;
        v2 = *(_QWORD *)(v2 + 16);
        if ( !v2 )
          goto LABEL_5;
      }
      v2 = *(_QWORD *)(v2 + 24);
    }
    while ( v2 );
LABEL_5:
    if ( a1 + 1920 != v3 && (int)a2 >= *(_DWORD *)(v3 + 32) && v3 != -40 )
      return 0;
  }
  v5 = a2;
  if ( *(_DWORD *)(a1 + 2044) == a2 )
    return sub_4113A8(a1, (unsigned int)a2, (int *)0xFFFFFFFFFFFFFFFFLL);
  sub_411A98(a1, a2, 0);
  return sub_4113A8(a1, v5, (int *)0xFFFFFFFFFFFFFFFFLL);
}
