unsigned __int64 sub_C70D0()
{
  __int64 i; // rbx
  const char *v2; // rbp
  char s1[4104]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v4; // [rsp+1028h] [rbp-30h]

  v4 = __readfsqword(0x28u);
  if ( dword_2515A4 )
  {
    sub_9E0A0();
    if ( (dword_24412C & 0x8000) != 0 )
    {
      if ( qword_2514A8 )
      {
        getinf_buf();
        for ( i = qword_251498; (int *)i != &dword_251488; i = std::_Rb_tree_increment() )
        {
          v2 = ::s1;
          if ( *(_QWORD *)(i + 48) )
            v2 = *(const char **)(i + 40);
          if ( strcasecmp(s1, v2) )
            sub_BF2C0(v2);
        }
        sub_BCA30(qword_251490);
        qword_251498 = (__int64)&dword_251488;
        qword_251490 = nullptr;
        qword_2514A0 = (__int64)&dword_251488;
        qword_2514A8 = 0;
      }
    }
  }
  return v4 - __readfsqword(0x28u);
}

