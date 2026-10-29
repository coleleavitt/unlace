__int64 __fastcall sub_98B4B0(char *ptr, int a2)
{
  char *v2; // rbx
  char *v3; // r12
  void *v4; // rbp
  char *v5; // rsi

  if ( a2 )
  {
    v2 = ptr;
    v3 = &ptr[48 * a2];
    do
    {
      v4 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v2 + 8);
      v5 = v2 + 24;
      v2 += 48;
      sub_182CBA0(v4, v5);
    }
    while ( v2 != v3 );
  }
  return sub_186B220(ptr);
}

