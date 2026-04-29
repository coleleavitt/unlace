void __fastcall sub_32D910(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rax

  v3 = *a1;
  if ( a2 )
  {
    v4 = a1[1];
    v5 = a2 + 1;
    if ( v4 < a2 + 1 )
    {
      if ( a1[2] < v5 )
      {
        v7 = qvector_reserve(a1, v3, v5, 1);
        *a1 = v7;
        v3 = v7;
        v4 = a1[1];
      }
      memset((void *)(v4 + v3), 0, v5 - v4);
      a1[1] = v5;
      v6 = *a1;
    }
    else
    {
      v6 = v3;
      if ( v5 != v4 )
        a1[1] = v5;
    }
    *(_BYTE *)(v6 + a2) = 0;
  }
  else if ( v3 )
  {
    a1[1] = 0;
    qfree(v3);
    *a1 = 0;
    a1[2] = 0;
  }
}
