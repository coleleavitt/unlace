bool __fastcall dyld4::SyscallDelegate::kernelDyldImageInfoAddress(
        dyld4::SyscallDelegate *this,
        void **a2,
        unsigned __int64 *a3)
{
  kern_return_t v5; // w0
  unsigned __int64 v6; // x9
  mach_msg_type_number_t task_info_outCnt; // [xsp+4h] [xbp-2Ch] BYREF
  integer_t task_info_out[2]; // [xsp+8h] [xbp-28h] BYREF
  unsigned __int64 v10; // [xsp+10h] [xbp-20h]

  task_info_outCnt = 5;
  v5 = task_info(mach_task_self_, 0x11u, task_info_out, &task_info_outCnt);
  if ( !v5 )
  {
    v6 = v10;
    *a2 = *(void **)task_info_out;
    *a3 = v6;
  }
  return v5 == 0;
}
