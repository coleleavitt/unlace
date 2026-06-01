__int64 __fastcall sub_1CAED30(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r13
  __int64 *v4; // rbp
  __int64 v5; // rbx
  char v6; // al
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // r14
  unsigned __int64 v15; // rdx

  if ( (*(_BYTE *)(a2 + 80) & 2) != 0 )
    return 0;
  v2 = *(_QWORD *)(a2 + 56);
  if ( (*(_DWORD *)(v2 + 20) & 0x1FFFFFFF) == 0 )
    return 0;
  v3 = v2 + 8LL * ((*(_DWORD *)(v2 + 20) & 0x1FFFFFFFu) - 1) + 32;
  v4 = (__int64 *)(v2 + 24);
  while ( 1 )
  {
    v5 = *v4;
    v6 = *(_BYTE *)(*v4 + 28) & 0x7F;
    if ( v6 == 67 )
      break;
    if ( v6 == 47 )
    {
      if ( !*(_BYTE *)(v5 + 80) )
      {
        v15 = *(_QWORD *)(v5 + 56) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v5 + 56) & 4) != 0 )
          v15 = *(_QWORD *)(v15 + 32);
        if ( (unsigned __int8)sub_1E535C0(a1, *(unsigned int *)(v5 + 24), v15, 13) )
          return 1;
      }
LABEL_12:
      if ( (__int64 *)v3 == ++v4 )
        return 0;
    }
    else
    {
      if ( v6 != 68 )
        goto LABEL_12;
      if ( (unsigned __int8)sub_1CAED30(a1, *v4) )
        return 1;
      if ( (__int64 *)v3 == ++v4 )
        return 0;
    }
  }
  if ( sub_BBE5D0(*v4) )
    goto LABEL_12;
  if ( (*(_BYTE *)(v5 + 60) & 4) == 0 )
    goto LABEL_12;
  if ( v5 == -80 )
    goto LABEL_12;
  v11 = *(_QWORD *)(*(_QWORD *)(v5 + 88) + 64LL);
  if ( !v11 )
    goto LABEL_12;
  v12 = (_QWORD *)(v11 + 16);
  v13 = v11 + 16 + 32LL * *(unsigned int *)(v11 + 8);
  if ( v13 == v11 + 16 )
    goto LABEL_12;
  while ( !(unsigned __int8)sub_1E52D80(a1, 21, v7, v8, v9, v10, *v12, v12[1], v12[2], v12[3]) )
  {
    v12 += 4;
    if ( (_QWORD *)v13 == v12 )
      goto LABEL_12;
  }
  return 1;
}
