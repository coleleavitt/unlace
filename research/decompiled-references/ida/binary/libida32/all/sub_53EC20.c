__int64 __fastcall sub_53EC20(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  unsigned __int64 v6; // r12
  const void *v7; // rbx
  void *v8; // rdi
  __int64 v9; // rax

  if ( a4 != 1 )
    return 0;
  copy_tinfo_t(a2);
  if ( a3 != (__int64 *)(a1 + 136) )
  {
    v6 = *(_QWORD *)(a1 + 144);
    if ( v6 > 1 )
    {
      v7 = *(const void **)(a1 + 136);
      v8 = (void *)*a3;
      if ( a3[2] < v6 )
      {
        v9 = qvector_reserve(a3, *a3, v6, 1);
        *a3 = v9;
        v8 = (void *)v9;
      }
      a3[1] = v6;
      memmove(v8, v7, v6 - 1);
      *(_BYTE *)(*a3 + v6 - 1) = 0;
    }
    else
    {
      a3[1] = 0;
    }
  }
  return 1;
}

