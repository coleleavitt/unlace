void __fastcall sub_106A40(unsigned __int64 **a1, __int64 *a2)
{
  __int64 v3; // r12
  __int64 *v4; // r14
  __int64 *v5; // rax
  unsigned __int64 *v6; // rdi
  bool v7; // r13
  unsigned __int64 *v8; // r12
  __int64 v9; // rdx
  unsigned __int64 *v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // r13
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx

  if ( a2 )
  {
    v3 = *a2;
    v4 = (__int64 *)a2[1];
    v5 = (__int64 *)a2[2];
    v6 = *a1;
    v7 = (*a2 & 1) == 0;
    if ( (*(_BYTE *)v4 & 2) != 0 )
    {
      v8 = (unsigned __int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v8 == v6 )
      {
        v20 = (unsigned __int64)v8;
        if ( (*(_BYTE *)v5 & 2) == 0 )
          v20 = a2[2];
        *v8 = v20 & 0xFFFFFFFFFFFFFFFCLL | *v8 & 3;
      }
      else if ( a2 == (__int64 *)v8[1] )
      {
        v8[1] = (unsigned __int64)v5;
      }
      else
      {
        v8[2] = (unsigned __int64)v5;
      }
      if ( (*v5 & 2) == 0 )
        *v5 = *a2 & 0xFFFFFFFFFFFFFFFCLL | *v5 & 3;
      v4 = v5;
    }
    else if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v8 = (unsigned __int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
      sub_1005A0(v6, a2, (_BYTE *)a2[1]);
    }
    else
    {
      do
      {
        v11 = (unsigned __int64)v5;
        v5 = (__int64 *)v5[1];
      }
      while ( (*(_BYTE *)v5 & 2) == 0 );
      v12 = *(_QWORD *)v11;
      v4 = *(__int64 **)(v11 + 16);
      v8 = (unsigned __int64 *)v11;
      if ( a2 != (__int64 *)(*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL) )
      {
        sub_1005A0(v6, (_QWORD *)v11, *(_BYTE **)(v11 + 16));
        v13 = (unsigned __int64 *)a2[2];
        *(_QWORD *)(v11 + 16) = v13;
        if ( (*v13 & 2) == 0 )
          *v13 = v11 & 0xFFFFFFFFFFFFFFFCLL | *v13 & 3;
        v6 = *a1;
        v8 = (unsigned __int64 *)(*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL);
      }
      sub_1005A0(v6, a2, (_BYTE *)v11);
      v15 = (unsigned __int64 *)a2[1];
      *(_QWORD *)(v14 + 8) = v15;
      if ( (*v15 & 2) == 0 )
        *v15 = v14 & 0xFFFFFFFFFFFFFFFCLL | *v15 & 3;
      if ( (*(_BYTE *)a2 & 1) != 0 )
        *(_QWORD *)v14 |= 1uLL;
      else
        *(_QWORD *)v14 &= ~1uLL;
      v7 = (v12 & 1) == 0;
    }
    if ( (*(_BYTE *)a2 & 2) == 0 && a2[3] )
    {
      a2[4] = 0;
      qfree();
    }
    qfree();
    v9 = (__int64)a1[1] - 1;
    a1[1] = (unsigned __int64 *)v9;
    if ( v7 )
    {
      sub_106770(a1, v4, (unsigned __int64)v8);
      v9 = (__int64)a1[1];
    }
    v10 = *a1;
    if ( v9 )
    {
      v16 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v16 & 2) == 0 )
        goto LABEL_30;
      do
      {
        if ( under_debugger )
          BUG();
        v16 = interr();
        do
        {
LABEL_30:
          v17 = v16;
          v16 = *(_QWORD *)(v16 + 8);
        }
        while ( (*(_BYTE *)v16 & 2) == 0 );
        v10[1] = v17;
        v18 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      }
      while ( (*(_BYTE *)v18 & 2) != 0 );
      do
      {
        v19 = v18;
        v18 = *(_QWORD *)(v18 + 16);
      }
      while ( (*(_BYTE *)v18 & 2) == 0 );
      (*a1)[2] = v19;
    }
    else
    {
      *v10 = (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFCLL | **a1 & 3;
      *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      **a1 &= ~1uLL;
      **a1 |= 2u;
    }
  }
}
