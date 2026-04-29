unsigned __int64 __fastcall sub_10000(__int64 a1)
{
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi

  v1 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v1;
  if ( !v1 || (v2 = v1 + 24, v1 + 24 > *(_QWORD *)(a1 + 16)) )
  {
    v8 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v8 < 0x20 )
      v8 = 32;
    *(_QWORD *)(a1 + 32) = v8;
    v9 = v8 + 8;
    v10 = malloc(v8 + 8);
    v11 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v10;
    *v10 = v11;
    v1 = ((unsigned __int64)v10 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = (char *)v10 + v9;
    v2 = v1 + 24;
  }
  *(_QWORD *)(a1 + 8) = v2;
  *(_WORD *)(v1 + 16) = 277;
  *(_BYTE *)(v1 + 18) = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(a1 + 96);
      if ( !v3 )
        break;
      v4 = (unsigned int)(v3 - 1);
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v4);
      if ( *(_WORD *)(v5 + 16) != 263 )
        break;
      *(_DWORD *)(a1 + 96) = v4;
      v6 = sub_FA80(a1);
      if ( !v6 )
        return 0;
      sub_C080(v1, v6, (_QWORD *)a1);
      if ( v5 )
      {
        sub_C3A0(v1, 0);
        return v1;
      }
    }
    v12 = sub_FA80(a1);
    if ( !v12 )
      break;
    sub_C080(v1, v12, (_QWORD *)a1);
  }
  return 0;
}
