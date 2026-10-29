void __fastcall std::bad_array_new_length::~bad_array_new_length(std::bad_array_new_length *this)
{
  std::bad_array_new_length::~bad_array_new_length(this);
  operator delete(this);
}

