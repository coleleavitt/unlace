__int64 (__fastcall **__fastcall sub_3CDFC0(_QWORD *a1))()
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 j; // rbx
  __int64 *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 *v19; // r12
  __int64 v20; // rdx
  __int64 *v21; // rdi
  __int64 *v22; // rdi

  a1[2] = &off_4D5F38;
  v2 = (unsigned __int64 *)a1[22];
  if ( !v2 )
    goto LABEL_6;
  v3 = *v2;
  if ( !a1[23] )
  {
    *v2 = *v2 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[22] + 8LL) = _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)a1[22],
                                   (__m128i)(unsigned __int64)a1[22]);
    *(_QWORD *)a1[22] &= ~1uLL;
    *(_QWORD *)a1[22] |= 2uLL;
    goto LABEL_4;
  }
  v19 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  v20 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v20 & 2) == 0 )
  {
    v21 = (__int64 *)v19[1];
    if ( (*(_BYTE *)v21 & 2) != 0 )
    {
      v22 = (__int64 *)v19[2];
      if ( (*(_BYTE *)v22 & 2) != 0 )
        goto LABEL_39;
    }
    else
    {
      sub_3CB580(v21);
      v22 = (__int64 *)v19[2];
      if ( (*(_BYTE *)v22 & 2) != 0 )
        goto LABEL_32;
    }
    sub_3CB580(v22);
LABEL_32:
    v20 = *v19;
    if ( (*v19 & 2) != 0 )
    {
LABEL_33:
      if ( v3 > 3 )
        qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
      v2 = (unsigned __int64 *)a1[22];
      v3 = *v2;
      goto LABEL_36;
    }
LABEL_39:
    *v19 = v20 | 2;
    goto LABEL_33;
  }
LABEL_36:
  *v2 = v3 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[22] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[22], (__m128i)(unsigned __int64)a1[22]);
  *(_QWORD *)a1[22] &= ~1uLL;
  *(_QWORD *)a1[22] |= 2uLL;
  a1[23] = 0;
LABEL_4:
  v4 = a1[22];
  if ( v4 )
    qfree(v4);
LABEL_6:
  v5 = a1[19];
  if ( v5 )
  {
    a1[20] = 0;
    qfree(v5);
  }
  v6 = a1[16];
  if ( v6 )
  {
    v7 = a1[17];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (__int64 *)(v6 + 24 * i);
        v10 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v10);
          v6 = a1[16];
        }
      }
    }
    a1[17] = 0;
    qfree(v6);
  }
  v11 = a1[13];
  if ( v11 )
  {
    v12 = a1[14];
    if ( v12 )
    {
      for ( j = 0; j != v12; ++j )
      {
        v14 = *(__int64 **)(v11 + 8 * j);
        if ( v14 )
        {
          v15 = *v14;
          if ( *v14 )
          {
            v14[1] = 0;
            qfree(v15);
          }
          operator delete(v14, 0x38u);
          v11 = a1[13];
        }
      }
    }
    a1[14] = 0;
    qfree(v11);
  }
  v16 = a1[10];
  if ( v16 )
  {
    sub_80850(a1[10]);
    j__qfree(v16);
  }
  v17 = a1[4];
  result = &off_4D5F18;
  a1[2] = &off_4D5F18;
  if ( v17 )
  {
    a1[5] = 0;
    return (__int64 (__fastcall **)())qfree(v17);
  }
  return result;
}
