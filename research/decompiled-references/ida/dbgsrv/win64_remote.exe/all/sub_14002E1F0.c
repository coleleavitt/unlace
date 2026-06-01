/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002E1F0
// Address: 0x000000014002E1F0

//----- (000000014002E1F0) ----------------------------------------------------
_QWORD *__fastcall sub_14002E1F0(__int64 a1)
{
  _QWORD *v2; // rdi
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rbx
  char *v5; // rax
  char *v6; // rbp
  __int64 v7; // r15
  _QWORD *v8; // rbx
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  void *v11; // rcx
  void *v12; // rcx
  _QWORD *result; // rax

  v2 = (_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 8) + 1LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( v3 > v4 )
  {
    v5 = (char *)sub_14005ABE0(a1, nullptr, v3, 0x30u);
    v6 = v5;
    v7 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = v4;
    v8 = *(_QWORD **)a1;
    v9 = *v2 - 1LL;
    if ( v9 >= 0 )
    {
      v10 = v5 + 16;
      do
      {
        *(v10 - 2) = *v8;
        *v8 = 0;
        *(v10 - 1) = v8[1];
        v8[1] = 0;
        *v10 = v8[2];
        v8[2] = 0;
        v10[1] = v8[3];
        v8[3] = 0;
        v10[2] = v8[4];
        v8[4] = 0;
        v10[3] = v8[5];
        v8[5] = 0;
        v11 = (void *)v8[3];
        if ( v11 )
        {
          v8[4] = 0;
          j_free(v11);
          v8[3] = 0;
          v8[5] = 0;
        }
        v12 = (void *)*v8;
        if ( *v8 )
        {
          v8[1] = 0;
          j_free(v12);
          *v8 = 0;
          v8[2] = 0;
        }
        v8 += 6;
        v10 += 6;
        --v9;
      }
      while ( v9 >= 0 );
      v2 = (_QWORD *)(a1 + 8);
    }
    j_free(*(void **)a1);
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 16) = v7;
  }
  result = (_QWORD *)(48LL * *v2 + *(_QWORD *)a1);
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  ++*v2;
  return result;
}
