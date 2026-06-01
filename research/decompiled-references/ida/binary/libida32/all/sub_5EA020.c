__int64 __fastcall sub_5EA020(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  const char *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  const char *v9; // rdi

  result = 1;
  if ( a3 < *(_QWORD *)(a1 + 48) && a3 < *(_QWORD *)(a2 + 48) )
  {
    v4 = 3 * a3;
    v5 = *(_QWORD *)(a2 + 40);
    v6 = haystack;
    v4 *= 16;
    v7 = v4 + v5;
    v8 = *(_QWORD *)(a1 + 40) + v4;
    if ( *(_QWORD *)(v7 + 8) )
    {
      v6 = *(const char **)v7;
      v9 = haystack;
      if ( !*(_QWORD *)(v8 + 8) )
        return strcmp(v9, v6) != 0;
    }
    else
    {
      v9 = haystack;
      if ( !*(_QWORD *)(v8 + 8) )
        return strcmp(v9, v6) != 0;
    }
    v9 = *(const char **)v8;
    return strcmp(v9, v6) != 0;
  }
  return result;
}

