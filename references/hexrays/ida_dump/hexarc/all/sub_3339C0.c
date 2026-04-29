void __fastcall sub_3339C0(unsigned __int64 **a1)
{
  unsigned __int64 *v2; // rdx
  unsigned __int64 *v3; // r12
  unsigned __int64 *i; // rbx
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rdx
  __int64 *v11; // r13
  __int64 v12; // rax
  __int64 *v13; // rdi
  __int64 *v14; // rdi
  __int64 *v15; // rdi

  v2 = a1[4];
  if ( v2 )
  {
    v3 = a1[5];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; i = (unsigned __int64 *)((char *)i + 1) )
      {
        v5 = &v2[3 * (_QWORD)i];
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v6);
          v2 = a1[4];
        }
      }
    }
    a1[5] = nullptr;
    qfree(v2);
  }
  v7 = *a1;
  if ( *a1 )
  {
    v8 = *v7;
    if ( !a1[1] )
    {
      *v7 = *v7 & 3 | (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      **a1 &= ~1uLL;
      **a1 |= 2u;
      goto LABEL_11;
    }
    v9 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
    v10 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v10 & 2) != 0 )
    {
LABEL_28:
      *v7 = v8 & 3 | (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      **a1 &= ~1uLL;
      **a1 |= 2u;
      a1[1] = nullptr;
LABEL_11:
      if ( *a1 )
        qfree(*a1);
      goto LABEL_13;
    }
    v11 = (__int64 *)v9[1];
    v12 = *v11;
    if ( (*v11 & 2) != 0 )
    {
      v15 = (__int64 *)v9[2];
      if ( (*(_BYTE *)v15 & 2) != 0 )
        goto LABEL_30;
      goto LABEL_23;
    }
    v13 = (__int64 *)v11[1];
    if ( (*(_BYTE *)v13 & 2) != 0 )
    {
      v14 = (__int64 *)v11[2];
      if ( (*(_BYTE *)v14 & 2) != 0 )
      {
LABEL_32:
        *v11 = v12 | 2;
LABEL_20:
        if ( v11 )
          qfree(v11);
        v15 = (__int64 *)v9[2];
        if ( (*(_BYTE *)v15 & 2) != 0 )
        {
LABEL_24:
          v10 = *v9;
          if ( (*v9 & 2) != 0 )
          {
LABEL_25:
            if ( v8 > 3 )
              qfree(v8 & 0xFFFFFFFFFFFFFFFCLL);
            v7 = *a1;
            v8 = **a1;
            goto LABEL_28;
          }
LABEL_30:
          *v9 = v10 | 2;
          goto LABEL_25;
        }
LABEL_23:
        sub_332F70(v15);
        goto LABEL_24;
      }
    }
    else
    {
      sub_332F70(v13);
      v14 = (__int64 *)v11[2];
      if ( (*(_BYTE *)v14 & 2) != 0 )
        goto LABEL_19;
    }
    sub_332F70(v14);
LABEL_19:
    v12 = *v11;
    if ( (*v11 & 2) != 0 )
      goto LABEL_20;
    goto LABEL_32;
  }
LABEL_13:
  operator delete(a1, 0x120u);
}
