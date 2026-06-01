bool __fastcall sub_124E0B0(__int64 a1, char *a2)
{
  char v2; // bl
  unsigned int v3; // ebp
  __int64 v4; // rax

  v2 = *(_BYTE *)(a1 + 8);
  v3 = *a2;
  v4 = std::use_facet<std::ctype<char>>(*(_QWORD *)a1);
  return v2 == (*(char (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, v3);
}
