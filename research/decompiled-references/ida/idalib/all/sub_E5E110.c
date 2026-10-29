__int64 __fastcall sub_E5E110(__int64 a1, __int64 a2)
{
  char *v3; // rdi
  __int64 result; // rax

  v3 = *(char **)(a1 + 8);
  if ( v3 == *(char **)(a1 + 16) )
  {
    sub_E5DF50(a1, v3, a2);
    return *(_QWORD *)(a1 + 8) - 40LL;
  }
  else
  {
    sub_2229580(v3, a2);
    result = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = result + 40;
  }
  return result;
}
