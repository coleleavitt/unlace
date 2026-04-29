void __fastcall sub_143530(unsigned __int64 **a1, __int64 *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 *v5; // r15
  unsigned __int64 *v6; // rcx
  bool v7; // r13
  unsigned __int64 *v8; // rax
  _QWORD *v9; // r14
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v13; // rdx
  unsigned __int64 *v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // r8
  unsigned __int64 v18; // rdi
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // rax
  _QWORD *v21; // rdi
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 i; // rax
  _QWORD *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  unsigned __int64 *v38; // rdi
  _QWORD *v39; // [rsp+0h] [rbp-50h]
  __int64 v40; // [rsp+8h] [rbp-48h]
  __int64 v41; // [rsp+8h] [rbp-48h]
  __int64 v42; // [rsp+10h] [rbp-40h]

  if ( a2 )
  {
    v3 = *a2;
    v4 = a2[1];
    v5 = (__int64 *)a2[2];
    v6 = *a1;
    v7 = (*a2 & 1) == 0;
    if ( (*(_BYTE *)v4 & 2) != 0 )
    {
      v8 = (unsigned __int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
      v9 = v8;
      if ( v8 == v6 )
      {
        v36 = (unsigned __int64)v8;
        v37 = *v8;
        if ( (*(_BYTE *)v5 & 2) == 0 )
          v36 = a2[2];
        *v9 = v36 & 0xFFFFFFFFFFFFFFFCLL | v37 & 3;
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
    }
    else if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v27 = (unsigned __int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
      v9 = v27;
      if ( v27 == v6 )
      {
        *v27 = v4 & 0xFFFFFFFFFFFFFFFCLL | *v27 & 3;
      }
      else if ( a2 == (__int64 *)v27[1] )
      {
        v27[1] = v4;
      }
      else
      {
        v27[2] = v4;
      }
      if ( (*(_QWORD *)v4 & 2) == 0 )
        *(_QWORD *)v4 = *a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v4 & 3LL;
      v5 = (__int64 *)v4;
    }
    else
    {
      do
      {
        v15 = (unsigned __int64)v5;
        v5 = (__int64 *)v5[1];
      }
      while ( (*(_BYTE *)v5 & 2) == 0 );
      v16 = *(_QWORD *)v15;
      v5 = *(__int64 **)(v15 + 16);
      v9 = (_QWORD *)v15;
      v17 = *(_QWORD *)v15;
      v18 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL;
      if ( a2 != (__int64 *)v18 )
      {
        if ( (unsigned __int64 *)v18 == v6 )
        {
          v38 = v6;
          if ( (*(_BYTE *)v5 & 2) == 0 )
            v38 = *(unsigned __int64 **)(v15 + 16);
          *v6 = (unsigned __int64)v38 & 0xFFFFFFFFFFFFFFFCLL | *v6 & 3;
        }
        else if ( v15 == *(_QWORD *)(v18 + 8) )
        {
          *(_QWORD *)(v18 + 8) = v5;
        }
        else
        {
          *(_QWORD *)(v18 + 16) = v5;
        }
        if ( (*v5 & 2) == 0 )
          *v5 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL | *v5 & 3;
        v19 = (unsigned __int64 *)a2[2];
        *(_QWORD *)(v15 + 16) = v19;
        if ( (*v19 & 2) == 0 )
          *v19 = v15 & 0xFFFFFFFFFFFFFFFCLL | *v19 & 3;
        v17 = *(_QWORD *)v15;
        v3 = *a2;
        v9 = (_QWORD *)(*(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL);
      }
      v20 = v3 & 0xFFFFFFFFFFFFFFFCLL;
      v21 = (_QWORD *)v20;
      if ( *a1 == (unsigned __int64 *)v20 )
      {
        if ( (v17 & 2) == 0 )
          v20 = v15 & 0xFFFFFFFFFFFFFFFCLL;
        *v21 = *v21 & 3LL | v20;
      }
      else if ( a2 == *(__int64 **)(v20 + 8) )
      {
        *(_QWORD *)(v20 + 8) = v15;
      }
      else
      {
        *(_QWORD *)(v20 + 16) = v15;
      }
      if ( (*(_QWORD *)v15 & 2) == 0 )
        *(_QWORD *)v15 = *a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v15 & 3LL;
      v22 = (unsigned __int64 *)a2[1];
      *(_QWORD *)(v15 + 8) = v22;
      if ( (*v22 & 2) == 0 )
        *v22 = v15 & 0xFFFFFFFFFFFFFFFCLL | *v22 & 3;
      if ( (*(_BYTE *)a2 & 1) != 0 )
        *(_QWORD *)v15 |= 1uLL;
      else
        *(_QWORD *)v15 &= ~1uLL;
      v7 = (v16 & 1) == 0;
    }
    v10 = *a2 & 2;
    if ( (*a2 & 2) == 0 )
    {
      if ( a2[7] )
      {
        a2[8] = 0;
        qfree();
      }
      v11 = a2[4];
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 104))-- == 1 )
        {
          v28 = (_QWORD *)a2[4];
          v39 = v28;
          if ( v28 )
          {
            sub_255EB0(v28, a2);
            v29 = v39[23];
            if ( v29 )
            {
              v30 = v39[24];
              if ( v30 )
              {
                for ( i = 0; i != v30; ++i )
                {
                  v32 = (_QWORD *)(v29 + 24 * i);
                  if ( *v32 )
                  {
                    v32[1] = 0;
                    v42 = v30;
                    v40 = i;
                    qfree();
                    v30 = v42;
                    v29 = v39[23];
                    i = v40;
                  }
                }
              }
              v39[24] = 0;
              qfree();
            }
            if ( v39[20] )
            {
              v39[21] = 0;
              qfree();
            }
            v33 = v39[16];
            if ( v33 )
            {
              v34 = v39[17];
              if ( v34 )
              {
                do
                {
                  v35 = (_QWORD *)(v33 + 32 * v10);
                  if ( *v35 )
                  {
                    v35[1] = 0;
                    v41 = v34;
                    qfree();
                    v34 = v41;
                    v33 = v39[16];
                  }
                  ++v10;
                }
                while ( v34 != v10 );
              }
              v39[17] = 0;
              qfree();
            }
            sub_252570(v39 + 2);
            j__qfree();
          }
        }
      }
    }
    qfree();
    v13 = (__int64)a1[1] - 1;
    a1[1] = (unsigned __int64 *)v13;
    if ( v7 )
    {
      sub_143050(a1, v5, (unsigned __int64)v9);
      v13 = (__int64)a1[1];
    }
    v14 = *a1;
    if ( v13 )
    {
      v23 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v23 & 2) == 0 )
        goto LABEL_41;
      do
      {
        if ( under_debugger )
          BUG();
        v23 = interr();
        do
        {
LABEL_41:
          v24 = v23;
          v23 = *(_QWORD *)(v23 + 8);
        }
        while ( (*(_BYTE *)v23 & 2) == 0 );
        v14[1] = v24;
        v25 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      }
      while ( (*(_BYTE *)v25 & 2) != 0 );
      do
      {
        v26 = v25;
        v25 = *(_QWORD *)(v25 + 16);
      }
      while ( (*(_BYTE *)v25 & 2) == 0 );
      (*a1)[2] = v26;
    }
    else
    {
      *v14 = (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFCLL | **a1 & 3;
      *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      **a1 &= ~1uLL;
      **a1 |= 2u;
    }
  }
}
