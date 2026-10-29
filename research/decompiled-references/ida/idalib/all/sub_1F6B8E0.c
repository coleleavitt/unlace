void *__fastcall sub_1F6B8E0(size_t a1)
{
  void *result; // rax

  result = calloc(a1, 0x10u);
  if ( !result && (a1 || (result = malloc(1u)) == nullptr) )
    sub_2221CE0("Allocation failed");
  return result;
}
