unsigned __int64 __fastcall sub_382640(__int64 a1, __int64 *a2, _DWORD *a3, __int64 a4)
{
  size_t v4; // rbp
  void *v8; // r14
  void *v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v4 = *(_QWORD *)(a4 + 24);
  v11 = __readfsqword(0x28u);
  if ( v4 )
  {
    v8 = (void *)qalloc_or_throw(v4);
    memcpy(v8, *(const void **)(a4 + 16), v4);
    *a3 = 1;
    if ( v4 == 1 )
    {
      a2[1] = 0;
    }
    else
    {
      v9 = (void *)*a2;
      if ( a2[2] < v4 )
      {
        v10 = qvector_reserve(a2, *a2, v4, 1);
        *a2 = v10;
        v9 = (void *)v10;
      }
      a2[1] = v4;
      memmove(v9, v8, v4 - 1);
      *(_BYTE *)(*a2 + v4 - 1) = 0;
    }
    if ( v8 )
      qfree(v8);
  }
  else
  {
    *a3 = 1;
    a2[1] = 0;
  }
  return v11 - __readfsqword(0x28u);
}
