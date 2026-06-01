vm_address_t __fastcall Diagnostics::clearError(vm_address_t *this)
{
  vm_address_t result; // x0

  result = *this;
  if ( result )
    result = _simple_sfree(result);
  *this = 0;
  return result;
}
