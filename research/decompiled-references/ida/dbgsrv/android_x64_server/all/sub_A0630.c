/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A0630
// Address: 0x00000000000A0630

//----- (00000000000A0630) ----------------------------------------------------
char *__fastcall sub_A0630(__int64 a1, __int64 a2, const char *a3)
{
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _BYTE *v8; // r14
  char *v9; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  char *result; // rax
  char v14[32]; // [rsp+8h] [rbp-20h] BYREF

  v5 = (_QWORD *)(a1 + 72);
  v6 = *(_QWORD *)(a1 + 80);
  if ( *(_QWORD *)(a1 + 88) >= (unsigned __int64)(v6 + 1) )
  {
    v7 = (_QWORD *)*v5;
  }
  else
  {
    v7 = qvector_reserve((__int64)v5, *(char **)(a1 + 72), v6 + 1, 8u);
    *(_QWORD *)(a1 + 72) = v7;
    v6 = *(_QWORD *)(a1 + 80);
  }
  v7[v6] = a2;
  ++*(_QWORD *)(a1 + 80);
  v8 = qstrdup(a3);
  *(_QWORD *)v14 = v8;
  v9 = *(char **)(a1 + 96);
  v10 = *(_QWORD *)(a1 + 104);
  v11 = *(_QWORD *)(a1 + 112);
  v12 = v10 + 1;
  if ( v9 > v14 || &v9[8 * v11] <= v14 )
  {
    if ( v11 < v12 )
    {
      v9 = (char *)qvector_reserve(a1 + 96, v9, v12, 8u);
      *(_QWORD *)(a1 + 96) = v9;
      v10 = *(_QWORD *)(a1 + 104);
      v8 = *(_BYTE **)v14;
    }
  }
  else if ( v11 < v12 )
  {
    v9 = (char *)qvector_reserve(a1 + 96, v9, v12, 8u);
    *(_QWORD *)(a1 + 96) = v9;
    v10 = *(_QWORD *)(a1 + 104);
  }
  result = &v9[8 * v10];
  *(_QWORD *)result = v8;
  ++*(_QWORD *)(a1 + 104);
  return result;
}
