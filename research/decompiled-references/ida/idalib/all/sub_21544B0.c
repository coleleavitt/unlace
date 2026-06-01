__int64 __fastcall sub_21544B0(_QWORD *a1)
{
  _DWORD *v2; // rdi
  __int64 v4; // rax
  const char *v5; // [rsp+0h] [rbp-38h] BYREF
  __int16 v6; // [rsp+20h] [rbp-18h]

  v2 = (_DWORD *)a1[6];
  if ( *v2 == 9 )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 152LL))(a1);
    return 0;
  }
  else
  {
    v5 = "expected newline";
    v6 = 259;
    v4 = sub_2124B50((__int64)v2);
    return sub_2153E90((__int64)a1, v4, (__int64)&v5, 0, 0);
  }
}
