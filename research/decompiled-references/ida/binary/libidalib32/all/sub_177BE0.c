void __fastcall sub_177BE0(__int64 a1, int a2, __int64 *a3)
{
  unsigned __int64 v4; // rbp
  const void *v5; // r13
  void *v6; // rdi
  __int64 v7; // rax

  if ( a3 )
  {
    if ( *(_BYTE *)(a1 + 72) )
    {
      if ( a3 != (__int64 *)(a1 + 24) )
      {
        v4 = *(_QWORD *)(a1 + 32);
        if ( v4 > 1 )
        {
          v5 = *(const void **)(a1 + 24);
          v6 = (void *)*a3;
          if ( a3[2] < v4 )
          {
            v7 = qvector_reserve();
            *a3 = v7;
            v6 = (void *)v7;
          }
          a3[1] = v4;
          memmove(v6, v5, v4 - 1);
          *(_BYTE *)(*a3 + v4 - 1) = 0;
        }
        else
        {
          a3[1] = 0;
        }
      }
    }
    else if ( (unsigned __int64)a2 < *(_QWORD *)(a1 + 8) )
    {
      sub_177840(*(_QWORD *)a1 + 48LL * a2, a3, ",");
    }
  }
}

