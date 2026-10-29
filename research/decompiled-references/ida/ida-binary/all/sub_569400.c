FILE *__fastcall sub_569400(__int64 a1, int a2)
{
  FILE *v3; // rdi
  FILE *result; // rax

  v3 = *(FILE **)(a1 + 1400);
  if ( v3 )
    fclose(v3);
  result = nullptr;
  if ( a2 >= 0 )
    result = fdopen(a2, "a");
  *(_QWORD *)(a1 + 1400) = result;
  return result;
}
