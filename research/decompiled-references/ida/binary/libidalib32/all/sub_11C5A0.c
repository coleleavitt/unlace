__int64 __fastcall sub_11C5A0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rbp
  unsigned __int8 (__fastcall *v4)(const char *, const char **); // rax
  const char *v5; // rdi
  const char *v6; // rsi
  unsigned int v7; // ebp
  const char *v9; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( *a1 )
  {
    sub_11C380(a1, 1);
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, **(_QWORD **)(*a1 + 16LL));
    v9 = nullptr;
    v2 = *(_QWORD *)(v1 + 24);
    v3 = v1;
    v10 = 0;
    if ( v2 )
    {
      v4 = *(unsigned __int8 (__fastcall **)(const char *, const char **))(v2 + 72);
      ++*(_DWORD *)(v2 + 12);
      if ( v4 )
      {
        v5 = s1;
        if ( *(_QWORD *)(v3 + 40) )
          v5 = *(const char **)(v3 + 32);
        if ( !v4(v5, &v9) && (unsigned __int64)v10 > 1 )
        {
          v6 = s1;
          if ( *(_QWORD *)(v3 + 40) )
            v6 = *(const char **)(v3 + 32);
          sub_8F660((__int64)"Script %s error: %s\n", v6, v9);
        }
        v7 = 1;
      }
      else
      {
        sub_92120(
          (__int64)"The '%s' extlang cannot execute snippets because it does not implement the 'eval_snippet' callback",
          *(const char **)(v2 + 16));
        v7 = 0;
      }
      --*(_DWORD *)(v2 + 12);
    }
    else
    {
      sub_92120(
        (__int64)"The '%s' extlang cannot execute snippets because it does not implement the 'eval_snippet' callback",
        (const char *)0x1003E0003LL);
      v7 = 0;
    }
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree();
    }
  }
  else
  {
    return 0;
  }
  return v7;
}

