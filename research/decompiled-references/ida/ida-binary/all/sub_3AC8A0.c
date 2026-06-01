unsigned __int64 __fastcall sub_3AC8A0(QT::QAbstractScrollArea *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r15
  __m128 v6; // xmm0
  __int64 v7; // rax
  __int128 v8; // kr00_16
  __int64 v9; // r14
  const char *v10; // rsi
  double v11; // xmm0_8
  double v12; // xmm0_8
  unsigned int *v14; // rdx
  unsigned int *v15; // rdi
  unsigned int v16; // eax
  unsigned int *v17; // rcx
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int128 v29; // [rsp+0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+10h] [rbp-48h]
  unsigned __int64 v31; // [rsp+18h] [rbp-40h]

  v3 = *((_QWORD *)this + 125);
  v4 = *(_QWORD *)(a2 + 8);
  v31 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 8);
  if ( v4 != *(_QWORD *)(v3 + 16) || memcmp(*(const void **)a2, *(const void **)(v3 + 8), 4 * v4) )
  {
    *(_QWORD *)(v3 + 40) = 0;
    v6 = _mm_loadh_ps((const double *)(v3 + 24));
    *(_QWORD *)(v3 + 8) = *(_QWORD *)a2;
    *(_QWORD *)(v3 + 16) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(v3 + 24) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a2 = v5;
    *(__m128 *)(a2 + 8) = v6;
    v7 = *(_QWORD *)(v3 + 16);
    if ( !v7 )
    {
      v3 = *((_QWORD *)this + 125);
LABEL_4:
      v30 = 0;
      v29 = 0;
      sub_3AC5C0((__int64 *)&v29, v3, 0);
      v8 = v29;
      v9 = v30;
      v10 = (const char *)v29;
      sub_1EB140(this, (const char *)v29, *((__int64 *)&v29 + 1));
      v11 = qfree(v8, v10);
      v12 = qfree(*((_QWORD *)&v8 + 1), v10, v11);
      qfree(v9, v10, v12);
      return v31 - __readfsqword(0x28u);
    }
    v14 = *(unsigned int **)(v3 + 8);
    v15 = &v14[v7];
    if ( v14 == v15 )
    {
      v18 = 1;
    }
    else
    {
      v16 = 0;
      v17 = *(unsigned int **)(v3 + 8);
      if ( (((_BYTE)v15 - (_BYTE)v14) & 4) == 0 )
        goto LABEL_46;
      if ( *v14 )
        v16 = *v14;
      v17 = v14 + 1;
      if ( v15 != v14 + 1 )
      {
LABEL_46:
        do
        {
          if ( v16 < *v17 )
            v16 = *v17;
          if ( v16 < v17[1] )
            v16 = v17[1];
          v17 += 2;
        }
        while ( v15 != v17 );
      }
      v18 = v16 + 1;
    }
    v19 = *(_QWORD *)(v3 + 40);
    LODWORD(v29) = -1;
    if ( v18 >= v19 )
    {
      if ( v19 < v18 )
      {
        v21 = *(_QWORD *)(v3 + 32);
        v22 = *(_QWORD *)(v3 + 48);
        v23 = v3 + 32;
        if ( (unsigned __int64)&v29 < v21 || (unsigned __int64)&v29 >= v21 + 4 * v22 )
        {
          if ( v22 >= v18
            || (v27 = qvector_reserve(v23, v21, v18, 4),
                *(_QWORD *)(v3 + 32) = v27,
                v21 = v27,
                v19 = *(_QWORD *)(v3 + 40),
                v19 < v18) )
          {
            v26 = 4 * v19;
            while ( 1 )
            {
              *(_DWORD *)(v21 + v26) = -1;
              v26 += 4;
              if ( 4 * v18 == v26 )
                break;
              v21 = *(_QWORD *)(v3 + 32);
            }
          }
        }
        else if ( v22 >= v18
               || (v28 = qvector_reserve(v23, v21, v18, 4),
                   *(_QWORD *)(v3 + 32) = v28,
                   v21 = v28,
                   v19 = *(_QWORD *)(v3 + 40),
                   v19 < v18) )
        {
          v24 = 4 * v19;
          while ( 1 )
          {
            *(_DWORD *)(v21 + v24) = -1;
            v24 += 4;
            if ( v24 == 4 * v18 )
              break;
            v21 = *(_QWORD *)(v3 + 32);
          }
        }
        v25 = *(_QWORD *)(v3 + 16);
        *(_QWORD *)(v3 + 40) = v18;
        if ( !v25 )
          goto LABEL_21;
        v14 = *(unsigned int **)(v3 + 8);
      }
    }
    else
    {
      *(_QWORD *)(v3 + 40) = v18;
    }
    v20 = 0;
    while ( 1 )
    {
      *(_DWORD *)(*(_QWORD *)(v3 + 32) + 4LL * v14[v20]) = v20;
      if ( (unsigned __int64)++v20 >= *(_QWORD *)(v3 + 16) )
        break;
      v14 = *(unsigned int **)(v3 + 8);
    }
LABEL_21:
    v3 = *((_QWORD *)this + 125);
    goto LABEL_4;
  }
  if ( !v4 )
    goto LABEL_4;
  return (*(__int64 (__fastcall **)(QT::QAbstractScrollArea *))(*(_QWORD *)this + 664LL))(this);
}
