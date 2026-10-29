__int64 __fastcall __Block_byref_object_dispose__77(__int64 result)
{
  vm_address_t v1; // x1
  _QWORD *v2; // x19

  v2 = (_QWORD *)(result + 40);
  v1 = *(_QWORD *)(result + 40);
  if ( v1 )
  {
    result = vm_deallocate(mach_task_self_, v1, *(_QWORD *)(result + 48));
    v2[1] = 0;
    v2[2] = 0;
    *v2 = 0;
  }
  return result;
}
