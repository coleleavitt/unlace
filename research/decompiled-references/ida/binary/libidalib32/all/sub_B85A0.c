int *__fastcall sub_B85A0(unsigned int a1)
{
  int *result; // rax
  __int64 v2; // rbx
  int *v3; // rdi
  __int64 v4; // rbx

  result = nullptr;
  v2 = a1;
  if ( a1 < (unsigned __int64)qword_2514E8 )
  {
    v3 = (int *)qword_2514D8;
    if ( v2 )
    {
      v4 = v2 - 1;
      do
        v3 = (int *)std::_Rb_tree_increment();
      while ( v4-- != 0 );
    }
    result = v3 + 10;
    if ( v3 == &dword_2514C8 )
      return nullptr;
  }
  return result;
}

