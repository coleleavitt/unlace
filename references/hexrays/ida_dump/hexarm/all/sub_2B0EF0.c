void __fastcall sub_2B0EF0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  const void *v4; // r13
  void *v5; // rdi
  __int64 v6; // rax

  if ( a1 != a2 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    if ( v3 > 1 )
    {
      v4 = *(const void **)a2;
      v5 = *(void **)a1;
      if ( *(_QWORD *)(a1 + 16) < v3 )
      {
        v6 = qvector_reserve(a1, v5, v3, 1);
        *(_QWORD *)a1 = v6;
        v5 = (void *)v6;
      }
      *(_QWORD *)(a1 + 8) = v3;
      memmove(v5, v4, v3 - 1);
      *(_BYTE *)(*(_QWORD *)a1 + v3 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
    }
  }
}
