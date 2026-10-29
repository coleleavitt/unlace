__int64 __fastcall sub_7D2740(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 *v5; // rax
  __int64 *v6; // rbx
  unsigned __int64 v7; // r13
  char *v8; // rbp
  size_t v10; // rax
  size_t v11; // r12
  size_t v12; // r14
  __int64 v13; // rax

  v2 = sub_7D17D0(a1);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = v2;
  v5 = (__int64 *)sub_7D24C0(a2, v3);
  v6 = v5;
  if ( !v5 )
    return 0xFFFFFFFFLL;
  if ( qlgetz(v4, *(_QWORD *)(a1 + 72), *v5, v3) )
  {
    v7 = v6[1];
    v8 = (char *)*v6;
    if ( v7 && (v10 = strlen((const char *)*v6), (v11 = v10) != 0) )
    {
      v12 = v10 + 1;
      if ( v7 < v10 + 1 )
      {
        if ( v6[2] < v12 )
        {
          v13 = qvector_reserve(v6, v8, v10 + 1, 1);
          v7 = v6[1];
          *v6 = v13;
          v8 = (char *)v13;
        }
        memset(&v8[v7], 0, v12 - v7);
        v6[1] = v12;
        v8 = (char *)*v6;
      }
      else if ( v7 != v10 + 1 )
      {
        v6[1] = v12;
      }
      v8[v11] = 0;
    }
    else if ( v8 )
    {
      v6[1] = 0;
      qfree(v8);
      *v6 = 0;
      v6[2] = 0;
    }
  }
  else
  {
    free_idcv(a2);
  }
  return 0;
}
