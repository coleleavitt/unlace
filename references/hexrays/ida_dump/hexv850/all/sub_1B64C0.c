void __fastcall sub_1B64C0(unsigned __int64 **a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 *v4; // rbx
  unsigned __int64 v5; // rdx
  __int64 *v6; // r14
  unsigned __int64 *v7; // rcx
  char v8; // r12
  unsigned __int64 *v9; // rax
  _QWORD *v10; // r13
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rdi
  unsigned __int64 v18; // rsi
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 *v21; // rax
  char v22; // r12
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 *v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 *v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 *v32; // rsi

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
        v30 = (unsigned __int64)v9;
        v31 = *v9;
        if ( (*(_BYTE *)v6 & 2) == 0 )
          v30 = a2[2];
        *v10 = v30 & 0xFFFFFFFFFFFFFFFCLL | v31 & 3;
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
        v15 = (unsigned __int64)v6;
        v6 = (__int64 *)v6[1];
      }
      while ( (*(_BYTE *)v6 & 2) == 0 );
      v16 = *(_QWORD *)v15;
      v6 = *(__int64 **)(v15 + 16);
      v10 = (_QWORD *)v15;
      v17 = *(_QWORD *)v15;
      v18 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v4 != (__int64 *)v18 )
      {
        if ( (unsigned __int64 *)v18 == v7 )
        {
          v32 = v7;
          if ( (*(_BYTE *)v6 & 2) == 0 )
            v32 = *(unsigned __int64 **)(v15 + 16);
          *v7 = (unsigned __int64)v32 & 0xFFFFFFFFFFFFFFFCLL | *v7 & 3;
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
        v19 = (unsigned __int64 *)v4[2];
        *(_QWORD *)(v15 + 16) = v19;
        if ( (*v19 & 2) == 0 )
          *v19 = v15 & 0xFFFFFFFFFFFFFFFCLL | *v19 & 3;
        v17 = *(_QWORD *)v15;
        v3 = *v4;
        v10 = (_QWORD *)(*(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL);
      }
      v20 = v3 & 0xFFFFFFFFFFFFFFFCLL;
      a2 = (__int64 *)v20;
      if ( *a1 == (unsigned __int64 *)v20 )
      {
        if ( (v17 & 2) == 0 )
          v20 = v15 & 0xFFFFFFFFFFFFFFFCLL;
        *a2 = *a2 & 3 | v20;
      }
      else if ( v4 == *(__int64 **)(v20 + 8) )
      {
        *(_QWORD *)(v20 + 8) = v15;
      }
      else
      {
        *(_QWORD *)(v20 + 16) = v15;
      }
      if ( (*(_QWORD *)v15 & 2) == 0 )
        *(_QWORD *)v15 = *v4 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v15 & 3LL;
      v21 = (unsigned __int64 *)v4[1];
      *(_QWORD *)(v15 + 8) = v21;
      if ( (*v21 & 2) == 0 )
      {
        a2 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
        *v21 = v15 & 0xFFFFFFFFFFFFFFFCLL | *v21 & 3;
      }
      v22 = ~(_BYTE)v16;
      v23 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFELL;
      if ( (*(_BYTE *)v4 & 1) != 0 )
        v23 = *(_QWORD *)v15 | 1LL;
      v8 = v22 & 1;
      *(_QWORD *)v15 = v23;
    }
    while ( 1 )
    {
      if ( (*(_BYTE *)v4 & 2) == 0 )
      {
        v11 = v4[20];
        if ( v11 )
        {
          v4[21] = 0;
          qfree(v11);
        }
      }
      qfree(v4);
      v13 = (__int64)a1[1] - 1;
      a1[1] = (unsigned __int64 *)v13;
      if ( v8 == 1 )
      {
        a2 = v6;
        sub_1B5D80(a1, v6, (unsigned __int64)v10);
        v13 = (__int64)a1[1];
      }
      v14 = (unsigned __int64)*a1;
      if ( !v13 )
      {
        *(_QWORD *)v14 = v14 & 0xFFFFFFFFFFFFFFFCLL | **a1 & 3;
        *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
        **a1 &= ~1uLL;
        **a1 |= 2u;
        return;
      }
      v24 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v24 & 2) != 0 )
      {
        if ( under_debugger )
          goto LABEL_66;
        v24 = interr(3437, a2, v13, v14, v12);
      }
      do
      {
        v25 = v24;
        v24 = *(_QWORD *)(v24 + 8);
      }
      while ( (*(_BYTE *)v24 & 2) == 0 );
      *(_QWORD *)(v14 + 8) = v25;
      v26 = *a1;
      v27 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v27 & 2) == 0 )
        break;
      if ( under_debugger )
LABEL_66:
        BUG();
      v3 = interr(3438, a2, v26, v14, v12);
LABEL_43:
      v28 = (unsigned __int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = v28;
      if ( v28 == v7 )
      {
        *v28 = v5 & 0xFFFFFFFFFFFFFFFCLL | *v28 & 3;
      }
      else if ( a2 == (__int64 *)v28[1] )
      {
        v28[1] = v5;
      }
      else
      {
        v28[2] = v5;
      }
      if ( (*(_QWORD *)v5 & 2) == 0 )
        *(_QWORD *)v5 = *v4 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v5 & 3LL;
      v6 = (__int64 *)v5;
    }
    do
    {
      v29 = v27;
      v27 = *(_QWORD *)(v27 + 16);
    }
    while ( (*(_BYTE *)v27 & 2) == 0 );
    v26[2] = v29;
  }
}
