__int64 __fastcall sub_3DB390(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v4)(__int64); // rax
  unsigned __int64 *v5; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = *(__int64 (__fastcall **)(__int64))(*a2 + 32);
  if ( v4 == sub_3D58E0 )
    v5 = a2 + 2;
  else
    v5 = (unsigned __int64 *)v4((__int64)a2);
  if ( a3 < *v5
    || a3 >= v5[1]
    || a3 != (*(__int64 (__fastcall **)(unsigned __int64 *, unsigned __int64, _QWORD))(*a2 + 40))(a2, a3, 0) )
  {
    return a1;
  }
  get_ea_diffpos_name(a1, (unsigned int)a3);
  return a1;
}

