unsigned __int64 *__fastcall sub_505EB0(__int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // esi
  unsigned __int64 *v4; // rbp

  if ( !*(_QWORD *)(a1 + 32) )
    return nullptr;
  v3 = sub_503F40(a1, a2);
  if ( v3 == -1 )
    return nullptr;
  v4 = sub_505DE0(a1, v3);
  if ( a2 >= *v4 )
  {
    if ( !under_debugger )
      interr(1103);
    BUG();
  }
  sub_505BD0(*(_QWORD *)(a1 + 32) + 64LL, a1, v4);
  return v4;
}
