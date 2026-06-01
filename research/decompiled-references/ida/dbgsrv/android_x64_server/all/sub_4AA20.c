/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AA20
// Address: 0x000000000004AA20

//----- (000000000004AA20) ----------------------------------------------------
char *__fastcall sub_4AA20(__int64 a1, _QWORD *a2)
{
  char *result; // rax
  unsigned __int64 v4; // rsi
  __int128 v5; // xmm1
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx

  result = *(char **)a1;
  v4 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 > (unsigned __int64)a2 || &result[24 * v4] <= (char *)a2 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    if ( v4 < v8 + 1 )
    {
      result = (char *)qvector_reserve(a1, *(char **)a1, v8 + 1, 0x18u);
      *(_QWORD *)a1 = result;
      v8 = *(_QWORD *)(a1 + 8);
    }
    v9 = (_QWORD *)(a1 + 8);
    v10 = 3 * v8;
    *(_QWORD *)&result[8 * v10] = *a2;
    *a2 = 0;
    *(_QWORD *)&result[8 * v10 + 8] = a2[1];
    a2[1] = 0;
    *(_QWORD *)&result[8 * v10 + 16] = a2[2];
    a2[2] = 0;
  }
  else
  {
    v5 = *(_OWORD *)a2;
    *a2 = 0;
    v6 = a2[2];
    *(_OWORD *)(a2 + 1) = 0;
    v7 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v7 + 1) )
    {
      result = *(char **)a1;
    }
    else
    {
      result = (char *)qvector_reserve(a1, *(char **)a1, v7 + 1, 0x18u);
      *(_QWORD *)a1 = result;
      v7 = *(_QWORD *)(a1 + 8);
    }
    v9 = (_QWORD *)(a1 + 8);
    v11 = 3 * v7;
    *(_OWORD *)&result[8 * v11] = v5;
    *(_QWORD *)&result[8 * v11 + 16] = v6;
  }
  ++*v9;
  return result;
}
