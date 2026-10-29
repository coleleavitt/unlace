__int64 __fastcall sub_EE4B90(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // r13
  __int64 i; // rbx
  __int64 v11; // r15
  size_t v12; // rax
  char *v13; // rsi

  sub_971800(*a1, "(");
  v8 = *(_DWORD *)(a2 + 4);
  if ( v8 )
  {
    v9 = (unsigned int)(v8 - 1);
    for ( i = 0; ; ++i )
    {
      v13 = *(char **)(a2 + 8 * i + 24);
      if ( v13 )
      {
        sub_EE16F0(a1, v13, v4, v5, v6, v7, a3);
        if ( v9 == i )
          return sub_971800(*a1, ")");
      }
      else
      {
        sub_971800(*a1, "<null expr>");
        if ( v9 == i )
          return sub_971800(*a1, ")");
      }
      if ( (_DWORD)i != -1 )
      {
        v11 = *a1;
        v12 = j__strlen(", ");
        sub_9717A0(v11, ", ", v12);
      }
    }
  }
  return sub_971800(*a1, ")");
}

