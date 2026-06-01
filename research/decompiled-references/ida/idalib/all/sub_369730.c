__int64 __fastcall sub_369730(_QWORD *a1, __int64 a2)
{
  const char *v3; // rsi
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rax

  v3 = haystack;
  v4 = a1[5];
  if ( a1[2] )
    v3 = (const char *)a1[1];
  v5 = qword_2CCB598;
  v6 = sub_4EE630(qword_2CCB598, v3, 1);
  *(_QWORD *)(a2 + 8) = (unsigned __int8)sub_4EAA50(v5, v6, v4);
  return 0;
}
