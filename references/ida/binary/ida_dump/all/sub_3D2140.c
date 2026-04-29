__int64 (__fastcall **__fastcall sub_3D2140(_QWORD *a1))()
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 j; // rbx
  _QWORD *v11; // r12
  __int64 v12; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 *v14; // r12
  __int64 v15; // rdx
  __int64 *v16; // rdi
  __int64 *v17; // rdi

  a1[2] = &off_4E8E38;
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
  v14 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  v15 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v15 & 2) == 0 )
  {
    v16 = (__int64 *)v14[1];
    if ( (*(_BYTE *)v16 & 2) != 0 )
    {
      v17 = (__int64 *)v14[2];
      if ( (*(_BYTE *)v17 & 2) != 0 )
        goto LABEL_39;
    }
    else
    {
      sub_3CF700(v16);
      v17 = (__int64 *)v14[2];
      if ( (*(_BYTE *)v17 & 2) != 0 )
        goto LABEL_32;
    }
    sub_3CF700(v17);
LABEL_32:
    v15 = *v14;
    if ( (*v14 & 2) != 0 )
    {
LABEL_33:
      if ( v3 > 3 )
        qfree();
      v2 = (unsigned __int64 *)a1[22];
      v3 = *v2;
      goto LABEL_36;
    }
LABEL_39:
    *v14 = v15 | 2;
    goto LABEL_33;
  }
LABEL_36:
  *v2 = v3 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[22] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[22], (__m128i)(unsigned __int64)a1[22]);
  *(_QWORD *)a1[22] &= ~1uLL;
  *(_QWORD *)a1[22] |= 2uLL;
  a1[23] = 0;
LABEL_4:
  if ( a1[22] )
    qfree();
LABEL_6:
  if ( a1[19] )
  {
    a1[20] = 0;
    qfree();
  }
  v4 = a1[16];
  if ( v4 )
  {
    v5 = a1[17];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v4 + 24 * i);
        if ( *v7 )
        {
          v7[1] = 0;
          qfree();
          v4 = a1[16];
        }
      }
    }
    a1[17] = 0;
    qfree();
  }
  v8 = a1[13];
  if ( v8 )
  {
    v9 = a1[14];
    if ( v9 )
    {
      for ( j = 0; j != v9; ++j )
      {
        v11 = *(_QWORD **)(v8 + 8 * j);
        if ( v11 )
        {
          if ( *v11 )
          {
            v11[1] = 0;
            qfree();
          }
          operator delete(v11, 0x38u);
          v8 = a1[13];
        }
      }
    }
    a1[14] = 0;
    qfree();
  }
  if ( a1[10] )
  {
    sub_84290(a1[10]);
    j__qfree();
  }
  v12 = a1[4];
  result = &off_4E8E18;
  a1[2] = &off_4E8E18;
  if ( v12 )
  {
    a1[5] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}
