__int64 __fastcall sub_19FBD8(char *ptr, int a2)
{
  char *v2; // r12
  void *v4; // r13
  char *v5; // rsi

  v2 = ptr;
  while ( a2 )
  {
    --a2;
    v4 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v2 + 16);
    v5 = v2 + 32;
    v2 += 48;
    sub_182CBA0(v4, v5);
  }
  return sub_186B220(ptr);
}

