__int64 Z3_close_log()
{
  std::ostream *v0; // rbx
  __int64 result; // rax

  if ( ptr )
  {
    byte_1C7EBA0 = 0;
    v0 = ptr;
    (**(void (__fastcall ***)(std::ostream *))ptr)(ptr);
    result = sub_186B220(v0);
    ptr = nullptr;
  }
  return result;
}

