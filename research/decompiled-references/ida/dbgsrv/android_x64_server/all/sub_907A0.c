/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_907A0
// Address: 0x00000000000907A0

//----- (00000000000907A0) ----------------------------------------------------
void *__fastcall sub_907A0(__int64 a1, int a2, char a3, char a4, __int64 a5, __int64 *a6)
{
  _BYTE *v11; // rdi
  unsigned __int64 v12; // rax
  void *result; // rax

  memset((void *)(a1 + 4), 0, 0x1408u);
  v11 = (_BYTE *)(a1 + 1034);
  if ( (unsigned __int64)a6[1] > 1 )
    qstrncpy(v11, *a6, 4096);
  else
    *v11 = 0;
  v12 = (int)*(_QWORD *)(a5 + 8);
  if ( v12 > 0x400 )
    LODWORD(v12) = 1024;
  *(_DWORD *)(a1 + 4) = a2;
  *(_WORD *)(a1 + 8) = v12;
  result = memmove((void *)(a1 + 10), *(const void **)a5, (int)v12);
  *(_BYTE *)a1 = a3;
  *(_BYTE *)(a1 + 1) = a4;
  return result;
}
