/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfilesize
// Address: 0x000AFB50

//----- (000AFB50) --------------------------------------------------------
__int64 __cdecl qfilesize(char *file)
{
  int v1; // ecx
  __int64 result; // rax
  int v3[9]; // [esp+0h] [ebp-64h] BYREF
  __int64 v4; // [esp+24h] [ebp-40h]
  unsigned int v5; // [esp+50h] [ebp-14h]

  v5 = __readgsdword(0x14u);
  if ( !file )
    return 0;
  v1 = qstat(file, (int)v3);
  result = 0;
  if ( !v1 )
    return v4;
  return result;
}
