__int64 __fastcall sub_5EA0(__int64 a1, __int64 a2)
{
  const char *v2; // rdx
  __int64 result; // rax

  v2 = (const char *)qword_28460;
  if ( !(_QWORD)xmmword_28468 )
    v2 = s1;
  result = netnode_supset(*(_QWORD *)(a1 + 40), a2, v2, 0, 322);
  if ( qword_28460 )
  {
    *(_QWORD *)&xmmword_28468 = 0;
    result = qfree(qword_28460);
    qword_28460 = 0;
    *((_QWORD *)&xmmword_28468 + 1) = 0;
  }
  return result;
}

