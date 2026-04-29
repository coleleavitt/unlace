char __fastcall sub_10BFA0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  char *v4; // rdi
  __int64 v5; // rax
  char *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbx
  char *v12; // rdi
  __int64 v13; // rcx
  char *v14; // rdx
  int v16; // eax

  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(unsigned int *)(v2 + 72);
  sub_116EE0(v2);
  v4 = *(char **)(a1 + 368);
  v5 = *(_QWORD *)(a1 + 376);
  *(_DWORD *)(a1 + 76) = 3;
  v6 = &v4[4 * v5];
  if ( v4 == v6 )
    goto LABEL_19;
  while ( (_DWORD)v3 != *(_DWORD *)v4 )
  {
    v4 += 4;
    if ( v6 == v4 )
      goto LABEL_19;
  }
  if ( v6 == v4 )
  {
LABEL_19:
    if ( !under_debugger )
      sub_37B760(50171);
    goto LABEL_22;
  }
  memmove(v4, v4 + 4, v6 - v4 - 4);
  v10 = *(_QWORD *)(a1 + 64);
  --*(_QWORD *)(a1 + 376);
  if ( (unsigned int)v3 >= *(_DWORD *)(v10 + 64) )
    sub_10AA50(v4, v4 + 4, v7, v8, v9);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v3);
  v12 = *(char **)(v11 + 344);
  v13 = *(_QWORD *)(v11 + 352);
  v14 = &v12[4 * v13];
  if ( v12 == v14 )
    goto LABEL_15;
  while ( *(_DWORD *)(a1 + 72) != *(_DWORD *)v12 )
  {
    v12 += 4;
    if ( v14 == v12 )
      goto LABEL_15;
  }
  if ( v12 == v14 )
  {
LABEL_15:
    if ( !v13 )
      **(_DWORD **)(v11 + 64) |= 0x400u;
    if ( !under_debugger )
      sub_37B760(50172);
LABEL_22:
    BUG();
  }
  memmove(v12, v12 + 4, v14 - v12 - 4);
  if ( (*(_QWORD *)(v11 + 352))-- == 1 )
    **(_DWORD **)(v11 + 64) |= 0x400u;
  v16 = *(_DWORD *)(a1 + 24);
  BYTE1(v16) &= ~2u;
  LOBYTE(v16) = v16 | 0x80;
  *(_DWORD *)(a1 + 24) = v16;
  return v16;
}
