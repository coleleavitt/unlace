__int64 __fastcall sub_298120(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *v7; // rax

  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 1 )
    return 0;
  v4 = *(__int64 **)(v2 + 24);
  sub_255850((__int64 *)v2, *(_QWORD *)(v2 + 32));
  v7 = sub_2413C0(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL), *v4, v5, v6);
  *((_DWORD *)v7 + 2) = 72;
  v7[3] = (__int64)v4;
  return 1;
}
