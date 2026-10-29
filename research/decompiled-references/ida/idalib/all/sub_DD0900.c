__int64 __fastcall sub_DD0900(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ecx
  _QWORD *v3; // rdx
  __int64 result; // rax
  unsigned int v5; // eax

  v1 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v2 = *(_DWORD *)(v1 + 24);
  v3 = (_QWORD *)v1;
  if ( !v2 || v2 == 2 )
  {
    result = 1;
    if ( v3[4] )
      return result;
    goto LABEL_6;
  }
  result = 1;
  if ( v2 != 3 && !v3[5] && !*v3 )
  {
LABEL_6:
    v5 = sub_E206C0(*(_QWORD *)(a1 + 400));
    sub_E33B30(a1, v5, 2526, 0);
    return 0;
  }
  return result;
}
