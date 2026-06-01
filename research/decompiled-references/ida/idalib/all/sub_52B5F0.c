bool __fastcall sub_52B5F0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  bool result; // al
  __int64 v5; // rax

  result = sub_4E15C0(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 1672LL), a3);
  if ( result )
  {
    v5 = ea2node(a3);
    return netnode_get_name(v5, a2) > 0;
  }
  return result;
}
