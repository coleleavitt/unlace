__int64 __fastcall sub_5E0650(__int64 a1)
{
  __int64 v1; // rbx
  const char *v3; // rbx
  size_t v4; // rax
  __int64 v5; // rdx
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v7; // [rsp+8h] [rbp-20h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  ptr = nullptr;
  v7 = 0;
  v1 = 3;
  if ( (unsigned __int8)sub_727C20(&ptr, a1) )
  {
    v3 = haystack;
    if ( (_QWORD)v7 )
      v3 = (const char *)ptr;
    if ( v3 )
    {
      v4 = strlen(v3);
      v5 = 16;
      if ( v4 <= 0x10 )
        v5 = v4;
      setinf_buf(53, v3, v5);
    }
    v1 = 0;
  }
  if ( ptr )
  {
    *(_QWORD *)&v7 = 0;
    qfree(ptr);
  }
  return v1;
}

