__int64 __fastcall sub_BEA930(__int64 *a1, __int64 a2, int a3, double a4)
{
  __int64 v6; // rax
  int v7; // rdx^4
  __int64 v8; // rdi
  _DWORD *v9; // rcx
  unsigned int v11; // eax

  v6 = sub_163F5D0(*a1 + 1752);
  v8 = *a1;
  if ( (*(_WORD *)(a2 + 4)
     || (v9 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
     || *(_DWORD *)(v8 + 1768) != *v9
     || v9[1] != 35)
    && v7 != -1 )
  {
    if ( !BYTE4(v6) )
      return 0;
    sub_BEA730((__int64)a1, a2);
    v11 = sub_BE93F0((__int64)a1, a2);
    if ( !(unsigned __int8)sub_186D000(a1 + 9, v11) )
      return 0;
    v8 = *a1;
  }
  sub_BBF3C0((_QWORD *)v8, a3 ^ 1, 0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFE, a4);
  return 1;
}

