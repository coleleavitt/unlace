FILE *__fastcall sub_93910(const char *a1)
{
  FILE *result; // rax

  result = sub_93790(a1, "rb+e");
  if ( !result )
  {
    sub_8F860(1u);
    return nullptr;
  }
  return result;
}

