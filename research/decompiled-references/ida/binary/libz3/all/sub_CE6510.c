void __fastcall sub_CE6510(__int64 a1, __int64 *a2, unsigned int a3, __int64 *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v12; // rax
  int v13; // edx
  __int64 *v14; // rax

  v7 = *a2;
  if ( (*((_BYTE *)a2 + 123) & 0x20) != 0 )
  {
    v8 = *(_QWORD *)(v7 + 864);
  }
  else
  {
    v12 = a2[9];
    v13 = 18;
    while ( --v13 )
    {
      if ( *(char *)(v12 + 3) >= 0 )
      {
        if ( a3 == *(_DWORD *)(v12 + 4) )
        {
          v14 = (__int64 *)(v12 + 8);
          goto LABEL_15;
        }
      }
      else if ( *(_BYTE *)(v12 + 3) >> 6 != 2 )
      {
        v14 = (__int64 *)(*(_QWORD *)(v12 + 16) + 8LL * a3);
        goto LABEL_15;
      }
      v12 = *(_QWORD *)(v12 + 16);
    }
    sub_233F80((__int64 *)(v7 + 616), (_DWORD *)a2 + 18);
    v14 = (__int64 *)(*(_QWORD *)(a2[9] + 16) + 8LL * a3);
LABEL_15:
    v8 = *v14;
  }
  v9 = *(_QWORD *)(a1 + 16);
  if ( *(_WORD *)(v8 + 4) == 2 && (unsigned __int8)sub_DBD410((int)a1 + 32) )
  {
    v10 = *(_QWORD *)(MEMORY[0x3010102464C459F] + 16LL);
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    sub_CE5D50(a1, a4, v10, a3, **(_DWORD **)(a1 + 96));
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 8))-- == 1 )
        sub_15D7BC0(v9, v10);
    }
  }
}

