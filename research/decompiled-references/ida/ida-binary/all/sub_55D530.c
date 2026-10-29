__int64 (__fastcall *__fastcall sub_55D530(__int64 a1))(_QWORD, _QWORD, __int64)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, __int64); // rax
  FILE *v3; // rcx
  int v4; // edi
  char *v5; // rbx
  FILE *v6; // rsi

  result = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 152);
  if ( result )
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))result(*(_QWORD *)(a1 + 144), 0, a1 + 192);
  v3 = *(FILE **)(a1 + 1400);
  if ( v3 )
  {
    fwrite("graph {\nlabel=\"", 1u, 0xFu, v3);
    v4 = *(char *)(a1 + 192);
    v5 = (char *)(a1 + 192);
    if ( *(_BYTE *)(a1 + 192) )
    {
      do
      {
        v6 = *(FILE **)(a1 + 1400);
        if ( (_BYTE)v4 == 34 || (_BYTE)v4 == 92 )
        {
          fputc(92, v6);
          v6 = *(FILE **)(a1 + 1400);
          v4 = *v5;
        }
        fputc(v4, v6);
        v4 = *++v5;
      }
      while ( (_BYTE)v4 );
    }
    return (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))fwrite("\"\n}\n\n", 1u, 5u, *(FILE **)(a1 + 1400));
  }
  return result;
}
