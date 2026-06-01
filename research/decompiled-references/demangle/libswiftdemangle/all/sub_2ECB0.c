__int64 __fastcall sub_2ECB0(unsigned int **a1, int a2)
{
  __int64 result; // rax
  std::string *v4; // r14
  std::string *v5; // r15
  _BYTE *v6; // r13
  unsigned int *v7; // r14
  __int64 v8; // r13
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // r13
  __int64 v12; // rax

  for ( result = **a1; (_DWORD)result != a2; result = ++**a1 )
  {
    while ( (_DWORD)result == 1 )
    {
      std::string::append((std::string *)a1[2], ") -> (", 6u);
LABEL_4:
      result = ++**a1;
      if ( (_DWORD)result == a2 )
        return result;
    }
    if ( (_DWORD)result == 2 )
      sub_23620("no state after Results");
    if ( (_DWORD)result )
      sub_23620("bad state");
    v4 = (std::string *)a1[2];
    if ( *(_QWORD *)a1[1] )
    {
      std::string::append((std::string *)a1[2], "@substituted ", 0xDu);
      v5 = (std::string *)a1[2];
      v6 = *(_BYTE **)a1[1];
      if ( sub_BFF0((__int64)v6) )
        sub_C020(v6);
      sub_24010(v5);
      v7 = a1[2];
      v8 = *(_QWORD *)(*(_QWORD *)v7 - 24LL);
      if ( (unsigned __int64)(v8 + 1) > *(_QWORD *)(*(_QWORD *)v7 - 16LL) || *(int *)(*(_QWORD *)v7 - 8LL) > 0 )
        std::string::reserve((std::string *)a1[2], v8 + 1);
      *(_BYTE *)(*(_QWORD *)v7 + *(_QWORD *)(*(_QWORD *)v7 - 24LL)) = 32;
      v9 = *(_QWORD *)v7;
      v10 = (_QWORD *)(*(_QWORD *)v7 - 24LL);
      if ( v10 != &std::string::_Rep::_S_empty_rep_storage )
      {
        *(_DWORD *)(v9 - 8) = 0;
        *(_QWORD *)(v9 - 24) = v8 + 1;
        *((_BYTE *)v10 + v8 + 25) = 0;
      }
      v4 = (std::string *)a1[2];
    }
    v11 = *(_QWORD *)(*(_QWORD *)v4 - 24LL);
    if ( (unsigned __int64)(v11 + 1) > *(_QWORD *)(*(_QWORD *)v4 - 16LL) || *(int *)(*(_QWORD *)v4 - 8LL) > 0 )
      std::string::reserve(v4, v11 + 1);
    *(_BYTE *)(*(_QWORD *)v4 + *(_QWORD *)(*(_QWORD *)v4 - 24LL)) = 40;
    v12 = *(_QWORD *)v4;
    if ( (_QWORD *)(*(_QWORD *)v4 - 24LL) == &std::string::_Rep::_S_empty_rep_storage )
      goto LABEL_4;
    *(_DWORD *)(v12 - 8) = 0;
    *(_QWORD *)(v12 - 24) = v11 + 1;
    *(_BYTE *)(v12 + v11 + 1) = 0;
  }
  return result;
}
