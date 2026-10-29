unsigned __int64 __fastcall sub_87C2C0(char **a1, int a2)
{
  size_t v3; // rax
  size_t v4; // rbp
  void *v6; // rdi
  char *v7; // r13
  __int64 v8; // rax
  char v9[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v10; // [rsp+408h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( (unsigned int)sub_8431E0(a2, (__int64)v9, 1024) )
  {
    v3 = strlen(v9);
    v4 = v3;
    if ( v3 )
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
      memmove(v6, v9, v4);
      (*a1)[v4] = 0;
    }
    else
    {
      a1[1] = nullptr;
    }
  }
  else
  {
    sub_3573A0(a1);
  }
  return v10 - __readfsqword(0x28u);
}

