bool __fastcall sub_15900(_QWORD *a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  __int64 v6; // rdx
  int _32bit; // eax
  _QWORD v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  v11[0] = 0;
  if ( (a4 & 0x20) != 0 )
  {
    _32bit = get_32bit();
    if ( _32bit == -1 )
      return 0;
    if ( (a4 & 0x40) != 0 )
    {
      if ( a5 == -1 )
        a5 = v11[0];
      v11[0] = a5 + _32bit;
      return get_strlit_contents() > 0;
    }
    v6 = a3 + _32bit;
  }
  else
  {
    v6 = a1[58] + a3;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD *, __int64))(*a1 + 136LL))(a1, v11, v6) )
    return get_strlit_contents() > 0;
  return 0;
}
