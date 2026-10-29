__int64 (__fastcall **__fastcall sub_4A55C0(_QWORD *a1, double a2))()
{
  int v2; // r13d
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 (__fastcall **result)(); // rax
  unsigned int v7; // edx
  unsigned int v8; // r15d
  __int64 v9; // rax
  unsigned int v10; // ecx
  _QWORD *v11; // [rsp+0h] [rbp-A8h]
  unsigned int v12; // [rsp+8h] [rbp-A0h]
  unsigned int v13; // [rsp+14h] [rbp-94h]
  __int64 v14; // [rsp+18h] [rbp-90h]
  _QWORD v15[4]; // [rsp+20h] [rbp-88h] BYREF
  void *v16; // [rsp+40h] [rbp-68h]
  void *ptr; // [rsp+58h] [rbp-50h]

  v2 = 0;
  v3 = a1[1];
  sub_F8BB20(v15, v3, *a1);
LABEL_3:
  while ( (unsigned __int8)sub_F8BB00(v15) )
  {
    v3 = sub_F8BBA0(v15);
    v4 = v3;
    if ( (unsigned __int8)sub_45AE60(*a1, v3) )
    {
      v7 = *(_DWORD *)(v3 + 24);
      ++v2;
      if ( v7 )
      {
        v8 = 0;
        v14 = *a1;
        v11 = a1 + 3;
        while ( 1 )
        {
          v13 = v7;
          v12 = v7 - 1;
          v9 = sub_15D1F10(*(_QWORD *)(v4 + 8LL * (v7 - 1) + 32));
          v10 = v12;
          if ( *(_QWORD *)(v14 + 848) == v9 )
            v10 = v13;
          if ( v8 >= v10 )
            break;
          v3 = *(_QWORD *)(v4 + 8LL * v8 + 32);
          if ( !(unsigned __int8)sub_15D37A0(v11, v3) && (unsigned __int8)sub_15D37A0(a1 + 10, v3) )
          {
            v3 = v4;
            sub_15D37A0(v11, v4);
            goto LABEL_3;
          }
          v7 = *(_DWORD *)(v4 + 24);
          if ( !v7 )
            goto LABEL_3;
          ++v8;
          v14 = *a1;
        }
      }
    }
  }
  if ( (unsigned int)sub_180B130(v15) )
  {
    if ( (unsigned __int8)sub_186A530(a2) )
    {
      sub_186A4C0(a2);
      sub_180B150(v15, v3);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v5 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v5, "\n");
    }
    else
    {
      sub_180B150(v15, v3);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  result = &off_1C62200;
  v15[1] = &off_1C62200;
  if ( ptr )
    result = (__int64 (__fastcall **)())sub_186B220(ptr);
  if ( v16 )
    result = (__int64 (__fastcall **)())sub_186B220(v16);
  if ( v15[0] )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v15[0] - 8LL));
  return result;
}

