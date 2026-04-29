__int64 __fastcall sub_153310(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v16; // rsi
  int v17; // r8d
  int v18; // r9d

  if ( a2 >= 0 )
  {
    if ( (a4 & 1) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v14 + 8) <= a2 )
        goto LABEL_12;
      if ( !a3 )
        return 0;
      v7 = *(_QWORD **)(a3 + 64);
    }
    else
    {
      if ( !a3 )
        return 0;
      v7 = *(_QWORD **)(a3 + 64);
      v8 = v7[184];
      if ( a2 < *(_QWORD *)(v8 + 8) )
      {
        if ( (*(_BYTE *)(a3 + 26) & 4) == 0 )
          return 0;
        v9 = v8 + 40LL * *(_QWORD *)(a3 + 512);
        v10 = *(_QWORD *)(v9 + 16);
        v11 = *(_QWORD *)(v9 + 8);
        if ( !v10 || a2 < v11 )
          return 0;
        v12 = *(int *)(a1 + 4);
        v13 = v10 + v11 - 1;
        if ( (int)v12 <= 0 )
          v12 = 1;
        if ( v13 < a2 + v12 - 1 )
          return 0;
      }
      v14 = *(_QWORD *)(a1 + 8);
      if ( a2 >= *(_QWORD *)(v14 + 8) )
      {
LABEL_12:
        *(_QWORD *)(v14 + 8) = a2;
        *(_WORD *)(a1 + 2) = 0;
        return 1;
      }
    }
    if ( v7[16] <= a2 )
      goto LABEL_12;
    v16 = *(_QWORD *)(*(_QWORD *)(v7[187] + 24LL) + 16LL) & (a2 + v7[180]);
    if ( !(unsigned __int8)sub_30FCC0(v7 + 26, v16) )
    {
      v14 = *(_QWORD *)(a1 + 8);
      goto LABEL_12;
    }
    if ( (a4 & 2) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a2;
      *(_WORD *)(a1 + 2) = 0;
      sub_189C40(*(_QWORD *)(a3 + 64), v16, 0, a4 & 2, v17, v18);
      return 1;
    }
    return 0;
  }
  return 0;
}
