/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060EF0
// Address: 0x0000000100060EF0

//----- (0000000100060EF0) ----------------------------------------------------
bool __fastcall sub_100060EF0(__int64 a1, int a2, char *a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  const char *v8; // rsi

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  v7 = v6;
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 16) )
      v8 = *(const char **)(v6 + 8);
    else
      v8 = _s1;
    qstrncpy(a3, (__int64)v8, a4);
  }
  else
  {
    qsnprintf(a3, a4, "%08X", a2);
  }
  return v7 != 0;
}
