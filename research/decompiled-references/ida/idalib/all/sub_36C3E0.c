__int64 __fastcall sub_36C3E0(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rax
  const char *v4; // rax

  v2 = a1[1];
  v3 = -1;
  if ( v2 < (unsigned __int64)xmmword_2CCB488 && *(_QWORD *)(qword_2CCB480 + 8 * v2) )
  {
    v4 = haystack;
    if ( a1[6] )
      v4 = (const char *)a1[5];
    v3 = (int)qfputs(v4);
  }
  *(_QWORD *)(a2 + 8) = v3;
  return 0;
}
