__int64 __fastcall sub_A62E0(_QWORD *a1, __int64 a2)
{
  const char *v3; // rsi
  const char *v4; // rax

  v3 = s1;
  if ( a1[6] )
    v3 = (const char *)a1[5];
  v4 = s1;
  if ( a1[2] )
    v4 = (const char *)a1[1];
  *(_QWORD *)(a2 + 8) = (unsigned __int8)sub_A6140((__int64)v4, (__int64)v3);
  return 0;
}

