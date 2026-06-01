char *__fastcall sub_EE9B50(int a1)
{
  char *result; // rax

  if ( byte_2CD7485 )
    result = (char *)&qword_2CD74A0[2 * a1];
  else
    result = sub_EE7CB0(a1);
  ++*((_DWORD *)result + 2);
  return result;
}
