__int64 __fastcall sub_7659C0(__int64 a1, char a2, int a3)
{
  __int64 *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rsi
  int v8; // ebp
  int v9; // eax
  int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v16; // rax

  v5 = *(__int64 **)(a1 + 192);
  *(_BYTE *)(a1 + 204) = a2;
  v6 = v5[1];
  v7 = *v5;
  if ( v5[2] < (unsigned __int64)(v6 + 1) )
  {
    v16 = qvector_reserve(v5, v7, v6 + 1, 1);
    *v5 = v16;
    v7 = v16;
    v6 = v5[1];
  }
  *(_BYTE *)(v7 + v6) = a2;
  v8 = a3 - 4;
  ++v5[1];
  v9 = *(_DWORD *)(a1 + 200) + 1;
  *(_DWORD *)(a1 + 200) = v9;
  v10 = v8 - v9;
  sub_764370(a1, v8 - v9);
  sub_764370(a1, HIWORD(v10));
  while ( 1 )
  {
    v11 = *(_QWORD *)(a1 + 272);
    v12 = *(unsigned int *)(*(_QWORD *)(a1 + 264) + 4 * v11 - 4);
    if ( v11 )
      *(_QWORD *)(a1 + 272) = v11 - 1;
    if ( (_DWORD)v12 == -1 )
      break;
    sub_76C240(*(_QWORD *)(a1 + 192), v12, (unsigned int)(v8 - v12));
  }
  while ( 1 )
  {
    v13 = *(_QWORD *)(a1 + 248);
    v14 = *(unsigned int *)(*(_QWORD *)(a1 + 240) + 4 * v13 - 4);
    if ( v13 )
      *(_QWORD *)(a1 + 248) = v13 - 1;
    if ( (_DWORD)v14 == -1 )
      break;
    sub_76C240(*(_QWORD *)(a1 + 192), v14, (unsigned int)(*(_DWORD *)(a1 + 200) - 4 - v14));
  }
  return 0;
}

