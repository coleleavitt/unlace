__int64 __fastcall sub_78220(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdi

  v3 = *a1;
  v5 = *a3;
  v6 = *a2;
  v7 = *(unsigned int *)(*a1 + 48);
  if ( (*(_BYTE *)(v3 + 40) & 4) != 0 )
    *(_DWORD *)(*a1 + 48) = sub_7CF00(v7, v6, v5);
  else
    *(_DWORD *)(*a1 + 48) = sub_8E7C0(v7, v6, v5);
  return 1;
}

