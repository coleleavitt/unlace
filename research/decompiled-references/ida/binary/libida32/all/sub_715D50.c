unsigned __int16 *__fastcall sub_715D50(__int64 a1, __int64 a2)
{
  int v2; // r12d
  int v4; // edx
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int16 **v8; // rdi
  unsigned __int16 *v9; // rcx
  unsigned __int16 *v10; // rbp
  int v11; // r13d
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  __int64 v16; // rcx
  unsigned __int16 *v17; // rbx
  unsigned __int16 *result; // rax

  v2 = a2;
  while ( 1 )
  {
    v7 = *(_QWORD *)(a1 + 2664);
    v8 = *(unsigned __int16 ***)(v7 + 8);
    if ( !v8 && *(__int16 *)(a1 + 1634) > 0 )
      break;
    v9 = *v8;
    if ( !**v8 )
      goto LABEL_17;
LABEL_10:
    if ( v2 == -1 )
    {
      *(_DWORD *)(v7 + 24) = 0;
      *(_WORD *)(v7 + 28) = 0;
    }
    else
    {
      v4 = (__int16)v9[1];
      if ( v4 < 0 )
      {
        if ( !under_debugger )
          interr(835);
        BUG();
      }
      a2 = 0;
      *(_DWORD *)(v7 + 24) = v4;
      *(_WORD *)(v7 + 28) = 0;
      if ( v4 )
      {
        v5 = v9[2 * v4];
        goto LABEL_5;
      }
    }
    v5 = *v9;
LABEL_5:
    if ( !(_WORD)v5 )
      sub_7172E0(v8, a2, v5);
    v6 = *(__int16 *)(a1 + 1634);
    if ( v6 > 0x1E )
      sub_7172B0(24, 0);
    a2 = a1 + 32 * v6 + 1640;
    ++*(_WORD *)(a1 + 1634);
    *(_QWORD *)(a1 + 2664) = a2;
    sub_717850(a1, a2, v5);
  }
  v10 = (unsigned __int16 *)(a1 + 1640);
  v11 = 0;
  do
  {
    v12 = *v10;
    a2 = (__int64)v10;
    ++v11;
    v10 += 16;
    sub_717850(a1, a2, v12);
  }
  while ( v11 < *(__int16 *)(a1 + 1634) );
  v7 = *(_QWORD *)(a1 + 2664);
  v8 = *(unsigned __int16 ***)(v7 + 8);
  v9 = *v8;
  if ( **v8 )
    goto LABEL_10;
LABEL_17:
  v13 = (__int16)v9[1];
  if ( v2 != -1 )
  {
    v14 = (unsigned int)((__int16)v9[1] - 1);
    v15 = (int)v14;
    v16 = LOBYTE(v9[2 * (int)v14 + 2]);
    if ( (int)v14 >= 0 )
      goto LABEL_19;
    goto LABEL_23;
  }
  v15 = 0;
  v16 = 0;
  v14 = 0;
LABEL_19:
  if ( v15 >= v13 )
LABEL_23:
    sub_715D30(v8, v15, v14, v16);
  *(_DWORD *)(v7 + 24) = v14;
  *(_BYTE *)(v7 + 28) = 1;
  *(_BYTE *)(v7 + 29) = v16;
  if ( *(_WORD *)(a1 + 1632) == 0xFFFF )
    return (unsigned __int16 *)sub_7175B0(v8, a1 + 2672, v15);
  v17 = (unsigned __int16 *)(a1 + 2672);
  result = (unsigned __int16 *)sub_716E30(v8, v17, v15, 0);
  if ( v17 != result )
    return (unsigned __int16 *)sub_715B80(v17, result);
  return result;
}

