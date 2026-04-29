char __fastcall sub_32ACA0(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r12

  if ( *(_DWORD *)(a1 + 20) != *(_DWORD *)(a2 + 20) )
    return 0;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 != *(_QWORD *)(a2 + 56) )
    return 0;
  if ( v3 )
  {
    v4 = 0;
    while ( sub_122120((unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 16 * v4), 16 * v4 + *(_QWORD *)(a2 + 48), 0) )
    {
      if ( (unsigned __int64)++v4 >= *(_QWORD *)(a1 + 56) )
        goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  if ( (unsigned int)lexcompare_tinfo(*(_QWORD *)(a1 + 72), *(_QWORD *)(a2 + 72), 0) )
    return 0;
  if ( sub_11F1F0(a1 + 96, a2 + 96) )
    return 0;
  if ( sub_11F1F0(a1 + 136, a2 + 136) )
    return 0;
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 != *(_QWORD *)(a2 + 32) )
    return 0;
  if ( !v5 )
    return 1;
  v6 = 0;
  while ( 1 )
  {
    result = sub_122120((unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 80 * v6), 80 * v6 + *(_QWORD *)(a2 + 24), 0);
    if ( !result )
      break;
    if ( (unsigned __int64)++v6 >= *(_QWORD *)(a1 + 32) )
      return 1;
  }
  return result;
}
