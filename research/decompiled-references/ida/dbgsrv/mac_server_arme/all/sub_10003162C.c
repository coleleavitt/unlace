/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003162C
// Address: 0x000000010003162C

//----- (000000010003162C) ----------------------------------------------------
size_t __fastcall sub_10003162C(__int64 a1, __int64 a2, const char **a3)
{
  const char *v6; // x22
  size_t result; // x0
  char *v8; // x22
  char *v9; // x1
  __int64 v10; // x23
  __int64 v11; // x24
  __int64 v12; // x0
  _DWORD *v13; // x21

  v6 = *a3;
  result = strlen(*a3);
  v8 = (char *)&v6[result];
  *a3 = v8;
  v9 = *(char **)(a1 + 168);
  if ( v9 < v8 )
  {
    v10 = *(unsigned int *)(a1 + 128);
    v11 = sub_1000311EC(*(_BYTE **)(a1 + 160), v9);
    v12 = sub_1000311EC(*(_BYTE **)(a1 + 168), v8);
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v11, v12, v10);
    *(_QWORD *)(a1 + 168) = v8;
    v8 = (char *)*a3;
  }
  if ( *(v8 - 1) == *(_BYTE *)(a1 + 184) )
  {
    v13 = (_DWORD *)(a1 + 128);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 40LL))(a2, 16);
  }
  else
  {
    v13 = (_DWORD *)(a1 + 116);
  }
  *(_DWORD *)(a1 + 176) = *v13;
  return result;
}
