__int64 __fastcall sub_675CE0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r12

  if ( *(_QWORD *)a2 != *(_QWORD *)a3 )
    return 0;
  v5 = 0;
  v6 = *(_QWORD *)(a2 + 8);
  if ( !*(_DWORD *)(v6 + 24) )
    return 1;
  while ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 8LL * (*(_DWORD *)(a3 + 24) + v5)) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 8LL * (*(_DWORD *)(a2 + 24) + v5)) )
  {
    v7 = v5 + 4LL;
    v8 = sub_15D1F10(*(_QWORD *)(v6 + 8 * v7));
    if ( v8 != sub_15D1F10(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v7)) )
      break;
    v6 = *(_QWORD *)(a2 + 8);
    if ( ++v5 >= *(_DWORD *)(v6 + 24) )
      return 1;
  }
  return 0;
}

