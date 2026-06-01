void __fastcall sub_9D8300(__int64 a1, unsigned int *a2, __int64 a3, double a4)
{
  unsigned int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // ebp
  void *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 v13; // rbp
  _QWORD v14[2]; // [rsp+10h] [rbp-C8h] BYREF
  _QWORD v15[2]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v16[16]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v17[32]; // [rsp+40h] [rbp-98h] BYREF
  char v18[16]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v19[16]; // [rsp+70h] [rbp-68h] BYREF
  char v20[88]; // [rsp+80h] [rbp-58h] BYREF

  v6 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *a2), *(unsigned int *)(a1 + 8));
  v7 = a1 + 408;
  v8 = v6;
  v14[0] = 0;
  v14[1] = 0;
  v15[0] = 1;
  v15[1] = 0;
  if ( (unsigned __int8)sub_1666AE0(v7, a3, v14, v18) )
  {
    if ( v8 != -1 && ((*(_BYTE *)(*(_QWORD *)(a1 + 656) + 4LL * v8 + 3) >> 4) & 3) != 1 )
    {
      sub_894960((__int64)v18, (__int64)v14);
      sub_9D7F30((_QWORD *)a1, v8, (__int64)v18);
      sub_25A130(v20);
      sub_25A130(v18);
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
      sub_1606360(v18, a3, *(_QWORD *)(a1 + 24), 0, 0, 0);
      sub_160E8B0(v11, v18);
      std::operator<<<std::char_traits<char>>();
      sub_18572D0(v19);
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
      sub_1606360(v18, a3, *(_QWORD *)(a1 + 24), 0, 0, 0);
      sub_160E8B0(v13, v18);
      std::operator<<<std::char_traits<char>>();
      sub_18572D0(v19);
      sub_18572D0(v17);
    }
  }
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v14);
  sub_182CBA0(v9, v15);
}

