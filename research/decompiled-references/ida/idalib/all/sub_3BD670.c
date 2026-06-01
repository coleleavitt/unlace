unsigned __int64 __fastcall sub_3BD670(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rdx
  bool v5; // zf

  if ( (unsigned __int8)sub_3FC580(a1) )
    return sub_3FCFA0(a1, a2);
  v3 = sub_8B90F0(*(_QWORD *)(a1 + 1016), a2);
  result = rangeset_t_prev_range(a1 + 1120, a2);
  if ( v3 != -1 )
  {
    v4 = v3;
    if ( result >= v3 )
      v4 = result;
    v5 = result == -1;
    result = v3;
    if ( !v5 )
      return v4;
  }
  return result;
}
