/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9DDF0
// Address: 0x000000000009DDF0

//----- (000000000009DDF0) ----------------------------------------------------
void *__fastcall sub_9DDF0(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v6; // rbx
  char *v7; // r13
  char *v8; // rbx
  __int64 v9; // rbp
  char *v10; // rbx
  __int64 v11; // r14
  void *v12; // rdi
  void *v13; // rdi
  void **v14; // r14
  void *result; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // rbp
  __int64 v18; // [rsp+8h] [rbp-40h]

  v4 = a2;
  v6 = a1[2];
  if ( v6 >= a2 )
  {
    v14 = (void **)(a1 + 1);
  }
  else
  {
    v7 = (char *)qvector_reserve((__int64)a1, nullptr, a2, 0x1B0u);
    v18 = a1[2];
    a1[2] = v6;
    v8 = (char *)*a1;
    v9 = a1[1] - 1LL;
    if ( v9 >= 0 )
    {
      v10 = v8 + 64;
      v11 = 0;
      do
      {
        *(_QWORD *)&v7[v11] = *(_QWORD *)&v10[v11 - 64];
        *(_QWORD *)&v7[v11 + 8] = *(_QWORD *)&v10[v11 - 56];
        *(_QWORD *)&v10[v11 - 56] = 0;
        *(_QWORD *)&v7[v11 + 16] = *(_QWORD *)&v10[v11 - 48];
        *(_QWORD *)&v10[v11 - 48] = 0;
        *(_QWORD *)&v7[v11 + 24] = *(_QWORD *)&v10[v11 - 40];
        *(_QWORD *)&v10[v11 - 40] = 0;
        *(_DWORD *)&v7[v11 + 32] = *(_DWORD *)&v10[v11 - 32];
        *(_QWORD *)&v7[v11 + 40] = *(_QWORD *)&v10[v11 - 24];
        *(_QWORD *)&v10[v11 - 24] = 0;
        *(_QWORD *)&v7[v11 + 48] = *(_QWORD *)&v10[v11 - 16];
        *(_QWORD *)&v10[v11 - 16] = 0;
        *(_QWORD *)&v7[v11 + 56] = *(_QWORD *)&v10[v11 - 8];
        *(_QWORD *)&v10[v11 - 8] = 0;
        memcpy(&v7[v11 + 64], &v10[v11], 0x170u);
        v12 = *(void **)&v10[v11 - 24];
        if ( v12 )
        {
          *(_QWORD *)&v10[v11 - 16] = 0;
          qfree(v12);
          *(_QWORD *)&v10[v11 - 24] = 0;
          *(_QWORD *)&v10[v11 - 8] = 0;
        }
        v13 = *(void **)&v10[v11 - 56];
        if ( v13 )
        {
          *(_QWORD *)&v10[v11 - 48] = 0;
          qfree(v13);
          *(_QWORD *)&v10[v11 - 56] = 0;
          *(_QWORD *)&v10[v11 - 40] = 0;
        }
        v11 += 432;
        --v9;
      }
      while ( v9 >= 0 );
      v8 = (char *)*a1;
    }
    v14 = (void **)(a1 + 1);
    qfree(v8);
    *a1 = v7;
    a1[2] = v18;
    v4 = a2;
  }
  result = *v14;
  if ( (unsigned __int64)*v14 < v4 )
  {
    v16 = 432LL * (_QWORD)result;
    v17 = v4 - (_QWORD)result;
    do
    {
      result = sub_9DFF0(v16 + *a1, a3);
      v16 += 432;
      --v17;
    }
    while ( v17 );
  }
  *v14 = (void *)v4;
  return result;
}
