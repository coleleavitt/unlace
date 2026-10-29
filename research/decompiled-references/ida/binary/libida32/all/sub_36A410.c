__int64 __fastcall sub_36A410(__int64 a1, __int64 a2)
{
  const char *v2; // rdx

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 80) )
    v2 = *(const char **)(a1 + 72);
  *(_DWORD *)(a2 + 8) = (unsigned __int8)set_forced_operand(*(unsigned int *)(a1 + 8), *(unsigned int *)(a1 + 40), v2);
  return 0;
}

