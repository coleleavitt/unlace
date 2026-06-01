__int64 __fastcall sub_BAFF30(__int64 a1, _QWORD *a2, __int64 a3)
{
  _DWORD *v3; // rax
  __int64 v5; // rcx

  if ( *(_WORD *)(*a2 + 4LL) )
    return 0;
  v3 = *(_DWORD **)(*(_QWORD *)(*a2 + 16LL) + 24LL);
  if ( !v3 || *v3 != *(_DWORD *)(a1 + 1744) || v3[1] != 20 && v3[1] != 21 && v3[1] != 22 && v3[1] != 23 )
    return 0;
  v5 = *(_QWORD *)(a3 + 8);
  LOBYTE(v5) = *(_QWORD *)(a2[14] + 8LL) == v5;
  return (unsigned int)v5;
}

