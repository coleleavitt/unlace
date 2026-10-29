/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D40B8
// Address: 0x00000000000D40B8

//----- (00000000000D40B8) ----------------------------------------------------
__int64 __fastcall sub_D40B8(__int64 a1, _BYTE *a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // x19
  unsigned __int64 v8; // x8

  if ( !a1 )
  {
    LODWORD(v5) = -102;
    return (unsigned int)v5;
  }
  if ( *(_QWORD *)(a1 + 112) >= a3 )
    v5 = a3;
  else
    v5 = *(_QWORD *)(a1 + 112);
  if ( sub_D4FC4(a1) )
    goto LABEL_6;
  if ( v5 )
  {
    *a2 = 0;
    if ( (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, unsigned __int64))(a1 + 8))(
           *(_QWORD *)(a1 + 56),
           *(_QWORD *)(a1 + 96),
           a2,
           v5) != v5 )
    {
LABEL_6:
      LODWORD(v5) = -1;
      return (unsigned int)v5;
    }
  }
  else if ( !a2 )
  {
    return (unsigned int)v5;
  }
  v8 = *(_QWORD *)(a1 + 112);
  if ( v8 < a3 )
    a2[v8] = 0;
  return (unsigned int)v5;
}
