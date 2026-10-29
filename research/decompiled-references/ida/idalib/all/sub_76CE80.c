__int64 sub_76CE80()
{
  char *v0; // rax
  char v1; // bl

  v0 = qword_2CD44C0++;
  v1 = *v0;
  if ( (unsigned __int8)(*v0 - 48) > 9u )
    return (unsigned int)((*__ctype_toupper_loc())[(unsigned __int8)v1] - 55);
  else
    return (unsigned int)(v1 - 48);
}
