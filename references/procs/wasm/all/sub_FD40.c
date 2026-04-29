__int64 __fastcall sub_FD40(int a1, void (__fastcall ***a2)(_QWORD, __int64, __int16 *))
{
  __int16 v3; // ax
  __int16 v4; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  if ( a1 == 1 )
  {
    (**a2)(a2, 1, &v4);
    v3 = v4;
    if ( !v4 )
    {
      if ( (unsigned __int8)getinf_flag(11, 4) )
      {
        setinf_flag(11, 4, 0);
        return 1;
      }
      v3 = v4;
    }
    if ( v3 == 1 && !(unsigned __int8)getinf_flag(11, 4) )
      setinf_flag(11, 4, 1);
  }
  return 1;
}
