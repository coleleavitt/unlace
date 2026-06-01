bool __fastcall tchooser_persistence_helper_t__::vfunc_4(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  bool result; // al

  v2 = sub_3A2B10(a1, 0);
  result = 0;
  if ( v2 != -1 )
    return netnode_qgetblob(v2, a2, 1, 0, 75) > 0;
  return result;
}
