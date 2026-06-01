unsigned __int64 __fastcall sub_ED30(__int64 a1)
{
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // rax
  int v3; // ecx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int16 v10; // ax
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbp
  _QWORD *v14; // rax
  __int64 v15; // rdx

  v1 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v1;
  if ( !v1 || (v2 = v1 + 24, v1 + 24 > *(_QWORD *)(a1 + 16)) )
  {
    v12 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v12 < 0x20 )
      v12 = 32;
    *(_QWORD *)(a1 + 32) = v12;
    v13 = v12 + 8;
    v14 = malloc(v12 + 8);
    v15 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v14;
    *v14 = v15;
    v1 = ((unsigned __int64)v14 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = (char *)v14 + v13;
    v2 = v1 + 24;
  }
  *(_QWORD *)(a1 + 8) = v2;
  *(_WORD *)(v1 + 16) = 2;
  *(_BYTE *)(v1 + 18) = 0;
  v3 = *(_DWORD *)(a1 + 96);
  if ( v3 )
  {
    v4 = (unsigned int)(v3 - 1);
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v4);
    if ( *(_WORD *)(v5 + 16) != 262 )
      goto LABEL_10;
    *(_DWORD *)(a1 + 96) = v4;
    if ( v5 )
      return v1;
    --v3;
LABEL_10:
    while ( v3 )
    {
      v7 = *(_QWORD *)(a1 + 88);
      v8 = (unsigned int)(v3 - 1);
      v9 = *(_QWORD *)(v7 + 8 * v8);
      v10 = *(_WORD *)(v9 + 16);
      if ( v10 == 263 )
      {
        *(_DWORD *)(a1 + 96) = v8;
        if ( v3 == 1 )
          return 0;
        v11 = *(_QWORD *)(v7 + 8LL * (unsigned int)(v3 - 2));
        LODWORD(v8) = v3 - 2;
        v10 = *(_WORD *)(v11 + 16);
      }
      else
      {
        v11 = *(_QWORD *)(v7 + 8 * v8);
        v9 = 0;
      }
      if ( v10 != 24 && (unsigned __int16)(v10 - 44) > 2u )
        break;
      *(_DWORD *)(a1 + 96) = v8;
      if ( !v11 )
        break;
      sub_C080(v1, v11, (_QWORD *)a1);
      if ( v9 )
      {
        sub_C3A0(v1, 0);
        return v1;
      }
      v3 = *(_DWORD *)(a1 + 96);
    }
  }
  return 0;
}
