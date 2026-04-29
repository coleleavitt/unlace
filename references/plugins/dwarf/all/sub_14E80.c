__int64 __fastcall sub_14E80(__int64 a1, __int64 *a2, const void *a3)
{
  size_t v4; // rax
  size_t v5; // r12
  void *v7; // rdi
  size_t v8; // r13
  __int64 v9; // rax

  if ( a3 && (v4 = strlen((const char *)a3), (v5 = v4) != 0) )
  {
    v7 = (void *)*a2;
    v8 = v4 + 1;
    if ( a2[2] < v4 + 1 )
    {
      v9 = qvector_reserve(a2, *a2, v4 + 1, 1);
      *a2 = v9;
      v7 = (void *)v9;
    }
    a2[1] = v8;
    memmove(v7, a3, v5);
    *(_BYTE *)(*a2 + v5) = 0;
    return 0;
  }
  else
  {
    a2[1] = 0;
    return 0;
  }
}
