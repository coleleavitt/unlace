__int64 __fastcall _os_semaphore_dispose(semaphore_t semaphore)
{
  __int64 result; // x0

  result = semaphore_destroy(mach_task_self_, semaphore);
  if ( (_DWORD)result )
    _os_semaphore_dispose_cold_1();
  return result;
}
