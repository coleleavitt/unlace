__int64 __fastcall sub_A75150(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // r12
  void *v11; // rbx
  __int64 v13; // rbp
  unsigned int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  void *v19; // rbx
  __int64 v20; // r15
  __int64 v21; // r12
  int v22[2]; // [rsp+0h] [rbp-B8h] BYREF
  int v23[2]; // [rsp+8h] [rbp-B0h]
  int v24[2]; // [rsp+10h] [rbp-A8h] BYREF
  char v25[8]; // [rsp+18h] [rbp-A0h]
  _BYTE v26[16]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v27[32]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v28[16]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v29[88]; // [rsp+60h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)v22 = 0;
  *(_QWORD *)v23 = 0;
  v8 = v7 + 16;
  *(_QWORD *)v24 = 1;
  *(_QWORD *)v25 = 0;
  if ( (unsigned __int8)sub_1666AE0(v7 + 16, a3, v22, v28) )
  {
    v13 = *(_QWORD *)(v7 + 504);
    v14 = sub_A83040(v7, a2);
    sub_100A620(*(_QWORD *)(v7 + 504));
    v18 = sub_A7A1D0(v7, v14, v15, v16, v17);
    sub_100D420(v13, v18, v22[0], v23[0], v24[0], v25[0]);
    v19 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v22);
    return sub_182CBA0(v19, v24);
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
        sub_1606360(v28, a2, *(_QWORD *)(v7 + 8), 0, 0, 0);
        v10 = sub_160E8B0(v9, v28);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v26, a3, *(_QWORD *)(v7 + 8), 0, 0, 0);
        sub_160E8B0(v10, v26);
        std::operator<<<std::char_traits<char>>();
        sub_18572D0(v27);
        sub_18572D0(v29);
        sub_186A500(v29, "\n");
      }
      else
      {
        v20 = sub_180B150(v8, a3);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v28, a2, *(_QWORD *)(v7 + 8), 0, 0, 0);
        v21 = sub_160E8B0(v20, v28);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v26, a3, *(_QWORD *)(v7 + 8), 0, 0, 0);
        sub_160E8B0(v21, v26);
        std::operator<<<std::char_traits<char>>();
        sub_18572D0(v27);
        sub_18572D0(v29);
      }
    }
    v11 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v22);
    return sub_182CBA0(v11, v24);
  }
}

