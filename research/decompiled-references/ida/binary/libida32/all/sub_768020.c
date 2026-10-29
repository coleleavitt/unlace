__int64 __fastcall sub_768020(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx

  if ( *(_DWORD *)(a1 + 208) == 1 )
  {
    v2 = *(int *)(*(_QWORD *)(a1 + 176) + 48LL);
    if ( (_DWORD)v2 )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 64LL) + 8 * v2);
      v4 = *(_QWORD *)(v3 + 64);
      if ( *(_QWORD *)(a1 + 48) )
      {
        a2 = *(const char **)(a1 + 40);
        if ( !v4 )
        {
          if ( !*a2 )
            return sub_767F70(a1);
          return set_qerrno(1586, a2);
        }
      }
      else
      {
        a2 = haystack;
        if ( !v4 )
          return sub_767F70(a1);
      }
      if ( !strcmp(*(const char **)(v3 + 56), a2) )
        return sub_767F70(a1);
    }
    return set_qerrno(1586, a2);
  }
  return set_qerrno(47, a2);
}

