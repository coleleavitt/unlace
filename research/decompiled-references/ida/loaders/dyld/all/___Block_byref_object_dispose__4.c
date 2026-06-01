__int64 __fastcall __Block_byref_object_dispose__4(__int64 result)
{
  _QWORD *v1; // x19
  vm_address_t v2; // x1
  vm_address_t v3; // x1
  vm_map_t v4; // w0
  vm_size_t v5; // x2
  __int64 _18; // [xsp+18h] [xbp+8h]

  v1 = (_QWORD *)result;
  *(_QWORD *)(result + 112) = 0;
  v2 = *(_QWORD *)(result + 120);
  if ( v2 )
    result = vm_deallocate(mach_task_self_, v2, *(_QWORD *)(result + 128));
  v1[9] = 0;
  v3 = v1[10];
  if ( v3 )
  {
    v4 = mach_task_self_;
    v5 = v1[11];
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return vm_deallocate(v4, v3, v5);
  }
  return result;
}
