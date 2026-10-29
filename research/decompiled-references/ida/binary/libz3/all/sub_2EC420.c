__int64 __fastcall sub_2EC420(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, _DWORD *a5)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  char *v11; // rcx
  int v12; // edi
  unsigned int v13; // edx
  char *v14; // rsi
  __int64 v15; // rdx
  char *v16; // r9
  char *v17; // rax
  __int64 v18; // rdx
  __int64 v20; // rax
  __int64 v21; // rax

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v9 = *(_QWORD *)(a2 + 16);
  v10 = *(unsigned int *)(a1 + 664);
  v11 = *(char **)(a1 + 656);
  v12 = *(_DWORD *)(v9 + 12);
  v13 = v10 - 1;
  v10 *= 16;
  v14 = &v11[v10];
  v15 = 16LL * (v12 & v13);
  v16 = &v11[v15];
  if ( v15 == v10 )
  {
LABEL_10:
    if ( v11 != v16 )
    {
      while ( 1 )
      {
        v20 = *(_QWORD *)v11;
        if ( *(_QWORD *)v11 > 1u )
        {
          if ( *(_DWORD *)(v20 + 12) == v12 && v9 == v20 )
          {
            v17 = v11;
            goto LABEL_20;
          }
        }
        else if ( !v20 )
        {
          return 0;
        }
        v11 += 16;
        if ( v16 == v11 )
          return 0;
      }
    }
    return 0;
  }
  v17 = &v11[v15];
  while ( 1 )
  {
    v18 = *(_QWORD *)v17;
    if ( *(_QWORD *)v17 > 1u )
      break;
    if ( !v18 )
      return 0;
LABEL_6:
    v17 += 16;
    if ( v14 == v17 )
      goto LABEL_10;
  }
  if ( *(_DWORD *)(v18 + 12) != v12 || v9 != v18 )
    goto LABEL_6;
LABEL_20:
  v21 = *((unsigned int *)v17 + 2);
  *a5 = v21;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 608) + 104 * v21) != 1 )
    return 0;
  sub_2EB940(a1, a2, a3, a4);
  return 1;
}

