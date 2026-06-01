/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100061390
// Address: 0x0000000100061390

//----- (0000000100061390) ----------------------------------------------------
__int64 __fastcall sub_100061390(__int64 a1, __int64 *a2, int a3)
{
  __int64 v5; // r13
  __int64 v6; // r12
  char *v7; // r14
  void *v8; // rdi
  void *v9; // rdi
  __int64 result; // rax
  void **v12; // [rsp+10h] [rbp-30h]

  v12 = (void **)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
  {
    v6 = 8;
    do
    {
      v7 = (char *)*v12;
      v8 = *(void **)((char *)*v12 + v6 + 24);
      if ( v8 )
      {
        *(_QWORD *)&v7[v6 + 32] = 0;
        qfree(v8);
        *(_QWORD *)&v7[v6 + 24] = 0;
        *(_QWORD *)&v7[v6 + 40] = 0;
      }
      v9 = *(void **)&v7[v6];
      if ( v9 )
      {
        *(_QWORD *)&v7[v6 + 8] = 0;
        qfree(v9);
        *(_QWORD *)&v7[v6] = 0;
        *(_QWORD *)&v7[v6 + 16] = 0;
      }
      v6 += 56;
      --v5;
    }
    while ( v5 );
  }
  result = a1;
  *(_QWORD *)(a1 + 56) = 0;
  if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)a3 )
  {
    result = (__int64)qvector_reserve((__int64)v12, *v12, a3, 0x38u);
    *v12 = (void *)result;
  }
  if ( a3 > 0 )
  {
    do
    {
      result = sub_1000614B0((char **)v12, a2);
      a2 += 7;
      --a3;
    }
    while ( a3 );
  }
  return result;
}
