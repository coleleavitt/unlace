/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63CC0
// Address: 0x0000000000063CC0

//----- (0000000000063CC0) ----------------------------------------------------
__int64 __fastcall sub_63CC0(__int64 a1)
{
  char *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r14
  int v4; // ebp
  __int64 v5; // rdx
  int v6; // r12d
  __int64 v7; // rcx
  int v8; // r13d
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  _DWORD *v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rcx
  char *v16; // rax
  _DWORD *v17; // rbp
  _QWORD **v18; // rbx
  int v19; // eax
  int v20; // r12d

  v1 = *(char **)(a1 + 296);
  v2 = *(_QWORD *)(a1 + 304);
  v3 = *(unsigned int *)&v1[4 * v2 - 4];
  if ( v2 )
  {
    *(_QWORD *)(a1 + 304) = v2 - 1;
    v4 = *(_DWORD *)&v1[4 * v2 - 8];
    if ( v2 == 1 )
    {
      v7 = 0;
      v6 = v4;
    }
    else
    {
      v5 = v2 - 2;
      *(_QWORD *)(a1 + 304) = v2 - 2;
      v6 = *(_DWORD *)&v1[4 * v2 - 12];
      v7 = v2 - 3;
      if ( !v5 )
        v7 = 0;
      *(_QWORD *)(a1 + 304) = v7;
    }
  }
  else
  {
    v6 = *((_DWORD *)v1 - 1);
    v7 = 0;
    v4 = v6;
  }
  v8 = v3 + 4;
  if ( *(_QWORD *)(a1 + 312) < (unsigned __int64)(v7 + 1) )
  {
    v1 = (char *)qvector_reserve(a1 + 296, v1, v7 + 1, 4u);
    *(_QWORD *)(a1 + 296) = v1;
    v7 = *(_QWORD *)(a1 + 304);
  }
  *(_DWORD *)&v1[4 * v7] = v8;
  v9 = *(_QWORD *)(a1 + 304);
  v10 = *(_QWORD *)(a1 + 312);
  v11 = v9 + 1;
  *(_QWORD *)(a1 + 304) = v9 + 1;
  v12 = v9 + 2;
  if ( v10 >= v12 )
  {
    v13 = *(_DWORD **)(a1 + 296);
  }
  else
  {
    v13 = qvector_reserve(a1 + 296, *(char **)(a1 + 296), v12, 4u);
    *(_QWORD *)(a1 + 296) = v13;
    v11 = *(_QWORD *)(a1 + 304);
  }
  v13[v11] = v4;
  ++*(_QWORD *)(a1 + 304);
  if ( v4 )
  {
    *(_BYTE *)(a1 + 212) = -85;
    v14 = *(_QWORD *)(a1 + 200);
    v15 = *(_QWORD *)(v14 + 8);
    if ( *(_QWORD *)(v14 + 16) >= (unsigned __int64)(v15 + 1) )
    {
      v16 = *(char **)v14;
    }
    else
    {
      v16 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v14, v15 + 1, 1u);
      *(_QWORD *)v14 = v16;
      v15 = *(_QWORD *)(v14 + 8);
    }
    v16[v15] = -85;
    ++*(_QWORD *)(v14 + 8);
    v17 = (_DWORD *)(a1 + 208);
    v19 = *(_DWORD *)(a1 + 208);
    *(_DWORD *)(a1 + 208) = v19 + 1;
    v20 = v6 - 5 - v19;
    sub_616A0(a1, v20);
    v18 = (_QWORD **)(a1 + 200);
    sub_616A0(a1, SHIWORD(v20));
  }
  else
  {
    v17 = (_DWORD *)(a1 + 208);
    v18 = (_QWORD **)(a1 + 200);
  }
  sub_6BEF0(*v18, v3, *v17 - v8);
  return 0;
}
