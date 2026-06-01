__int64 __fastcall sub_2259E20(_QWORD *a1, const char **a2, std::_V2 *a3)
{
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  char v8; // bl
  unsigned int v9; // r13d
  void *v11[2]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v12[16]; // [rsp+10h] [rbp-48h] BYREF
  char v13; // [rsp+20h] [rbp-38h]

  v5 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 80LL);
  if ( v5 == sub_2259DF0 )
  {
    v6 = (_BYTE *)a1[3];
    v7 = a1[4];
    v13 &= ~1u;
    v11[0] = v12;
    sub_2259C30(v11, v6, (__int64)&v6[v7]);
  }
  else
  {
    v5((__int64)v11, (__int64)a1);
  }
  v8 = v13 & 1;
  if ( (v13 & 1) != 0 || !v11[1] )
  {
    v9 = 1;
    std::_V2::generic_category((std::_V2 *)v11);
  }
  else
  {
    sub_22538C0(a2, (__int64)a3);
    v9 = (*(__int64 (__fastcall **)(_QWORD *, std::_V2 *))(*a1 + 112LL))(a1, a3);
    if ( !v9 )
    {
      v9 = 0;
      sub_228F0B0(a3, 1, 0);
      std::_V2::system_category(a3);
    }
    v8 = v13 & 1;
  }
  if ( !v8 && v11[0] != v12 )
    operator delete(v11[0]);
  return v9;
}
