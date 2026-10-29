__int64 __fastcall sub_15D14D0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // rbx
  unsigned int v6; // r12d
  __int64 v7; // rdi

  if ( !*(_DWORD *)(a1 + 24) )
    return 0;
  v4 = a3;
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v5++);
    v6 |= (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v7 + 80LL))(v7, a2, v4);
  }
  while ( *(unsigned int *)(a1 + 24) > v5 );
  return v6;
}
