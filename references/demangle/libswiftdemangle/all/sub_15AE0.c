unsigned __int64 __fastcall sub_15AE0(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // r14
  bool v4; // bl
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rdx

  v1 = *(_DWORD *)(a1 + 96);
  if ( v1 && (v2 = (unsigned int)(v1 - 1), v3 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v2), *(_WORD *)(v3 + 16) == 221) )
  {
    *(_DWORD *)(a1 + 96) = v2;
    v4 = v3 == 0;
  }
  else
  {
    v4 = 1;
    v3 = 0;
  }
  v5 = sub_15540(a1, v3);
  v6 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v6;
  if ( !v6 || (v7 = v6 + 24, v6 + 24 > *(_QWORD *)(a1 + 16)) )
  {
    v9 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v9 < 0x20 )
      v9 = 32;
    *(_QWORD *)(a1 + 32) = v9;
    v10 = v9 + 8;
    v11 = malloc(v9 + 8);
    v12 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v11;
    *v11 = v12;
    v6 = ((unsigned __int64)v11 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = (char *)v11 + v10;
    v7 = v6 + 24;
  }
  *(_QWORD *)(a1 + 8) = v7;
  *(_WORD *)(v6 + 16) = 225;
  *(_BYTE *)(v6 + 18) = 0;
  if ( v5 )
  {
    if ( !v6 )
      return 0;
    *(_QWORD *)v6 = v5;
    *(_QWORD *)(v6 + 8) = 0;
    *(_BYTE *)(v6 + 18) = 3;
  }
  else if ( !v6 )
  {
    return 0;
  }
  if ( v4 )
    return 0;
  sub_C080(v6, v3, (_QWORD *)a1);
  return v6;
}
