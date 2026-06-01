/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47DB0
// Address: 0x0000000000047DB0

//----- (0000000000047DB0) ----------------------------------------------------
unsigned __int64 __fastcall sub_47DB0(__int64 a1, __int128 *a2)
{
  size_t v2; // r15
  void *v3; // r14
  size_t v4; // rbx
  void *v5; // r13
  __int64 v6; // rcx
  char *v7; // rax
  __int64 v8; // rcx
  __int128 v10; // [rsp+0h] [rbp-58h]
  __int64 v11; // [rsp+10h] [rbp-48h]
  __int16 v12; // [rsp+18h] [rbp-40h]

  v10 = *a2;
  v2 = *((_QWORD *)a2 + 3);
  if ( v2 )
  {
    v3 = qalloc_or_throw(*((_QWORD *)a2 + 3));
    memcpy(v3, *((const void **)a2 + 2), v2);
  }
  else
  {
    v3 = nullptr;
  }
  v4 = *((_QWORD *)a2 + 6);
  if ( v4 )
  {
    v5 = qalloc_or_throw(*((_QWORD *)a2 + 6));
    memcpy(v5, *((const void **)a2 + 5), v4);
  }
  else
  {
    v5 = nullptr;
  }
  v12 = *((_WORD *)a2 + 36);
  v11 = *((_QWORD *)a2 + 8);
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v6 + 1) )
  {
    v7 = *(char **)a1;
  }
  else
  {
    v7 = (char *)qvector_reserve(a1, *(char **)a1, v6 + 1, 0x50u);
    *(_QWORD *)a1 = v7;
    v6 = *(_QWORD *)(a1 + 8);
  }
  v8 = 80 * v6;
  *(_OWORD *)&v7[v8] = v10;
  *(_QWORD *)&v7[v8 + 16] = v3;
  *(_QWORD *)&v7[v8 + 24] = v2;
  *(_QWORD *)&v7[v8 + 32] = v2;
  *(_QWORD *)&v7[v8 + 40] = v5;
  *(_QWORD *)&v7[v8 + 48] = v4;
  *(_QWORD *)&v7[v8 + 56] = v4;
  *(_WORD *)&v7[v8 + 72] = v12;
  *(_QWORD *)&v7[v8 + 64] = v11;
  ++*(_QWORD *)(a1 + 8);
  return __readfsqword(0x28u);
}
