__int64 __fastcall sub_8513C0(__int64 a1, const char *a2)
{
  __int64 v2; // rbp
  void *v4; // rbx

  v2 = qword_2CD6F60;
  qmutex_lock(qword_2CD6F60);
  while ( (_QWORD)xmmword_2CD6F48 )
  {
    v4 = *(void **)(qword_2CD6F40 + 8 * xmmword_2CD6F48 - 8);
    if ( !v4 )
    {
      while ( 1 )
        ;
    }
    sub_851240(*(_QWORD *)(qword_2CD6F40 + 8 * xmmword_2CD6F48 - 8), a2);
    a2 = (_BYTE *)(elf_gnu_hash_bucket + 3008);
    operator delete(v4, 0x1668u);
  }
  return qmutex_unlock(v2);
}
