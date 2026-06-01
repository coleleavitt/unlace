__int64 __fastcall sub_36D4C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8

  v2 = *(unsigned int *)(a1 + 40);
  v3 = getseg(*(unsigned int *)(a1 + 8));
  if ( v3 )
    *(_DWORD *)(a2 + 8) = sub_36D440((__int64)&unk_2388780, v3, v2, v4, v5);
  else
    *(_DWORD *)(a2 + 8) = -1;
  return 0;
}

