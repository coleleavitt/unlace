void __fastcall sub_9F4590(__int64 a1, unsigned int *a2, __int64 a3, double a4)
{
  unsigned int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // ebp
  void *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 v13; // rbp
  _QWORD v14[2]; // [rsp+0h] [rbp-F8h] BYREF
  _QWORD v15[2]; // [rsp+10h] [rbp-E8h] BYREF
  char v16[16]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v17[16]; // [rsp+30h] [rbp-C8h] BYREF
  char v18[32]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v19[16]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v20[136]; // [rsp+70h] [rbp-88h] BYREF

  v6 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *a2), *(unsigned int *)(a1 + 8));
  v7 = a1 + 472;
  v8 = v6;
  v14[0] = 0;
  v14[1] = 0;
  v15[0] = 1;
  v15[1] = 0;
  if ( (unsigned __int8)sub_1666AE0(v7, a3, v14, v19) )
  {
    if ( v8 != -1 && ((*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4LL * v8 + 3) >> 4) & 3) != 1 )
    {
      sub_894960((__int64)v16, (__int64)v14);
      sub_9D4F70((__int64)v19, (__int64)v16);
      sub_9F40B0((_QWORD *)a1, v8, (__int64)v19);
      sub_2A6060((__int64)v19);
      sub_25A130(v18);
      sub_25A130(v16);
      sub_25A130((char *)v14);
      return;
    }
  }
  else if ( (unsigned int)sub_180B130(v7) > 4 )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v10 = sub_180B150(v7, a3);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v16, a2, *(_QWORD *)(a1 + 24), 0, 0, 0);
      v11 = sub_160E8B0(v10, v16);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v19, a3, *(_QWORD *)(a1 + 24), 0, 0, 0);
      sub_160E8B0(v11, v19);
      std::operator<<<std::char_traits<char>>();
      sub_18572D0(v20);
      sub_18572D0(v17);
      sub_186A500(v17, "\n");
    }
    else
    {
      v12 = sub_180B150(v7, a3);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v16, a2, *(_QWORD *)(a1 + 24), 0, 0, 0);
      v13 = sub_160E8B0(v12, v16);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v19, a3, *(_QWORD *)(a1 + 24), 0, 0, 0);
      sub_160E8B0(v13, v19);
      std::operator<<<std::char_traits<char>>();
      sub_18572D0(v20);
      sub_18572D0(v17);
    }
  }
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v14);
  sub_182CBA0(v9, v15);
}

