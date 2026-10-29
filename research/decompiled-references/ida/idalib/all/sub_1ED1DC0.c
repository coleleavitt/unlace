__int64 __fastcall sub_1ED1DC0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  int v3; // r12d
  __int64 v5; // r14
  int v8; // r12d
  __int64 v9; // r13
  __int64 v10; // rax
  int v11; // esi
  int v12; // edi
  __int64 v13; // r8
  unsigned int i; // eax
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rcx

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v5 = *a1;
  v8 = v3 - 1;
  v9 = (unsigned int)(37 * *(_DWORD *)(a2 + 16));
  v10 = sub_1EADE10(a2);
  v11 = *(_DWORD *)a2;
  v12 = 1;
  v13 = 0;
  for ( i = v8 & (((0xBF58476D1CE4E5B9LL * (v9 | (v10 << 32))) >> 31) ^ (484763065 * v9)); ; i = v8 & v16 )
  {
    v15 = v5 + 72LL * i;
    if ( v11 == *(_DWORD *)v15
      && *(_QWORD *)(a2 + 8) == *(_QWORD *)(v15 + 8)
      && *(_DWORD *)(a2 + 16) == *(_DWORD *)(v15 + 16) )
    {
      *a3 = v15;
      return 1;
    }
    if ( *(_DWORD *)v15 == -1 )
      break;
LABEL_6:
    v16 = v12 + i;
    ++v12;
  }
  v17 = *(_QWORD *)(v15 + 8);
  if ( v17 != 1 )
  {
    if ( v17 == 2 && *(_DWORD *)(v15 + 16) == -2 && !v13 )
      v13 = v5 + 72LL * i;
    goto LABEL_6;
  }
  if ( *(_DWORD *)(v15 + 16) != -1 )
    goto LABEL_6;
  if ( !v13 )
    v13 = v5 + 72LL * i;
  *a3 = v13;
  return 0;
}
