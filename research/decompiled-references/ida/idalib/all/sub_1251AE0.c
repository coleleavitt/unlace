__int64 __fastcall sub_1251AE0(const std::locale **a1, char *a2, char *a3, char *a4, __int64 a5)
{
  char *v6; // rbp
  size_t v7; // r8
  char *v8; // rbx
  signed __int64 v9; // rcx
  size_t v10; // r12
  unsigned int v11; // edx
  __int64 v13; // r13
  unsigned int v14; // r15d
  char v15; // r12
  __int64 v16; // [rsp+0h] [rbp-58h]
  unsigned __int8 v17; // [rsp+0h] [rbp-58h]
  unsigned __int8 v18; // [rsp+Fh] [rbp-49h]
  _BYTE v19[64]; // [rsp+18h] [rbp-40h] BYREF

  v6 = a4;
  v7 = a5 - (_QWORD)a4;
  v8 = a2;
  v9 = a3 - a2;
  v10 = v7;
  v11 = *(unsigned __int8 *)a1;
  if ( (_BYTE)v11 )
  {
    v18 = *(_BYTE *)a1;
    v16 = v9;
    std::locale::locale((std::locale *)v19, a1[1]);
    v13 = std::use_facet<std::ctype<char>>(v19);
    std::locale::~locale((std::locale *)v19);
    v11 = v18;
    if ( v10 == v16 )
    {
      if ( a3 != a2 )
      {
        while ( 1 )
        {
          v14 = *v6;
          v17 = v11;
          v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 32LL))(v13, (unsigned int)*v8);
          if ( v15 != (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 32LL))(v13, v14) )
            break;
          ++v8;
          ++v6;
          v11 = v17;
          if ( a3 == v8 )
            return v11;
        }
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else if ( v7 == v9 )
  {
    v11 = 1;
    if ( v7 )
      LOBYTE(v11) = memcmp(a2, v6, v7) == 0;
  }
  return v11;
}
