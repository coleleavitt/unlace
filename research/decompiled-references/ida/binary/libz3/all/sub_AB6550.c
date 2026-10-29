__int64 __fastcall sub_AB6550(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v7; // rdi
  unsigned int v8; // eax

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
  if ( !v3 )
    return 0;
  v5 = *a2;
  if ( (unsigned int)v5 >= *(_DWORD *)(v3 - 4) )
    return 0;
  v7 = *(_QWORD *)(v3 + 8 * v5);
  if ( !v7 )
    return 0;
  v8 = sub_B39350(v7, *(unsigned int *)(a1 + 8));
  return sub_AB6070(a1, v8, a3);
}

