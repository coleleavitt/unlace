__int64 __fastcall sub_11BBC70(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v6; // al
  const char *v7; // rbp
  __int64 result; // rax
  char *v9; // rsi

  v6 = sub_12AFEA0();
  if ( *(_DWORD *)(a1 + 60) == 13 && !v6 )
  {
    sub_10DC5D0(a3, (__int64)"-z");
    v9 = "ignore";
    if ( !a4 )
      v9 = "record";
    return sub_10DC5D0(a3, (__int64)v9);
  }
  else
  {
    v7 = "--as-needed";
    if ( !a4 )
      v7 = "--no-as-needed";
    result = *(unsigned int *)(a3 + 8);
    if ( result + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, result + 1, 8);
      result = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = v7;
    ++*(_DWORD *)(a3 + 8);
  }
  return result;
}
