/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004E050
// Address: 0x000000014004E050

//----- (000000014004E050) ----------------------------------------------------
unsigned __int64 __fastcall sub_14004E050(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  __int64 v9; // rbx
  size_t v10; // rbp
  void *v11; // rax
  size_t v12; // rbp
  void *v13; // rax

  if ( a2 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, a2, 0x50u);
  result = *(_QWORD *)(a1 + 8);
  if ( result < a2 )
  {
    v7 = 80 * result;
    v8 = a2 - result;
    do
    {
      v9 = v7 + *(_QWORD *)a1;
      *(_QWORD *)v9 = 0;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
      v10 = *(_QWORD *)(a3 + 8);
      if ( v10 )
      {
        v11 = sub_14005AAA0(*(_QWORD *)(a3 + 8));
        *(_QWORD *)v9 = v11;
        *(_QWORD *)(v9 + 16) = v10;
        memcpy(v11, *(const void **)a3, v10);
        *(_QWORD *)(v9 + 8) = v10;
      }
      *(_QWORD *)(v9 + 24) = 0;
      *(_QWORD *)(v9 + 32) = 0;
      *(_QWORD *)(v9 + 40) = 0;
      v12 = *(_QWORD *)(a3 + 32);
      if ( v12 )
      {
        v13 = sub_14005AAA0(*(_QWORD *)(a3 + 32));
        *(_QWORD *)(v9 + 24) = v13;
        *(_QWORD *)(v9 + 40) = v12;
        memcpy(v13, *(const void **)(a3 + 24), v12);
        *(_QWORD *)(v9 + 32) = v12;
      }
      sub_140046C70((_QWORD *)(v9 + 48), a3 + 48);
      result = *(unsigned int *)(a3 + 72);
      *(_DWORD *)(v9 + 72) = result;
      v7 += 80;
      --v8;
    }
    while ( v8 );
  }
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
