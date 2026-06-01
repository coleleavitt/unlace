void __fastcall sub_145490(unsigned __int64 **a1, __int64 *a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 *v6; // r12
  unsigned __int64 *v7; // rcx
  bool v8; // bp
  unsigned __int64 *v9; // rax
  _QWORD *v10; // r13
  __int64 v11; // rdx
  unsigned __int64 *v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // r8
  unsigned __int64 v16; // rsi
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // rax
  _QWORD *v19; // rsi
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 *v28; // rsi

  if ( a2 )
  {
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
        v26 = (unsigned __int64)v9;
        v27 = *v9;
        if ( (*(_BYTE *)v6 & 2) == 0 )
          v26 = a2[2];
        *v10 = v26 & 0xFFFFFFFFFFFFFFFCLL | v27 & 3;
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
    else if ( (*(_BYTE *)v6 & 2) != 0 )
    {
      v25 = (unsigned __int64 *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = v25;
      if ( v25 == v7 )
      {
        *v25 = v5 & 0xFFFFFFFFFFFFFFFCLL | *v25 & 3;
      }
      else if ( a2 == (__int64 *)v25[1] )
      {
        v25[1] = v5;
      }
      else
      {
        v25[2] = v5;
      }
      if ( (*(_QWORD *)v5 & 2) == 0 )
        *(_QWORD *)v5 = *a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v5 & 3LL;
      v6 = (__int64 *)v5;
    }
    else
    {
      do
      {
        v13 = (unsigned __int64)v6;
        v6 = (__int64 *)v6[1];
      }
      while ( (*(_BYTE *)v6 & 2) == 0 );
      v14 = *(_QWORD *)v13;
      v6 = *(__int64 **)(v13 + 16);
      v10 = (_QWORD *)v13;
      v15 = *(_QWORD *)v13;
      v16 = *(_QWORD *)v13 & 0xFFFFFFFFFFFFFFFCLL;
      if ( a2 != (__int64 *)v16 )
      {
        if ( (unsigned __int64 *)v16 == v7 )
        {
          v28 = *a1;
          if ( (*(_BYTE *)v6 & 2) == 0 )
            v28 = *(unsigned __int64 **)(v13 + 16);
          *v7 = (unsigned __int64)v28 & 0xFFFFFFFFFFFFFFFCLL | *v7 & 3;
        }
        else if ( v13 == *(_QWORD *)(v16 + 8) )
        {
          *(_QWORD *)(v16 + 8) = v6;
        }
        else
        {
          *(_QWORD *)(v16 + 16) = v6;
        }
        if ( (*v6 & 2) == 0 )
          *v6 = *(_QWORD *)v13 & 0xFFFFFFFFFFFFFFFCLL | *v6 & 3;
        v17 = (unsigned __int64 *)a2[2];
        *(_QWORD *)(v13 + 16) = v17;
        if ( (*v17 & 2) == 0 )
          *v17 = v13 & 0xFFFFFFFFFFFFFFFCLL | *v17 & 3;
        v15 = *(_QWORD *)v13;
        v4 = *a2;
        v10 = (_QWORD *)(*(_QWORD *)v13 & 0xFFFFFFFFFFFFFFFCLL);
      }
      v18 = v4 & 0xFFFFFFFFFFFFFFFCLL;
      v19 = (_QWORD *)v18;
      if ( *a1 == (unsigned __int64 *)v18 )
      {
        if ( (v15 & 2) == 0 )
          v18 = v13 & 0xFFFFFFFFFFFFFFFCLL;
        *v19 = *v19 & 3LL | v18;
      }
      else if ( a2 == *(__int64 **)(v18 + 8) )
      {
        *(_QWORD *)(v18 + 8) = v13;
      }
      else
      {
        *(_QWORD *)(v18 + 16) = v13;
      }
      if ( (*(_QWORD *)v13 & 2) == 0 )
        *(_QWORD *)v13 = *a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v13 & 3LL;
      v20 = (unsigned __int64 *)a2[1];
      *(_QWORD *)(v13 + 8) = v20;
      if ( (*v20 & 2) == 0 )
        *v20 = v13 & 0xFFFFFFFFFFFFFFFCLL | *v20 & 3;
      if ( (*(_BYTE *)a2 & 1) != 0 )
        *(_QWORD *)v13 |= 1uLL;
      else
        *(_QWORD *)v13 &= ~1uLL;
      v8 = (v14 & 1) == 0;
    }
    qfree();
    v11 = (__int64)a1[1] - 1;
    a1[1] = (unsigned __int64 *)v11;
    if ( v8 )
    {
      sub_144FB0(a1, v6, (unsigned __int64)v10);
      v11 = (__int64)a1[1];
    }
    v12 = *a1;
    if ( v11 )
    {
      v21 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v21 & 2) == 0 )
        goto LABEL_36;
      do
      {
        if ( under_debugger )
          BUG();
        v21 = interr();
        do
        {
LABEL_36:
          v22 = v21;
          v21 = *(_QWORD *)(v21 + 8);
        }
        while ( (*(_BYTE *)v21 & 2) == 0 );
        v12[1] = v22;
        v23 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      }
      while ( (*(_BYTE *)v23 & 2) != 0 );
      do
      {
        v24 = v23;
        v23 = *(_QWORD *)(v23 + 16);
      }
      while ( (*(_BYTE *)v23 & 2) == 0 );
      (*a1)[2] = v24;
    }
    else
    {
      *v12 = (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFCLL | **a1 & 3;
      *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      **a1 &= ~1uLL;
      **a1 |= 2u;
    }
  }
}
