unsigned __int64 __fastcall std::string::at(_QWORD *a1, unsigned __int64 a2)
{
  if ( a2 >= a1[1] )
    std::__throw_out_of_range_fmt("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)");
  return a2 + *a1;
}

