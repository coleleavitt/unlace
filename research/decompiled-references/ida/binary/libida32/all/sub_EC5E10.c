char *__fastcall sub_EC5E10(int a1)
{
  char *result; // rax

  if ( byte_2CAD565 )
    result = (char *)&qword_2CAD580[2 * a1];
  else
    result = sub_EC3F70(a1);
  ++*((_DWORD *)result + 2);
  return result;
}

