__int64 __fastcall sub_DFBE00(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // ecx
  __int64 *v14; // rbp
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdi
  int v21; // eax

  v3 = *a2;
  v4 = *(unsigned int *)(a1 + 704);
  v5 = *(_QWORD *)(a1 + 696);
  if ( *a2 )
  {
    if ( (*a2 & 7) == 1 )
      v6 = v3 >> 3;
    else
      LODWORD(v6) = *(_DWORD *)(v3 - 8);
  }
  else
  {
    LODWORD(v6) = -1640531495;
  }
  v7 = v4 - 1;
  v8 = 24 * v4;
  v9 = v5 + v8;
  v10 = 24LL * ((unsigned int)v6 & v7);
  v11 = v5 + v10;
  if ( v10 == v8 )
  {
LABEL_19:
    while ( v11 != v5 )
    {
      v21 = *(_DWORD *)(v5 + 4);
      if ( v21 == 2 )
      {
        if ( (_DWORD)v6 == *(_DWORD *)v5 && v3 == *(_QWORD *)(v5 + 8) )
        {
          v12 = v5;
          goto LABEL_11;
        }
      }
      else if ( !v21 )
      {
        break;
      }
      v5 += 24;
    }
LABEL_32:
    sub_1872CE0("");
    sub_1873130(114, 416);
  }
  v12 = v5 + v10;
  while ( 1 )
  {
    v13 = *(_DWORD *)(v12 + 4);
    if ( v13 != 2 )
    {
      if ( !v13 )
        goto LABEL_32;
      goto LABEL_7;
    }
    if ( (_DWORD)v6 == *(_DWORD *)v12 && v3 == *(_QWORD *)(v12 + 8) )
      break;
LABEL_7:
    v12 += 24;
    if ( v9 == v12 )
      goto LABEL_19;
  }
LABEL_11:
  v14 = *(__int64 **)(v12 + 16);
  sub_DFBCB0(a1);
  v15 = *v14;
  if ( *v14 )
  {
    result = *(unsigned int *)(v15 - 4);
    v17 = v15 + 16LL * (unsigned int)(result - 1);
    v18 = *(_QWORD *)(v17 + 8);
    if ( v18 )
    {
LABEL_13:
      v19 = *(_QWORD *)(a1 + 296);
      if ( (*(_DWORD *)(v18 + 8))-- == 1 )
      {
        result = sub_15D7BC0(v19, v18);
        v15 = *v14;
        if ( !*v14 )
          goto LABEL_28;
      }
      result = *(unsigned int *)(v15 - 4);
      v17 = v15 + 16LL * (unsigned int)(result - 1);
    }
  }
  else
  {
    result = 0xFFFFFFFF8LL;
    v18 = MEMORY[0xFFFFFFFF8];
    if ( MEMORY[0xFFFFFFFF8] )
      goto LABEL_13;
LABEL_28:
    v17 = 0xFFFFFFFF0LL;
  }
  if ( *(_QWORD *)v17 )
  {
    result = sub_186B220((void *)(*(_QWORD *)v17 - 8LL));
    v15 = *v14;
  }
  --*(_DWORD *)(v15 - 4);
  return result;
}

