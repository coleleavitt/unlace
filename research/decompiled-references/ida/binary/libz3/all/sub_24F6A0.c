void __noreturn sub_24F6A0()
{
  const char *error_msg; // rax

  error_msg = (const char *)Z3_get_error_msg();
  printf("Error: %s\n", error_msg);
  exit(1);
}

