__int64 (__fastcall **__fastcall sub_3D1EF0(_QWORD *a1))()
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

  *a1 = &off_4E8E38;
  v2 = (unsigned __int64 *)a1[20];
  if ( !v2 )
    goto LABEL_6;
  v3 = *v2;
  if ( !a1[21] )
  {
    *v2 = *v2 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[20] + 8LL) = _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)a1[20],
                                   (__m128i)(unsigned __int64)a1[20]);
    *(_QWORD *)a1[20] &= ~1uLL;
    *(_QWORD *)a1[20] |= 2uLL;
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
      v2 = (unsigned __int64 *)a1[20];
      v3 = *v2;
      goto LABEL_36;
    }
LABEL_39:
    *v14 = v15 | 2;
    goto LABEL_33;
  }
LABEL_36:
  *v2 = v3 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[20] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[20], (__m128i)(unsigned __int64)a1[20]);
  *(_QWORD *)a1[20] &= ~1uLL;
  *(_QWORD *)a1[20] |= 2uLL;
  a1[21] = 0;
LABEL_4:
  if ( a1[20] )
    qfree();
LABEL_6:
  if ( a1[17] )
  {
    a1[18] = 0;
    qfree();
  }
  v4 = a1[14];
  if ( v4 )
  {
    v5 = a1[15];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v4 + 24 * i);
        if ( *v7 )
        {
          v7[1] = 0;
          qfree();
          v4 = a1[14];
        }
      }
    }
    a1[15] = 0;
    qfree();
  }
  v8 = a1[11];
  if ( v8 )
  {
    v9 = a1[12];
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
          v8 = a1[11];
        }
      }
    }
    a1[12] = 0;
    qfree();
  }
  if ( a1[8] )
  {
    sub_84290(a1[8]);
    j__qfree();
  }
  v12 = a1[2];
  result = &off_4E8E18;
  *a1 = &off_4E8E18;
  if ( v12 )
  {
    a1[3] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}
