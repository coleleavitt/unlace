__int64 __fastcall sub_AF6980(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v3; // r13
  unsigned int *v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v8; // rsi
  char v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  char v16; // al

  v2 = *(_DWORD *)(a2 + 32);
  if ( *(_BYTE *)(a2 + 16) )
    v2 = *(_DWORD *)(a2 + 28);
  v3 = *(_QWORD *)(a2 + 8);
  v4 = (unsigned int *)(*(_QWORD *)(v3 + 104) + 32LL * v2);
  if ( *((_BYTE *)v4 + 24) )
    return 1;
  v5 = *(_DWORD *)(v3 + 192);
  v6 = v4[1];
  *((_BYTE *)v4 + 24) = 1;
  v8 = *v4;
  v9 = 1;
  v4[3] = v5;
  *(_DWORD *)(v3 + 192) = v5 + 1;
  v10 = *(_QWORD *)(v3 + 88);
  *(_DWORD *)(v3 + 196) = v2;
  if ( *(_DWORD *)(v10 + 4 * v6) - *(_DWORD *)(v10 + 4 * v8) > (int)v4[2] )
  {
    v16 = sub_AFB440(v3 + 64, v2, v4);
    v11 = *(_QWORD *)(v3 + 200);
    v9 = v16;
    if ( v11 )
    {
LABEL_6:
      v12 = *(unsigned int *)(v11 - 4);
      if ( (_DWORD)v12 != *(_DWORD *)(v11 - 8) )
        goto LABEL_7;
    }
  }
  else
  {
    v11 = *(_QWORD *)(v3 + 200);
    if ( v11 )
      goto LABEL_6;
  }
  sub_313C10((unsigned int **)(v3 + 200));
  v11 = *(_QWORD *)(v3 + 200);
  v12 = *(unsigned int *)(v11 - 4);
LABEL_7:
  *(_DWORD *)(v11 + 4 * v12) = v2;
  ++*(_DWORD *)(v11 - 4);
  if ( v9 )
    return 1;
  v13 = *(_QWORD *)(a2 + 8);
  v14 = *(_QWORD *)(v13 + 544);
  if ( v14 )
    *(_DWORD *)(v14 - 4) = 0;
  sub_AF0E00(v13 + 64, v13);
  sub_AF22A0(a1, v13);
  return 0xFFFFFFFFLL;
}

