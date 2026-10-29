__int64 __fastcall sub_785E90(__int64 a1, char a2, int a3)
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

  v5 = *(__int64 **)(a1 + 200);
  *(_BYTE *)(a1 + 212) = a2;
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
  v9 = *(_DWORD *)(a1 + 208) + 1;
  *(_DWORD *)(a1 + 208) = v9;
  v10 = v8 - v9;
  sub_7847B0(a1, v8 - v9);
  sub_7847B0(a1, HIWORD(v10));
  while ( 1 )
  {
    v11 = *(_QWORD *)(a1 + 280);
    v12 = *(unsigned int *)(*(_QWORD *)(a1 + 272) + 4 * v11 - 4);
    if ( v11 )
      *(_QWORD *)(a1 + 280) = v11 - 1;
    if ( (_DWORD)v12 == -1 )
      break;
    sub_78C6A0(*(_QWORD *)(a1 + 200), v12, (unsigned int)(v8 - v12));
  }
  while ( 1 )
  {
    v13 = *(_QWORD *)(a1 + 256);
    v14 = *(unsigned int *)(*(_QWORD *)(a1 + 248) + 4 * v13 - 4);
    if ( v13 )
      *(_QWORD *)(a1 + 256) = v13 - 1;
    if ( (_DWORD)v14 == -1 )
      break;
    sub_78C6A0(*(_QWORD *)(a1 + 200), v14, (unsigned int)(*(_DWORD *)(a1 + 208) - 4 - v14));
  }
  return 0;
}
