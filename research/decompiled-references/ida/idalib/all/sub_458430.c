__int64 __fastcall sub_458430(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  const char *v7; // rcx
  __int64 result; // rax

  v4 = *((_QWORD *)&xmmword_2CCB748 + 1);
  if ( *((_QWORD *)&xmmword_2CCB748 + 1) )
  {
    if ( (*(_BYTE *)(a1 + 148) & 1) == 0 )
    {
      v7 = haystack;
      if ( *(_QWORD *)(a1 + 24) )
        v7 = *(const char **)(a1 + 16);
      sub_391AE0(*((__int64 *)&xmmword_2CCB748 + 1), (__int64)"=== %zu %s\n", *(_QWORD *)(a1 + 104), v7);
    }
    return sub_391AE0(v4, (__int64)"M:%zu,%zu:%d\n", a3, a4, a2);
  }
  return result;
}
