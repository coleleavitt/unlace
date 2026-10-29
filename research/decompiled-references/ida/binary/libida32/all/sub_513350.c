bool __fastcall sub_513350(__int64 a1, __int64 a2, unsigned int a3)
{
  bool result; // al
  unsigned int v5; // eax

  result = sub_4CA060(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 1480LL), a3);
  if ( result )
  {
    v5 = ea2node(a3);
    return netnode_get_name(v5, a2) > 0;
  }
  return result;
}

