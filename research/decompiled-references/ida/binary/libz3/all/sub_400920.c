_QWORD *__fastcall sub_400920(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  void (__fastcall ***v7)(_QWORD); // rbp
  _BYTE v9[24]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v10; // [rsp+18h] [rbp-50h] BYREF
  void *v11; // [rsp+28h] [rbp-40h]
  void *v12; // [rsp+40h] [rbp-28h]

  if ( *(_DWORD *)(a2 + 360) == 1 )
  {
    sub_451B40(v9);
    sub_453280(a1, v9, *(_QWORD *)(a2 + 304));
    v7 = (void (__fastcall ***)(_QWORD))v12;
    if ( v12 )
    {
      if ( (*((_DWORD *)v12 + 12))-- == 1 )
      {
        (**v7)(v7);
        sub_186B220(v7);
      }
    }
    if ( v11 )
      sub_186B220(v11);
    sub_2334C0(&v10);
    return a1;
  }
  else
  {
    sub_180B130(a1);
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v6 = sub_180B150(a1, a2);
      std::operator<<<std::char_traits<char>>();
      sub_186A500(v6, "Sat answer unavailable when result is false\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::operator<<<std::char_traits<char>>();
    }
    v4 = *(_QWORD *)(a2 + 152);
    *a1 = 0;
    a1[1] = v4;
    return a1;
  }
}

