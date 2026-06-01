char *__fastcall sub_151CF2(char **a1)
{
  char *result; // rax

  *a1 = (char *)(a1 + 2);
  result = (char *)operator new(0x2Bu);
  a1[2] = (_BYTE *)(&qword_28 + 2);
  *a1 = result;
  strcpy(result, "Overflow encountered when expanding vector");
  a1[1] = (_BYTE *)(&qword_28 + 2);
  return result;
}

