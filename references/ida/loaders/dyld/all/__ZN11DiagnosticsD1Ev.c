void __fastcall Diagnostics::~Diagnostics(vm_address_t *this)
{
  vm_address_t v2; // x0

  v2 = *this;
  if ( v2 )
    _simple_sfree(v2);
  *this = 0;
}
