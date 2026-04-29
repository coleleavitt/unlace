__int64 __fastcall sub_214110(_QWORD *a1, __int64 a2, const char *a3, int a4)
{
  if ( !*a3 )
    return 0;
  if ( *(_QWORD *)(a2 + 40) )
  {
    if ( !strcmp(*(const char **)(a2 + 32), a3) )
      goto LABEL_4;
  }
  else if ( !strcmp(s1, a3) )
  {
LABEL_4:
    *(_DWORD *)(a2 + 24) = a4 | *(_DWORD *)(a2 + 24) & 0xFFFFFFDB;
    sub_213F40(a1, (_QWORD *)a2, a3);
    return 1;
  }
  if ( !sub_213500((__int64)a1, a3, -9) )
    goto LABEL_4;
  return 0;
}
