__int64 __fastcall get_func_name(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 *v3; // rax

  v2 = *(_QWORD *)(qword_2CCB598 + 1672) + 1704LL;
  v3 = sub_505D70(v2, a2);
  if ( v3 && (*((char *)v3 + 17) >= 0 || (v3 = sub_505D70(v2, v3[3])) != nullptr) )
    return get_ea_name(a1, *v3, 0, 0);
  else
    return -1;
}
