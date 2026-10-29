/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9AB10
// Address: 0x000000000009AB10

//----- (000000000009AB10) ----------------------------------------------------
char *__fastcall sub_9AB10(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v3; // r13
  char *v4; // r15
  __int64 v5; // rax
  char *v6; // rbx
  __int64 v7; // r12
  __int128 v9; // [rsp+0h] [rbp-38h]

  v9 = *a3;
  *(_QWORD *)a3 = 0;
  v3 = *((_QWORD *)a3 + 2);
  *(__int128 *)((char *)a3 + 8) = 0;
  v4 = *(char **)a1;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v5 + 1) )
  {
    v6 = (char *)qvector_reserve(a1, *(char **)a1, v5 + 1, 0x18u);
    *(_QWORD *)a1 = v6;
    v5 = *(_QWORD *)(a1 + 8);
  }
  v7 = a2 - (_QWORD)v4;
  memmove(&v6[v7 + 24], &v6[v7], 24 * v5 - v7);
  *(_OWORD *)&v6[v7] = v9;
  *(_QWORD *)&v6[v7 + 16] = v3;
  ++*(_QWORD *)(a1 + 8);
  return &v6[a2 - (_QWORD)v4];
}
