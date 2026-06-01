void __fastcall desktop_json_fixer_t__::vfunc_0(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbp
  _QWORD *v3; // rbx
  __int64 v4; // rax
  const char *v5; // r15
  __int64 v6; // r15

  if ( a2[1] )
  {
    v2 = 0;
    do
    {
      while ( 1 )
      {
        v3 = (_QWORD *)(*a2 + 16 * v2);
        if ( *(_DWORD *)v3 == 2 )
        {
          v4 = v3[1];
          if ( *(_QWORD *)(v4 + 8) )
          {
            v5 = *(const char **)v4;
            if ( !strcmp(*(const char **)v4, "Structures") || !strcmp(v5, "Enums") )
              break;
          }
        }
        if ( ++v2 >= a2[1] )
          return;
      }
      if ( *(_BYTE *)(a1 + 8) )
      {
        jvalue_t_clear(v3);
        memmove(v3, v3 + 2, *a2 + 16LL * a2[1]-- - (_QWORD)v3 - 16);
      }
      else
      {
        v6 = operator new(0x18u);
        sub_1A1F60(v6, "Local Types");
        if ( *(_DWORD *)v3 )
          jvalue_t_clear(v3);
        *(_DWORD *)v3 = 2;
        ++v2;
        v3[1] = v6;
        *(_BYTE *)(a1 + 8) = 1;
      }
      *(_BYTE *)(a1 + 9) = 1;
    }
    while ( v2 < a2[1] );
  }
}
