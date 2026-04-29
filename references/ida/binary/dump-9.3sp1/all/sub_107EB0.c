void __fastcall sub_107EB0(unsigned __int64 **a1, __int64 *a2)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rbx
  __int64 *v5; // r14
  __int64 *v6; // rax
  unsigned __int64 *v7; // rdi
  bool v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned __int64 *v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // r13
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx

  if ( a2 )
  {
    v3 = *a2;
    v4 = (__int64)a2;
    v5 = (__int64 *)a2[1];
    v6 = (__int64 *)a2[2];
    v7 = *a1;
    v8 = (*a2 & 1) == 0;
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v3 &= 0xFFFFFFFFFFFFFFFCLL;
      if ( (unsigned __int64 *)v3 == v7 )
      {
        v21 = v3;
        if ( (*(_BYTE *)v6 & 2) == 0 )
          v21 = a2[2];
        *(_QWORD *)v3 = v21 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v3 & 3LL;
      }
      else if ( a2 == *(__int64 **)(v3 + 8) )
      {
        *(_QWORD *)(v3 + 8) = v6;
      }
      else
      {
        *(_QWORD *)(v3 + 16) = v6;
      }
      if ( (*v6 & 2) == 0 )
        *v6 = *a2 & 0xFFFFFFFFFFFFFFFCLL | *v6 & 3;
      v5 = v6;
    }
    else
    {
      if ( (*(_BYTE *)v6 & 2) != 0 )
        goto LABEL_34;
      do
      {
        v12 = (unsigned __int64)v6;
        v6 = (__int64 *)v6[1];
      }
      while ( (*(_BYTE *)v6 & 2) == 0 );
      v13 = *(_QWORD *)v12;
      v5 = *(__int64 **)(v12 + 16);
      v3 = v12;
      if ( a2 != (__int64 *)(*(_QWORD *)v12 & 0xFFFFFFFFFFFFFFFCLL) )
      {
        sub_101DB0(v7, (_QWORD *)v12, *(_BYTE **)(v12 + 16));
        v14 = (unsigned __int64 *)a2[2];
        *(_QWORD *)(v12 + 16) = v14;
        if ( (*v14 & 2) == 0 )
          *v14 = v12 & 0xFFFFFFFFFFFFFFFCLL | *v14 & 3;
        v7 = *a1;
        v3 = *(_QWORD *)v12 & 0xFFFFFFFFFFFFFFFCLL;
      }
      sub_101DB0(v7, a2, (_BYTE *)v12);
      v16 = (unsigned __int64 *)a2[1];
      *(_QWORD *)(v15 + 8) = v16;
      if ( (*v16 & 2) == 0 )
        *v16 = v15 & 0xFFFFFFFFFFFFFFFCLL | *v16 & 3;
      if ( (*(_BYTE *)a2 & 1) != 0 )
        *(_QWORD *)v15 |= 1uLL;
      else
        *(_QWORD *)v15 &= ~1uLL;
      v8 = (v13 & 1) == 0;
    }
    while ( 1 )
    {
      if ( (*(_BYTE *)v4 & 2) == 0 )
      {
        v9 = *(_QWORD *)(v4 + 24);
        if ( v9 )
        {
          *(_QWORD *)(v4 + 32) = 0;
          qfree(v9);
        }
      }
      qfree(v4);
      v10 = (__int64)a1[1] - 1;
      a1[1] = (unsigned __int64 *)v10;
      if ( v8 )
      {
        a2 = v5;
        sub_107BE0(a1, v5, v3);
        v10 = (__int64)a1[1];
      }
      v11 = *a1;
      if ( !v10 )
      {
        *v11 = (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFCLL | **a1 & 3;
        *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
        **a1 &= ~1uLL;
        **a1 |= 2u;
        return;
      }
      v17 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v17 & 2) != 0 )
      {
        if ( under_debugger )
          goto LABEL_43;
        v17 = interr();
      }
      do
      {
        v18 = v17;
        v17 = *(_QWORD *)(v17 + 8);
      }
      while ( (*(_BYTE *)v17 & 2) == 0 );
      v11[1] = v18;
      v19 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v19 & 2) == 0 )
        break;
      if ( under_debugger )
LABEL_43:
        BUG();
      v7 = (_QWORD *)(&stru_D68 + 6);
      interr();
LABEL_34:
      v3 &= 0xFFFFFFFFFFFFFFFCLL;
      sub_101DB0(v7, a2, v5);
    }
    do
    {
      v20 = v19;
      v19 = *(_QWORD *)(v19 + 16);
    }
    while ( (*(_BYTE *)v19 & 2) == 0 );
    (*a1)[2] = v20;
  }
}
