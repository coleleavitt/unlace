void __fastcall sub_136A200(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // rax
  __int64 v8; // r12
  __m128i *v9; // rbp
  __int64 v10; // rsi
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  size_t v15; // r14
  const void *v16; // r13
  unsigned __int64 v17; // r15
  __m128i *i; // rbp
  size_t v19; // r10
  size_t v20; // rdx
  signed __int64 v21; // rax
  size_t v22; // r10
  size_t v23; // rdx
  signed __int64 v24; // rax
  __int64 v25; // rax
  __m128i *v26; // r14
  __m128i *v27; // r15
  void *v28; // rax
  __int64 v29; // rax
  __m128i *v30; // rax
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rax
  size_t v35; // rdx
  __int64 v36; // rax
  __m128i *v37; // [rsp+0h] [rbp-B8h]
  __int64 v38; // [rsp+8h] [rbp-B0h]
  __int64 v39; // [rsp+10h] [rbp-A8h]
  size_t v40; // [rsp+10h] [rbp-A8h]
  __int64 v41; // [rsp+18h] [rbp-A0h]
  __m128i *v42; // [rsp+20h] [rbp-98h]
  void *v43; // [rsp+28h] [rbp-90h]
  __m128i v44; // [rsp+30h] [rbp-88h] BYREF
  __int64 v45; // [rsp+40h] [rbp-78h]
  void *v46[2]; // [rsp+50h] [rbp-68h] BYREF
  __m128i v47; // [rsp+60h] [rbp-58h] BYREF
  __int64 v48; // [rsp+70h] [rbp-48h]

  v7 = a2 - (_QWORD)a1;
  v38 = a3;
  if ( a2 - (__int64)a1 <= 640 )
    return;
  v8 = a2;
  if ( !a3 )
  {
    v41 = a2;
    goto LABEL_28;
  }
  v37 = (__m128i *)((char *)a1 + 40);
  do
  {
    --v38;
    v9 = (__m128i *)((char *)a1 + 40 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * (v7 >> 3)) >> 1));
    v10 = v8 - 40;
    if ( sub_9C4B50((__int64)v37, (__int64)v9) < 0 )
    {
      if ( sub_9C4B50((__int64)v9, v10) >= 0 )
      {
        if ( sub_9C4B50((__int64)v37, v8 - 40) < 0 )
        {
LABEL_42:
          sub_ABA4C0(a1, (__m128i *)(v8 - 40));
          v34 = a1[2].m128i_i64[0];
          a1[2].m128i_i64[0] = *(_QWORD *)(v8 - 8);
          *(_QWORD *)(v8 - 8) = v34;
          goto LABEL_8;
        }
LABEL_41:
        sub_ABA4C0(a1, v37);
        v33 = a1[4].m128i_i64[1];
        a1[4].m128i_i64[1] = a1[2].m128i_i64[0];
        a1[2].m128i_i64[0] = v33;
        goto LABEL_8;
      }
    }
    else
    {
      if ( sub_9C4B50((__int64)v37, v10) < 0 )
        goto LABEL_41;
      if ( sub_9C4B50((__int64)v9, v8 - 40) < 0 )
        goto LABEL_42;
    }
    sub_ABA4C0(a1, v9);
    v14 = a1[2].m128i_i64[0];
    a1[2].m128i_i64[0] = v9[2].m128i_i64[0];
    v9[2].m128i_i64[0] = v14;
LABEL_8:
    v15 = a1->m128i_u64[1];
    v16 = (const void *)a1->m128i_i64[0];
    v17 = v8;
    for ( i = v37; ; i = (__m128i *)((char *)i + 40) )
    {
      v19 = i->m128i_u64[1];
      v20 = v15;
      v41 = (__int64)i;
      if ( v19 <= v15 )
        v20 = i->m128i_u64[1];
      if ( v20 )
      {
        v39 = i->m128i_i64[1];
        LODWORD(v21) = memcmp((const void *)i->m128i_i64[0], v16, v20);
        v19 = v39;
        if ( (_DWORD)v21 )
          goto LABEL_16;
      }
      v21 = v19 - v15;
      if ( (__int64)(v19 - v15) > 0x7FFFFFFF )
        goto LABEL_17;
      if ( v21 >= (__int64)0xFFFFFFFF80000000LL )
      {
LABEL_16:
        if ( (int)v21 >= 0 )
          break;
      }
LABEL_9:
      ;
    }
    do
    {
      do
      {
LABEL_17:
        v17 -= 40LL;
        v22 = *(_QWORD *)(v17 + 8);
        v23 = v22;
        if ( v15 <= v22 )
          v23 = v15;
        if ( v23 )
        {
          v40 = *(_QWORD *)(v17 + 8);
          LODWORD(v24) = memcmp(v16, *(const void **)v17, v23);
          v22 = v40;
          if ( (_DWORD)v24 )
            break;
        }
        v24 = v15 - v22;
        if ( (__int64)(v15 - v22) > 0x7FFFFFFF )
          goto LABEL_24;
      }
      while ( v24 < (__int64)0xFFFFFFFF80000000LL );
    }
    while ( (int)v24 < 0 );
