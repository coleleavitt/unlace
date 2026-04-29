void __fastcall sub_C840(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rax

  v7 = *a1;
  if ( a2 )
  {
    v8 = a1[1];
    v9 = a2 + 1;
    if ( v8 < a2 + 1 )
    {
      if ( a1[2] < v9 )
      {
        v11 = qvector_reserve(a1, v7, v9, 1, a5, a6);
        *a1 = v11;
        v7 = v11;
        v8 = a1[1];
      }
      memset((void *)(v8 + v7), 0, v9 - v8);
      a1[1] = v9;
      v10 = *a1;
    }
    else
    {
      v10 = v7;
      if ( v9 != v8 )
        a1[1] = v9;
    }
    *(_BYTE *)(v10 + a2) = 0;
  }
  else if ( v7 )
  {
    a1[1] = 0;
    qfree(v7);
    *a1 = 0;
    a1[2] = 0;
  }
}
