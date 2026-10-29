char *__fastcall sub_12588F0(__int64 a1, char a2)
{
  __int64 v2; // rax
  _BYTE v4[25]; // [rsp+Fh] [rbp-19h] BYREF

  v2 = std::use_facet<std::ctype<char>>(*(_QWORD *)(a1 + 104));
  v4[0] = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 32LL))(v2, (unsigned int)a2);
  return sub_1258740(a1, v4);
}
