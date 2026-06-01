__int64 __fastcall sub_15C1070(char *a1, char *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax

  v2 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a1 + 32LL))(a1);
  if ( v2 != (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 32LL))(a2) || a1[29] < 0 && a2[29] < 0 )
    return 0;
  v4 = (*(__int64 (__fastcall **)(char *, char *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, a2, 0);
  if ( a1 == (char *)v4 )
    return 2;
  if ( a2 != (char *)v4 )
  {
    if ( !a2 )
      return 2;
    if ( a1 != a2 )
    {
      v5 = (__int64)a2;
      while ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) != v5 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
        v5 = v6;
        if ( a2 == (char *)v6 || !v6 )
          break;
        if ( a1 == (char *)v6 )
          return 1;
      }
      return 2;
    }
  }
  return 1;
}
