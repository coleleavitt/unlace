unsigned __int64 __fastcall sub_375590(__int64 *a1, __int64 a2)
{
  size_t v4; // rax
  size_t v5; // r12
  void *v6; // rdi
  size_t v7; // r13
  __int64 v8; // rax
  char v9[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v10; // [rsp+408h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( ea2str(v9, 1024, a2) )
  {
    v4 = strlen(v9);
    v5 = v4;
    if ( v4 )
    {
      v6 = (void *)*a1;
      v7 = v4 + 1;
      if ( a1[2] < v4 + 1 )
      {
        v8 = qvector_reserve(a1, *a1, v4 + 1, 1);
        *a1 = v8;
        v6 = (void *)v8;
      }
      a1[1] = v7;
      memmove(v6, v9, v5);
      *(_BYTE *)(*a1 + v5) = 0;
    }
    else
    {
      a1[1] = 0;
    }
  }
  return v10 - __readfsqword(0x28u);
}
