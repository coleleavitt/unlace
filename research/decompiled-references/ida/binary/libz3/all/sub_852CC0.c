__int64 __fastcall sub_852CC0(__int64 a1, unsigned int *a2, __int64 a3, double a4)
{
  __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // r12
  void *v11; // rbx
  __int64 v13; // rbp
  unsigned int v14; // eax
  int v15; // eax
  void *v16; // rbx
  __int64 v17; // r15
  __int64 v18; // r12
  int v19; // [rsp+0h] [rbp-C8h]
  int v20; // [rsp+8h] [rbp-C0h]
  int v21[2]; // [rsp+10h] [rbp-B8h] BYREF
  char v22[8]; // [rsp+18h] [rbp-B0h]
  _QWORD v23[2]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v24[16]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v25[32]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v26[16]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v27[88]; // [rsp+70h] [rbp-58h] BYREF

  v8 = a1 + 832;
  *(_QWORD *)v21 = 0;
  *(_QWORD *)v22 = 0;
  v23[0] = 1;
  v23[1] = 0;
  if ( (unsigned __int8)sub_1666AE0(v8, a3, v21, v26) )
  {
    v13 = *(_QWORD *)(a1 + 496);
    v14 = sub_852C00(a1, a2);
    v15 = sub_FF9FB0(*(_QWORD *)(a1 + 496), v14);
    sub_100D420(v13, v15, v19, v20, v21[0], v22[0]);
    v16 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v21);
    return sub_182CBA0(v16, v23);
  }
  else
  {
    if ( (unsigned int)sub_180B130(v8) > 4 )
    {
      if ( (unsigned __int8)sub_186A530(a4) )
      {
        sub_186A4C0(a4);
        v9 = sub_180B150(v8, a3);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v24, a2, *(_QWORD *)(a1 + 72), 0, 0, 0);
        v10 = sub_160E8B0(v9, v24);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v26, a3, *(_QWORD *)(a1 + 72), 0, 0, 0);
        sub_160E8B0(v10, v26);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v27);
        sub_18572D0(v25);
        sub_186A500(v25, "\n");
      }
      else
      {
        v17 = sub_180B150(v8, a3);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v24, a2, *(_QWORD *)(a1 + 72), 0, 0, 0);
        v18 = sub_160E8B0(v17, v24);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v26, a3, *(_QWORD *)(a1 + 72), 0, 0, 0);
        sub_160E8B0(v18, v26);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v27);
        sub_18572D0(v25);
      }
    }
    v11 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v21);
    return sub_182CBA0(v11, v23);
  }
}

