__int64 __fastcall sub_E888C0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  _DWORD *v3; // rax
  _QWORD *v4; // rdx
  unsigned int *v5; // rax

  while ( 1 )
  {
    if ( *(_WORD *)(a1 + 4) )
      return 0xFFFFFFFFLL;
    v2 = *(_QWORD *)(a1 + 16);
    v3 = *(_DWORD **)(v2 + 24);
    if ( !v3 || *v3 || v3[1] != 8 || *(_DWORD *)(a1 + 24) != 1 )
      break;
    a1 = *(_QWORD *)(a1 + 32);
  }
  v4 = *(_QWORD **)(v2 + 24);
  if ( !v4 )
    return 0xFFFFFFFFLL;
  result = *(unsigned int *)v4;
  if ( *v4 == 0x200000000LL && *(_DWORD *)(a1 + 24) == 2 )
  {
    v5 = *(unsigned int **)(sub_15D1F10(*(_QWORD *)(a1 + 32)) + 24);
    if ( v5 )
      return *v5;
    else
      return 0xFFFFFFFFLL;
  }
  return result;
}

