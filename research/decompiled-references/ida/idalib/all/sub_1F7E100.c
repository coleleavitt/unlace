__int64 __fastcall sub_1F7E100(__int64 *a1, __int64 a2, _QWORD *a3)
{
  int v3; // r12d
  __int64 v6; // rbp
  int v8; // eax
  int v9; // r12d
  int v10; // esi
  __int64 v11; // rdi
  unsigned int v12; // eax
  int i; // r8d
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rdx

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v6 = *a1;
  v8 = sub_1EADE10(a2);
  v9 = v3 - 1;
  v10 = *(_DWORD *)a2;
  v11 = 0;
  v12 = v9 & v8;
  for ( i = 1; ; ++i )
  {
    v14 = v6 + 544LL * v12;
    if ( *(_DWORD *)v14 == v10 && *(_QWORD *)(v14 + 8) == *(_QWORD *)(a2 + 8) )
    {
      *a3 = v14;
      return 1;
    }
    if ( *(_DWORD *)v14 == -1 )
      break;
LABEL_6:
    v15 = i + v12;
    v12 = v9 & v15;
  }
  v16 = *(_QWORD *)(v14 + 8);
  if ( v16 != 1 )
  {
    if ( !v11 && v16 == 2 )
      v11 = v6 + 544LL * v12;
    goto LABEL_6;
  }
  if ( !v11 )
    v11 = v6 + 544LL * v12;
  *a3 = v11;
  return 0;
}
