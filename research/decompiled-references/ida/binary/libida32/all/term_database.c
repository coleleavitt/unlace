unsigned __int64 term_database()
{
  __int64 v0; // rbx
  __int64 v2; // rbp
  void *v3; // rdi
  char v4[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v5; // [rsp+1008h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v0 = qword_2CA15C0;
  qmutex_lock(qword_2CA15C0);
  if ( !byte_2CA15C9 && (unsigned __int8)sub_3E8690() )
  {
    byte_2CA15C9 = 1;
    v2 = qword_2CA1698;
    if ( !(unsigned __int8)is_database_flag(1) )
      flush_buffers();
    sub_4D36B0(v2, 0);
    if ( (unsigned __int8)netnode_inited() )
    {
      if ( *(_DWORD *)(v2 + 764) != -1 )
      {
        sub_6634C0(v2);
        sub_397B30(v2);
      }
      sub_3BB310(v2);
      get_root_filename(v4);
      nullsub_265(v4, 4096);
      sub_57E8B0(v2);
      *(_BYTE *)(v2 + 158) = 0;
    }
    v3 = *(void **)v2;
    if ( *(_QWORD *)v2 )
    {
      *(_QWORD *)(v2 + 8) = 0;
      qfree(v3);
      *(_QWORD *)v2 = 0;
      *(_QWORD *)(v2 + 16) = 0;
    }
    callui();
  }
  qmutex_unlock(v0);
  return v5 - __readfsqword(0x28u);
}

