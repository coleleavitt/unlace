__int64 __fastcall sub_13C4290(__int64 a1, char *a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  _QWORD *v5; // rax
  _QWORD *v6; // [rsp+10h] [rbp-38h] BYREF
  __int64 v7; // [rsp+18h] [rbp-30h] BYREF
  _QWORD *v8; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+28h] [rbp-20h]

  sub_FD9440((__int64)&v8, a1, a2, a3, 1);
  if ( (v9 & 1) != 0 )
  {
    v5 = v8;
    v8 = nullptr;
    v6 = v5;
    sub_A05760(&v7, &v6);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
    v3 = 0;
  }
  else
  {
    v3 = (__int64)v8;
  }
  sub_A04D70((__int64 *)&v8);
  return v3;
}
