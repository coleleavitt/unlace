__int64 __fastcall sub_201FAD0(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r12d
  _QWORD *v4; // r13
  std::_V2 *v5; // rdi
  _QWORD *v6; // [rsp+0h] [rbp-48h] BYREF
  char v7; // [rsp+10h] [rbp-38h]

  sub_2230FD0(&v6, a1, 0, 0, 0, 0);
  if ( (v7 & 1) != 0 )
  {
    v2 = (unsigned int)v6;
  }
  else
  {
    v4 = v6;
    v6 = nullptr;
    v2 = 0;
    v5 = (std::_V2 *)v4[1];
    *a2 = sub_201F550((__int64)v5, v4[2] - (_QWORD)v5);
    std::_V2::system_category(v5);
    (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
  }
  sub_FC2AF0((__int64 *)&v6);
  return v2;
}
