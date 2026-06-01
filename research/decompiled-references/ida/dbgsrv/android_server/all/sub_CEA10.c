/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CEA10
// Address: 0x00000000000CEA10

//----- (00000000000CEA10) ----------------------------------------------------
__int64 __fastcall sub_CEA10(_QWORD *a1, char *dest, _DWORD *a3)
{
  __int64 v3; // x21
  int v6; // w8
  __int64 result; // x0

  if ( !a1 )
    return 4294967294LL;
  if ( !a1[8] )
    return 4294967294LL;
  if ( !a1[9] )
    return 4294967294LL;
  v3 = a1[7];
  if ( !v3 || *(_QWORD **)v3 != a1 || (unsigned int)(*(_DWORD *)(v3 + 8) - 16180) > 0x1F )
    return 4294967294LL;
  if ( dest )
  {
    v6 = *(_DWORD *)(v3 + 64);
    if ( v6 )
    {
      memcpy(
        dest,
        (const void *)(*(_QWORD *)(v3 + 72) + *(unsigned int *)(v3 + 68)),
        (unsigned int)(v6 - *(_DWORD *)(v3 + 68)));
      memcpy(
        &dest[*(unsigned int *)(v3 + 64) - *(unsigned int *)(v3 + 68)],
        *(const void **)(v3 + 72),
        *(unsigned int *)(v3 + 68));
    }
  }
  result = 0;
  if ( a3 )
    *a3 = *(_DWORD *)(v3 + 64);
  return result;
}
