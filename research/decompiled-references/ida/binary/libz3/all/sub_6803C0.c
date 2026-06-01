__int64 __fastcall sub_6803C0(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // ebp
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // ebp
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // ebp
  __int64 result; // rax
  __int64 v28; // rdx

  sub_677B20((__int64 *)a1);
  sub_6800E0(a1);
  v2 = *(_QWORD *)(a1 + 352);
  if ( v2 )
    v3 = *(_DWORD *)(v2 - 4);
  else
    v3 = 0;
  v4 = *(_QWORD *)(a1 + 376);
  if ( !v4 || (v5 = *(unsigned int *)(v4 - 4), (_DWORD)v5 == *(_DWORD *)(v4 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 376));
    v4 = *(_QWORD *)(a1 + 376);
    v5 = *(unsigned int *)(v4 - 4);
  }
  *(_DWORD *)(v4 + 4 * v5) = v3;
  ++*(_DWORD *)(v4 - 4);
  v6 = *(_QWORD *)(a1 + 360);
  if ( v6 )
    v7 = *(_DWORD *)(v6 - 4);
  else
    v7 = 0;
  v8 = *(_QWORD *)(a1 + 384);
  if ( !v8 || (v9 = *(unsigned int *)(v8 - 4), (_DWORD)v9 == *(_DWORD *)(v8 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 384));
    v8 = *(_QWORD *)(a1 + 384);
    v9 = *(unsigned int *)(v8 - 4);
  }
  *(_DWORD *)(v8 + 4 * v9) = v7;
  ++*(_DWORD *)(v8 - 4);
  v10 = *(_QWORD *)(a1 + 200);
  if ( v10 )
    v11 = *(_DWORD *)(v10 - 4);
  else
    v11 = 0;
  v12 = *(_QWORD *)(a1 + 392);
  if ( !v12 || (v13 = *(unsigned int *)(v12 - 4), (_DWORD)v13 == *(_DWORD *)(v12 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 392));
    v12 = *(_QWORD *)(a1 + 392);
    v13 = *(unsigned int *)(v12 - 4);
  }
  *(_DWORD *)(v12 + 4 * v13) = v11;
  ++*(_DWORD *)(v12 - 4);
  v14 = *(_QWORD *)(a1 + 368);
  if ( !v14 || (v15 = *(unsigned int *)(v14 - 4), (_DWORD)v15 == *(_DWORD *)(v14 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 368));
    v14 = *(_QWORD *)(a1 + 368);
    v15 = *(unsigned int *)(v14 - 4);
  }
  v16 = *(_QWORD *)(a1 + 1352);
  *(_DWORD *)(v14 + 4 * v15) = *(_DWORD *)(a1 + 344);
  ++*(_DWORD *)(v14 - 4);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 192LL))(v16);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1360) + 192LL))(*(_QWORD *)(a1 + 1360));
  v17 = *(_QWORD *)(a1 + 1520);
  if ( v17 )
    v18 = *(_DWORD *)(v17 - 4);
  else
    v18 = 0;
  v19 = *(_QWORD *)(a1 + 1528);
  if ( !v19 || (v20 = *(unsigned int *)(v19 - 4), (_DWORD)v20 == *(_DWORD *)(v19 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 1528));
    v19 = *(_QWORD *)(a1 + 1528);
    v20 = *(unsigned int *)(v19 - 4);
  }
  *(_DWORD *)(v19 + 4 * v20) = v18;
  ++*(_DWORD *)(v19 - 4);
  v21 = *(_QWORD *)(a1 + 1552);
  if ( v21 )
    v22 = *(_DWORD *)(v21 - 4);
  else
    v22 = 0;
  v23 = *(_QWORD *)(a1 + 1560);
  if ( !v23 || (v24 = *(unsigned int *)(v23 - 4), (_DWORD)v24 == *(_DWORD *)(v23 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 1560));
    v23 = *(_QWORD *)(a1 + 1560);
    v24 = *(unsigned int *)(v23 - 4);
  }
  *(_DWORD *)(v23 + 4 * v24) = v22;
  ++*(_DWORD *)(v23 - 4);
  v25 = *(_QWORD *)(a1 + 1576);
  if ( v25 )
    v26 = *(_DWORD *)(v25 - 4);
  else
    v26 = 0;
  result = *(_QWORD *)(a1 + 1584);
  if ( !result || (v28 = *(unsigned int *)(result - 4), (_DWORD)v28 == *(_DWORD *)(result - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 1584));
    result = *(_QWORD *)(a1 + 1584);
    *(_DWORD *)(result + 4LL * (unsigned int)(*(_DWORD *)(result - 4))++) = v26;
  }
  else
  {
    *(_DWORD *)(result + 4 * v28) = v26;
    ++*(_DWORD *)(result - 4);
  }
  return result;
}

