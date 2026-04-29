_QWORD *__fastcall __Block_byref_object_dispose__13(_QWORD *result)
{
  vm_address_t v1; // x1

  result[10] = 0;
  v1 = result[11];
  if ( v1 )
    return (_QWORD *)vm_deallocate(mach_task_self_, v1, result[12]);
  return result;
}
