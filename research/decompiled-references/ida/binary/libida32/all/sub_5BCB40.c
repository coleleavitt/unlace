__int64 __fastcall sub_5BCB40(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( get_ea_name(a1, a2, 0, 0) <= 0 )
    sub_5BCA70((__int64 *)a1, a2);
  return a1;
}

