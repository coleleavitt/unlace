/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49DF48
// Address: 0x000000000049DF48

//----- (000000000049DF48) ----------------------------------------------------
__int64 __fastcall sub_49DF48(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v5; // x0
  const char *v6; // x1
  unsigned int v8; // w20

  v5 = *(const char **)(a1 + 8);
  v6 = *(const char **)(a2 + 8);
  if ( v5 == v6 || (v8 = 0, *v5 != 42) && !strcmp(v5, v6) )
  {
    v8 = 1;
    *(_QWORD *)a4 = a3;
    *(_DWORD *)(a4 + 8) = 6;
    *(_QWORD *)(a4 + 16) = 16;
  }
  return v8;
}
