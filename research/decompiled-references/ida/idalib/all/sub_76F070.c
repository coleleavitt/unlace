char *sub_76F070()
{
  char *result; // rax
  char v1; // cl
  char *v2; // rax

  result = nullptr;
  if ( *qword_2CD44C0 == 95 )
  {
    v1 = qword_2CD44C0[1];
    v2 = qword_2CD44C0 + 1;
    if ( !qword_2CD44B0 && v1 == 95 )
    {
      v1 = qword_2CD44C0[2];
      v2 = qword_2CD44C0 + 2;
    }
    result = v2 + 1;
    if ( v1 != 90 )
      return nullptr;
  }
  return result;
}
