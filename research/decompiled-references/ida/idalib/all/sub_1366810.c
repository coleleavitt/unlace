__int64 __fastcall sub_1366810(__int64 a1, char *a2, unsigned __int64 a3, char a4)
{
  __int64 v4; // rbp
  _QWORD *v6; // rax
  _QWORD *v7; // [rsp+10h] [rbp-38h] BYREF
  __int64 v8; // [rsp+18h] [rbp-30h] BYREF
  _QWORD *v9; // [rsp+20h] [rbp-28h] BYREF
  char v10; // [rsp+28h] [rbp-20h]

  sub_FD9440((__int64)&v9, a1, a2, a3, a4);
  if ( (v10 & 1) != 0 )
  {
    v6 = v9;
    v9 = nullptr;
    v7 = v6;
    sub_A05760(&v8, &v7);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
    v4 = 0;
  }
  else
  {
    v4 = (__int64)v9;
  }
  sub_A04D70((__int64 *)&v9);
  return v4;
}
