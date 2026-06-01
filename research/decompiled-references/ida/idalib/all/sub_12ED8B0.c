__int64 __fastcall sub_12ED8B0(__int64 a1, const void *a2, size_t a3, unsigned __int8 a4, unsigned __int8 a5)
{
  __int64 v5; // rbp
  _QWORD *v7; // rax
  _QWORD *v8; // [rsp+10h] [rbp-38h] BYREF
  __int64 v9; // [rsp+18h] [rbp-30h] BYREF
  _QWORD *v10; // [rsp+20h] [rbp-28h] BYREF
  char v11; // [rsp+28h] [rbp-20h]

  sub_FD9C70((__int64)&v10, a1, a2, a3, a4, a5, 1);
  if ( (v11 & 1) != 0 )
  {
    v7 = v10;
    v10 = nullptr;
    v8 = v7;
    sub_A05760(&v9, &v8);
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
    v5 = 0;
  }
  else
  {
    v5 = (__int64)v10;
  }
  sub_A04D90((__int64 *)&v10);
  return v5;
}
