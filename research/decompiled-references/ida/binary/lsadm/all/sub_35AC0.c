void __fastcall sub_35AC0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rbx
  void *v7; // rax
  void *v8; // rax
  void *v9; // rax
  size_t nb; // [rsp+8h] [rbp-40h]
  size_t na; // [rsp+8h] [rbp-40h]
  size_t n; // [rsp+8h] [rbp-40h]

  if ( *(_QWORD *)(a1 + 16) < a2 )
    *(_QWORD *)a1 = sub_29E60(a1, *(void **)a1, a2, 0x58u);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 < a2 )
  {
    v5 = 88 * v4;
    do
    {
      v6 = v5 + *(_QWORD *)a1;
      *(_QWORD *)v6 = 0;
      *(_OWORD *)(v6 + 8) = 0;
      if ( *(_QWORD *)(a3 + 8) )
      {
        nb = *(_QWORD *)(a3 + 8);
        v7 = sub_29E10(nb);
        *(_QWORD *)v6 = v7;
        *(_QWORD *)(v6 + 16) = nb;
        memcpy(v7, *(const void **)a3, nb);
        *(_QWORD *)(v6 + 8) = nb;
      }
      *(_QWORD *)(v6 + 24) = 0;
      *(_OWORD *)(v6 + 32) = 0;
      if ( *(_QWORD *)(a3 + 32) )
      {
        n = *(_QWORD *)(a3 + 32);
        v9 = sub_29E10(n);
        *(_QWORD *)(v6 + 24) = v9;
        *(_QWORD *)(v6 + 40) = n;
        memcpy(v9, *(const void **)(a3 + 24), n);
        *(_QWORD *)(v6 + 32) = n;
      }
      *(_QWORD *)(v6 + 48) = 0;
      *(_OWORD *)(v6 + 56) = 0;
      if ( *(_QWORD *)(a3 + 56) )
      {
        na = *(_QWORD *)(a3 + 56);
        v8 = sub_29E10(na);
        *(_QWORD *)(v6 + 48) = v8;
        *(_QWORD *)(v6 + 64) = na;
        memcpy(v8, *(const void **)(a3 + 48), na);
        *(_QWORD *)(v6 + 56) = na;
      }
      ++v4;
      v5 += 88;
      *(_QWORD *)(v6 + 72) = *(_QWORD *)(a3 + 72);
      *(_QWORD *)(v6 + 80) = *(_QWORD *)(a3 + 80);
    }
    while ( a2 != v4 );
  }
  *(_QWORD *)(a1 + 8) = a2;
}

