char __fastcall sub_55DA00(__int64 a1, unsigned __int16 a2, unsigned __int64 a3, __int64 a4)
{
  __int16 v5; // bx
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  __int16 *v8; // r10
  int v9; // r9d
  __int16 v10; // dx
  __int16 v11; // r8
  __int16 v12; // r10
  char result; // al
  __int16 *v14; // r11
  int *v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  int v18; // [rsp+6h] [rbp-Eh]
  __int16 v19; // [rsp+Ah] [rbp-Ah]

  v5 = BYTE1(a3);
  if ( (a3 & 1) == 0 )
  {
    if ( *(_DWORD *)(a3 + 36) )
      v5 = *(_WORD *)(a3 + 68);
    else
      v5 = *(_WORD *)(a3 + 40);
  }
  v6 = a3 >> 16;
  if ( (a3 & 1) == 0 )
  {
    if ( *(_DWORD *)(a3 + 36) )
      LOWORD(v6) = *(_WORD *)(a3 + 70);
    else
      LOWORD(v6) = *(_WORD *)(a3 + 42);
  }
  v7 = *(_QWORD *)(a1 + 136);
  if ( *(_DWORD *)a1 > 0xEu )
  {
    v14 = (__int16 *)(v7 + 6LL * a2);
    v15 = (int *)(v7 + 6LL * (unsigned __int16)v6);
    v11 = *v14;
    v12 = v14[1];
    v9 = *v15;
    LOWORD(v18) = *v14;
    v10 = *((_WORD *)v15 + 2);
    HIWORD(v18) = v12;
    v19 = v14[2];
  }
  else
  {
    v8 = (__int16 *)(v7 + 4LL * a2);
    v9 = *(_DWORD *)(v7 + 4LL * (unsigned __int16)v6);
    v10 = 0;
    v11 = *v8;
    v12 = v8[1];
    v19 = 0;
    LOWORD(v18) = v11;
    HIWORD(v18) = v12;
  }
  if ( v11 == -1 )
    return 0;
  if ( *(_DWORD *)(a4 + 8) && v9 == v18 && v10 == v19 )
  {
    if ( *(_WORD *)(a1 + 160) != v5 )
      return 1;
    if ( (a3 & 1) != 0 )
      v16 = (a3 >> 6) & 1;
    else
      LOBYTE(v16) = (*(_BYTE *)(a3 + 45) & 4) != 0;
    if ( !(_BYTE)v16 )
    {
      if ( (a3 & 1) != 0 )
        v17 = a3 >> 16;
      else
        LOWORD(v17) = *(_WORD *)(a3 + 42);
      if ( a2 == (_WORD)v17 )
        return 1;
    }
  }
  if ( (a3 & 1) != 0 )
  {
    result = HIBYTE(a3) == 0 && v5 != 0;
    if ( !result )
      goto LABEL_14;
    return 0;
  }
  result = *(_DWORD *)(a3 + 16) == 0 && v5 != 0;
  if ( result )
    return 0;
LABEL_14:
  if ( !v12 )
    return *(_BYTE *)(a4 + 12);
  return result;
}
