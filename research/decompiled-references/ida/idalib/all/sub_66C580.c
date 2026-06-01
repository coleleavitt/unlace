__int64 *__fastcall sub_66C580(__int64 *a1, __int64 a2, _QWORD *a3, char a4)
{
  __int64 v4; // rax
  unsigned int i; // r14d
  __int64 v8; // rdx

  v4 = 0;
  for ( i = 0; (unsigned __int64)(int)i < a3[1]; v4 = (int)i )
  {
    v8 = i++;
    sub_66C130(a1, a2, v8, (__int64 *)(*a3 + 144 * v4), a4);
  }
  if ( a3[3] != a3[4] )
    sub_35A910(a1);
  return sub_35A910(a1);
}
