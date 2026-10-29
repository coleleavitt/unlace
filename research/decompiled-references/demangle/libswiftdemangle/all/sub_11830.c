unsigned __int64 __fastcall sub_11830(__int64 a1)
{
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // rax
  int v3; // ecx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int16 v7; // ax
  __int64 v8; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbp
  _QWORD *v12; // rax
  __int64 v13; // rdx

  v1 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v1;
  if ( !v1 || (v2 = v1 + 24, v1 + 24 > *(_QWORD *)(a1 + 16)) )
  {
    v10 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v10 < 0x20 )
      v10 = 32;
    *(_QWORD *)(a1 + 32) = v10;
    v11 = v10 + 8;
    v12 = malloc(v10 + 8);
    v13 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v12;
    *v12 = v13;
    v1 = ((unsigned __int64)v12 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = (char *)v12 + v11;
    v2 = v1 + 24;
  }
  *(_QWORD *)(a1 + 8) = v2;
  *(_WORD *)(v1 + 16) = 81;
  *(_BYTE *)(v1 + 18) = 0;
  do
  {
    v3 = *(_DWORD *)(a1 + 96);
    if ( !v3 )
      return 0;
    v4 = *(_QWORD *)(a1 + 88);
    v5 = (unsigned int)(v3 - 1);
    v6 = *(_QWORD *)(v4 + 8 * v5);
    v7 = *(_WORD *)(v6 + 16);
    if ( v7 == 263 )
    {
      *(_DWORD *)(a1 + 96) = v5;
      if ( v3 == 1 )
        return 0;
      v8 = *(_QWORD *)(v4 + 8LL * (unsigned int)(v3 - 2));
      LODWORD(v5) = v3 - 2;
      v7 = *(_WORD *)(v8 + 16);
    }
    else
    {
      v8 = *(_QWORD *)(v4 + 8 * v5);
      v6 = 0;
    }
    if ( v7 != 33 && (unsigned __int16)(v7 - 36) > 3u )
      return 0;
    *(_DWORD *)(a1 + 96) = v5;
    if ( !v8 )
      return 0;
    sub_C080(v1, v8, (_QWORD *)a1);
  }
  while ( !v6 );
  sub_C3A0(v1, 0);
  return v1;
}
