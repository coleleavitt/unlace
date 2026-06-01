unsigned __int64 __fastcall sub_3E3770(__int64 *a1, const void *a2, char a3, double a4)
{
  unsigned __int64 v6; // r12
  size_t v7; // rax
  size_t v8; // r12
  void *v10; // rdi
  size_t v11; // r14
  const void *v12; // r15
  void *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax

  v6 = a1[1];
  if ( v6 > 1 )
  {
    v12 = (const void *)*a1;
    v13 = (void *)a1[3];
    if ( a1[5] < v6 )
    {
      v15 = qvector_reserve(a1 + 3, v13, v6, 1);
      a1[3] = v15;
      v13 = (void *)v15;
    }
    a1[4] = v6;
    memmove(v13, v12, v6 - 1);
    *(_BYTE *)(a1[3] + v6 - 1) = 0;
  }
  else
  {
    a1[4] = 0;
  }
  if ( a2 && (v7 = strlen((const char *)a2), (v8 = v7) != 0) )
  {
    v10 = (void *)*a1;
    v11 = v7 + 1;
    if ( a1[2] < v7 + 1 )
    {
      v14 = qvector_reserve(a1, *a1, v7 + 1, 1);
      *a1 = v14;
      v10 = (void *)v14;
    }
    a1[1] = v11;
    memmove(v10, a2, v8);
    *(_BYTE *)(*a1 + v8) = 0;
  }
  else
  {
    a1[1] = 0;
  }
  return sub_3E3410((__int64)a1, a3, a4);
}
