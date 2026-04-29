unsigned __int64 *__fastcall sub_7D650(unsigned __int64 **a1)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 *v3; // r13
  unsigned __int64 *i; // rbp
  unsigned __int64 *v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  unsigned __int64 *result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; i = (unsigned __int64 *)((char *)i + 1) )
      {
        v5 = &v2[12 * (_QWORD)i];
        v6 = v5[7];
        if ( v6 )
        {
          v5[8] = 0;
          qfree(v6);
        }
        clear_tinfo_t(v5 + 6);
        v7 = v5[3];
        if ( v7 )
        {
          v5[4] = 0;
          qfree(v7);
        }
        cleanup_argloc(v5);
        v2 = *a1;
      }
    }
    a1[1] = nullptr;
    qfree(v2);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
  result = sub_7D550(a1 + 3);
  a1[5] = nullptr;
  *((_DWORD *)a1 + 12) = 1;
  return result;
}
