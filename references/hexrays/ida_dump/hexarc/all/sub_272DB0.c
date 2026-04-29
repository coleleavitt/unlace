void __fastcall sub_272DB0(unsigned __int64 **a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 *v4; // rbx
  unsigned __int64 v5; // rdx
  __int64 *v6; // r14
  unsigned __int64 *v7; // rcx
  char v8; // r12
  unsigned __int64 *v9; // rax
  _QWORD *v10; // r13
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  unsigned __int64 *v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 *v20; // rax
  char v21; // r12
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 *v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 *v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 *v31; // rsi

  if ( a2 )
  {
    v3 = *a2;
    v4 = a2;
    v5 = a2[1];
    v6 = (__int64 *)a2[2];
    v7 = *a1;
    v8 = (*a2 & 1) == 0;
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v9 = (unsigned __int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = v9;
      if ( v9 == v7 )
      {
        v29 = (unsigned __int64)v9;
        v30 = *v9;
        if ( (*(_BYTE *)v6 & 2) == 0 )
          v29 = a2[2];
        *v10 = v29 & 0xFFFFFFFFFFFFFFFCLL | v30 & 3;
      }
      else if ( a2 == (__int64 *)v9[1] )
      {
        v9[1] = (unsigned __int64)v6;
      }
      else
      {
        v9[2] = (unsigned __int64)v6;
      }
      if ( (*v6 & 2) == 0 )
        *v6 = *a2 & 0xFFFFFFFFFFFFFFFCLL | *v6 & 3;
    }
    else
    {
      if ( (*(_BYTE *)v6 & 2) != 0 )
        goto LABEL_42;
      do
      {
        v14 = (unsigned __int64)v6;
        v6 = (__int64 *)v6[1];
      }
      while ( (*(_BYTE *)v6 & 2) == 0 );
      v15 = *(_QWORD *)v14;
      v6 = *(__int64 **)(v14 + 16);
      v10 = (_QWORD *)v14;
      v16 = *(_QWORD *)v14;
      v17 = *(_QWORD *)v14 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v4 != (__int64 *)v17 )
      {
        if ( (unsigned __int64 *)v17 == v7 )
        {
          v31 = v7;
          if ( (*(_BYTE *)v6 & 2) == 0 )
            v31 = *(unsigned __int64 **)(v14 + 16);
          *v7 = (unsigned __int64)v31 & 0xFFFFFFFFFFFFFFFCLL | *v7 & 3;
        }
        else if ( v14 == *(_QWORD *)(v17 + 8) )
        {
          *(_QWORD *)(v17 + 8) = v6;
        }
        else
        {
          *(_QWORD *)(v17 + 16) = v6;
        }
        if ( (*v6 & 2) == 0 )
          *v6 = *(_QWORD *)v14 & 0xFFFFFFFFFFFFFFFCLL | *v6 & 3;
        v18 = (unsigned __int64 *)v4[2];
        *(_QWORD *)(v14 + 16) = v18;
        if ( (*v18 & 2) == 0 )
          *v18 = v14 & 0xFFFFFFFFFFFFFFFCLL | *v18 & 3;
        v16 = *(_QWORD *)v14;
        v3 = *v4;
        v10 = (_QWORD *)(*(_QWORD *)v14 & 0xFFFFFFFFFFFFFFFCLL);
      }
      v19 = v3 & 0xFFFFFFFFFFFFFFFCLL;
      a2 = (__int64 *)v19;
      if ( *a1 == (unsigned __int64 *)v19 )
      {
        if ( (v16 & 2) == 0 )
          v19 = v14 & 0xFFFFFFFFFFFFFFFCLL;
        *a2 = *a2 & 3 | v19;
      }
      else if ( v4 == *(__int64 **)(v19 + 8) )
      {
        *(_QWORD *)(v19 + 8) = v14;
      }
      else
      {
        *(_QWORD *)(v19 + 16) = v14;
      }
      if ( (*(_QWORD *)v14 & 2) == 0 )
        *(_QWORD *)v14 = *v4 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v14 & 3LL;
      v20 = (unsigned __int64 *)v4[1];
      *(_QWORD *)(v14 + 8) = v20;
      if ( (*v20 & 2) == 0 )
      {
        a2 = (__int64 *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
        *v20 = v14 & 0xFFFFFFFFFFFFFFFCLL | *v20 & 3;
      }
      v21 = ~(_BYTE)v15;
      v22 = *(_QWORD *)v14 & 0xFFFFFFFFFFFFFFFELL;
      if ( (*(_BYTE *)v4 & 1) != 0 )
        v22 = *(_QWORD *)v14 | 1LL;
      v8 = v21 & 1;
      *(_QWORD *)v14 = v22;
    }
    while ( 1 )
    {
      if ( (*(_BYTE *)v4 & 2) == 0 )
        clear_tinfo_t(v4 + 6);
      qfree(v4);
      v12 = (__int64)a1[1] - 1;
      a1[1] = (unsigned __int64 *)v12;
      if ( v8 == 1 )
      {
        a2 = v6;
        sub_272670(a1, v6, (unsigned __int64)v10);
        v12 = (__int64)a1[1];
      }
      v13 = (unsigned __int64)*a1;
      if ( !v12 )
      {
        *(_QWORD *)v13 = v13 & 0xFFFFFFFFFFFFFFFCLL | **a1 & 3;
        *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
        **a1 &= ~1uLL;
        **a1 |= 2u;
        return;
      }
      v23 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v23 & 2) != 0 )
      {
        if ( under_debugger )
          goto LABEL_65;
        v23 = interr(3437, a2, v12, v13, v11);
      }
      do
      {
        v24 = v23;
        v23 = *(_QWORD *)(v23 + 8);
      }
      while ( (*(_BYTE *)v23 & 2) == 0 );
      *(_QWORD *)(v13 + 8) = v24;
      v25 = *a1;
      v26 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v26 & 2) == 0 )
        break;
      if ( under_debugger )
LABEL_65:
        BUG();
      v3 = interr(3438, a2, v25, v13, v11);
LABEL_42:
      v27 = (unsigned __int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = v27;
      if ( v27 == v7 )
      {
        *v27 = v5 & 0xFFFFFFFFFFFFFFFCLL | *v27 & 3;
      }
      else if ( a2 == (__int64 *)v27[1] )
      {
        v27[1] = v5;
      }
      else
      {
        v27[2] = v5;
      }
      if ( (*(_QWORD *)v5 & 2) == 0 )
        *(_QWORD *)v5 = *v4 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v5 & 3LL;
      v6 = (__int64 *)v5;
    }
    do
    {
      v28 = v26;
      v26 = *(_QWORD *)(v26 + 16);
    }
    while ( (*(_BYTE *)v26 & 2) == 0 );
    v25[2] = v28;
  }
}
