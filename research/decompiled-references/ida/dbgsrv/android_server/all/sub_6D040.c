/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D040
// Address: 0x000000000006D040

//----- (000000000006D040) ----------------------------------------------------
_QWORD *__fastcall sub_6D040(__int64 a1, __int64 a2, const char **a3)
{
  const char *v3; // x22
  unsigned __int64 v7; // x2
  _DWORD *v8; // x22
  _QWORD *result; // x0

  v3 = *a3;
  v7 = (unsigned __int64)&v3[strlen(*a3)];
  *a3 = (const char *)v7;
  v8 = (_DWORD *)(a1 + 128);
  result = sub_6CCE4((_QWORD *)a1, a2, v7, *(_DWORD *)(a1 + 128));
  if ( *((unsigned __int8 *)*a3 - 1) == *(unsigned __int8 *)(a1 + 184) )
    result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 40LL))(a2, 16);
  else
    v8 = (_DWORD *)(a1 + 116);
  *(_DWORD *)(a1 + 176) = *v8;
  return result;
}
