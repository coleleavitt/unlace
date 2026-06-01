__int64 __fastcall sub_592F1C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+10h] [rbp-40h] BYREF
  __int64 v8; // [rsp+18h] [rbp-38h]
  _QWORD v9[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11[3]; // [rsp+38h] [rbp-18h] BYREF

  v8 = a1;
  v7 = a2;
  v3 = sub_593C3E(a1 + 152);
  v4 = sub_593C16(a1 + 152);
  v10 = sub_593C63(v4, v3, &v7);
  v11[0] = sub_593C3E(v8 + 152);
  result = sub_593C9C(&v10, v11);
  if ( !(_BYTE)result )
  {
    v9[0] = v7;
    v9[1] = a3;
    return sub_593CBE(v8 + 152, v9);
  }
  return result;
}
