__int64 __fastcall sub_767EE0(__int64 a1)
{
  char *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rax
  const char *v5; // rsi
  const char *v7; // rsi

  v2 = (char *)haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(char **)(a1 + 40);
  v3 = sub_76D010(v2);
  v4 = *(_QWORD *)(a1 + 48);
  if ( !v3 )
  {
    if ( v4 )
    {
      v7 = *(const char **)(a1 + 40);
      if ( (unsigned __int64)(v4 - 1) > 0x7F )
      {
        set_error_string();
        return set_qerrno(28, v7);
      }
    }
    else
    {
      v7 = haystack;
    }
    return sub_7679C0(a1, v7);
  }
  v5 = haystack;
  if ( v4 )
    v5 = *(const char **)(a1 + 40);
  set_error_string();
  return set_qerrno(52, v5);
}

