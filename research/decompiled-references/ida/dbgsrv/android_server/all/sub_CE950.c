/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CE950
// Address: 0x00000000000CE950

//----- (00000000000CE950) ----------------------------------------------------
__int64 __fastcall sub_CE950(_QWORD *a1)
{
  void (__fastcall *v2)(_QWORD, __int64); // x9
  __int64 v3; // x1

  if ( !a1 )
    return 4294967294LL;
  if ( !a1[8] )
    return 4294967294LL;
  v2 = (void (__fastcall *)(_QWORD, __int64))a1[9];
  if ( !v2 )
    return 4294967294LL;
  v3 = a1[7];
  if ( !v3 )
    return 4294967294LL;
  if ( *(_QWORD **)v3 != a1 )
    return 4294967294LL;
  if ( (unsigned int)(*(_DWORD *)(v3 + 8) - 16180) > 0x1F )
    return 4294967294LL;
  if ( *(_QWORD *)(v3 + 72) )
  {
    v2(a1[10], *(_QWORD *)(v3 + 72));
    v2 = (void (__fastcall *)(_QWORD, __int64))a1[9];
    v3 = a1[7];
  }
  v2(a1[10], v3);
  a1[7] = 0;
  return 0;
}
