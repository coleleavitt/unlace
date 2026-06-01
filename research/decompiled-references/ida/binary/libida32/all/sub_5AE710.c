__int64 __fastcall sub_5AE710(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int *v3; // rax

  v3 = sub_4EE820(a1 + 1624, a3);
  if ( v3 && (*((char *)v3 + 9) >= 0 || (v3 = sub_4EE820(a1 + 1624, v3[4])) != nullptr) )
    return get_ea_name(a2, *v3, 0, 0);
  else
    return -1;
}

