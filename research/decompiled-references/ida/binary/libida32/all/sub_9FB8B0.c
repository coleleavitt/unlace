void *sub_9FB8B0()
{
  void *result; // rax

  result = calloc(0x40u, 0x10u);
  if ( !result )
    sub_21FDFA0("Allocation failed");
  return result;
}

