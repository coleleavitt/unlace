unsigned __int64 __fastcall sub_113F0(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // rax
  int i; // eax
  __int64 v5; // rcx
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r13
  _QWORD *v14; // rax
  __int64 v15; // rdx

  v1 = sub_F090(a1);
  v2 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v2;
  if ( !v2 || (v3 = v2 + 24, v2 + 24 > *(_QWORD *)(a1 + 16)) )
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
    v2 = ((unsigned __int64)v14 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = (char *)v14 + v13;
    v3 = v2 + 24;
  }
  *(_QWORD *)(a1 + 8) = v3;
  *(_WORD *)(v2 + 16) = 224;
  *(_BYTE *)(v2 + 18) = 0;
  for ( i = *(_DWORD *)(a1 + 96); i; i = *(_DWORD *)(a1 + 96) )
  {
    v5 = (unsigned int)(i - 1);
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v5);
    if ( *(_WORD *)(v6 + 16) != 221 )
      break;
    *(_DWORD *)(a1 + 96) = v5;
    if ( !v6 )
      break;
    sub_C080(v2, v6, (_QWORD *)a1);
  }
  sub_C3A0(v2, 0);
  v7 = *(_DWORD *)(a1 + 96);
  if ( !v7 )
    return 0;
  v8 = (unsigned int)(v7 - 1);
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v8);
  *(_DWORD *)(a1 + 96) = v8;
  if ( !v9 || (unsigned __int16)(*(_WORD *)(v9 + 16) - 324) > 1u )
    return 0;
  if ( v1 )
    v10 = sub_CEE0((_QWORD *)a1, 326, v9, v2, v1);
  else
    v10 = sub_CE00((_QWORD *)a1, 326, v9, v2);
  return sub_CD20((_QWORD *)a1, 221, v10);
}

