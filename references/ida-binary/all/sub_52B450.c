void __fastcall sub_52B450(_QWORD *a1, const void **a2)
{
  const void **v3; // rdi
  unsigned __int64 v4; // rbp
  const void *v5; // r13
  void *v6; // rax

  v3 = (const void **)(a1 + 9);
  if ( v3 != a2 )
  {
    v4 = (unsigned __int64)a2[1];
    if ( v4 > 1 )
    {
      v5 = *a2;
      v6 = (void *)a1[9];
      if ( a1[11] < v4 )
      {
        v6 = (void *)qvector_reserve(v3, a1[9], a2[1], 1);
        a1[9] = v6;
      }
      a1[10] = v4;
      memmove(v6, v5, v4 - 1);
      *(_BYTE *)(a1[9] + v4 - 1) = 0;
    }
    else
    {
      a1[10] = 0;
    }
  }
}
