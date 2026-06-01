__int64 __fastcall sub_8EBF30(__int64 a1, int a2, _QWORD *a3)
{
  int v3; // eax
  __int64 v5; // r12
  __int64 v6; // rax
  int v7; // edx
  unsigned int v8; // eax
  __int64 v9; // rax
  int v10; // edx

  v3 = *(_DWORD *)(a1 + 816);
  if ( a2 == 14 )
  {
    if ( *(_DWORD *)(a1 + 812) != v3 )
      return 1;
    v5 = *(_QWORD *)(a1 + 792);
    *(_QWORD *)(a1 + 800) = *a3;
    v6 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 24);
    goto LABEL_13;
  }
  if ( a2 != 15 )
  {
    if ( *(_DWORD *)(a1 + 812) != v3 )
      return 1;
    v5 = *(_QWORD *)(a1 + 792);
    *(_QWORD *)(a1 + 800) = *a3;
    v6 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
    v7 = *(_DWORD *)(v6 + 48);
    if ( !v7 || v7 == 2 )
    {
      if ( !*(_QWORD *)(v6 + 24) )
        goto LABEL_14;
      return 1;
    }
    if ( v7 == 3 || *(_QWORD *)(v6 + 32) )
      return 1;
LABEL_13:
    if ( !*(_QWORD *)v6 )
      goto LABEL_14;
    return 1;
  }
  if ( *(_DWORD *)(a1 + 812) != v3 )
    return 1;
  v5 = *(_QWORD *)(a1 + 792);
  *(_QWORD *)(a1 + 800) = *a3;
  v9 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 72);
  v10 = *(_DWORD *)(v9 + 48);
  if ( !v10 || v10 == 2 )
  {
    if ( *(_QWORD *)(v9 + 24) )
      return 1;
  }
  else if ( v10 == 3 || *(_QWORD *)(v9 + 32) || *(_QWORD *)v9 )
  {
    return 1;
  }
  if ( *(_QWORD *)(v9 + 56) )
    return 1;
LABEL_14:
  v8 = sub_A1A260(*(_QWORD *)(a1 + 584), v5);
  sub_A2E050(a1 + 384, v8, 2324, 0);
  return 0;
}

