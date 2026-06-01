bool __fastcall xref_desktop_widget_factory_t__::vfunc_2(__int64 a1, __int64 a2, __int64 *a3)
{
  bool result; // al
  const char *v5; // rbp
  char *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  _BYTE *v10; // rsi

  result = 0;
  if ( *(_QWORD *)(a2 + 8) )
  {
    v5 = *(const char **)a2;
    v6 = strstr(*(const char **)a2, "xrefs to");
    result = v5 != v6 || v6 == nullptr;
    if ( result )
    {
      return 0;
    }
    else
    {
      v7 = a3[1];
      if ( v7 )
      {
        v8 = *a3;
        v9 = 0;
        while ( 1 )
        {
          if ( *(_QWORD *)(v8 + 8) )
          {
            v10 = *(_BYTE **)v8;
            if ( **(_BYTE **)v8 == 105 && v10[1] == 100 && !v10[2] )
              break;
          }
          ++v9;
          v8 += 40;
          if ( v7 == v9 )
            return result;
        }
        return *(_DWORD *)(v8 + 24) == 2;
      }
    }
  }
  return result;
}
