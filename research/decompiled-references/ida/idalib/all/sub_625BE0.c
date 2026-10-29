__int64 __fastcall sub_625BE0(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  __int64 *v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v7; // rax

  v1 = sub_3BDE50(*(_QWORD **)(a1[1] + 1672LL), a1[3]);
  if ( v1 < a1[14] || v1 >= a1[15] )
  {
    v2 = (__int64 *)a1[13];
    v3 = v2[1];
    v4 = *v2;
    if ( v2[2] < (unsigned __int64)(v3 + 1) )
    {
      v7 = qvector_reserve(a1[13], v4, v3 + 1, 24);
      v3 = v2[1];
      *v2 = v7;
      v4 = v7;
    }
    v5 = v4 + 24 * v3;
    *(_QWORD *)v5 = 0;
    *(_OWORD *)(v5 + 8) = 0;
    ++v2[1];
    sub_35A790((char **)v5);
  }
  return 0;
}
