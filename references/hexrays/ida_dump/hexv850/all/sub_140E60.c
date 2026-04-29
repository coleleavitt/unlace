void __fastcall sub_140E60(unsigned __int64 **a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 *v6; // r15
  unsigned __int64 *v7; // rcx
  bool v8; // r13
  unsigned __int64 *v9; // rax
  _QWORD *v10; // r14
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 *v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // r8
  unsigned __int64 v22; // rdi
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // rax
  _QWORD *v25; // rdi
  unsigned __int64 *v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 *v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 i; // rax
  __int64 *v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 *v41; // rax
  __int64 v42; // rdi
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rax
  unsigned __int64 *v46; // rdi
  _QWORD *v47; // [rsp+0h] [rbp-50h]
  __int64 v48; // [rsp+8h] [rbp-48h]
  __int64 v49; // [rsp+8h] [rbp-48h]
  __int64 v50; // [rsp+10h] [rbp-40h]

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
        v44 = (unsigned __int64)v9;
        v45 = *v9;
        if ( (*(_BYTE *)v6 & 2) == 0 )
          v44 = a2[2];
        *v10 = v44 & 0xFFFFFFFFFFFFFFFCLL | v45 & 3;
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
        goto LABEL_45;
      do
      {
        v19 = (unsigned __int64)v6;
        v6 = (__int64 *)v6[1];
      }
      while ( (*(_BYTE *)v6 & 2) == 0 );
      v20 = *(_QWORD *)v19;
      v6 = *(__int64 **)(v19 + 16);
      v10 = (_QWORD *)v19;
      v21 = *(_QWORD *)v19;
      v22 = *(_QWORD *)v19 & 0xFFFFFFFFFFFFFFFCLL;
      if ( a2 != (__int64 *)v22 )
      {
        if ( (unsigned __int64 *)v22 == v7 )
        {
          v46 = v7;
          if ( (*(_BYTE *)v6 & 2) == 0 )
            v46 = *(unsigned __int64 **)(v19 + 16);
          *v7 = (unsigned __int64)v46 & 0xFFFFFFFFFFFFFFFCLL | *v7 & 3;
        }
        else if ( v19 == *(_QWORD *)(v22 + 8) )
        {
          *(_QWORD *)(v22 + 8) = v6;
        }
        else
        {
          *(_QWORD *)(v22 + 16) = v6;
        }
        if ( (*v6 & 2) == 0 )
          *v6 = *(_QWORD *)v19 & 0xFFFFFFFFFFFFFFFCLL | *v6 & 3;
        v23 = (unsigned __int64 *)a2[2];
        *(_QWORD *)(v19 + 16) = v23;
        if ( (*v23 & 2) == 0 )
          *v23 = v19 & 0xFFFFFFFFFFFFFFFCLL | *v23 & 3;
        v21 = *(_QWORD *)v19;
        v4 = *a2;
        v10 = (_QWORD *)(*(_QWORD *)v19 & 0xFFFFFFFFFFFFFFFCLL);
      }
      v24 = v4 & 0xFFFFFFFFFFFFFFFCLL;
      v25 = (_QWORD *)v24;
      if ( *a1 == (unsigned __int64 *)v24 )
      {
        if ( (v21 & 2) == 0 )
          v24 = v19 & 0xFFFFFFFFFFFFFFFCLL;
        *v25 = *v25 & 3LL | v24;
      }
      else if ( a2 == *(__int64 **)(v24 + 8) )
      {
        *(_QWORD *)(v24 + 8) = v19;
      }
      else
      {
        *(_QWORD *)(v24 + 16) = v19;
      }
      if ( (*(_QWORD *)v19 & 2) == 0 )
        *(_QWORD *)v19 = *a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v19 & 3LL;
      v26 = (unsigned __int64 *)a2[1];
      *(_QWORD *)(v19 + 8) = v26;
      if ( (*v26 & 2) == 0 )
        *v26 = v19 & 0xFFFFFFFFFFFFFFFCLL | *v26 & 3;
      if ( (*(_BYTE *)a2 & 1) != 0 )
        *(_QWORD *)v19 |= 1uLL;
      else
        *(_QWORD *)v19 &= ~1uLL;
      v8 = (v20 & 1) == 0;
    }
    while ( 1 )
    {
      v11 = *v3 & 2;
      if ( (*v3 & 2) == 0 )
      {
        v12 = v3[7];
        if ( v12 )
        {
          v3[8] = 0;
          qfree(v12);
        }
        v13 = v3[4];
        if ( v13 )
        {
          if ( (*(_DWORD *)(v13 + 104))-- == 1 )
          {
            v32 = (_QWORD *)v3[4];
            v47 = v32;
            if ( v32 )
            {
              sub_2535B0(v32, a2);
              v33 = v47[23];
              if ( v33 )
              {
                v34 = v47[24];
                if ( v34 )
                {
                  for ( i = 0; i != v34; ++i )
                  {
                    v36 = (__int64 *)(v33 + 24 * i);
                    v37 = *v36;
                    if ( *v36 )
                    {
                      v36[1] = 0;
                      v50 = v34;
                      v48 = i;
                      qfree(v37);
                      v34 = v50;
                      v33 = v47[23];
                      i = v48;
                    }
                  }
                }
                v47[24] = 0;
                qfree(v33);
              }
              v38 = v47[20];
              if ( v38 )
              {
                v47[21] = 0;
                qfree(v38);
              }
              v39 = v47[16];
              if ( v39 )
              {
                v40 = v47[17];
                if ( v40 )
                {
                  do
                  {
                    v41 = (__int64 *)(v39 + 32 * v11);
                    v42 = *v41;
                    if ( *v41 )
                    {
                      v41[1] = 0;
                      v49 = v40;
                      qfree(v42);
                      v40 = v49;
                      v39 = v47[16];
                    }
                    ++v11;
                  }
                  while ( v40 != v11 );
                }
                v47[17] = 0;
                qfree(v39);
              }
              sub_24FC90(v47 + 2);
              j__qfree(v47);
            }
          }
        }
      }
      qfree(v3);
      v17 = (__int64)a1[1] - 1;
      a1[1] = (unsigned __int64 *)v17;
      if ( v8 )
      {
        a2 = v6;
        sub_140980(a1, v6, (unsigned __int64)v10, v15, v16);
        v17 = (__int64)a1[1];
      }
      v18 = *a1;
      if ( !v17 )
      {
        *v18 = (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFCLL | **a1 & 3;
        *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
        **a1 &= ~1uLL;
        **a1 |= 2u;
        return;
      }
      v27 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v27 & 2) != 0 )
      {
        if ( under_debugger )
          goto LABEL_86;
        v27 = interr(3437, a2, v17, v18, v16);
      }
      do
      {
        v28 = v27;
        v27 = *(_QWORD *)(v27 + 8);
      }
      while ( (*(_BYTE *)v27 & 2) == 0 );
      v18[1] = v28;
      v29 = *a1;
      v30 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v30 & 2) == 0 )
        break;
      if ( under_debugger )
LABEL_86:
        BUG();
      v4 = interr(3438, a2, v29, v18, v16);
LABEL_45:
      v31 = (unsigned __int64 *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = v31;
      if ( v31 == v7 )
      {
        *v31 = v5 & 0xFFFFFFFFFFFFFFFCLL | *v31 & 3;
      }
      else if ( a2 == (__int64 *)v31[1] )
      {
        v31[1] = v5;
      }
      else
      {
        v31[2] = v5;
      }
      if ( (*(_QWORD *)v5 & 2) == 0 )
        *(_QWORD *)v5 = *v3 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v5 & 3LL;
      v6 = (__int64 *)v5;
    }
    do
    {
      v43 = v30;
      v30 = *(_QWORD *)(v30 + 16);
    }
    while ( (*(_BYTE *)v30 & 2) == 0 );
    v29[2] = v43;
  }
}
