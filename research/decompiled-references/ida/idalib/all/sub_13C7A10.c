__int64 __fastcall sub_13C7A10(__int64 a1, char *a2, unsigned __int64 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  _QWORD *v7; // r14
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v11; // rax
  _QWORD *v12; // [rsp+10h] [rbp-48h] BYREF
  __int64 v13; // [rsp+18h] [rbp-40h] BYREF
  _QWORD *v14; // [rsp+20h] [rbp-38h] BYREF
  char v15; // [rsp+28h] [rbp-30h]

  sub_FD9440((__int64)&v14, *(_QWORD *)(a1 + 40), a2, a3, 1);
  if ( (v15 & 1) != 0 )
  {
    v11 = v14;
    v14 = nullptr;
    v12 = v11;
    sub_A05760(&v13, &v12);
    if ( v12 )
      (*(void (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
    sub_A04D70((__int64 *)&v14);
  }
  else
  {
    v7 = v14;
    sub_A04D70((__int64 *)&v14);
    if ( v7 )
      return sub_13C7770(a1, v7, a4, a5, v8, v9);
  }
  return 2;
}
