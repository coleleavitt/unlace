__int64 __fastcall sub_5991A3(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v8; // [rsp+10h] [rbp-30h] BYREF
  _QWORD v9[2]; // [rsp+18h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h]

  v9[0] = a1;
  v8 = a2;
  v10 = a3;
  while ( (unsigned __int8)sub_59970E(v9, &v8) )
  {
    v4 = sub_599756(v9);
    v5 = sub_598C65(v10);
    sub_599767(a4, v5, v4);
    sub_599736(v9);
    ++v10;
  }
  return v10;
}
