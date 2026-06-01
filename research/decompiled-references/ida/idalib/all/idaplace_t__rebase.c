__int64 __fastcall idaplace_t__rebase(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 *v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi

  v2 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    return 0;
  v5 = *(unsigned __int64 **)a2;
  v6 = 0;
  while ( 1 )
  {
    v7 = *v5;
    if ( v4 >= *v5 && v4 < v7 + v5[2] )
      break;
    ++v6;
    v5 += 3;
    if ( v2 == v6 )
      return 0;
  }
  if ( !v5 )
    return 0;
  *(_QWORD *)(a1 + 16) = correct_address(v4, v7, v5[1], v5[2], 0);
  return 1;
}
