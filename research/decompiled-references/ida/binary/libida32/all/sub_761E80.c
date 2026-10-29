__int64 __fastcall sub_761E80(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // ebp
  __int64 v7; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v1 = *(_QWORD *)(a1 + 248);
  v2 = *(_QWORD *)(a1 + 240);
  if ( *(_QWORD *)(a1 + 256) < (unsigned __int64)(v1 + 1) )
  {
    v9 = qvector_reserve(a1 + 240, v2, v1 + 1, 4);
    *(_QWORD *)(a1 + 240) = v9;
    v2 = v9;
    v1 = *(_QWORD *)(a1 + 248);
  }
  *(_DWORD *)(v2 + 4 * v1) = -1;
  v3 = *(_QWORD *)(a1 + 272);
  ++*(_QWORD *)(a1 + 248);
  v4 = *(_QWORD *)(a1 + 264);
  if ( *(_QWORD *)(a1 + 280) < (unsigned __int64)(v3 + 1) )
  {
    v11 = qvector_reserve(a1 + 264, v4, v3 + 1, 4);
    *(_QWORD *)(a1 + 264) = v11;
    v4 = v11;
    v3 = *(_QWORD *)(a1 + 272);
  }
  *(_DWORD *)(v4 + 4 * v3) = -1;
  v5 = *(_QWORD *)(a1 + 296);
  ++*(_QWORD *)(a1 + 272);
  v6 = *(_DWORD *)(a1 + 200);
  v7 = *(_QWORD *)(a1 + 288);
  if ( *(_QWORD *)(a1 + 304) < (unsigned __int64)(v5 + 1) )
  {
    v10 = qvector_reserve(a1 + 288, v7, v5 + 1, 4);
    *(_QWORD *)(a1 + 288) = v10;
    v7 = v10;
    v5 = *(_QWORD *)(a1 + 296);
  }
  *(_DWORD *)(v7 + 4 * v5) = v6;
  ++*(_QWORD *)(a1 + 296);
  return 0;
}

