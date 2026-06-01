__int64 __fastcall sub_1E22F0(int a1)
{
  __int64 v1; // rbp
  unsigned int v2; // ebx

  if ( a1 < 0 || a1 >= (unsigned __int64)xmmword_8CC398 )
    return 0;
  v1 = qword_8CC390 + 56LL * a1;
  if ( v1 && (v2 = sub_235EA0(qword_8CC390 + 56LL * a1), v2 != -1) && (unsigned __int8)sub_235DE0(v1) )
    return (v2 >> 4) & 1;
  else
    return 0;
}
