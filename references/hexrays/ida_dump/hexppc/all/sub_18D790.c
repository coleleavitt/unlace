bool __fastcall sub_18D790(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r13
  char v8; // al
  char v9; // cl
  __int64 v10; // rdi
  char v11; // dl
  __int64 v12; // rsi
  int v13; // edi
  int v14; // ecx
  __int64 v15; // r8
  _QWORD *v16; // rax
  _QWORD *v17; // rdx

  if ( *(_DWORD *)a2 != 4 )
    return 0;
  v6 = *(_QWORD *)(a1[3] + 1504LL);
  if ( *(_DWORD *)(a2 + 68) < *(_DWORD *)(v6 + 84)
    || !(unsigned __int8)sub_11C340((char *)(a2 + 32), nullptr, 1u)
    && (*(_BYTE *)(a2 + 32) != 10 || **(_BYTE **)(a2 + 40) != 6) )
  {
    return 0;
  }
  v8 = *(_BYTE *)(a2 + 64);
  if ( v8 == 1 )
  {
    v10 = *(int *)(a2 + 72);
    v9 = 1;
  }
  else if ( v8 == 5 )
  {
    v9 = 5;
    v10 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL);
  }
  else
  {
    v9 = 0;
    v10 = -1;
  }
  v11 = *(_BYTE *)(a3 + 32);
  v12 = *(_QWORD *)(a3 + 24);
  if ( v11 != v9 || v10 != v12 )
  {
    v13 = *(_DWORD *)(v6 + 84);
    v14 = *(_DWORD *)(a2 + 68);
    if ( v13 >= v14 )
      return 0;
    if ( v8 == 1 )
    {
      v15 = *(int *)(a2 + 72);
    }
    else if ( v8 == 5 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL);
    }
    else
    {
      v8 = 0;
      v15 = -1;
    }
    if ( v8 != v11 || v15 + v14 - v13 != v12 )
      return 0;
  }
  v16 = (_QWORD *)a1[16];
  v17 = &v16[a1[17]];
  if ( v16 == v17 )
    return 1;
  while ( a2 != *v16 )
  {
    if ( v17 == ++v16 )
      return 1;
  }
  return v17 == v16;
}
