__int64 __fastcall get_idp_name(char *s, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 v4; // rax
  char *v5; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1672) + 1528LL) + 40LL);
  if ( !v2 )
    return 0;
  v3 = a2;
  v4 = qbasename(v2);
  qstrncpy(s, v4, v3);
  v5 = strrchr(s, 46);
  if ( v5 )
    *v5 = 0;
  return qstrlwr(s);
}
