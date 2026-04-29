unsigned __int64 __fastcall sub_103C0(__int64 a1)
{
  unsigned __int64 v1; // r13
  unsigned __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rsi
  bool v7; // bl
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned __int64 v12; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rdx

  v1 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v1;
  if ( !v1 || (v2 = v1 + 24, v1 + 24 > *(_QWORD *)(a1 + 16)) )
  {
    v14 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v14 < 0x20 )
      v14 = 32;
    *(_QWORD *)(a1 + 32) = v14;
    v15 = v14 + 8;
    v16 = malloc(v14 + 8);
    v17 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v16;
    *v16 = v17;
    v1 = ((unsigned __int64)v16 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = (char *)v16 + v15;
    v2 = v1 + 24;
  }
  *(_QWORD *)(a1 + 8) = v2;
  *(_WORD *)(v1 + 16) = 310;
  *(_BYTE *)(v1 + 18) = 0;
  v3 = *(_DWORD *)(a1 + 96);
  if ( !v3 )
    goto LABEL_23;
  v4 = *(_QWORD *)(a1 + 88);
  v5 = (unsigned int)(v3 - 1);
  v6 = *(_QWORD *)(v4 + 8 * v5);
  if ( *(_WORD *)(v6 + 16) == 40 )
  {
    *(_DWORD *)(a1 + 96) = v5;
    v7 = v1 == 0 || v6 == 0;
    if ( v7 )
    {
      v7 = v1 == 0;
    }
    else
    {
      sub_C080(v1, v6, (_QWORD *)a1);
      LODWORD(v5) = *(_DWORD *)(a1 + 96);
    }
    if ( !(_DWORD)v5 )
    {
LABEL_23:
      sub_102E0((_QWORD *)a1);
      return 0;
    }
    v4 = *(_QWORD *)(a1 + 88);
    LODWORD(v5) = v5 - 1;
  }
  else
  {
    v7 = v1 == 0;
  }
  v8 = *(_QWORD *)(v4 + 8LL * (unsigned int)v5);
  if ( *(_WORD *)(v8 + 16) != 221 )
    goto LABEL_23;
  *(_DWORD *)(a1 + 96) = v5;
  if ( !v8 || v7 )
    v1 = 0;
  else
    sub_C080(v1, v8, (_QWORD *)a1);
  v9 = *(_DWORD *)(a1 + 96);
  if ( !v9 )
    goto LABEL_23;
  v10 = (unsigned int)(v9 - 1);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v10);
  if ( *(_WORD *)(v11 + 16) != 221 )
    goto LABEL_23;
  *(_DWORD *)(a1 + 96) = v10;
  if ( !v1 || !v11 )
    goto LABEL_23;
  sub_C080(v1, v11, (_QWORD *)a1);
  sub_C3A0(v1, 0);
  v12 = sub_102E0((_QWORD *)a1);
  if ( !v12 )
    return 0;
  sub_C080(v1, v12, (_QWORD *)a1);
  return v1;
}
