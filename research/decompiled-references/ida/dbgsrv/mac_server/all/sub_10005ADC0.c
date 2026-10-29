/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005ADC0
// Address: 0x000000010005ADC0

//----- (000000010005ADC0) ----------------------------------------------------
char *__fastcall sub_10005ADC0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r13
  char *v4; // r15
  __int64 v5; // rax
  char *v6; // r12
  __int64 v7; // r14
  __int64 v9; // [rsp+8h] [rbp-58h]
  __int64 v10; // [rsp+10h] [rbp-50h]

  v9 = *a3;
  *a3 = 0;
  v10 = a3[1];
  a3[1] = 0;
  v3 = a3[2];
  a3[2] = 0;
  v4 = *(char **)a1;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v5 + 1) )
  {
    v6 = (char *)qvector_reserve(a1, *(void **)a1, v5 + 1, 0x18u);
    *(_QWORD *)a1 = v6;
    v5 = *(_QWORD *)(a1 + 8);
  }
  v7 = a2 - (_QWORD)v4;
  memmove(&v6[v7 + 24], &v6[v7], 24 * v5 - v7);
  *(_QWORD *)&v6[v7] = v9;
  *(_QWORD *)&v6[v7 + 8] = v10;
  *(_QWORD *)&v6[v7 + 16] = v3;
  ++*(_QWORD *)(a1 + 8);
  return &v6[a2 - (_QWORD)v4];
}
