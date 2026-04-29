bool __fastcall kdebug_is_enabled(unsigned int a1)
{
  __int64 v2; // x8
  __int64 v4; // x9
  __int64 v5; // [xsp+0h] [xbp-20h] BYREF
  mach_vm_address_t address; // [xsp+8h] [xbp-18h] BYREF

  if ( !MEMORY[0xFFFFFC100] )
    return 0;
  if ( (MEMORY[0xFFFFFC100] & 2) == 0 )
    return 1;
  v2 = kdebug_typefilter_typefilter;
  if ( !kdebug_typefilter_typefilter )
  {
    v5 = 0;
    address = 0;
    if ( !(unsigned int)__kdebug_typefilter(&address, &v5) && address )
    {
      v4 = 0;
      atomic_compare_exchange_strong(&kdebug_typefilter_typefilter, (unsigned __int64 *)&v4, address);
      if ( v4 )
        mach_vm_deallocate(mach_task_self_, address, 0x2000u);
    }
    v2 = kdebug_typefilter_typefilter;
    if ( !kdebug_typefilter_typefilter )
      return 1;
  }
  return ((*(unsigned __int8 *)(v2 + ((unsigned __int64)a1 >> 19)) >> (BYTE2(a1) & 7)) & 1) != 0;
}
