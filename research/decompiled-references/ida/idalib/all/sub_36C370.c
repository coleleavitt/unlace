__int64 __fastcall sub_36C370(_QWORD *a1, __int64 a2)
{
  const char *v3; // rsi
  const char *v4; // rax

  v3 = haystack;
  if ( a1[6] )
    v3 = (const char *)a1[5];
  v4 = haystack;
  if ( a1[2] )
    v4 = (const char *)a1[1];
  *(_QWORD *)(a2 + 8) = (int)qrename(v4, v3);
  return 0;
}
