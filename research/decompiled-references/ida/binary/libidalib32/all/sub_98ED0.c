__int64 __fastcall sub_98ED0(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v4; // rax

  if ( *(_WORD *)(a2 + 24) != 4 )
    return 1;
  v4 = s1;
  if ( *(_QWORD *)(a2 + 8) )
    v4 = *(const char **)a2;
  sub_17AFB0(a1, v4, a3, 0);
  return 0;
}

