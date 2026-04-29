// Alternative name is '_init'
void *init_proc()
{
  void *result; // rax

  result = &_gmon_start__;
  if ( &_gmon_start__ )
    return (void *)__gmon_start__();
  return result;
}
