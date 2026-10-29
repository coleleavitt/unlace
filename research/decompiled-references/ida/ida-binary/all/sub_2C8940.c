__int64 __fastcall hv_hexplace_gen_t__::vfunc_7(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  const void *v4; // r13
  void *v5; // rdi
  __int64 v6; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( a2 != (__int64 *)(result + 1040) )
  {
    v3 = *(_QWORD *)(result + 1048);
    if ( v3 > 1 )
    {
      v4 = *(const void **)(result + 1040);
      v5 = (void *)*a2;
      if ( a2[2] < v3 )
      {
        v6 = qvector_reserve(a2, *a2, *(_QWORD *)(result + 1048), 1);
        *a2 = v6;
        v5 = (void *)v6;
      }
      a2[1] = v3;
      memmove(v5, v4, v3 - 1);
      result = *a2;
      *(_BYTE *)(*a2 + v3 - 1) = 0;
    }
    else
    {
      a2[1] = 0;
    }
  }
  return result;
}
