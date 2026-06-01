__int64 __fastcall sub_3B5970(__int64 a1, __int64 *a2)
{
  int v2; // eax
  __int64 v3; // rbp
  __int64 v5; // rdi
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // rax

  v2 = *((_DWORD *)a2 + 2);
  if ( v2 == 10 )
  {
    v8 = a2[25];
    if ( v8 && *(_QWORD *)(v8 + 8) )
      return 3;
    else
      return 7;
  }
  else
  {
    if ( v2 == 58 )
    {
      if ( (unsigned __int8)get_tinfo_property() )
        return 3;
      return 7;
    }
    v3 = *a2;
    v5 = sub_3856D0(*(_QWORD *)(a1 + 16), *a2);
    if ( !v5 )
      return 6;
    v6 = *(_DWORD *)(a1 + 24);
    if ( !v6 )
      goto LABEL_20;
    if ( v6 != 1 )
      sub_3B5950(v5);
    result = 6;
    if ( v3 == *(_QWORD *)(v5 + 8) )
    {
LABEL_20:
      if ( (unsigned __int8)sub_3A8720(v5, 0, 0) )
        return 3;
      return 7;
    }
  }
  return result;
}
