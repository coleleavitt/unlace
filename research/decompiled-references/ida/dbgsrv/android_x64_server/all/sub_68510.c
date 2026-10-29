/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68510
// Address: 0x0000000000068510

//----- (0000000000068510) ----------------------------------------------------
__int64 __fastcall sub_68510(const char *a1, int a2, const void *a3, unsigned __int64 a4, double a5, __m128 a6)
{
  pthread_mutex_t *v8; // r12
  _QWORD *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rbp
  unsigned int v12; // ebx
  char v14; // [rsp+Fh] [rbp-39h] BYREF
  unsigned __int64 v15; // [rsp+10h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  v8 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  v9 = (_QWORD *)sub_6B0F0();
  v10 = sub_6CC60((__int64)v9, a1, a5, a6);
  if ( v10 == -1 )
  {
    v12 = 0;
  }
  else
  {
    v11 = *(_QWORD *)(*v9 + 8 * v10);
    v12 = v11 + 32;
    v14 = 0;
    sub_5E330(v11 + 32, a4, &v14);
    memcpy(*(void **)(v11 + 32), a3, a4);
    sub_6C050((_QWORD *)(v11 + 32));
    *(_DWORD *)(v11 + 24) = a2;
    *(_DWORD *)(v11 + 136) = 0;
    LOBYTE(v12) = 1;
  }
  qmutex_unlock(v8);
  return v12;
}
