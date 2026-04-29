void __fastcall sub_25BEC0(unsigned __int64 **a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 *v4; // rbx
  unsigned __int64 v5; // rdx
  __int64 *v6; // r14
  unsigned __int64 *v7; // rcx
  bool v8; // r12
  unsigned __int64 *v9; // rax
  _QWORD *v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 *v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rdi
  unsigned __int64 v19; // rsi
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 *v22; // rax
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
        goto LABEL_43;
      do
      {
        v16 = (unsigned __int64)v6;
        v6 = (__int64 *)v6[1];
      }
      while ( (*(_BYTE *)v6 & 2) == 0 );
      v17 = *(_QWORD *)v16;
      v6 = *(__int64 **)(v16 + 16);
      v10 = (_QWORD *)v16;
      v18 = *(_QWORD *)v16;
      v19 = *(_QWORD *)v16 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v4 != (__int64 *)v19 )
      {
        if ( (unsigned __int64 *)v19 == v7 )
        {
          v31 = v7;
          if ( (*(_BYTE *)v6 & 2) == 0 )
            v31 = *(unsigned __int64 **)(v16 + 16);
          *v7 = (unsigned __int64)v31 & 0xFFFFFFFFFFFFFFFCLL | *v7 & 3;
        }
        else if ( v16 == *(_QWORD *)(v19 + 8) )
        {
          *(_QWORD *)(v19 + 8) = v6;
        }
        else
        {
          *(_QWORD *)(v19 + 16) = v6;
        }
        if ( (*v6 & 2) == 0 )
          *v6 = *(_QWORD *)v16 & 0xFFFFFFFFFFFFFFFCLL | *v6 & 3;
        v20 = (unsigned __int64 *)v4[2];
        *(_QWORD *)(v16 + 16) = v20;
        if ( (*v20 & 2) == 0 )
          *v20 = v16 & 0xFFFFFFFFFFFFFFFCLL | *v20 & 3;
        v18 = *(_QWORD *)v16;
        v3 = *v4;
        v10 = (_QWORD *)(*(_QWORD *)v16 & 0xFFFFFFFFFFFFFFFCLL);
      }
      v21 = v3 & 0xFFFFFFFFFFFFFFFCLL;
      a2 = (__int64 *)v21;
      if ( *a1 == (unsigned __int64 *)v21 )
      {
        if ( (v18 & 2) == 0 )
          v21 = v16 & 0xFFFFFFFFFFFFFFFCLL;
        *a2 = *a2 & 3 | v21;
      }
      else if ( v4 == *(__int64 **)(v21 + 8) )
      {
        *(_QWORD *)(v21 + 8) = v16;
      }
      else
      {
        *(_QWORD *)(v21 + 16) = v16;
      }
      if ( (*(_QWORD *)v16 & 2) == 0 )
        *(_QWORD *)v16 = *v4 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v16 & 3LL;
      v22 = (unsigned __int64 *)v4[1];
      *(_QWORD *)(v16 + 8) = v22;
      if ( (*v22 & 2) == 0 )
      {
        a2 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
        *v22 = v16 & 0xFFFFFFFFFFFFFFFCLL | *v22 & 3;
      }
      if ( (*(_BYTE *)v4 & 1) != 0 )
        *(_QWORD *)v16 |= 1uLL;
      else
        *(_QWORD *)v16 &= ~1uLL;
      v8 = (v17 & 1) == 0;
    }
    while ( 1 )
    {
      if ( (*(_BYTE *)v4 & 2) == 0 )
      {
        v11 = v4[5];
        if ( v11 )
        {
          v4[6] = 0;
          qfree(v11);
        }
      }
      qfree(v4);
      v14 = (__int64)a1[1] - 1;
      a1[1] = (unsigned __int64 *)v14;
      if ( v8 )
      {
        a2 = v6;
        sub_25B9E0(a1, v6, (unsigned __int64)v10, v12, v13);
        v14 = (__int64)a1[1];
      }
      v15 = *a1;
      if ( !v14 )
      {
        *v15 = (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFCLL | **a1 & 3;
        *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
        **a1 &= ~1uLL;
        **a1 |= 2u;
        return;
      }
      v23 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v23 & 2) != 0 )
      {
        if ( under_debugger )
          goto LABEL_67;
        v23 = interr(3437, a2, v14, v15, v13);
      }
      do
      {
        v24 = v23;
        v23 = *(_QWORD *)(v23 + 8);
      }
      while ( (*(_BYTE *)v23 & 2) == 0 );
      v15[1] = v24;
      v25 = *a1;
      v26 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v26 & 2) == 0 )
        break;
      if ( under_debugger )
LABEL_67:
        BUG();
      v3 = interr(3438, a2, v25, v15, v13);
LABEL_43:
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
