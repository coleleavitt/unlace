FILE *__fastcall sub_93850(const char *a1, __int64 a2)
{
  FILE *v2; // rbx
  char v4[24]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  sub_976E0(v4, a2, 20);
  sub_97820(v4, "e", 20);
  v2 = sub_93790(a1, v4);
  if ( !v2 )
    sub_8F860(1u);
  return v2;
}

