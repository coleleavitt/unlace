__int64 __fastcall sub_758C20(unsigned int a1)
{
  char *v1; // rax
  unsigned int vars0; // [rsp+0h] [rbp+0h] BYREF
  int vars4; // [rsp+4h] [rbp+4h] BYREF
  unsigned __int64 vars8; // [rsp+8h] [rbp+8h]

  vars8 = __readfsqword(0x28u);
  vars0 = a1;
  do
  {
    sub_76FD20(&vars0, 91);
    v1 = qword_2CD44C0++;
    if ( *qword_2CD44C0 == 48 )
      qword_2CD44C0 = v1 + 2;
    sub_76F5E0(&vars4, 2);
    sub_770B70(&vars0, &vars4);
    if ( *(qword_2CD44C0 - 1) != 36 )
    {
      byte_2CD44A1 = 1;
      return vars0;
    }
    if ( byte_2CD44A1 )
      return vars0;
    sub_76FD20(&vars0, 93);
  }
  while ( *qword_2CD44C0 == 97 );
  vars4 = sub_756FC0(0);
  return sub_771320(&vars4, &vars0);
}
