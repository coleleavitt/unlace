/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100029940
// Address: 0x0000000100029940

//----- (0000000100029940) ----------------------------------------------------
__int64 __fastcall sub_100029940(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v2; // rdx
  __int64 *v3; // rsi
  int v4; // r14d
  int v5; // r15d
  unsigned __int64 v6; // rdx
  int v7; // r13d
  void *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r12
  void *v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // r15d

  v1 = *(_DWORD **)(a1 + 296);
  v2 = *(_QWORD *)(a1 + 304);
  v3 = (__int64 *)(unsigned int)v1[v2 - 1];
  if ( v2 )
  {
    *(_QWORD *)(a1 + 304) = v2 - 1;
    v4 = v1[v2 - 2];
    if ( v2 == 1 )
    {
      v5 = *(v1 - 1);
    }
    else
    {
      *(_QWORD *)(a1 + 304) = v2 - 2;
      v5 = v1[v2 - 3];
      if ( v2 != 2 )
      {
        v6 = v2 - 3;
        *(_QWORD *)(a1 + 304) = v6;
        goto LABEL_8;
      }
    }
    v6 = 0;
  }
  else
  {
    v4 = *(v1 - 1);
    v6 = 0;
    v5 = (int)v3;
  }
LABEL_8:
  v7 = (_DWORD)v3 + 4;
  if ( *(_QWORD *)(a1 + 312) <= v6 )
  {
    v1 = qvector_reserve(a1 + 296, v1, v6 + 1, 4u);
    *(_QWORD *)(a1 + 296) = v1;
    v6 = *(_QWORD *)(a1 + 304);
  }
  v1[v6] = v7;
  v8 = *(void **)(a1 + 296);
  v9 = *(_QWORD *)(a1 + 304);
  v10 = v9 + 1;
  *(_QWORD *)(a1 + 304) = v9 + 1;
  v11 = v9 + 2;
  if ( *(_QWORD *)(a1 + 312) < v11 )
  {
    v8 = qvector_reserve(a1 + 296, v8, v11, 4u);
    *(_QWORD *)(a1 + 296) = v8;
    v10 = *(_QWORD *)(a1 + 304);
  }
  *((_DWORD *)v8 + v10) = v4;
  ++*(_QWORD *)(a1 + 304);
  if ( v4 )
  {
    *(_BYTE *)(a1 + 212) = -85;
    v12 = *(_QWORD *)(a1 + 200);
    v13 = *(void **)v12;
    v14 = *(_QWORD *)(v12 + 8);
    if ( *(_QWORD *)(v12 + 16) < (unsigned __int64)(v14 + 1) )
    {
      v13 = qvector_reserve(*(_QWORD *)(a1 + 200), v13, v14 + 1, 1u);
      *(_QWORD *)v12 = v13;
      v14 = *(_QWORD *)(v12 + 8);
    }
    *((_BYTE *)v13 + v14) = -85;
    ++*(_QWORD *)(v12 + 8);
    v15 = *(_DWORD *)(a1 + 208);
    *(_DWORD *)(a1 + 208) = v15 + 1;
    v16 = v5 - v15 - 5;
    sub_100026A20(a1, v16);
    sub_100026A20(a1, SHIWORD(v16));
  }
  sub_100032CB0(*(void ***)(a1 + 200), v3, *(_DWORD *)(a1 + 208) - v7);
  return 0;
}
