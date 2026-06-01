__int64 __fastcall sub_415DF0(__int64 a1, int a2, __int64 a3, __int64 a4, char a5, double a6)
{
  __int64 v9; // r12
  unsigned int v10; // esi
  int v11; // r15d
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // r14
  __int64 result; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v20; // [rsp+18h] [rbp-50h]
  __int64 v21; // [rsp+18h] [rbp-50h]
  _QWORD v22[9]; // [rsp+20h] [rbp-48h] BYREF

  v9 = *(_QWORD *)(a1 + 152);
  v10 = *(_DWORD *)(a1 + 272);
  v11 = *(_DWORD *)(v9 + 712);
  v12 = *(_QWORD **)(a1 + 264);
  *(_DWORD *)(v9 + 712) = 1;
  v13 = sub_3FCD00(v12, v10, a3);
  if ( v13 )
  {
    v14 = v13[1];
  }
  else
  {
    v14 = sub_186B270(0x1D8u);
    sub_4148F0(v14);
    v16 = a1 + 264;
    v22[0] = a3;
    v22[1] = v14;
    sub_41EB80(a1 + 264, v22);
    if ( (unsigned int)sub_180B130(a1 + 264) > 9 )
    {
      if ( (unsigned __int8)sub_186A530(a6) )
      {
        sub_186A4C0(a6);
        v20 = sub_180B150(v16, v22);
        std::__ostream_insert<char,std::char_traits<char>>();
        v17 = sub_39A600(v20, *(const char **)(a3 + 16));
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v17, "\n");
      }
      else
      {
        v21 = sub_180B150(v16, v22);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_39A600(v21, *(const char **)(a3 + 16));
        std::operator<<<std::char_traits<char>>();
      }
    }
  }
  result = sub_410160(v14, a2, a4, a5);
  *(_DWORD *)(v9 + 712) = v11;
  return result;
}