LABEL_24:
    if ( (unsigned __int64)i < v17 )
    {
      sub_ABA4C0(i, (__m128i *)v17);
      v25 = i[2].m128i_i64[0];
      i[2].m128i_i64[0] = *(_QWORD *)(v17 + 32);
      *(_QWORD *)(v17 + 32) = v25;
      v15 = a1->m128i_u64[1];
      v16 = (const void *)a1->m128i_i64[0];
      goto LABEL_9;
    }
    sub_136A200((_DWORD)i, v8, v38, v11, v12, v13, (char)v37);
    v7 = (char *)i - (char *)a1;
    if ( (char *)i - (char *)a1 <= 640 )
      return;
    v8 = (__int64)i;
  }
  while ( v38 );
LABEL_28:
  v26 = a1 + 1;
  v27 = (__m128i *)(v41 - 24);
  LOBYTE(v46[0]) = a7;
  sub_136A070((__int64)a1, v41);
  do
  {
    v42 = &v44;
    if ( (__m128i *)v27[-1].m128i_i64[0] == v27 )
    {
      v44 = _mm_loadu_si128(v27);
    }
    else
    {
      v42 = (__m128i *)v27[-1].m128i_i64[0];
      v44.m128i_i64[0] = v27->m128i_i64[0];
    }
    v28 = (void *)v27[-1].m128i_i64[1];
    v27[-1].m128i_i64[0] = (__int64)v27;
    v27[-1].m128i_i64[1] = 0;
    v43 = v28;
    v29 = v27[1].m128i_i64[0];
    v27->m128i_i8[0] = 0;
    v45 = v29;
    if ( (__m128i *)a1->m128i_i64[0] == v26 )
    {
      v35 = a1->m128i_u64[1];
      if ( v35 )
      {
        if ( v35 == 1 )
          v27->m128i_i8[0] = a1[1].m128i_i8[0];
        else
          memcpy(v27, &a1[1], v35);
        v35 = a1->m128i_u64[1];
      }
      v36 = v27[-1].m128i_i64[0];
      v27[-1].m128i_i64[1] = v35;
      *(_BYTE *)(v36 + v35) = 0;
      v30 = (__m128i *)a1->m128i_i64[0];
    }
    else
    {
      v27[-1].m128i_i64[0] = a1->m128i_i64[0];
      v27[-1].m128i_i64[1] = a1->m128i_i64[1];
      v27->m128i_i64[0] = a1[1].m128i_i64[0];
      v30 = a1 + 1;
      a1->m128i_i64[0] = (__int64)v26;
    }
    a1->m128i_i64[1] = 0;
    v30->m128i_i8[0] = 0;
    v31 = a1[2].m128i_i64[0];
    v46[0] = &v47;
    v27[1].m128i_i64[0] = v31;
    if ( v42 == &v44 )
    {
      v47 = _mm_load_si128(&v44);
    }
    else
    {
      v46[0] = v42;
      v47.m128i_i64[0] = v44.m128i_i64[0];
    }
    v32 = (char *)&v27[-1] - (char *)a1;
    v46[1] = v43;
    v48 = v45;
    v44.m128i_i8[0] = 0;
    sub_1365E60((__int64)a1, 0, 0xCCCCCCCCCCCCCCCDLL * (v32 >> 3), (__int64)v46);
    if ( v46[0] != &v47 )
      operator delete(v46[0]);
    v27 = (__m128i *)((char *)v27 - 40);
  }
  while ( v32 > 40 );
}
