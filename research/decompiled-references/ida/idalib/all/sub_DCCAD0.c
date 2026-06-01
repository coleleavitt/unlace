__int64 __fastcall sub_DCCAD0(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // rbp
  __int64 result; // rax
  unsigned __int8 v4; // [rsp+Fh] [rbp-49h]
  _BYTE v5[72]; // [rsp+10h] [rbp-48h] BYREF

  v2 = (_QWORD *)sub_E21760(*(_QWORD *)(a1 + 176), 48);
  result = sub_DCBE90(a1, a2, (__int64)v2, 9);
  if ( (_BYTE)result )
  {
    v4 = result;
    sub_CFE7A0((__int64)v5, v2);
    sub_DC6920((__int64)v5);
    sub_E232A0(v5);
    return v4;
  }
  return result;
}
