/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B91C
// Address: 0x000000000008B91C

//----- (000000000008B91C) ----------------------------------------------------
void *__fastcall sub_8B91C(__int64 a1, __int64 a2, int a3, int a4, char a5, char a6, __int64 a7, __int64 a8)
{
  size_t v8; // x26
  void *v17; // x0
  pthread_mutex_t *v18; // x0
  __int64 v19; // x8
  void *result; // x0

  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = 0;
  v8 = *(_QWORD *)(a2 + 8);
  if ( v8 )
  {
    v17 = qalloc_or_throw(*(_QWORD *)(a2 + 8));
    *(_QWORD *)a1 = v17;
    *(_QWORD *)(a1 + 16) = v8;
    memcpy(v17, *(const void **)a2, v8);
    *(_QWORD *)(a1 + 8) = v8;
  }
  *(_DWORD *)(a1 + 24) = a3;
  memset((void *)(a1 + 32), 0, 0x1408u);
  v18 = (pthread_mutex_t *)(a1 + 1062);
  if ( *(_QWORD *)(a8 + 8) > 1u )
    qstrncpy(v18, *(char **)a8, 4096);
  else
    v18->__size[0] = 0;
  v19 = *(_QWORD *)(a7 + 8);
  *(_DWORD *)(a1 + 32) = a4;
  if ( (unsigned __int64)(int)v19 > 0x400 )
    LODWORD(v19) = 1024;
  *(_WORD *)(a1 + 36) = v19;
  result = memmove((void *)(a1 + 38), *(const void **)a7, (int)v19);
  *(_BYTE *)(a1 + 28) = a5 & 1;
  *(_BYTE *)(a1 + 29) = a6 & 1;
  return result;
}
