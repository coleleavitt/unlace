/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A8628
// Address: 0x00000000004A8628

//----- (00000000004A8628) ----------------------------------------------------
__int64 __fastcall sub_4A8628(__int64 a1, int a2)
{
  _BYTE *v3; // x0
  __int64 v4; // x20
  __int64 v5; // x0

  v3 = *(_BYTE **)(a1 + 24);
  if ( *v3 == 74 )
  {
    *(_QWORD *)(a1 + 24) = v3 + 1;
LABEL_3:
    v4 = sub_4A7538(a1);
    if ( !v4 )
      return 0;
    goto LABEL_4;
  }
  if ( a2 )
    goto LABEL_3;
  v4 = 0;
LABEL_4:
  v5 = sub_4A8290(a1);
  if ( v5 )
    return sub_4A5090(a1, 41, v4, v5);
  return 0;
}
