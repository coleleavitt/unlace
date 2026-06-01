/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49ED28
// Address: 0x000000000049ED28

//----- (000000000049ED28) ----------------------------------------------------
__int64 __fastcall sub_49ED28(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  const char *v8; // x1
  const char *v9; // x0

  if ( a5 == a3
    && ((v8 = *(const char **)(a4 + 8), v9 = *(const char **)(a1 + 8), v9 == v8) || *v9 != 42 && !strcmp(v9, v8)) )
  {
    return 6;
  }
  else
  {
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 64LL))(*(_QWORD *)(a1 + 16), a2);
  }
}
