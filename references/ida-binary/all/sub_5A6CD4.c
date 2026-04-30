__int64 __fastcall sub_5A6CD4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v8; // [rsp+10h] [rbp-30h] BYREF
  _QWORD v9[2]; // [rsp+18h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h]

  v9[0] = a1;
  v8 = a2;
  v10 = a3;
  while ( (unsigned __int8)sub_5A71F1(v9, &v8) )
  {
    v4 = sub_5A723A(v9);
    v5 = sub_5A645D(v10);
    sub_5A724B(a4, v5, v4);
    sub_5A721A(v9);
    v10 += 16;
  }
  return v10;
}
