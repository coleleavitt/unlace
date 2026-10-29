/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432070
// Address: 0x0000000000432070

//----- (0000000000432070) ----------------------------------------------------
__int64 __fastcall sub_432070(__int64 a1)
{
  _DWORD *v1; // rsi
  __int64 v2; // rdx
  unsigned int v3; // ebp
  int v4; // r12d
  unsigned __int64 v5; // rax
  int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // rdx
  void *v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  _DWORD *v13; // rax
  void **v14; // r12
  _BYTE *v15; // rax
  void *v16; // rsi
  int v17; // eax
  int v18; // r13d
  void *v19; // rax
  void *v20; // rax

  v1 = *(_DWORD **)(a1 + 296);
  v2 = *(_QWORD *)(a1 + 304);
  v3 = v1[v2 - 1];
  if ( !v2 )
  {
    v6 = *(v1 - 1);
LABEL_12:
    v4 = v6;
    v5 = 1;
    v7 = 0;
    goto LABEL_5;
  }
  *(_QWORD *)(a1 + 304) = v2 - 1;
  v4 = v1[v2 - 2];
  if ( v2 == 1 )
  {
    v6 = *(v1 - 1);
    goto LABEL_12;
  }
  v5 = v2 - 2;
  *(_QWORD *)(a1 + 304) = v2 - 2;
  v6 = v1[v2 - 3];
  if ( v2 == 2 )
  {
    v7 = 0;
    v5 = 1;
  }
  else
  {
    v7 = v2 - 3;
    *(_QWORD *)(a1 + 304) = v7;
  }
LABEL_5:
  if ( *(_QWORD *)(a1 + 312) < v5 )
  {
    v13 = sub_481540(a1 + 296, v1, v5, 4u);
    v7 = *(_QWORD *)(a1 + 304);
    *(_QWORD *)(a1 + 296) = v13;
    v1 = v13;
  }
  v1[v7] = v3 + 4;
  v8 = *(_QWORD *)(a1 + 304);
  v9 = *(void **)(a1 + 296);
  v10 = v8 + 1;
  v11 = v8 + 2;
  *(_QWORD *)(a1 + 304) = v10;
  if ( *(_QWORD *)(a1 + 312) < v11 )
  {
    v19 = sub_481540(a1 + 296, v9, v11, 4u);
    *(_QWORD *)(a1 + 296) = v19;
    v9 = v19;
    v10 = *(_QWORD *)(a1 + 304);
  }
  *((_DWORD *)v9 + v10) = v4;
  ++*(_QWORD *)(a1 + 304);
  if ( v4 )
  {
    v14 = *(void ***)(a1 + 200);
    *(_BYTE *)(a1 + 212) = -85;
    v15 = v14[1];
    v16 = *v14;
    if ( v14[2] < v15 + 1 )
    {
      v20 = sub_481540((__int64)v14, v16, (unsigned __int64)(v15 + 1), 1u);
      *v14 = v20;
      v16 = v20;
      v15 = v14[1];
    }
    v15[(_QWORD)v16] = -85;
    v14[1] = (char *)v14[1] + 1;
    v17 = *(_DWORD *)(a1 + 208) + 1;
    v18 = v6 - v17;
    *(_DWORD *)(a1 + 208) = v17;
    sub_4313E0(a1, v18 - 4);
    sub_4313E0(a1, (unsigned int)(v18 - 4) >> 16);
  }
  sub_438BA0(*(__int64 **)(a1 + 200), v3, *(_DWORD *)(a1 + 208) - 4 - v3);
  return 0;
}
