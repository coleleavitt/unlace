unsigned __int64 __fastcall sub_30D210(__int64 a1)
{
  __int64 v2; // rdi
  _BYTE v4[4]; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
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
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    check_process_exit(v2, v4, 0xFFFFFFFFLL);
    *(_QWORD *)(a1 + 24) = 0;
  }
  return v5 - __readfsqword(0x28u);
}
