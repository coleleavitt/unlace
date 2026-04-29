void __fastcall sub_384680(_QWORD *a1)
{
  __int64 v2; // rdi
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 *v6; // r12
  __int64 v7; // rdx
  __int64 *v8; // r13
  __int64 v9; // rax
  __int64 *v10; // r13
  __int64 *v11; // rdi
  __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 *v14; // rdi
  __int64 *v15; // rdi

  if ( a1 )
  {
    v2 = a1[5];
    if ( v2 )
    {
      a1[6] = 0;
      qfree(v2);
    }
    v3 = (unsigned __int64 *)a1[3];
    if ( !v3 )
      goto LABEL_9;
    v4 = *v3;
    if ( !a1[4] )
    {
      *v3 = (unsigned __int64)v3 & 0xFFFFFFFFFFFFFFFCLL | *v3 & 3;
      *(__m128i *)(a1[3] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[3], (__m128i)(unsigned __int64)a1[3]);
      *(_QWORD *)a1[3] &= ~1uLL;
      *(_QWORD *)a1[3] |= 2uLL;
      goto LABEL_7;
    }
    v6 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
    v7 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v7 & 2) != 0 )
    {
LABEL_24:
      *v3 = (unsigned __int64)v3 & 0xFFFFFFFFFFFFFFFCLL | v4 & 3;
      *(__m128i *)(a1[3] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[3], (__m128i)(unsigned __int64)a1[3]);
      *(_QWORD *)a1[3] &= ~1uLL;
      *(_QWORD *)a1[3] |= 2uLL;
      a1[4] = 0;
LABEL_7:
      v5 = a1[3];
      if ( v5 )
        qfree(v5);
LABEL_9:
      operator delete(a1, 0x60u);
      return;
    }
    v8 = (__int64 *)v6[1];
    v9 = *v8;
    if ( (*v8 & 2) != 0 )
    {
      v10 = (__int64 *)v6[2];
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_33;
      goto LABEL_14;
    }
    v14 = (__int64 *)v8[1];
    if ( (*(_BYTE *)v14 & 2) != 0 )
    {
      v15 = (__int64 *)v8[2];
      if ( (*(_BYTE *)v15 & 2) != 0 )
      {
LABEL_35:
        *v8 = v9 | 2;
LABEL_29:
        if ( v8 )
          qfree(v8);
        v10 = (__int64 *)v6[2];
        if ( (*(_BYTE *)v10 & 2) != 0 )
        {
LABEL_20:
          v7 = *v6;
          if ( (*v6 & 2) != 0 )
          {
LABEL_21:
            if ( v4 > 3 )
              qfree(v4 & 0xFFFFFFFFFFFFFFFCLL);
            v3 = (unsigned __int64 *)a1[3];
            v4 = *v3;
            goto LABEL_24;
          }
LABEL_33:
          *v6 = v7 | 2;
          goto LABEL_21;
        }
LABEL_14:
        v11 = (__int64 *)v10[1];
        if ( (*(_BYTE *)v11 & 2) != 0 )
        {
          v12 = (__int64 *)v10[2];
          if ( (*(_BYTE *)v12 & 2) != 0 )
          {
            v13 = *v10;
LABEL_38:
            *v10 = v13 | 2;
LABEL_18:
            if ( v10 )
              qfree(v10);
            goto LABEL_20;
          }
        }
        else
        {
          sub_380450(v11);
          v12 = (__int64 *)v10[2];
          if ( (*(_BYTE *)v12 & 2) != 0 )
            goto LABEL_17;
        }
        sub_380450(v12);
LABEL_17:
        v13 = *v10;
        if ( (*v10 & 2) != 0 )
          goto LABEL_18;
        goto LABEL_38;
      }
    }
    else
    {
      sub_380450(v14);
      v15 = (__int64 *)v8[2];
      if ( (*(_BYTE *)v15 & 2) != 0 )
        goto LABEL_28;
    }
    sub_380450(v15);
LABEL_28:
    v9 = *v8;
    if ( (*v8 & 2) != 0 )
      goto LABEL_29;
    goto LABEL_35;
  }
}
