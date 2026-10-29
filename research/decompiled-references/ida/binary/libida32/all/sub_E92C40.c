__int64 __fastcall sub_E92C40(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rbp
  const void *v6; // rax
  size_t v7; // rdx
  size_t v8; // r12
  void *v9; // rdi
  __int64 v10; // rdi

  v3 = (unsigned int *)(a2 + 20);
  sub_971800(*(_QWORD *)a1, "contains(");
  v4 = a2 + 20 + 4LL * *(unsigned int *)(a2 + 16);
  if ( v4 != a2 + 20 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)a1;
      v6 = (const void *)sub_20C6E30(*v3, *(unsigned int *)(a1 + 16));
      v8 = v7;
      v9 = *(void **)(v5 + 32);
      if ( *(_QWORD *)(v5 + 24) - (_QWORD)v9 < v7 )
      {
        ++v3;
        sub_22581D0(v5, v6, v7);
        v10 = *(_QWORD *)a1;
        if ( (unsigned int *)v4 == v3 )
          return sub_971800(v10, ")");
      }
      else
      {
        if ( v7 )
        {
          memcpy(v9, v6, v7);
          *(_QWORD *)(v5 + 32) += v8;
        }
        ++v3;
        v10 = *(_QWORD *)a1;
        if ( (unsigned int *)v4 == v3 )
          return sub_971800(v10, ")");
      }
      sub_971800(v10, ", ");
    }
  }
  v10 = *(_QWORD *)a1;
  return sub_971800(v10, ")");
}

