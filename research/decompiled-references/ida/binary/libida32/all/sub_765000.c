__int64 __fastcall sub_765000(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  unsigned int v3; // ebp
  int v4; // r12d
  unsigned __int64 v5; // rax
  int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v13; // rax
  __int64 *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rsi
  int v17; // eax
  int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // rax

  v1 = *(_QWORD *)(a1 + 288);
  v2 = *(_QWORD *)(a1 + 296);
  v3 = *(_DWORD *)(v1 + 4 * v2 - 4);
  if ( !v2 )
  {
    v6 = *(_DWORD *)(v1 - 4);
LABEL_12:
    v4 = v6;
    v5 = 1;
    v7 = 0;
    goto LABEL_5;
  }
  *(_QWORD *)(a1 + 296) = v2 - 1;
  v4 = *(_DWORD *)(v1 + 4 * (v2 - 1) - 4);
  if ( v2 == 1 )
  {
    v6 = *(_DWORD *)(v1 - 4);
    goto LABEL_12;
  }
  v5 = v2 - 2;
  *(_QWORD *)(a1 + 296) = v2 - 2;
  v6 = *(_DWORD *)(v1 + 4 * (v2 - 2) - 4);
  if ( v2 == 2 )
  {
    v7 = 0;
    v5 = 1;
  }
  else
  {
    v7 = v2 - 3;
    *(_QWORD *)(a1 + 296) = v7;
  }
LABEL_5:
  if ( *(_QWORD *)(a1 + 304) < v5 )
  {
    v13 = qvector_reserve(a1 + 288, v1, v5, 4);
    v7 = *(_QWORD *)(a1 + 296);
    *(_QWORD *)(a1 + 288) = v13;
    v1 = v13;
  }
  *(_DWORD *)(v1 + 4 * v7) = v3 + 4;
  v8 = *(_QWORD *)(a1 + 296);
  v9 = *(_QWORD *)(a1 + 288);
  v10 = v8 + 1;
  v11 = v8 + 2;
  *(_QWORD *)(a1 + 296) = v10;
  if ( *(_QWORD *)(a1 + 304) < v11 )
  {
    v19 = qvector_reserve(a1 + 288, v9, v11, 4);
    *(_QWORD *)(a1 + 288) = v19;
    v9 = v19;
    v10 = *(_QWORD *)(a1 + 296);
  }
  *(_DWORD *)(v9 + 4 * v10) = v4;
  ++*(_QWORD *)(a1 + 296);
  if ( v4 )
  {
    v14 = *(__int64 **)(a1 + 192);
    *(_BYTE *)(a1 + 204) = -85;
    v15 = v14[1];
    v16 = *v14;
    if ( v14[2] < (unsigned __int64)(v15 + 1) )
    {
      v20 = qvector_reserve(v14, v16, v15 + 1, 1);
      *v14 = v20;
      v16 = v20;
      v15 = v14[1];
    }
    *(_BYTE *)(v16 + v15) = -85;
    ++v14[1];
    v17 = *(_DWORD *)(a1 + 200) + 1;
    v18 = v6 - v17;
    *(_DWORD *)(a1 + 200) = v17;
    sub_764370(a1, v18 - 4);
    sub_764370(a1, (unsigned int)(v18 - 4) >> 16);
  }
  sub_76C240(*(_QWORD *)(a1 + 192), v3, *(_DWORD *)(a1 + 200) - 4 - v3);
  return 0;
}

