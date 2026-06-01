/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8AB10
// Address: 0x000000000008AB10

//----- (000000000008AB10) ----------------------------------------------------
void *__fastcall sub_8AB10(__int64 a1, int a2, char a3, char a4, __int64 a5, __int64 a6)
{
  char v9; // w23
  char v10; // w22
  pthread_mutex_t *v11; // x0
  __int64 v12; // x8
  void *result; // x0

  v9 = a3 & 1;
  v10 = a4 & 1;
  v11 = (pthread_mutex_t *)(a1 + 1034);
  if ( *(_QWORD *)(a6 + 8) > 1u )
    qstrncpy(v11, *(char **)a6, 4096);
  else
    v11->__size[0] = 0;
  v12 = *(_QWORD *)(a5 + 8);
  *(_DWORD *)(a1 + 4) = a2;
  if ( (unsigned __int64)(int)v12 > 0x400 )
    LODWORD(v12) = 1024;
  *(_WORD *)(a1 + 8) = v12;
  result = memmove((void *)(a1 + 10), *(const void **)a5, (int)v12);
  *(_BYTE *)a1 = v9;
  *(_BYTE *)(a1 + 1) = v10;
  return result;
}
