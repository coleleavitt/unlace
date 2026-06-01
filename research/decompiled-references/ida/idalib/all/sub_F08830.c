__int64 __fastcall sub_F08830(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // r13
  __int64 i; // rbx
  char *v11; // rsi

  sub_995540(*a1, "__builtin_shufflevector(");
  v8 = *(_DWORD *)(a2 + 4);
  if ( v8 )
  {
    v9 = (unsigned int)(v8 - 1);
    for ( i = 0; ; ++i )
    {
      v11 = *(char **)(*(_QWORD *)(a2 + 24) + 8 * i);
      if ( v11 )
      {
        sub_F05430(a1, v11, v4, v5, v6, v7, a3);
        if ( i == v9 )
          return sub_995540(*a1, ")");
      }
      else
      {
        sub_995540(*a1, "<null expr>");
        if ( i == v9 )
          return sub_995540(*a1, ")");
      }
      if ( (_DWORD)i != -1 )
        sub_995540(*a1, ", ");
    }
  }
  return sub_995540(*a1, ")");
}
