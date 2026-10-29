__int64 __fastcall sub_22588A0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int v4; // ebp
  void *v5; // [rsp+0h] [rbp-88h] BYREF
  __int64 v6; // [rsp+10h] [rbp-78h] BYREF
  char v7; // [rsp+20h] [rbp-68h]
  _QWORD v8[4]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v9; // [rsp+50h] [rbp-38h]

  v2 = *a2;
  v9 = 261;
  v8[0] = v2;
  v8[1] = a2[1];
  if ( (unsigned __int8)sub_228B020(v8, 0) )
  {
    std::_V2::system_category((std::_V2 *)v8);
    return 0;
  }
  else
  {
    (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)a1 + 80LL))(&v5, a1);
    if ( (v7 & 1) != 0 )
    {
      return (unsigned int)v5;
    }
    else
    {
      v8[0] = &v5;
      v9 = 260;
      sub_228E8C0(v8, a2);
      std::_V2::system_category((std::_V2 *)v8);
      if ( (v7 & 1) != 0 )
      {
        return 0;
      }
      else
      {
        v4 = 0;
        if ( v5 != &v6 )
          operator delete(v5);
      }
    }
    return v4;
  }
}
