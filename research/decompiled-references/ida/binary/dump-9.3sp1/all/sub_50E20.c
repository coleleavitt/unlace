void __fastcall sub_50E20(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  const void *v3; // r12

  if ( a1 != (__int64 *)a2 )
  {
    v2 = *(_QWORD *)(a2 + 8);
    if ( v2 < 2 )
    {
      a1[1] = 0;
    }
    else
    {
      v3 = *(const void **)a2;
      if ( a1[2] < v2 )
        *a1 = qvector_reserve((__int64)a1, *a1, v2, 1);
      a1[1] = v2;
      memmove((void *)*a1, v3, v2 - 1);
      *(_BYTE *)(*a1 + v2 - 1) = 0;
    }
  }
}
