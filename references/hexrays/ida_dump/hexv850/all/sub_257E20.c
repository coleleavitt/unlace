void __fastcall sub_257E20(unsigned __int64 **a1, __int64 *a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 *v6; // r12
  unsigned __int64 *v7; // rcx
  bool v8; // bp
  unsigned __int64 *v9; // rax
  _QWORD *v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int64 *v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // r8
  unsigned __int64 v18; // rsi
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 *v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 *v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 *v30; // rsi

  if ( a2 )
  {
    v3 = a2;
    v4 = *a2;
    v5 = a2[1];
    v6 = (__int64 *)a2[2];
    v7 = *a1;
    v8 = (*a2 & 1) == 0;
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v9 = (unsigned __int64 *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = v9;
      if ( v9 == v7 )
      {
        v28 = (unsigned __int64)v9;
        v29 = *v9;
        if ( (*(_BYTE *)v6 & 2) == 0 )
          v28 = a2[2];
        *v10 = v28 & 0xFFFFFFFFFFFFFFFCLL | v29 & 3;
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
        goto LABEL_40;
      do
      {
        v15 = (unsigned __int64)v6;
        v6 = (__int64 *)v6[1];
      }
      while ( (*(_BYTE *)v6 & 2) == 0 );
      v16 = *(_QWORD *)v15;
      v6 = *(__int64 **)(v15 + 16);
      v10 = (_QWORD *)v15;
      v17 = *(_QWORD *)v15;
      v18 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v3 != (__int64 *)v18 )
      {
        if ( (unsigned __int64 *)v18 == v7 )
        {
          v30 = *a1;
          if ( (*(_BYTE *)v6 & 2) == 0 )
            v30 = *(unsigned __int64 **)(v15 + 16);
          *v7 = (unsigned __int64)v30 & 0xFFFFFFFFFFFFFFFCLL | *v7 & 3;
        }
        else if ( v15 == *(_QWORD *)(v18 + 8) )
        {
          *(_QWORD *)(v18 + 8) = v6;
        }
        else
        {
          *(_QWORD *)(v18 + 16) = v6;
        }
        if ( (*v6 & 2) == 0 )
          *v6 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL | *v6 & 3;
        v19 = (unsigned __int64 *)v3[2];
        *(_QWORD *)(v15 + 16) = v19;
        if ( (*v19 & 2) == 0 )
          *v19 = v15 & 0xFFFFFFFFFFFFFFFCLL | *v19 & 3;
        v17 = *(_QWORD *)v15;
        v4 = *v3;
        v10 = (_QWORD *)(*(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL);
      }
      v20 = v4 & 0xFFFFFFFFFFFFFFFCLL;
      a2 = (__int64 *)v20;
      if ( *a1 == (unsigned __int64 *)v20 )
      {
        if ( (v17 & 2) == 0 )
          v20 = v15 & 0xFFFFFFFFFFFFFFFCLL;
        *a2 = *a2 & 3 | v20;
      }
      else if ( v3 == *(__int64 **)(v20 + 8) )
      {
        *(_QWORD *)(v20 + 8) = v15;
      }
      else
      {
        *(_QWORD *)(v20 + 16) = v15;
      }
      if ( (*(_QWORD *)v15 & 2) == 0 )
        *(_QWORD *)v15 = *v3 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v15 & 3LL;
      v21 = (unsigned __int64 *)v3[1];
      *(_QWORD *)(v15 + 8) = v21;
      if ( (*v21 & 2) == 0 )
      {
        a2 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
        *v21 = v15 & 0xFFFFFFFFFFFFFFFCLL | *v21 & 3;
      }
      if ( (*(_BYTE *)v3 & 1) != 0 )
        *(_QWORD *)v15 |= 1uLL;
      else
        *(_QWORD *)v15 &= ~1uLL;
      v8 = (v16 & 1) == 0;
    }
    while ( 1 )
    {
      qfree(v3);
      v13 = (__int64)a1[1] - 1;
      a1[1] = (unsigned __int64 *)v13;
      if ( v8 )
      {
        a2 = v6;
        sub_257940(a1, v6, (unsigned __int64)v10, v11, v12);
        v13 = (__int64)a1[1];
      }
      v14 = *a1;
      if ( !v13 )
      {
        *v14 = (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFCLL | **a1 & 3;
        *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
        **a1 &= ~1uLL;
        **a1 |= 2u;
        return;
      }
      v22 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v22 & 2) != 0 )
      {
        if ( under_debugger )
          goto LABEL_64;
        v22 = interr(3437, a2, v13, v14, v12);
      }
      do
      {
        v23 = v22;
        v22 = *(_QWORD *)(v22 + 8);
      }
      while ( (*(_BYTE *)v22 & 2) == 0 );
      v14[1] = v23;
      v24 = *a1;
      v25 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v25 & 2) == 0 )
        break;
      if ( under_debugger )
LABEL_64:
        BUG();
      v3 = (_QWORD *)(&stru_D68 + 6);
      v4 = interr(3438, a2, v24, v14, v12);
LABEL_40:
      v26 = (unsigned __int64 *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = v26;
      if ( v26 == v7 )
      {
        *v26 = v5 & 0xFFFFFFFFFFFFFFFCLL | *v26 & 3;
      }
      else if ( a2 == (__int64 *)v26[1] )
      {
        v26[1] = v5;
      }
      else
      {
        v26[2] = v5;
      }
      if ( (*(_QWORD *)v5 & 2) == 0 )
        *(_QWORD *)v5 = *v3 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v5 & 3LL;
      v6 = (__int64 *)v5;
    }
    do
    {
      v27 = v25;
      v25 = *(_QWORD *)(v25 + 16);
    }
    while ( (*(_BYTE *)v25 & 2) == 0 );
    v24[2] = v27;
  }
}
