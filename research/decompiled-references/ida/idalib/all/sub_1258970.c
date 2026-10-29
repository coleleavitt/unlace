_BYTE *__fastcall sub_1258970(__int64 a1, char a2)
{
  _BYTE *result; // rax
  __int64 v3; // r12
  unsigned int v4; // r13d
  __int64 v5; // rax
  _BYTE v6[41]; // [rsp+Fh] [rbp-29h] BYREF

  result = *(_BYTE **)a1;
  if ( **(_BYTE **)a1 == 1 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = (char)result[1];
    v5 = std::use_facet<std::ctype<char>>(*(_QWORD *)(v3 + 104));
    v6[0] = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, v4);
    sub_1258740(v3, v6);
    result = *(_BYTE **)a1;
  }
  *result = 1;
  result[1] = a2;
  return result;
}
