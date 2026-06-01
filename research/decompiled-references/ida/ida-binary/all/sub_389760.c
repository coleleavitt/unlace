__int64 __fastcall struc_stroff_data_t__::vfunc_2(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  v6[1] = __readfsqword(0x28u);
  v6[0] = 0;
  get_type_by_tid(v6, v3);
  if ( (*(_QWORD *)(get_ash() + 320) || (unsigned __int8)getinf_flag(2, 2)) && a3 && !get_tinfo_property(v6[0], 286) )
    LOBYTE(a3) = a3 == get_tinfo_size(0, v6[0], 0);
  else
    LODWORD(a3) = 0;
  clear_tinfo_t(v6);
  return (unsigned int)a3;
}
