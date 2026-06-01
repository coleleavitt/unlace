__int64 __fastcall sub_A403B0(char **a1)
{
  __int64 result; // rax
  char *v2; // rbx
  char *v3; // r12
  void *v4; // rbp
  void *v5; // rbp
  char *v6; // rsi

  result = *((unsigned int *)a1 + 2);
  v2 = *a1;
  v3 = &(*a1)[112 * result];
  if ( *a1 != v3 )
  {
    do
    {
      v4 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v2 + 56);
      sub_182CBA0(v4, v2 + 72);
      v5 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v2 + 16);
      v6 = v2 + 32;
      v2 += 112;
      result = sub_182CBA0(v5, v6);
    }
    while ( v3 != v2 );
    v3 = *a1;
  }
  if ( v3 )
  {
    if ( v3 != (char *)(a1 + 2) )
      return sub_186B220(v3);
  }
  return result;
}

