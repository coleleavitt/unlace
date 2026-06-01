/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8AA64
// Address: 0x000000000008AA64

//----- (000000000008AA64) ----------------------------------------------------
void *__fastcall sub_8AA64(__int64 a1, int a2, char a3, char a4, __int64 a5, __int64 a6)
{
  char v12; // w24
  char v13; // w23
  pthread_mutex_t *v14; // x0
  __int64 v15; // x8
  void *result; // x0

  memset((void *)(a1 + 4), 0, 0x1408u);
  v12 = a3 & 1;
  v13 = a4 & 1;
  v14 = (pthread_mutex_t *)(a1 + 1034);
  if ( *(_QWORD *)(a6 + 8) > 1u )
    qstrncpy(v14, *(char **)a6, 4096);
  else
    v14->__size[0] = 0;
  v15 = *(_QWORD *)(a5 + 8);
  *(_DWORD *)(a1 + 4) = a2;
  if ( (unsigned __int64)(int)v15 > 0x400 )
    LODWORD(v15) = 1024;
  *(_WORD *)(a1 + 8) = v15;
  result = memmove((void *)(a1 + 10), *(const void **)a5, (int)v15);
  *(_BYTE *)a1 = v12;
  *(_BYTE *)(a1 + 1) = v13;
  return result;
}
