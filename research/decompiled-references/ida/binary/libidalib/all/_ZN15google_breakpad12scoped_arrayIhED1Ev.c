// Alternative name is '_ZN15google_breakpad12scoped_arrayIhED2Ev'
void __fastcall google_breakpad::scoped_array<unsigned char>::~scoped_array(void **a1)
{
  if ( *a1 )
    operator delete[](*a1);
}

