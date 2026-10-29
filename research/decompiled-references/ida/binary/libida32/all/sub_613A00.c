size_t __fastcall sub_613A00(__int64 a1, __int64 a2, void *a3, size_t a4)
{
  const char **v5; // rsi
  size_t v6; // rbx
  const char *v7; // rax

  v5 = (const char **)(*(_QWORD *)(a1 + 16) + *(_QWORD *)(a2 + 8));
  if ( (*(_BYTE *)(a2 + 56) & 0x20) != 0 )
  {
    v6 = (size_t)v5[1];
    v7 = haystack;
    if ( v6 )
    {
      v7 = *v5;
      if ( a3 )
        goto LABEL_4;
    }
    else if ( a3 )
    {
LABEL_4:
      if ( v6 > a4 )
        v6 = a4;
      memcpy(a3, v7, v6);
    }
    return v6;
  }
  v6 = *(_QWORD *)(a2 + 16);
  if ( !a3 )
    return v6;
  if ( v6 > a4 )
    v6 = a4;
  memcpy(a3, v5, v6);
  return v6;
}

