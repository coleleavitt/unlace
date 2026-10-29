__int64 __fastcall sub_421B40(__int64 a1)
{
  if ( !*(_QWORD *)(a1 + 24) )
    return 0;
  if ( !strcmp(*(const char **)(a1 + 16), "Sites") && (unsigned __int8)sub_435890(a1) && *(_QWORD *)(a1 + 56) <= 1u )
    return (unsigned __int8)sub_421A90(*(_QWORD *)(a1 + 40), **(_QWORD **)(a1 + 48));
  return 0;
}
