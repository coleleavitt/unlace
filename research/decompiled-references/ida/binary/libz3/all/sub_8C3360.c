__int64 __fastcall sub_8C3360(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, void *a5)
{
  __int64 result; // rax
  void *v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v8[0] = a5;
  if ( !(unsigned __int8)sub_8C2A80((_QWORD *)(a1 + 216), a2, a3, a4, (__int64 *)v8, 1) )
  {
    sub_1872CE0("");
    sub_1873130(114, 1099);
  }
  result = sub_8C2A80((_QWORD *)(a1 + 216), a3, a2, a4, (__int64 *)v8, 1);
  if ( !(_BYTE)result )
  {
    sub_1872CE0("");
    sub_1873130(114, 1100);
  }
  return result;
}

