/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C4214
// Address: 0x00000000000C4214

//----- (00000000000C4214) ----------------------------------------------------
void __fastcall sub_C4214(__int64 a1)
{
  pthread_mutex_t ptr; // [xsp+0h] [xbp-40h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_BYTE *)(a1 + 28) && *(_QWORD *)(a1 + 8) )
  {
    memset(&ptr, 0, 24);
    sub_C5BA4((__int64 *)a1, &ptr);
    add_undo_record();
    *(_QWORD *)(a1 + 8) = 0;
    if ( ptr.__align )
    {
      *(&ptr.__align + 1) = 0;
      qfree((void *)ptr.__align);
    }
  }
}
