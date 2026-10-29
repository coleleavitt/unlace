/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A2D80
// Address: 0x00000000000A2D80

//----- (00000000000A2D80) ----------------------------------------------------
unsigned __int64 __fastcall sub_A2D80(__int64 a1, __int64 *a2)
{
  __int64 v2; // r13
  size_t v3; // r14
  void *v4; // r15
  __int64 v5; // rcx
  char *v6; // rax
  __int64 v7; // rcx
  __int128 v9; // [rsp+0h] [rbp-48h]
  int v10; // [rsp+10h] [rbp-38h]

  v2 = *a2;
  v3 = a2[2];
  if ( v3 )
  {
    v4 = qalloc_or_throw(a2[2]);
    memcpy(v4, (const void *)a2[1], v3);
  }
  else
  {
    v4 = nullptr;
  }
  v10 = *((_DWORD *)a2 + 12);
  v9 = *((_OWORD *)a2 + 2);
  v5 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v5 + 1) )
  {
    v6 = *(char **)a1;
  }
  else
  {
    v6 = (char *)qvector_reserve(a1, *(char **)a1, v5 + 1, 0x38u);
    *(_QWORD *)a1 = v6;
    v5 = *(_QWORD *)(a1 + 8);
  }
  v7 = 56 * v5;
  *(_QWORD *)&v6[v7] = v2;
  *(_QWORD *)&v6[v7 + 8] = v4;
  *(_QWORD *)&v6[v7 + 16] = v3;
  *(_QWORD *)&v6[v7 + 24] = v3;
  *(_DWORD *)&v6[v7 + 48] = v10;
  *(_OWORD *)&v6[v7 + 32] = v9;
  ++*(_QWORD *)(a1 + 8);
  return __readfsqword(0x28u);
}
