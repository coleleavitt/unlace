__int64 __fastcall sub_49EAC0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // r14
  const char *v5; // r15
  __int64 v6; // rax

  result = sub_5345D0(&qword_8D1C80, off_8C2F60, 4);
  v2 = xmmword_8D1C88;
  if ( (_QWORD)xmmword_8D1C88 )
  {
    v3 = 80;
    v4 = 0;
    do
    {
      v5 = &s1;
      v6 = v3 + *(_QWORD *)(a1 + 2392);
      if ( *(_QWORD *)(v6 + 8) )
        v5 = *(const char **)v6;
      result = sub_5313F0(*(_QWORD *)(qword_8D1C80 + 8 * v4));
      if ( result )
        result = sub_537630(result, 1, v5);
      ++v4;
      v3 += 24;
    }
    while ( v2 != v4 );
  }
  if ( !*(_BYTE *)(a1 + 1224) )
  {
    if ( *(_QWORD *)(a1 + 1216) )
      return sub_51D3E0();
  }
  return result;
}
