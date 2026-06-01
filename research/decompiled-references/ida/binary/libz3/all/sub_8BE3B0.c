__int64 __fastcall sub_8BE3B0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v8[0] = a5;
  if ( !(unsigned __int8)sub_8BDE80((_QWORD *)(a1 + 184), a2, a3, a4, v8, 1) )
  {
    sub_1872CE0("");
    sub_1873130(114, 1099);
  }
  result = sub_8BDE80((_QWORD *)(a1 + 184), a3, a2, a4, v8, 1);
  if ( !(_BYTE)result )
  {
    sub_1872CE0("");
    sub_1873130(114, 1100);
  }
  return result;
}

