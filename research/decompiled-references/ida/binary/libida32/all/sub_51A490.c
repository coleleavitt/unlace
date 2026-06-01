__int64 __fastcall sub_51A490(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rbx
  const char *v7; // rsi
  const char *v8; // rdi

  v4 = a1;
  v5 = 0xAAAAAAAAAAAAAAABLL * ((a2 - a1) >> 4);
  while ( v5 > 0 )
  {
    v6 = v4 + 16 * ((v5 >> 1) + (v5 & 0xFFFFFFFFFFFFFFFELL));
    if ( *(_QWORD *)(a3 + 8) )
    {
      v7 = *(const char **)a3;
      v8 = haystack;
      if ( !*(_QWORD *)(v6 + 8) )
        goto LABEL_6;
    }
    else
    {
      v7 = haystack;
      if ( !*(_QWORD *)(v6 + 8) )
      {
LABEL_10:
        v5 >>= 1;
        continue;
      }
    }
    v8 = *(const char **)v6;
LABEL_6:
    if ( strcmp(v8, v7) >= 0 )
      goto LABEL_10;
    v4 = v6 + 48;
    v5 = v5 - 1 - (v5 >> 1);
  }
  return v4;
}

