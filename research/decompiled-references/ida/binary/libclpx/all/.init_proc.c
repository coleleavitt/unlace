// Alternative name is '_init'
void *init_proc()
{
  void *result; // rax

  result = &__gmon_start__;
  if ( &__gmon_start__ )
    return (void *)_gmon_start__();
  return result;
}

