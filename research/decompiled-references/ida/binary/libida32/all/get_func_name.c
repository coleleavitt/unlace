__int64 __fastcall get_func_name(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int *v3; // rax

  v2 = *(_QWORD *)(qword_2CA1698 + 1480) + 1624LL;
  v3 = sub_4EE820(v2, a2);
  if ( v3 && (*((char *)v3 + 9) >= 0 || (v3 = sub_4EE820(v2, v3[4])) != nullptr) )
    return get_ea_name(a1, *v3, 0, 0);
  else
    return -1;
}

