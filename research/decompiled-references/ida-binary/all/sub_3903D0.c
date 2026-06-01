__int64 __fastcall struc_stroff_data_t__::vfunc_6(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, void **, __int64 *, double),
        double a3)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char *that; // rbx
  unsigned int i; // ebp
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v15[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1F09E0(0, (__int64 *)&v14, v15) )
  {
    that = v14;
    for ( i = 0; (unsigned __int64)that < v15[0]; that = (char *)next_that(that, v15[0], sub_20A790, 0) )
    {
      if ( (unsigned __int8)sub_38FA80(a1, a2, that, v3, v4, v5) )
        i = 2;
    }
  }
  else
  {
    v9 = sub_331180(0, 0, 0);
    if ( (unsigned __int8)sub_32D290(qword_8CD7E8, 0, nullptr, v10, a3)
      || v9 > 7
      || !(unsigned __int8)is_stroff(*((_QWORD *)&xmmword_8CC820 + 1), v9) )
    {
      return 2 * (unsigned int)(unsigned __int8)sub_38FA80(a1, a2, (char *)xmmword_8CC810, v11, v12, v13);
    }
    else
    {
      return (unsigned __int8)clr_op_type(xmmword_8CC810, v9);
    }
  }
  return i;
}
