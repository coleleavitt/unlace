__int64 __fastcall sub_5C9340(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v3; // rax

  v3 = sub_505D70(a1 + 1704, a3);
  if ( v3 && (*((char *)v3 + 17) >= 0 || (v3 = sub_505D70(a1 + 1704, v3[3])) != nullptr) )
    return get_ea_name(a2, *v3, 0, 0);
  else
    return -1;
}
