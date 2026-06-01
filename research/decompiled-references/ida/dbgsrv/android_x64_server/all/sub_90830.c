/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90830
// Address: 0x0000000000090830

//----- (0000000000090830) ----------------------------------------------------
void *__fastcall sub_90830(__int64 a1, int a2, char a3, char a4, __int64 a5, __int64 *a6)
{
  _BYTE *v10; // rdi
  unsigned __int64 v11; // rax
  void *result; // rax

  v10 = (_BYTE *)(a1 + 1034);
  if ( (unsigned __int64)a6[1] > 1 )
    qstrncpy(v10, *a6, 4096);
  else
    *v10 = 0;
  v11 = (int)*(_QWORD *)(a5 + 8);
  if ( v11 > 0x400 )
    LODWORD(v11) = 1024;
  *(_DWORD *)(a1 + 4) = a2;
  *(_WORD *)(a1 + 8) = v11;
  result = memmove((void *)(a1 + 10), *(const void **)a5, (int)v11);
  *(_BYTE *)a1 = a3;
  *(_BYTE *)(a1 + 1) = a4;
  return result;
}
