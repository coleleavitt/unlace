__int64 __fastcall sub_7811D0(_QWORD *a1)
{
  const char *v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rsi
  __int64 result; // rax
  const char *v8; // rsi

  v2 = haystack;
  v3 = a1[13];
  if ( a1[6] )
    v2 = (const char *)a1[5];
  v4 = sub_78D960(v3, v2);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 52);
    v6 = a1[23];
    result = v5;
    do
    {
      result = *(int *)(*(_QWORD *)(*(_QWORD *)(a1[13] + 64LL) + 8 * result) + 48LL);
      if ( *(_DWORD *)(v6 + 52) == (_DWORD)result )
        return set_qerrno(1537);
    }
    while ( (_DWORD)result );
    *(_DWORD *)(v6 + 48) = v5;
  }
  else
  {
    v8 = haystack;
    if ( a1[6] )
      v8 = (const char *)a1[5];
    set_error_string(0, v8);
    return set_qerrno(1536);
  }
  return result;
}
