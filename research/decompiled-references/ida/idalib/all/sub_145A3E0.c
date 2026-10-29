void __fastcall sub_145A3E0(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v10; // rbx
  unsigned __int64 v11; // r15
  __int64 v12; // r12
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r14
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi
  int *v20; // rcx
  char *v21; // rdi
  int *v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  char *v27; // rcx
  _QWORD *v28; // rdx
  unsigned __int64 v29; // rdx
  int v30; // r8d
  int v31; // esi

  if ( a2 )
  {
    v2 = a1[1];
    if ( a2 <= (__int64)(a1[2] - v2) >> 3 )
    {
      if ( a2 == 1 )
      {
        v7 = (_QWORD *)a1[1];
      }
      else
      {
        v3 = 0;
        v4 = ((a2 - 2) >> 1) + 1;
        do
        {
          v5 = v3++;
          *(_OWORD *)(v2 + 16 * v5) = 0;
        }
        while ( v4 > v3 );
        v6 = 2 * v4;
        v7 = (_QWORD *)(v2 + 16 * v4);
        if ( a2 == v6 )
          goto LABEL_8;
      }
      *v7 = 0;
LABEL_8:
      a1[1] = v2 + 8 * a2;
      return;
    }
    v10 = v2 - *a1;
    v11 = v10 >> 3;
    if ( 0x1FFFFFFFFFFFFFFFLL - (v10 >> 3) < a2 )
      std::__throw_length_error("vector::_M_default_append");
    v12 = (__int64)(v2 - *a1) >> 3;
    if ( a2 >= v11 )
      v12 = a2;
    v13 = v11 + v12;
    if ( v13 > 0x1FFFFFFFFFFFFFFFLL )
      v13 = 0x1FFFFFFFFFFFFFFFLL;
    v14 = 8 * v13;
    v15 = operator new(v14);
    v16 = (_QWORD *)(v15 + v10);
    if ( a2 == 1 )
      goto LABEL_19;
    v17 = 0;
    v18 = ((a2 - 2) >> 1) + 1;
    do
    {
      v19 = v17++;
      *(_OWORD *)&v16[2 * v19] = 0;
    }
    while ( v18 > v17 );
    v16 += 2 * v18;
    if ( a2 != 2 * v18 )
LABEL_19:
      *v16 = 0;
    v20 = (int *)a1[1];
    v21 = (char *)*a1;
    if ( v20 != (int *)*a1 )
    {
      v22 = (int *)*a1;
      v23 = (unsigned __int64)((char *)(v20 - 2) - v21) >> 3;
      if ( (v15 >= (unsigned __int64)(v21 + 16) || (unsigned __int64)v21 >= v15 + 16)
        && (v23 & 0x1FFFFFFFFFFFFFFELL) != 0 )
      {
        v24 = v23 + 1;
        v25 = 0;
        do
        {
          *(__m128i *)(v15 + v25) = _mm_loadu_si128((const __m128i *)&v21[v25]);
          v25 += 16;
        }
        while ( v25 != 16 * (v24 >> 1) );
        v26 = 8 * (v24 & 0xFFFFFFFFFFFFFFFELL);
        v27 = &v21[v26];
        v28 = (_QWORD *)(v15 + v26);
        if ( v24 != (v24 & 0xFFFFFFFFFFFFFFFELL) )
          *v28 = *(_QWORD *)v27;
LABEL_27:
        operator delete(v21);
LABEL_28:
        *a1 = v15;
        a1[2] = v15 + v14;
        a1[1] = v15 + 8 * (a2 + v11);
        return;
      }
      v29 = v15;
      do
      {
        v30 = *v22;
        v31 = v22[1];
        v22 += 2;
        v29 += 8LL;
        *(_DWORD *)(v29 - 8) = v30;
        *(_DWORD *)(v29 - 4) = v31;
      }
      while ( v20 != v22 );
    }
    if ( !v21 )
      goto LABEL_28;
    goto LABEL_27;
  }
}
