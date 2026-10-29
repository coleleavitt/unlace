__int64 __fastcall sub_DA8D20(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // rbp
  __int64 result; // rax
  unsigned __int8 v4; // [rsp+Fh] [rbp-49h]
  _BYTE v5[72]; // [rsp+10h] [rbp-48h] BYREF

  v2 = (_QWORD *)sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  result = sub_DA8150(a1, a2, (__int64)v2, 9);
  if ( (_BYTE)result )
  {
    v4 = result;
    sub_CDAA60((__int64)v5, v2);
    sub_DA2AA0((__int64)v5);
    sub_DFF560(v5);
    return v4;
  }
  return result;
}

