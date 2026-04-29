unsigned __int64 *__fastcall sub_13CEB0(unsigned __int64 **a1, __int64 a2)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  __int64 v6; // r13
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdx
  _QWORD *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 i; // r14
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // [rsp+8h] [rbp-40h]

  result = *a1;
  if ( !*a1 )
    goto LABEL_13;
  v4 = *result;
  if ( !a1[1] )
  {
    *result = (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL | *result & 3;
    *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
    **a1 &= ~1uLL;
    result = *a1;
    **a1 |= 2u;
    return result;
  }
  v5 = v4 & 0xFFFFFFFFFFFFFFFCLL;
  v6 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL) & 2LL;
  if ( (*(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v7 = *(_QWORD **)(v5 + 8);
    if ( (*(_BYTE *)v7 & 2) != 0 )
    {
      v8 = *(_QWORD **)(v5 + 16);
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_15;
    }
    else
    {
      sub_13CBE0(v7, a2);
      v8 = *(_QWORD **)(v5 + 16);
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_8;
    }
    sub_13CBE0(v8, a2);
LABEL_8:
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
LABEL_9:
      if ( v4 > 3 )
        qfree(v4 & 0xFFFFFFFFFFFFFFFCLL);
      result = *a1;
      v4 = **a1;
      goto LABEL_12;
    }
LABEL_15:
    v9 = *(_QWORD *)(v5 + 56);
    if ( v9 )
    {
      *(_QWORD *)(v5 + 64) = 0;
      qfree(v9);
    }
    v10 = *(_QWORD *)(v5 + 32);
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 104))-- == 1 )
      {
        v12 = *(_QWORD **)(v5 + 32);
        if ( v12 )
        {
          sub_254CF0(*(_QWORD *)(v5 + 32), a2);
          v13 = v12[23];
          if ( v13 )
          {
            v14 = v12[24];
            if ( v14 )
            {
              for ( i = 0; i != v14; ++i )
              {
                v16 = (__int64 *)(v13 + 24 * i);
                v17 = *v16;
                if ( *v16 )
                {
                  v16[1] = 0;
                  v23 = v14;
                  qfree(v17);
                  v13 = v12[23];
                  v14 = v23;
                }
              }
            }
            v12[24] = 0;
            qfree(v13);
          }
          v18 = v12[20];
          if ( v18 )
          {
            v12[21] = 0;
            qfree(v18);
          }
          v19 = v12[16];
          if ( v19 )
          {
            v20 = v12[17];
            if ( v20 )
            {
              do
              {
                v21 = (__int64 *)(v19 + 32 * v6);
                v22 = *v21;
                if ( *v21 )
                {
                  v21[1] = 0;
                  qfree(v22);
                  v19 = v12[16];
                }
                ++v6;
              }
              while ( v20 != v6 );
            }
            v12[17] = 0;
            qfree(v19);
          }
          sub_2513D0(v12 + 2);
          j__qfree(v12);
        }
      }
    }
    *(_QWORD *)v5 |= 2uLL;
    goto LABEL_9;
  }
LABEL_12:
  *result = (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL | v4 & 3;
  *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
  **a1 &= ~1uLL;
  result = *a1;
  **a1 |= 2u;
LABEL_13:
  a1[1] = nullptr;
  return result;
}
