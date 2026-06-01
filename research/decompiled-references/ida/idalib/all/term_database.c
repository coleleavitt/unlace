unsigned __int64 term_database()
{
  __int64 v0; // rbx
  __int64 v2; // rbp
  void *v3; // rdi
  char v4[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v5; // [rsp+1008h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v0 = qword_2CCB4C0;
  qmutex_lock(qword_2CCB4C0);
  if ( !byte_2CCB4C9 && (unsigned __int8)sub_3FB5F0() )
  {
    byte_2CCB4C9 = 1;
    v2 = qword_2CCB598;
    if ( !(unsigned __int8)is_database_flag(1) )
      flush_buffers();
    sub_4EAF40(v2, 0);
    if ( (unsigned __int8)netnode_inited() )
    {
      if ( *(_DWORD *)(v2 + 932) != -1 )
      {
        sub_681C40(v2);
        sub_39C810(v2);
      }
      sub_3C0280(v2);
      get_root_filename(v4);
      nullsub_286(v4, 4096);
      sub_5981B0(v2);
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
