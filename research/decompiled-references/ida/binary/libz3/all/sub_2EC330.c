__int64 __fastcall sub_2EC330(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, _DWORD *a5)
{
  __int64 v10; // rbx
  __int64 v11; // rax
  char *v12; // rcx
  int v13; // edi
  unsigned int v14; // edx
  char *v15; // rsi
  __int64 v16; // rdx
  char *v17; // r9
  char *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v10 = *(_QWORD *)(a2 + 16);
  v11 = *(unsigned int *)(a1 + 664);
  v12 = *(char **)(a1 + 656);
  v13 = *(_DWORD *)(v10 + 12);
  v14 = v11 - 1;
  v11 *= 16;
  v15 = &v12[v11];
  v16 = 16LL * (v13 & v14);
  v17 = &v12[v16];
  if ( v16 == v11 )
  {
LABEL_11:
    if ( v12 != v17 )
    {
      while ( 1 )
      {
        v20 = *(_QWORD *)v12;
        if ( *(_QWORD *)v12 > 1u )
        {
          if ( *(_DWORD *)(v20 + 12) == v13 && v10 == v20 )
          {
            v18 = v12;
            goto LABEL_20;
          }
        }
        else if ( !v20 )
        {
          return 0;
        }
        v12 += 16;
        if ( v17 == v12 )
          return 0;
      }
    }
    return 0;
  }
  v18 = &v12[v16];
  while ( 1 )
  {
    v19 = *(_QWORD *)v18;
    if ( *(_QWORD *)v18 > 1u )
      break;
    if ( !v19 )
      return 0;
LABEL_7:
    v18 += 16;
    if ( v15 == v18 )
      goto LABEL_11;
  }
  if ( *(_DWORD *)(v19 + 12) != v13 || v10 != v19 )
    goto LABEL_7;
LABEL_20:
  v21 = *((unsigned int *)v18 + 2);
  *a5 = v21;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 608) + 104 * v21) )
    return 0;
  sub_2EB940(a1, a2, a3, a4);
  return 1;
}

