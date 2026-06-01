__int64 __fastcall _pthread_terminate_invoke(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 v6; // [xsp-3000h] [xbp-3020h] BYREF
  __int64 vars0; // [xsp+20h] [xbp+0h] BYREF

  if ( (((unsigned __int64)&vars0 ^ a1) & -(__int64)vm_page_size) == 0 )
    __bzero(&v6, 0x3000u);
  v4 = _pthread_terminate(a1, a2);
  return _pthread_current_stack_address(v4);
}
