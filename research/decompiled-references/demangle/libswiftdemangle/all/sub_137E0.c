unsigned __int64 __fastcall sub_137E0(__int64 a1)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r12
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r13
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r12
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
  *(_WORD *)(v1 + 16) = 224;
  *(_BYTE *)(v1 + 18) = 0;
  v3 = sub_CD20((_QWORD *)a1, 179, v1);
  v4 = *(_DWORD *)(a1 + 96);
  if ( !v4 )
    goto LABEL_7;
  v5 = (unsigned int)(v4 - 1);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v5);
  if ( *(_WORD *)(v6 + 16) == 262 )
  {
    *(_DWORD *)(a1 + 96) = v5;
    --v4;
    if ( v6 )
      return v3;
  }
  while ( 1 )
  {
    if ( v4 )
    {
      v9 = (unsigned int)(v4 - 1);
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v9);
      if ( *(_WORD *)(v10 + 16) == 263 )
        break;
    }
LABEL_7:
    v8 = sub_13360(a1);
    if ( !v8 )
      return 0;
    sub_C080(v1, v8, (_QWORD *)a1);
LABEL_9:
    v4 = *(_DWORD *)(a1 + 96);
  }
  *(_DWORD *)(a1 + 96) = v9;
  v11 = sub_13360(a1);
  if ( v11 )
  {
    sub_C080(v1, v11, (_QWORD *)a1);
    if ( v10 )
    {
      sub_C3A0(v1, 0);
      return v3;
    }
    goto LABEL_9;
  }
  return 0;
}
