/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C88E4
// Address: 0x00000000000C88E4

//----- (00000000000C88E4) ----------------------------------------------------
__int64 __fastcall sub_C88E4(_QWORD *a1)
{
  void (__fastcall *v2)(_QWORD, _QWORD); // x9
  __int64 v3; // x1
  __int64 result; // x0
  int v5; // w20

  if ( !a1 )
    return 4294967294LL;
  if ( !a1[8] )
    return 4294967294LL;
  v2 = (void (__fastcall *)(_QWORD, _QWORD))a1[9];
  if ( !v2 )
    return 4294967294LL;
  v3 = a1[7];
  if ( !v3 || *(_QWORD **)v3 != a1 )
    return 4294967294LL;
  v5 = *(_DWORD *)(v3 + 8);
  if ( ((unsigned int)(v5 - 57) > 0x38 || ((1LL << ((unsigned __int8)v5 - 57)) & 0x100400400011001LL) == 0)
    && v5 != 666
    && v5 != 42 )
  {
    return 4294967294LL;
  }
  if ( *(_QWORD *)(v3 + 16) )
  {
    v2(a1[10], *(_QWORD *)(v3 + 16));
    v3 = a1[7];
  }
  if ( *(_QWORD *)(v3 + 120) )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))a1[9])(a1[10], *(_QWORD *)(v3 + 120));
    v3 = a1[7];
  }
  if ( *(_QWORD *)(v3 + 112) )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))a1[9])(a1[10], *(_QWORD *)(v3 + 112));
    v3 = a1[7];
  }
  if ( *(_QWORD *)(v3 + 96) )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))a1[9])(a1[10], *(_QWORD *)(v3 + 96));
    v3 = a1[7];
  }
  ((void (__fastcall *)(_QWORD, __int64))a1[9])(a1[10], v3);
  if ( v5 == 113 )
    result = 4294967293LL;
  else
    result = 0;
  a1[7] = 0;
  return result;
}
