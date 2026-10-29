unsigned __int64 __fastcall sub_F090(__int64 a1)
{
  int v1; // edx
  unsigned __int64 v2; // r12
  __int64 v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rdx

  v1 = *(_DWORD *)(a1 + 96);
  if ( !v1 )
    return 0;
  v2 = 0;
  do
  {
    v3 = (unsigned int)(v1 - 1);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v3);
    if ( *(_WORD *)(v4 + 16) != 195 )
      break;
    *(_DWORD *)(a1 + 96) = v3;
    if ( !v4 )
      break;
    if ( !v2 )
    {
      v2 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)(a1 + 8) = v2;
      if ( !v2 || (v6 = v2 + 24, v2 + 24 > *(_QWORD *)(a1 + 16)) )
      {
        v7 = 2LL * *(_QWORD *)(a1 + 32);
        if ( v7 < 0x20 )
          v7 = 32;
        *(_QWORD *)(a1 + 32) = v7;
        v8 = v7 + 8;
        v9 = malloc(v7 + 8);
        v10 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = v9;
        *v9 = v10;
        v2 = ((unsigned __int64)v9 + 15) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)(a1 + 16) = (char *)v9 + v8;
        v6 = v2 + 24;
      }
      *(_QWORD *)(a1 + 8) = v6;
      *(_WORD *)(v2 + 16) = 224;
      *(_BYTE *)(v2 + 18) = 0;
    }
    sub_C080(v2, v4, (_QWORD *)a1);
    v1 = *(_DWORD *)(a1 + 96);
  }
  while ( v1 );
  if ( v2 )
    sub_C3A0(v2, 0);
  return v2;
}

