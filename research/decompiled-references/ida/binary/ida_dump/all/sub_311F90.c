unsigned __int64 __fastcall sub_311F90(__int64 a1)
{
  unsigned __int64 v2; // [rsp+8h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 32) != -1 )
  {
    qpipe_close();
    *(_DWORD *)(a1 + 32) = -1;
  }
  if ( *(_DWORD *)(a1 + 36) != -1 )
  {
    qpipe_close();
    *(_DWORD *)(a1 + 36) = -1;
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    check_process_exit();
    *(_QWORD *)(a1 + 24) = 0;
  }
  return v2 - __readfsqword(0x28u);
}
