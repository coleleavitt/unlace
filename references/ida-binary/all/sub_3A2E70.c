__int64 __fastcall tchooser_persistence_helper_t__::vfunc_7(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax

  v2 = a2[1];
  v3 = sub_3A2B10(a1, 1u);
  if ( v3 == -1 )
    return 0;
  else
    return netnode_setblob(v3, *a2, v2, 0, 75);
}
