__int64 __fastcall sub_326E00(__int64 a1, __int64 a2)
{
  char *v2; // rbx
  size_t v3; // rax
  size_t v4; // r13
  size_t v5; // r12
  unsigned int v6; // ebx
  char *s; // [rsp+0h] [rbp-58h] BYREF
  char *v9; // [rsp+8h] [rbp-50h] BYREF
  void *v10; // [rsp+10h] [rbp-48h] BYREF
  __int128 v11; // [rsp+18h] [rbp-40h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( (int)get_named_type(0, a2, 2, &s, 0, 0, 0, 0, 0) <= 0 )
  {
    return 0;
  }
  else
  {
    v2 = s;
    v10 = nullptr;
    v11 = 0;
    if ( s )
    {
      v3 = strlen(s);
      v4 = v3 + 1;
      v5 = v3;
      v10 = (void *)qvector_reserve(&v10, 0, v3 + 1, 1);
      *(_QWORD *)&v11 = v4;
      memmove(v10, v2, v5);
      *((_BYTE *)v10 + v5) = 0;
      v2 = (char *)v10;
    }
    v9 = v2;
    v6 = deserialize_tinfo(a1, 0, &v9, 0, 0, 0);
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree(v10);
    }
  }
  return v6;
}
