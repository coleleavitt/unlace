__int64 __fastcall sub_2E4000(_QWORD *a1)
{
  char *v1; // rbp
  void *v2; // r12
  __int64 result; // rax

  v1 = (char *)*a1;
  if ( *a1 )
  {
    v2 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, *a1);
    sub_182CBA0(v2, v1 + 16);
    result = sub_186B220(v1);
  }
  *a1 = 0;
  return result;
}

