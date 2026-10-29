/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430F80
// Address: 0x0000000000430F80

//----- (0000000000430F80) ----------------------------------------------------
__int64 __fastcall sub_430F80(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // x20
  _BYTE *v5; // x19
  _BYTE *v6; // x20

  v4 = a1[2];
  if ( v4 > 1 )
  {
    v5 = (_BYTE *)a1[1];
    v6 = &v5[v4 - 1];
    do
    {
      *v5 = tolower((unsigned __int8)*v5);
      ++v5;
    }
    while ( v5 != v6 );
  }
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  *(_QWORD *)(a2 + 8) = a1[1];
  *(_QWORD *)(a2 + 16) = a1[2];
  *(_QWORD *)(a2 + 24) = a1[3];
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  return 0;
}
