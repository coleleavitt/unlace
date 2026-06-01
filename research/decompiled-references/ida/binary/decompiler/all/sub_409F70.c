char **__fastcall sub_409F70(__int64 a1, char **a2)
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
  if ( (unsigned __int8)sub_1CFF30(v2, a1, 2, 0) )
    v3 = sub_409ED0(*v2);
  else
    v3 = 0;
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  return v3;
}
