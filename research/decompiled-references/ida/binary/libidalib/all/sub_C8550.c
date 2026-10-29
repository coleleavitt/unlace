unsigned __int64 sub_C8550()
{
  __int64 i; // rbx
  const char *v2; // rbp
  char s1[4104]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v4; // [rsp+1028h] [rbp-30h]

  v4 = __readfsqword(0x28u);
  if ( dword_25274C )
  {
    sub_9E1E0();
    if ( (dword_245190 & 0x8000) != 0 )
    {
      if ( qword_252628 )
      {
        getinf_buf();
        for ( i = qword_252618; (int *)i != &dword_252608; i = std::_Rb_tree_increment() )
        {
          v2 = ::s1;
          if ( *(_QWORD *)(i + 48) )
            v2 = *(const char **)(i + 40);
          if ( strcasecmp(s1, v2) )
            sub_BF9A0(v2);
        }
        sub_BD0C0(qword_252610);
        qword_252618 = (__int64)&dword_252608;
        qword_252610 = nullptr;
        qword_252620 = (__int64)&dword_252608;
        qword_252628 = 0;
      }
    }
  }
  return v4 - __readfsqword(0x28u);
}

