void __fastcall sub_13470(_QWORD *a1, const void **a2, const void **a3)
{
  const void **v5; // rdi
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r12
  const void *v8; // rbp
  void *v9; // rax
  const void *v10; // r14
  void *v11; // rax

  v5 = (const void **)(a1 + 15);
  if ( v5 != a2 )
  {
    v6 = (unsigned __int64)a2[1];
    if ( v6 > 1 )
    {
      v10 = *a2;
      v11 = (void *)a1[15];
      if ( a1[17] < v6 )
      {
        v11 = (void *)sub_29E60(v5, a1[15], a2[1], 1);
        a1[15] = v11;
      }
      a1[16] = v6;
      memmove(v11, v10, v6 - 1);
      *(_BYTE *)(a1[15] + v6 - 1) = 0;
    }
    else
    {
      a1[16] = 0;
    }
  }
  if ( a1 + 18 != a3 )
  {
    v7 = (unsigned __int64)a3[1];
    if ( v7 > 1 )
    {
      v8 = *a3;
      v9 = (void *)a1[18];
      if ( a1[20] < v7 )
      {
        v9 = (void *)sub_29E60(a1 + 18, a1[18], v7, 1);
        a1[18] = v9;
      }
      a1[19] = v7;
      memmove(v9, v8, v7 - 1);
      *(_BYTE *)(a1[18] + v7 - 1) = 0;
    }
    else
    {
      a1[19] = 0;
    }
  }
}

