void __fastcall sub_5EE390(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // rbp
  _BYTE *v3; // rdi
  __int64 v4; // rax

  v2 = a2[1];
  v3 = (_BYTE *)*a2;
  if ( v2 > 1 )
  {
    if ( a2[2] < v2 + 1 )
    {
      v4 = qvector_reserve(a2, *a2, v2 + 1, 1);
      *a2 = v4;
      v3 = (_BYTE *)v4;
    }
    a2[1] = v2 + 1;
    v3[v2] = 0;
    *(_BYTE *)(*a2 + v2 - 1) = 59;
  }
  else
  {
    *a2 = 0;
    *(_OWORD *)(a2 + 1) = 0;
    if ( v3 )
      qfree(v3);
  }
}

