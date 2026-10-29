_BYTE *__fastcall sub_12588A0(__int64 a1, char a2)
{
  _BYTE *result; // rax
  __int64 v4; // rdi
  _BYTE v5[25]; // [rsp+Fh] [rbp-19h] BYREF

  result = *(_BYTE **)a1;
  if ( **(_BYTE **)a1 == 1 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5[0] = result[1];
    sub_1258740(v4, v5);
    result = *(_BYTE **)a1;
  }
  *result = 1;
  result[1] = a2;
  return result;
}
