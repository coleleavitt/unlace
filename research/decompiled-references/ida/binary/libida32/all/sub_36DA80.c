__int64 __fastcall sub_36DA80(__int64 a1, __int64 a2)
{
  _QWORD vars0[5]; // [rsp+0h] [rbp+0h] BYREF

  vars0[1] = __readfsqword(0x28u);
  vars0[0] = 0;
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 16) = 0;
  if ( (unsigned __int8)get_type_by_tid(vars0, *(unsigned int *)(a1 + 8)) && (vars0[0] & 0x100) != 0 )
    get_tinfo_pdata(a2 + 8, vars0[0], 0);
  clear_tinfo_t(vars0);
  return 0;
}

