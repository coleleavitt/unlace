bool __fastcall sub_E0E120(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // r11
  unsigned __int64 v3; // r9
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 i; // rax
  int v14; // ecx
  int v16; // eax
  unsigned int v17; // esi
  __int64 v18; // rdi
  unsigned __int64 v19[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v3 = *a2;
  v5 = *(_QWORD *)(v2 + 536);
  v6 = *(unsigned int *)(v2 + 544);
  if ( *a2 )
  {
    if ( (*a2 & 7) == 1 )
      v7 = v3 >> 3;
    else
      LODWORD(v7) = *(_DWORD *)(v3 - 8);
  }
  else
  {
    LODWORD(v7) = -1640531495;
  }
  v8 = v6 - 1;
  v9 = 32 * v6;
  v10 = v5 + v9;
  v11 = 32LL * ((unsigned int)v7 & v8);
  v12 = v5 + v11;
  if ( v11 != v9 )
  {
    for ( i = v5 + v11; v10 != i; i += 32 )
    {
      v14 = *(_DWORD *)(i + 4);
      if ( v14 == 2 )
      {
        if ( (_DWORD)v7 == *(_DWORD *)i && *(_QWORD *)(i + 8) == v3 )
          return 1;
      }
      else if ( !v14 )
      {
        goto LABEL_21;
      }
    }
  }
  if ( v5 != v12 )
  {
    while ( 1 )
    {
      v16 = *(_DWORD *)(v5 + 4);
      if ( v16 != 2 )
        break;
      if ( (_DWORD)v7 == *(_DWORD *)v5 )
      {
        if ( v3 == *(_QWORD *)(v5 + 8) )
          return 1;
        v5 += 32;
        if ( v12 == v5 )
          goto LABEL_21;
      }
      else
      {
LABEL_16:
        v5 += 32;
        if ( v12 == v5 )
          goto LABEL_21;
      }
    }
    if ( !v16 )
      goto LABEL_21;
    goto LABEL_16;
  }
LABEL_21:
  v17 = *(_DWORD *)(v2 + 632);
  v18 = *(_QWORD *)(v2 + 624);
  v19[0] = *a2;
  return sub_DF6190(v18, v17, v19) != 0;
}

