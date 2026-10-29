_QWORD *__fastcall sub_237A0(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  int *v4; // rcx
  __int64 v5; // r14
  _QWORD *v6; // rax
  size_t v7; // rax
  _QWORD *v9; // [rsp+18h] [rbp-70h] BYREF
  char s[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v4 = (int *)(&std::string::_Rep::_S_empty_rep_storage + 3);
  v9 = &std::string::_Rep::_S_empty_rep_storage + 3;
  while ( 1 )
  {
    v5 = *((_QWORD *)v4 - 3);
    if ( (unsigned __int64)(v5 + 1) > *((_QWORD *)v4 - 2) || *(v4 - 2) > 0 )
      std::string::reserve((std::string *)&v9, v5 + 1);
    *((_BYTE *)v9 + *(v9 - 3)) = a3 % 0x1A + 65;
    v6 = v9;
    if ( v9 - 3 != &std::string::_Rep::_S_empty_rep_storage )
    {
      *((_DWORD *)v9 - 2) = 0;
      *(v6 - 3) = v5 + 1;
      *((_BYTE *)v6 + v5 + 1) = 0;
    }
    if ( a3 <= 0x19 )
      break;
    v4 = (int *)v9;
    a3 /= 0x1Au;
  }
  if ( a2 )
  {
    __snprintf_chk(s, 32, 1, 32, "%llu", a2);
    v7 = strlen(s);
    std::string::append((std::string *)&v9, s, v7);
  }
  *a1 = v9;
  return a1;
}

