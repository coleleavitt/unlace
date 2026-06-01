unsigned __int16 *__fastcall sub_740BA0(__int64 a1, __int64 a2)
{
  int v2; // r12d
  __int64 v4; // rdx
  unsigned int v5; // ecx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  unsigned int **v8; // rdi
  unsigned int *v9; // rcx
  unsigned int *v10; // rbp
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
    v8 = *(unsigned int ***)(v7 + 8);
    if ( !v8 && *(__int16 *)(a1 + 1634) > 0 )
      break;
    v9 = *v8;
    if ( !**v8 )
      goto LABEL_17;
LABEL_10:
    if ( v2 == -1 )
    {
      v4 = 0;
      *(_DWORD *)(v7 + 24) = 0;
      *(_BYTE *)(v7 + 28) = 0;
      *(_WORD *)(v7 + 30) = 0;
    }
    else
    {
      v4 = (unsigned int)*((__int16 *)v9 + 2);
      if ( (int)v4 < 0 )
      {
        if ( !under_debugger )
          interr(835);
        BUG();
      }
      a2 = 0;
      *(_DWORD *)(v7 + 24) = v4;
      *(_BYTE *)(v7 + 28) = 0;
      *(_WORD *)(v7 + 30) = 0;
      if ( (_DWORD)v4 )
      {
        v4 = (int)v4 - 1;
        v5 = *(unsigned int *)((char *)v9 + 6 * (int)v4 + 6);
        goto LABEL_5;
      }
    }
    v5 = *v9;
LABEL_5:
    if ( !v5 )
      sub_743130(v8, a2, v4);
    v6 = *(__int16 *)(a1 + 1634);
    if ( v6 > 0x1E )
      sub_743100(24, 0, v6);
    a2 = a1 + 32 * v6 + 1640;
    *(_WORD *)(a1 + 1634) = v6 + 1;
    *(_QWORD *)(a1 + 2664) = a2;
    sub_745040(a1, a2, v5);
  }
  v10 = (unsigned int *)(a1 + 1640);
  v11 = 0;
  do
  {
    v12 = *v10;
    a2 = (__int64)v10;
    ++v11;
    v10 += 8;
    sub_745040(a1, a2, v12);
  }
  while ( v11 < *(__int16 *)(a1 + 1634) );
  v7 = *(_QWORD *)(a1 + 2664);
  v8 = *(unsigned int ***)(v7 + 8);
  v9 = *v8;
  if ( **v8 )
    goto LABEL_10;
LABEL_17:
  v13 = *((__int16 *)v9 + 2);
  if ( v2 != -1 )
  {
    v14 = (unsigned int)(*((__int16 *)v9 + 2) - 1);
    v15 = (int)v14;
    v16 = *((unsigned __int16 *)v9 + 3 * (int)v14 + 3);
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
    sub_740B80(v8, v15, v14, v16);
  *(_DWORD *)(v7 + 24) = v14;
  *(_BYTE *)(v7 + 28) = 1;
  *(_WORD *)(v7 + 30) = v16;
  if ( *(_WORD *)(a1 + 1632) == 0xFFFF )
    return (unsigned __int16 *)sub_744260(v8, a1 + 2672, v15);
  v17 = (unsigned __int16 *)(a1 + 2672);
  result = (unsigned __int16 *)sub_742470(v8, v17, v15, 0);
  if ( v17 != result )
    return (unsigned __int16 *)sub_73D680(v17, result);
  return result;
}
