/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140052150
// Address: 0x0000000140052150

//----- (0000000140052150) ----------------------------------------------------
__int64 __fastcall sub_140052150(__int64 a1, const char *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  __int64 i; // rdi
  __int64 v8; // r14

  v3 = 0;
  if ( !*(_QWORD *)(a1 + 512) )
    return 0xFFFFFFFFLL;
  for ( i = 0; ; i += 32 )
  {
    v8 = *(_QWORD *)(a1 + 504);
    if ( !stricmp(a2, *(const char **)(v8 + i)) )
      break;
    if ( (unsigned __int64)++v3 >= *(_QWORD *)(a1 + 512) )
      return 0xFFFFFFFFLL;
  }
  if ( a3 )
    *a3 = *(unsigned __int8 *)(v8 + i + 12);
  return (unsigned int)v3;
}
