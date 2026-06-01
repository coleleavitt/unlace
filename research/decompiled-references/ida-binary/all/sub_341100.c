__int64 __fastcall sub_341100(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  __int64 v5; // rax
  __int64 v6; // r11
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  bool v10; // cf
  unsigned __int64 v11; // rsi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax

  v2 = *(_QWORD *)(a1 + 112);
  v5 = 32LL * *(_QWORD *)(a1 + 120);
  v6 = v2 + v5;
  if ( v2 + v5 == v2 )
    return 0;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v2 + 16);
    v8 = v2;
    if ( a2 < v7 )
      goto LABEL_3;
    if ( *(_BYTE *)(v2 + 24) )
    {
      v9 = *(int *)(a1 + 176);
    }
    else
    {
LABEL_10:
      v13 = *(_QWORD *)(a1 + 168);
      v14 = __CFADD__(v13, *(_QWORD *)(v2 + 8) - *(_QWORD *)v2) ? -2LL : v13 + *(_QWORD *)(v2 + 8) - *(_QWORD *)v2 - 1;
      v9 = v14 / v13;
    }
    v10 = __CFADD__(v9, v7);
    v11 = v9 + v7;
    if ( v10 )
      break;
    if ( a2 < v11 )
      return v8;
LABEL_3:
    v2 += 32;
    if ( v6 == v2 )
      return 0;
  }
  if ( a2 != -1 )
    return v8;
  while ( 1 )
  {
    v2 += 32;
    v8 = v2;
    if ( v6 == v2 )
      return 0;
    v7 = *(_QWORD *)(v2 + 16);
    if ( !*(_BYTE *)(v2 + 24) )
      goto LABEL_10;
    if ( !__CFADD__(*(int *)(a1 + 176), v7) )
      goto LABEL_3;
  }
}
