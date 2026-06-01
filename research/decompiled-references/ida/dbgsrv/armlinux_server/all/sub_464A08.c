/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464A08
// Address: 0x0000000000464A08

//----- (0000000000464A08) ----------------------------------------------------
void *__fastcall sub_464A08(__int64 a1, int a2, char a3, char a4, __int64 a5, __int64 a6)
{
  size_t v11; // x2
  __int16 v12; // w0
  void *result; // x0

  if ( *(_QWORD *)(a6 + 8) > 1u )
    sub_493350(a1 + 1034, *(unsigned __int8 **)a6, 4096);
  else
    *(_BYTE *)(a1 + 1034) = 0;
  v11 = (int)*(_QWORD *)(a5 + 8);
  v12 = *(_QWORD *)(a5 + 8);
  if ( v11 > 0x400 )
  {
    v11 = 1024;
    v12 = 1024;
  }
  *(_DWORD *)(a1 + 4) = a2;
  *(_WORD *)(a1 + 8) = v12;
  result = memmove((void *)(a1 + 10), *(const void **)a5, v11);
  *(_BYTE *)a1 = a3;
  *(_BYTE *)(a1 + 1) = a4;
  return result;
}
