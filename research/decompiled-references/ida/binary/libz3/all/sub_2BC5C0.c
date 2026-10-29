int sub_2BC5C0()
{
  const char *error_msg; // rax

  error_msg = (const char *)Z3_get_error_msg();
  return printf("[REPLAYER ERROR HANDLER]: %s\n", error_msg);
}

