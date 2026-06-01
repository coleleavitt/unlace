void __fastcall sub_21015A0(__m128 *a1)
{
  _QWORD *v2; // r12
  __int64 v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 i; // r15
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  _QWORD *v15; // r14
  void (__fastcall *v16)(_QWORD *); // rcx
  _QWORD *v17; // r14
  __int64 v18; // r15
  unsigned __int64 v19; // rbp
  unsigned __int64 k; // rbx
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  _QWORD *v25; // r15
  void (__fastcall *v26)(_QWORD *); // rdx
  _QWORD *v27; // [rsp+8h] [rbp-40h]
  _QWORD *j; // [rsp+8h] [rbp-40h]

  v2 = (_QWORD *)a1[1].m128_u64[0];
  v3 = a1[1].m128_u32[2];
  v27 = &v2[v3];
  if ( v27 != v2 )
  {
    v4 = v2;
    while ( 1 )
    {
      v5 = *v2;
      v6 = (unsigned int)(v2 - v4) >> 7;
      v7 = 4096LL << v6;
      if ( v6 >= 0x1E )
        v7 = 0x40000000000LL;
      v8 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v9 = v5 + v7;
      if ( v5 == v4[v3 - 1] )
        v9 = a1->m128_u64[0];
      for ( i = v8 + 312; v9 >= i; i += 312LL )
      {
        while ( 1 )
        {
          v15 = (_QWORD *)(i - 312);
          v16 = **(void (__fastcall ***)(_QWORD *))(i - 312);
          if ( v16 == sub_1544200 )
            break;
          i += 312LL;
          v16(v15);
          if ( v9 < i )
            goto LABEL_20;
        }
        v11 = *(void **)(i - 32);
        *(_QWORD *)(i - 312) = &off_2BE9230;
        if ( v11 != (void *)(i - 16) )
          operator delete(v11);
        v12 = (void *)v15[12];
        if ( v12 != (void *)(i - 200) )
          operator delete(v12);
        v13 = (void *)v15[8];
        if ( v13 != (void *)(i - 232) )
          operator delete(v13);
        v14 = (void *)v15[1];
        if ( v14 != (void *)(i - 288) )
          operator delete(v14);
      }
LABEL_20:
      if ( v27 == ++v2 )
        break;
      v4 = (_QWORD *)a1[1].m128_u64[0];
      v3 = a1[1].m128_u32[2];
    }
  }
  v17 = (_QWORD *)a1[4].m128_u64[0];
  v18 = 2LL * a1[4].m128_u32[2];
  for ( j = &v17[v18]; j != v17; v17 += 2 )
  {
    v19 = *v17 + v17[1];
    for ( k = ((*v17 + 7LL) & 0xFFFFFFFFFFFFFFF8LL) + 312; v19 >= k; k += 312LL )
    {
      while ( 1 )
      {
        v25 = (_QWORD *)(k - 312);
        v26 = **(void (__fastcall ***)(_QWORD *))(k - 312);
        if ( v26 == sub_1544200 )
          break;
        k += 312LL;
        v26(v25);
        if ( v19 < k )
          goto LABEL_36;
      }
      v21 = *(void **)(k - 32);
      *(_QWORD *)(k - 312) = &off_2BE9230;
      if ( v21 != (void *)(k - 16) )
        operator delete(v21);
      v22 = (void *)v25[12];
      if ( v22 != (void *)(k - 200) )
        operator delete(v22);
      v23 = (void *)v25[8];
      if ( v23 != (void *)(k - 232) )
        operator delete(v23);
      v24 = (void *)v25[1];
      if ( v24 != (void *)(k - 288) )
        operator delete(v24);
    }
LABEL_36:
    ;
  }
  sub_A24B10(a1);
}
