__int64 sub_326A40()
{
  size_t v0; // rax
  size_t v1; // r13
  size_t v2; // r12
  unsigned int v3; // ebx
  char *s; // [rsp+0h] [rbp-58h]
  void *v6; // [rsp+10h] [rbp-48h] BYREF
  __int128 v7; // [rsp+18h] [rbp-40h]
  unsigned __int64 v8; // [rsp+28h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  if ( (int)get_named_type() <= 0 )
  {
    return 0;
  }
  else
  {
    v6 = nullptr;
    v7 = 0;
    if ( s )
    {
      v0 = strlen(s);
      v1 = v0 + 1;
      v2 = v0;
      v6 = (void *)qvector_reserve((__int64)&v6, 0, v0 + 1, 1);
      *(_QWORD *)&v7 = v1;
      memmove(v6, s, v2);
      *((_BYTE *)v6 + v2) = 0;
    }
    v3 = deserialize_tinfo();
    if ( v6 )
    {
      *(_QWORD *)&v7 = 0;
      qfree((__int64)v6);
    }
  }
  return v3;
}
