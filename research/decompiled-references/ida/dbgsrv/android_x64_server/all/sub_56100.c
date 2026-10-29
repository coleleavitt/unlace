/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56100
// Address: 0x0000000000056100

//----- (0000000000056100) ----------------------------------------------------
unsigned __int64 __fastcall sub_56100(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  size_t v3; // r12
  void *v4; // r14
  __int64 v5; // r15
  char *v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // r15
  size_t v10; // rbp
  void *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  char *v14; // rax
  __int64 v15; // rcx
  void *ptr; // [rsp+0h] [rbp-78h]
  __int64 v18; // [rsp+8h] [rbp-70h]
  size_t v19; // [rsp+10h] [rbp-68h]
  __int128 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+30h] [rbp-48h]

  v2 = a1;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v4 = qalloc_or_throw(*(_QWORD *)(a2 + 8));
    memcpy(v4, *(const void **)a2, v3);
  }
  else
  {
    v4 = nullptr;
  }
  v21 = *(_QWORD *)(a2 + 40);
  v20 = *(_OWORD *)(a2 + 24);
  v5 = *(_QWORD *)(a2 + 56);
  if ( v5 )
  {
    v19 = v3;
    ptr = v4;
    v6 = (char *)qalloc_or_throw(40 * v5);
    v7 = 0;
    v18 = v5;
    v8 = v5;
    do
    {
      v9 = *(_QWORD *)(a2 + 48);
      *(_OWORD *)&v6[v7] = 0;
      *(_QWORD *)&v6[v7 + 16] = 0;
      v10 = *(_QWORD *)(v9 + v7 + 8);
      if ( v10 )
      {
        v11 = qalloc_or_throw(*(_QWORD *)(v9 + v7 + 8));
        *(_QWORD *)&v6[v7] = v11;
        *(_QWORD *)&v6[v7 + 16] = v10;
        memcpy(v11, *(const void **)(v9 + v7), v10);
        *(_QWORD *)&v6[v7 + 8] = v10;
      }
      v12 = *(_QWORD *)(v9 + v7 + 24);
      *(_QWORD *)&v6[v7 + 29] = *(_QWORD *)(v9 + v7 + 29);
      *(_QWORD *)&v6[v7 + 24] = v12;
      v7 += 40;
      --v8;
    }
    while ( v8 );
    v4 = ptr;
    v5 = v18;
    v2 = a1;
    v3 = v19;
  }
  else
  {
    v6 = nullptr;
  }
  v13 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(v2 + 16) >= (unsigned __int64)(v13 + 1) )
  {
    v14 = *(char **)v2;
  }
  else
  {
    v14 = (char *)qvector_reserve(v2, *(char **)v2, v13 + 1, 0x48u);
    *(_QWORD *)v2 = v14;
    v13 = *(_QWORD *)(v2 + 8);
  }
  v15 = 9 * v13;
  *(_QWORD *)&v14[8 * v15] = v4;
  *(_QWORD *)&v14[8 * v15 + 8] = v3;
  *(_QWORD *)&v14[8 * v15 + 16] = v3;
  *(_QWORD *)&v14[8 * v15 + 40] = v21;
  *(_OWORD *)&v14[8 * v15 + 24] = v20;
  *(_QWORD *)&v14[8 * v15 + 48] = v6;
  *(_QWORD *)&v14[8 * v15 + 56] = v5;
  *(_QWORD *)&v14[8 * v15 + 64] = v5;
  ++*(_QWORD *)(v2 + 8);
  return __readfsqword(0x28u);
}
