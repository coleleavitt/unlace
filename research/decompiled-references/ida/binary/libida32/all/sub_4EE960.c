unsigned int *__fastcall sub_4EE960(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  unsigned int *v4; // rbp

  if ( !*(_QWORD *)(a1 + 24) )
    return nullptr;
  v3 = sub_4ECA50(a1, a2);
  if ( v3 == -1 )
    return nullptr;
  v4 = sub_4EE890(a1, v3);
  if ( a2 >= *v4 )
  {
    if ( !under_debugger )
      interr(1103);
    BUG();
  }
  sub_4EE680(*(_QWORD *)(a1 + 24) + 64LL, a1, v4);
  return v4;
}

