bool __fastcall sub_124E2A0(_QWORD *a1, char *a2)
{
  unsigned int v2; // r13d
  __int64 v3; // rax
  __int64 v5; // rax

  v2 = *a2;
  if ( !(_BYTE)qword_2CD8980 && __cxa_guard_acquire(&qword_2CD8980) )
  {
    v5 = std::use_facet<std::ctype<char>>(*a1);
    unk_2CD8988 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, 0);
    __cxa_guard_release(&qword_2CD8980);
  }
  v3 = std::use_facet<std::ctype<char>>(*a1);
  return unk_2CD8988 != (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 32LL))(v3, v2);
}
