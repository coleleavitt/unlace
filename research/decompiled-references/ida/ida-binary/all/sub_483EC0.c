void __fastcall sub_483EC0(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // rbp
  const void *v3; // r12
  void *v4; // rdi
  __int64 v5; // rax

  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 72) )
    {
      sub_4835F0((_QWORD *)a1, a2);
    }
    else
    {
      v2 = *(_QWORD *)(a1 + 56);
      if ( v2 > 1 && a2 != (__int64 *)(a1 + 48) )
      {
        v3 = *(const void **)(a1 + 48);
        v4 = (void *)*a2;
        if ( a2[2] < v2 )
        {
          v5 = qvector_reserve(a2, *a2, v2, 1);
          *a2 = v5;
          v4 = (void *)v5;
        }
        a2[1] = v2;
        memmove(v4, v3, v2 - 1);
        *(_BYTE *)(*a2 + v2 - 1) = 0;
      }
    }
  }
}
