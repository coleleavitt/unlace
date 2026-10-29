__int64 __fastcall sub_3B7A70(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // edx
  unsigned int v7; // edx

  v3 = *a2;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = sub_3856D0(v4, *a2);
  if ( !v5 )
    return 6;
  v6 = *(_DWORD *)(a1 + 24);
  if ( !v6 )
    goto LABEL_5;
  if ( v6 != 1 )
    sub_3B5950(v4);
  v7 = 6;
  if ( v3 == *(_QWORD *)(v5 + 8) )
  {
LABEL_5:
    v7 = 7;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 872LL) + 24LL) )
      return 3;
  }
  return v7;
}
