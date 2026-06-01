/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91530
// Address: 0x0000000000091530

//----- (0000000000091530) ----------------------------------------------------
__int64 __fastcall sub_91530(__int64 a1, __int64 a2, int a3, int a4, char a5, unsigned int a6, __int64 a7, __int64 *a8)
{
  size_t v11; // rbp
  void *v12; // rax
  _BYTE *v13; // rdi
  unsigned __int64 v14; // rcx

  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v11 = *(_QWORD *)(a2 + 8);
  if ( v11 )
  {
    v12 = qalloc_or_throw(*(_QWORD *)(a2 + 8));
    *(_QWORD *)a1 = v12;
    *(_QWORD *)(a1 + 16) = v11;
    memcpy(v12, *(const void **)a2, v11);
    *(_QWORD *)(a1 + 8) = v11;
  }
  *(_DWORD *)(a1 + 24) = a3;
  memset((void *)(a1 + 32), 0, 0x1408u);
  v13 = (_BYTE *)(a1 + 1062);
  if ( (unsigned __int64)a8[1] > 1 )
    qstrncpy(v13, *a8, 4096);
  else
    *v13 = 0;
  v14 = (int)*(_QWORD *)(a7 + 8);
  if ( v14 > 0x400 )
    LODWORD(v14) = 1024;
  *(_DWORD *)(a1 + 32) = a4;
  *(_WORD *)(a1 + 36) = v14;
  memmove((void *)(a1 + 38), *(const void **)a7, (int)v14);
  *(_BYTE *)(a1 + 28) = a5;
  *(_BYTE *)(a1 + 29) = a6;
  return a6;
}
