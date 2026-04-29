vm_address_t __fastcall lsl::MemoryManager::vm_allocate_bytes(lsl::MemoryManager *this, vm_address_t a2)
{
  vm_size_t v2; // x19
  int v3; // w3
  vm_address_t address[2]; // [xsp+10h] [xbp-4C0h] BYREF
  char v6[130]; // [xsp+26h] [xbp-4AAh] BYREF
  _BYTE v7[1024]; // [xsp+A8h] [xbp-428h] BYREF

  address[1] = a2;
  v2 = ((a2 + vm_page_size - 1) & -(__int64)vm_page_size) + vm_page_size;
  address[0] = 0;
  if ( *((_BYTE *)this + 33) )
    v3 = 1006637057;
  else
    v3 = 1006632961;
  if ( vm_allocate(mach_task_self_, address, v2, v3) )
    lsl::MemoryManager::vm_allocate_bytes((lsl::MemoryManager *)v7, v6);
  vm_protect(mach_task_self_, address[0] + v2 - vm_page_size, vm_page_size, 1, 0);
  return address[0];
}
