__int64 __fastcall sub_788580(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rdx
  const char *v4; // rsi

  if ( *(_DWORD *)(a1 + 216) == 1 )
  {
    v1 = *(int *)(*(_QWORD *)(a1 + 184) + 48LL);
    if ( (_DWORD)v1 )
    {
      v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8 * v1);
      v3 = *(_QWORD *)(v2 + 64);
      if ( *(_QWORD *)(a1 + 48) )
      {
        v4 = *(const char **)(a1 + 40);
        if ( !v3 )
        {
          if ( !*v4 )
            return sub_7884D0(a1);
          return set_qerrno(1586);
        }
      }
      else
      {
        v4 = haystack;
        if ( !v3 )
          return sub_7884D0(a1);
      }
      if ( !strcmp(*(const char **)(v2 + 56), v4) )
        return sub_7884D0(a1);
    }
    return set_qerrno(1586);
  }
  return set_qerrno(47);
}
