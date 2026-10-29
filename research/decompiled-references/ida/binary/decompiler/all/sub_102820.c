__int64 __fastcall sub_102820(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // rbp
  unsigned __int64 **v5; // r12
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r15
  __int64 *v9; // rdi
  __int64 *v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rbp
  unsigned __int64 **v14; // r12
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r15
  __int64 *v18; // rdi
  __int64 *v19; // rdi
  __int64 v20; // r12
  __int64 i; // rbp
  __int64 v22; // r12
  __int64 j; // rbp

  if ( *(_DWORD *)(a1 + 600) )
  {
    if ( !under_debugger )
      sub_37EA20(50444);
LABEL_66:
    BUG();
  }
  v2 = *(_QWORD *)(a1 + 576);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 584);
    if ( v3 )
    {
      v4 = 0;
      while ( 1 )
      {
        v5 = (unsigned __int64 **)(v2 + 24 * v4);
        v6 = *v5;
        if ( *v5 )
          break;
LABEL_18:
        if ( v3 == ++v4 )
          goto LABEL_19;
      }
      v7 = *v6;
      if ( !v5[1] )
      {
        *v6 = *v6 & 3 | (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v5 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v5, (__m128i)(unsigned __int64)*v5);
        **v5 &= ~1uLL;
        **v5 |= 2u;
        goto LABEL_15;
      }
      v8 = v7 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      {
LABEL_14:
        *v6 = v7 & 3 | (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v5 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v5, (__m128i)(unsigned __int64)*v5);
        **v5 &= ~1uLL;
        **v5 |= 2u;
        v5[1] = 0;
LABEL_15:
        if ( *v5 )
          qfree();
        v2 = *(_QWORD *)(a1 + 576);
        goto LABEL_18;
      }
      v9 = *(__int64 **)(v8 + 8);
      if ( (*(_BYTE *)v9 & 2) != 0 )
      {
        v10 = *(__int64 **)(v8 + 16);
        if ( (*(_BYTE *)v10 & 2) != 0 )
          goto LABEL_52;
      }
      else
      {
        sub_1009B0(v9);
        v10 = *(__int64 **)(v8 + 16);
        if ( (*(_BYTE *)v10 & 2) != 0 )
        {
          if ( (*(_BYTE *)v8 & 2) != 0 )
          {
LABEL_11:
            if ( v7 > 3 )
              qfree();
            v6 = *v5;
            v7 = **v5;
            goto LABEL_14;
          }
LABEL_52:
          if ( *(_QWORD *)(v8 + 24) )
          {
            *(_QWORD *)(v8 + 32) = 0;
            qfree();
          }
          *(_QWORD *)v8 |= 2uLL;
          goto LABEL_11;
        }
      }
      sub_1009B0(v10);
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_11;
      goto LABEL_52;
    }
LABEL_19:
    *(_QWORD *)(a1 + 584) = 0;
    qfree();
  }
  if ( *(_DWORD *)(a1 + 568) )
  {
    if ( !under_debugger )
      sub_37EA20(50444);
    goto LABEL_66;
  }
  v11 = *(_QWORD *)(a1 + 544);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 552);
    if ( v12 )
    {
      v13 = 0;
      while ( 1 )
      {
        v14 = (unsigned __int64 **)(v11 + 24 * v13);
        v15 = *v14;
        if ( *v14 )
          break;
LABEL_37:
        if ( v12 == ++v13 )
          goto LABEL_38;
      }
      v16 = *v15;
      if ( !v14[1] )
      {
        *v15 = *v15 & 3 | (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v14 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v14, (__m128i)(unsigned __int64)*v14);
        **v14 &= ~1uLL;
        **v14 |= 2u;
        goto LABEL_34;
      }
      v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)(v16 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      {
LABEL_33:
        *v15 = v16 & 3 | (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v14 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v14, (__m128i)(unsigned __int64)*v14);
        **v14 &= ~1uLL;
        **v14 |= 2u;
        v14[1] = 0;
LABEL_34:
        if ( *v14 )
          qfree();
        v11 = *(_QWORD *)(a1 + 544);
        goto LABEL_37;
      }
      v18 = *(__int64 **)(v17 + 8);
      if ( (*(_BYTE *)v18 & 2) != 0 )
      {
        v19 = *(__int64 **)(v17 + 16);
        if ( (*(_BYTE *)v19 & 2) != 0 )
          goto LABEL_57;
      }
      else
      {
        sub_1009B0(v18);
        v19 = *(__int64 **)(v17 + 16);
        if ( (*(_BYTE *)v19 & 2) != 0 )
        {
          if ( (*(_BYTE *)v17 & 2) != 0 )
          {
LABEL_30:
            if ( v16 > 3 )
              qfree();
            v15 = *v14;
            v16 = **v14;
            goto LABEL_33;
          }
LABEL_57:
          if ( *(_QWORD *)(v17 + 24) )
          {
            *(_QWORD *)(v17 + 32) = 0;
            qfree();
          }
          *(_QWORD *)v17 |= 2uLL;
          goto LABEL_30;
        }
      }
      sub_1009B0(v19);
      if ( (*(_BYTE *)v17 & 2) != 0 )
        goto LABEL_30;
      goto LABEL_57;
    }
LABEL_38:
    *(_QWORD *)(a1 + 552) = 0;
    qfree();
  }
  *(_QWORD *)(a1 + 448) = &unk_4EAF88;
  qfree();
  qfree();
  if ( *(_QWORD *)(a1 + 456) )
  {
    v20 = *(_QWORD *)(a1 + 464);
    if ( v20 )
    {
      for ( i = 0; i != v20; ++i )
        qfree();
    }
    *(_QWORD *)(a1 + 464) = 0;
    qfree();
  }
  *(_QWORD *)(a1 + 352) = &unk_4EAF88;
  qfree();
  qfree();
  if ( *(_QWORD *)(a1 + 360) )
  {
    v22 = *(_QWORD *)(a1 + 368);
    if ( v22 )
    {
      for ( j = 0; j != v22; ++j )
        qfree();
    }
    *(_QWORD *)(a1 + 368) = 0;
    qfree();
  }
  return sub_101A70((_QWORD *)a1);
}
