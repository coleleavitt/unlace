__int64 __fastcall idaplace_t__rebase(__int64 a1, unsigned int **a2)
{
  unsigned int *v2; // r8
  unsigned int v3; // r9d
  unsigned int *v4; // rax
  unsigned int *v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rcx

  v2 = a2[1];
  v3 = *(_DWORD *)(a1 + 12);
  if ( !v2 )
    return 0;
  v4 = *a2;
  v5 = nullptr;
  while ( 1 )
  {
    v6 = *v4;
    if ( v3 >= (unsigned int)v6 )
    {
      v7 = *((_QWORD *)v4 + 1);
      if ( v3 < v7 + (unsigned __int64)(unsigned int)v6 )
        break;
    }
    v5 = (unsigned int *)((char *)v5 + 1);
    v4 += 4;
    if ( v2 == v5 )
      return 0;
  }
  if ( !v4 )
    return 0;
  *(_DWORD *)(a1 + 12) = correct_address(v3, v6, v4[1], v7, 0);
  return 1;
}

