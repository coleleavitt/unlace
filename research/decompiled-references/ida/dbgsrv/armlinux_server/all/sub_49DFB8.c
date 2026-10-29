/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49DFB8
// Address: 0x000000000049DFB8

//----- (000000000049DFB8) ----------------------------------------------------
__int64 __fastcall sub_49DFB8(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  const char *v4; // x4
  const char *v5; // x5
  __int64 result; // x0

  v4 = *(const char **)(a1 + 8);
  v5 = (const char *)a2[1];
  if ( v4 == v5 )
    return 1;
  if ( *v4 != 42 && !strcmp(v4, v5) )
    return 1;
  result = 0;
  if ( a4 <= 3 )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a2 + 40LL))(a2, a1, a3);
  return result;
}
