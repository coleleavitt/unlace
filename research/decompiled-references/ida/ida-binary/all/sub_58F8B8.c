__int64 __fastcall sub_58F8B8(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7, __int64 a8)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  *(_DWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 24) = a5;
  *(_QWORD *)(a1 + 32) = a6;
  *(_BYTE *)(a1 + 40) = a7;
  std::string::string((std::string *)(a1 + 48));
  *(_BYTE *)(a1 + 56) = 0;
  if ( a8 )
    return std::string::operator=(a1 + 48, a8, a1 + 48, v9, v10, v11, a6, a5, a4, a3, a7);
  else
    return std::string::operator=(a1 + 48, "/tmp", v8, v9, v10, v11, a6, a5, a4, a3, a7);
}
