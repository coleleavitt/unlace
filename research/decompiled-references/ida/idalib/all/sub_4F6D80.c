__int64 __fastcall sub_4F6D80(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  char *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r14
  char *v14; // r12
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rdx
  __m128i v18; // xmm0
  _QWORD *v19; // r13
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  __int64 v24; // [rsp+0h] [rbp-48h]

  v2 = a1[3];
  v3 = a1[1];
  if ( v2 )
  {
    if ( v3 )
    {
      v4 = (char *)*a1;
      v5 = 0;
      while ( !v4[40] )
      {
        ++v5;
        v4 += 48;
        if ( v5 == v3 )
          goto LABEL_25;
      }
      a1[3] = v2 - 1;
      v4[40] = 0;
      return v5;
    }
LABEL_25:
    if ( !under_debugger )
      interr(2884);
LABEL_29:
    BUG();
  }
  v7 = a1[2];
  if ( v7 >= v3 + 1 )
  {
    v24 = *a1;
    v8 = a1[1];
    goto LABEL_10;
  }
  v11 = qvector_reserve(a1, 0, v3 + 1, 48);
  v12 = a1[2];
  v13 = a1[1];
  a1[2] = v7;
  v24 = v11;
  v14 = (char *)*a1;
  v15 = v13 - 1;
  if ( v15 < 0 )
    goto LABEL_24;
  v16 = v11;
  do
  {
    v17 = *(_QWORD *)v14;
    v18 = _mm_loadu_si128((const __m128i *)(v14 + 8));
    *(_QWORD *)v14 = 0;
    *(_OWORD *)(v14 + 8) = 0;
    *(_QWORD *)v16 = v17;
    *(__m128i *)(v16 + 8) = v18;
    *(_BYTE *)(v16 + 24) = v14[24];
    *(_QWORD *)(v16 + 32) = *((_QWORD *)v14 + 4);
    LOBYTE(v17) = v14[40];
    *((_QWORD *)v14 + 4) = 0;
    *(_BYTE *)(v16 + 40) = v17;
    v19 = *((_QWORD **)v14 + 4);
    if ( v19 )
    {
      if ( v19[4] )
      {
        if ( !under_debugger )
          interr(2871);
        goto LABEL_29;
      }
      v20 = (void *)v19[6];
      v19[9] = 0;
      if ( v20 )
      {
        v19[7] = 0;
        qfree(v20);
      }
      v21 = (void *)v19[3];
      if ( v21 )
      {
        v19[4] = 0;
        qfree(v21);
      }
      operator delete(v19, 0x58u);
    }
    v22 = *(void **)v14;
    if ( *(_QWORD *)v14 )
    {
      *((_QWORD *)v14 + 1) = 0;
      qfree(v22);
    }
    v14 += 48;
    v16 += 48;
  }
  while ( v15-- != 0 );
  v14 = (char *)*a1;
LABEL_24:
  qfree(v14);
  *a1 = v24;
  a1[2] = v12;
  v8 = a1[1];
LABEL_10:
  v5 = v3;
  v9 = 48 * v8 + v24;
  *(_QWORD *)v9 = 0;
  *(_BYTE *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 32) = 0;
  *(_BYTE *)(v9 + 40) = 1;
  *(_OWORD *)(v9 + 8) = 0;
  v10 = *a1 + 48 * v3;
  ++a1[1];
  *(_BYTE *)(v10 + 40) = 0;
  return v5;
}
