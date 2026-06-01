unsigned __int64 __fastcall sub_567F30(char **a1, const void *a2)
{
  size_t v3; // rax
  size_t v4; // r12
  void *v6; // rdi
  char *v7; // r13
  __int64 v8; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( (unsigned __int8)is_ident(a2) )
  {
    if ( a2 && (v3 = strlen((const char *)a2), (v4 = v3) != 0) )
    {
      v6 = *a1;
      v7 = (char *)(v3 + 1);
      if ( (unsigned __int64)a1[2] < v3 + 1 )
      {
        v8 = qvector_reserve(a1, *a1, v3 + 1, 1);
        *a1 = (char *)v8;
        v6 = (void *)v8;
      }
      a1[1] = v7;
      memmove(v6, a2, v4);
      (*a1)[v4] = 0;
    }
    else
    {
      a1[1] = nullptr;
    }
  }
  else
  {
    ptr = nullptr;
    v10 = 0;
    qstr2user(&ptr, a2, 0xFFFFFFFFLL);
    sub_3573A0(a1);
    if ( ptr )
    {
      *(_QWORD *)&v10 = 0;
      qfree(ptr);
    }
  }
  return v11 - __readfsqword(0x28u);
}

