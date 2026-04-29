char **__fastcall sub_414AF0(__int64 a1, char **a2)
{
  char **v2; // rbx
  char **v3; // rbx
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  __int128 v6; // [rsp+8h] [rbp-20h]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v2 = a2;
  v5 = 0;
  v6 = 0;
  if ( !a2 )
    v2 = (char **)&v5;
  if ( (unsigned __int8)sub_1D2AB0((__int64 *)v2, a1, 2) )
    v3 = sub_414A50(*v2);
  else
    v3 = nullptr;
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  return v3;
}
