FILE *__fastcall qfopen(const char *a1, __int64 a2)
{
  FILE *v2; // rbx
  char v4[24]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  qstrncpy(v4, a2, 20);
  qstrncat(v4, "e", 20);
  v2 = sub_817EC0(a1, v4);
  if ( !v2 )
    set_qerrno(1, v4);
  return v2;
}

