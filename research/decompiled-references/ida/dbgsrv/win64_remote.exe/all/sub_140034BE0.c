/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140034BE0
// Address: 0x0000000140034BE0

//----- (0000000140034BE0) ----------------------------------------------------
_QWORD *__fastcall sub_140034BE0(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // r10
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // r14
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  _QWORD *result; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // rcx

  v4 = *(_QWORD **)a1;
  if ( (unsigned __int64)a2 >= *(_QWORD *)a1 && a2 < &v4[3 * *(_QWORD *)(a1 + 16)] )
  {
    v6 = *a2;
    *a2 = 0;
    v7 = a2[1];
    a2[1] = 0;
    v8 = a2[2];
    a2[2] = 0;
    v9 = *(_QWORD *)(a1 + 8) + 1LL;
    if ( v9 > *(_QWORD *)(a1 + 16) )
      *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v9, 0x18u);
    v10 = 3LL * *(_QWORD *)(a1 + 8);
    result = *(_QWORD **)a1;
    result[v10] = v6;
    result[v10 + 1] = v7;
    result[v10 + 2] = v8;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 8) + 1LL;
    if ( v12 > *(_QWORD *)(a1 + 16) )
    {
      v4 = sub_14005ABE0(a1, *(void **)a1, v12, 0x18u);
      *(_QWORD *)a1 = v4;
    }
    v13 = 3LL * *(_QWORD *)(a1 + 8);
    v4[v13] = *a2;
    *a2 = 0;
    v4[v13 + 1] = a2[1];
    a2[1] = 0;
    result = (_QWORD *)a2[2];
    v4[v13 + 2] = result;
    a2[2] = 0;
  }
  ++*(_QWORD *)(a1 + 8);
  return result;
}
