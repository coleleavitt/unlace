void __fastcall sub_4FB9C(void **a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  const void *v3; // r12

  if ( a1 != (void **)a2 )
  {
    v2 = *(_QWORD *)(a2 + 8);
    if ( v2 < 2 )
    {
      a1[1] = nullptr;
    }
    else
    {
      v3 = *(const void **)a2;
      if ( (unsigned __int64)a1[2] < v2 )
        *a1 = (void *)qvector_reserve(a1, *a1, v2, 1);
      a1[1] = (void *)v2;
      memmove(*a1, v3, v2 - 1);
      *((char *)*a1 + v2 - 1) = 0;
    }
  }
}
