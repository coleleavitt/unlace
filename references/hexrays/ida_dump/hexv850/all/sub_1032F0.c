void __fastcall sub_1032F0(unsigned __int64 **a1, __int64 *a2)
{
  unsigned __int64 v3; // r12
  __int64 *v4; // rbx
  __int64 *v5; // r14
  __int64 *v6; // rax
  unsigned __int64 *v7; // rdi
  bool v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int64 *v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // r13
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 *v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 *v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx

  if ( a2 )
  {
    v3 = *a2;
    v4 = a2;
    v5 = (__int64 *)a2[1];
    v6 = (__int64 *)a2[2];
    v7 = *a1;
    v8 = (*a2 & 1) == 0;
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v3 &= 0xFFFFFFFFFFFFFFFCLL;
      if ( (unsigned __int64 *)v3 == v7 )
      {
        v24 = v3;
        if ( (*(_BYTE *)v6 & 2) == 0 )
          v24 = a2[2];
        *(_QWORD *)v3 = v24 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v3 & 3LL;
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
        v14 = (unsigned __int64)v6;
        v6 = (__int64 *)v6[1];
      }
      while ( (*(_BYTE *)v6 & 2) == 0 );
      v15 = *(_QWORD *)v14;
      v5 = *(__int64 **)(v14 + 16);
      v3 = v14;
      if ( a2 != (__int64 *)(*(_QWORD *)v14 & 0xFFFFFFFFFFFFFFFCLL) )
      {
        sub_FD1F0(v7, (_QWORD *)v14, *(_BYTE **)(v14 + 16));
        v16 = (unsigned __int64 *)a2[2];
        *(_QWORD *)(v14 + 16) = v16;
        if ( (*v16 & 2) == 0 )
          *v16 = v14 & 0xFFFFFFFFFFFFFFFCLL | *v16 & 3;
        v7 = *a1;
        v3 = *(_QWORD *)v14 & 0xFFFFFFFFFFFFFFFCLL;
      }
      sub_FD1F0(v7, a2, (_BYTE *)v14);
      v18 = (unsigned __int64 *)a2[1];
      *(_QWORD *)(v17 + 8) = v18;
      if ( (*v18 & 2) == 0 )
        *v18 = v17 & 0xFFFFFFFFFFFFFFFCLL | *v18 & 3;
      if ( (*(_BYTE *)a2 & 1) != 0 )
        *(_QWORD *)v17 |= 1uLL;
      else
        *(_QWORD *)v17 &= ~1uLL;
      v8 = (v15 & 1) == 0;
    }
    while ( 1 )
    {
      if ( (*(_BYTE *)v4 & 2) == 0 )
      {
        v9 = v4[3];
        if ( v9 )
        {
          v4[4] = 0;
          qfree(v9);
        }
      }
      qfree(v4);
      v12 = (__int64)a1[1] - 1;
      a1[1] = (unsigned __int64 *)v12;
      if ( v8 )
      {
        a2 = v5;
        sub_103020(a1, v5, v3, v10, v11);
        v12 = (__int64)a1[1];
      }
      v13 = *a1;
      if ( !v12 )
      {
        *v13 = (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFCLL | **a1 & 3;
        *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
        **a1 &= ~1uLL;
        **a1 |= 2u;
        return;
      }
      v19 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v19 & 2) != 0 )
      {
        if ( under_debugger )
          goto LABEL_43;
        v19 = interr(3437, a2, v12, v13, v11);
      }
      do
      {
        v20 = v19;
        v19 = *(_QWORD *)(v19 + 8);
      }
      while ( (*(_BYTE *)v19 & 2) == 0 );
      v13[1] = v20;
      v21 = *a1;
      v22 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v22 & 2) == 0 )
        break;
      if ( under_debugger )
LABEL_43:
        BUG();
      v7 = (_QWORD *)(&stru_D68 + 6);
      interr(3438, a2, v21, v13, v11);
LABEL_34:
      v3 &= 0xFFFFFFFFFFFFFFFCLL;
      sub_FD1F0(v7, a2, v5);
    }
    do
    {
      v23 = v22;
      v22 = *(_QWORD *)(v22 + 16);
    }
    while ( (*(_BYTE *)v22 & 2) == 0 );
    v21[2] = v23;
  }
}
