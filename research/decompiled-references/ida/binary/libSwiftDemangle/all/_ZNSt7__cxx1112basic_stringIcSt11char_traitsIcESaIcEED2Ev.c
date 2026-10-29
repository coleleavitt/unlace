// Alternative name is '_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev'
void __fastcall std::string::~string(void **a1)
{
  if ( *a1 != a1 + 2 )
    operator delete(*a1);
}

