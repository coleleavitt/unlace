__int64 __fastcall sub_8BC6E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 *v9; // rcx
  _QWORD *v10; // r10
  __int64 *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 *v14; // rcx
  _QWORD *v15; // r10
  __int64 *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rcx

  if ( *(_BYTE *)(a2 - 1) || *(_BYTE *)(a3 - 1) )
    return 0;
  v5 = *(_DWORD *)(a3 - 6);
  v6 = *(_DWORD *)(a2 - 6);
  v7 = v6 % 0xC7FF;
  v8 = (unsigned int)(v7 + 3);
  v9 = *(__int64 **)(a1 + 8 * v7 + 24);
  v10 = (_QWORD *)(a1 + 8 * v8);
  if ( v9 )
  {
    while ( 1 )
    {
      v11 = (__int64 *)*v9;
      if ( v6 == *((_DWORD *)v9 + 6) )
        break;
      v10 = v9;
      if ( !v11 )
        goto LABEL_10;
      v9 = (__int64 *)*v9;
    }
    *v10 = v11;
    *v9 = 0;
  }
LABEL_10:
  v12 = v5 % 0xC7FF;
  v13 = (unsigned int)(v12 + 3);
  v14 = *(__int64 **)(a1 + 8 * v12 + 24);
  v15 = (_QWORD *)(a1 + 8 * v13);
  if ( v14 )
  {
    while ( 1 )
    {
      v16 = (__int64 *)*v14;
      if ( v5 == *((_DWORD *)v14 + 6) )
        break;
      v15 = v14;
      if ( !v16 )
        goto LABEL_16;
      v14 = (__int64 *)*v14;
    }
    *v15 = v16;
    *v14 = 0;
  }
LABEL_16:
  *(_DWORD *)(a2 - 6) = v5;
  *(_DWORD *)(a3 - 6) = v6;
  v17 = *(_DWORD *)(a2 - 6) % 0xC7FFu + 2LL;
  *(_QWORD *)(a2 - 30) = *(_QWORD *)(a1 + 8 * v17 + 8);
  *(_QWORD *)(a1 + 8 * v17 + 8) = a2 - 30;
  v18 = *(_DWORD *)(a3 - 6) % 0xC7FFu + 2LL;
  *(_QWORD *)(a3 - 30) = *(_QWORD *)(a1 + 8 * v18 + 8);
  *(_QWORD *)(a1 + 8 * v18 + 8) = a3 - 30;
  *(_BYTE *)(a2 - 2) = 1;
  *(_BYTE *)(a3 - 2) = 1;
  return 1;
}
