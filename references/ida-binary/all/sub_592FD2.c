__int64 __fastcall sub_592FD2(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // [rsp+0h] [rbp-40h] BYREF
  __int64 v7; // [rsp+8h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-28h] BYREF
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v10[3]; // [rsp+28h] [rbp-18h] BYREF

  v7 = a1;
  v6 = a2;
  v2 = sub_593C3E(a1 + 152);
  v3 = sub_593C16(a1 + 152);
  v8 = sub_593C63(v3, v2, &v6);
  v9 = sub_593C3E(v7 + 152);
  result = sub_593C9C(&v8, &v9);
  if ( (_BYTE)result )
  {
    v5 = v7 + 152;
    sub_593CF4(v10, &v8);
    return sub_593D12(v5, v10[0]);
  }
  return result;
}
