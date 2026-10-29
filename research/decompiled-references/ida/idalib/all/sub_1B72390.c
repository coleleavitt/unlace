unsigned __int16 *__fastcall sub_1B72390(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned int *v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8

  sub_18C81B0(*a1);
  v5 = sub_1B72070(a1, *(unsigned int **)(a2 + 16), 1u, a3, a4);
  if ( v5 == (unsigned int *)((char *)&dword_0 + 1) )
  {
    sub_190F620(*a1, a3);
    return (_WORD *)(&dword_0 + 1);
  }
  else
  {
    v6 = *a1;
    v7 = (unsigned __int64)v5 & 0xFFFFFFFFFFFFFFFELL;
    if ( !*(_DWORD *)(*a1 + 12632) && *(_QWORD *)(a2 + 16) == v7 )
    {
      sub_190F620(v6, a3);
      return sub_19A3E40(*a1, (unsigned __int16 *)a2, v9, v10, v11, a3, a4);
    }
    else
    {
      return (unsigned __int16 *)sub_190F410(
                                   v6,
                                   *(_DWORD *)(a2 + 24),
                                   v7,
                                   *(_DWORD *)(a2 + 28),
                                   *(_DWORD *)(a2 + 4),
                                   a3);
    }
  }
}
