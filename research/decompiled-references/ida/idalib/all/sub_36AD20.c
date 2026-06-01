__int64 __fastcall sub_36AD20(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rcx
  const char *v4; // rdx
  const char *v5; // rsi

  v2 = a1[10];
  if ( v2 )
  {
    v4 = (const char *)a1[9];
  }
  else
  {
    v2 = 1;
    v4 = haystack;
  }
  v5 = haystack;
  if ( a1[6] )
    v5 = (const char *)a1[5];
  *(_QWORD *)(a2 + 8) = (unsigned __int8)netnode_hashset(a1[1], v5, v4, v2, 72);
  return 0;
}
