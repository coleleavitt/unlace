/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7FBD0
// Address: 0x000000000007FBD0

//----- (000000000007FBD0) ----------------------------------------------------
char *__fastcall sub_7FBD0(__int64 a1, __int64 a2, char *a3, double a4, __m128 a5)
{
  char *v5; // r14
  __int64 v6; // rdx
  _BYTE *v7; // rbx
  __int64 v8; // r12
  char v10[8]; // [rsp+0h] [rbp-48h] BYREF
  void *ptr[2]; // [rsp+8h] [rbp-40h]
  __int64 v12; // [rsp+18h] [rbp-30h]
  unsigned __int64 v13; // [rsp+20h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  v10[0] = 2;
  *(_OWORD *)ptr = 0;
  v12 = 0;
  copy_idcv(v10, a3, 0.0, a5);
  v5 = *(char **)a1;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_BYTE **)a1;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v6 + 1) )
  {
    v7 = qvector_reserve(a1, *(char **)a1, v6 + 1, 0x20u);
    *(_QWORD *)a1 = v7;
    v6 = *(_QWORD *)(a1 + 8);
  }
  v8 = a2 - (_QWORD)v5;
  memmove(&v7[v8 + 32], &v7[v8], 32 * v6 - v8);
  v7[v8] = 2;
  *(_OWORD *)&v7[v8 + 8] = 0;
  *(_QWORD *)&v7[v8 + 24] = 0;
  copy_idcv(&v7[a2 - (_QWORD)v5], v10, 0.0, a5);
  ++*(_QWORD *)(a1 + 8);
  if ( v10[0] == 5 )
  {
    sub_72DD0((char **)ptr[0], v10, 0.0, a5);
  }
  else if ( v10[0] == 7 && ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v12 = 0;
  }
  return &v7[v8];
}
