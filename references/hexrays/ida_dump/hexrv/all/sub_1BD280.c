__int64 __fastcall sub_1BD280(_QWORD *a1, double a2, double a3, __m128 a4)
{
  __int64 v4; // rbp
  void *v5; // rdi
  __int64 v6; // rbx
  unsigned int v7; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rdi
  __m128i *v15; // r14
  __int64 v16; // r12
  char *v17; // r13
  unsigned __int64 v18; // rax
  __m128i *v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 *v23; // rsi
  void *v24; // r12
  char *v25; // r14
  __int64 v26; // r15
  void *v27; // rbp
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  char *v32; // [rsp+0h] [rbp-A0h]
  _QWORD *v33; // [rsp+8h] [rbp-98h]
  void *src; // [rsp+18h] [rbp-88h] BYREF
  __int128 v35; // [rsp+20h] [rbp-80h]
  _QWORD *v36; // [rsp+30h] [rbp-70h]
  void *v37; // [rsp+38h] [rbp-68h] BYREF
  __int128 v38; // [rsp+40h] [rbp-60h]
  _QWORD *v39; // [rsp+50h] [rbp-50h]
  unsigned __int64 v40; // [rsp+60h] [rbp-40h]

  v4 = a1[4];
  v40 = __readfsqword(0x28u);
  v36 = a1;
  v5 = nullptr;
  v6 = (int)v4;
  v35 = 0;
  src = nullptr;
  if ( !(_DWORD)v4 )
    goto LABEL_2;
  src = (void *)qvector_reserve(&src, 0, (int)v4, 4);
  memset((char *)src + 4 * v35, 0, 4 * ((int)v4 - (_QWORD)v35));
  *(_QWORD *)&v35 = (int)v4;
  if ( (int)v4 <= 0 )
    goto LABEL_19;
  v9 = (unsigned int)(v4 - 1);
  v10 = 0;
  do
  {
    *((_DWORD *)src + v10) = v10;
    v11 = v10++;
  }
  while ( v9 != v11 );
  v12 = 0;
  v13 = 24 * (v9 + 1);
  do
  {
    v14 = v12 + *v36;
    v15 = *(__m128i **)v14;
    v16 = 8LL * *(_QWORD *)(v14 + 8);
    v17 = (char *)(*(_QWORD *)v14 + v16);
    if ( *(char **)v14 == v17 )
      goto LABEL_17;
    if ( !(v16 >> 3) )
    {
      sub_1B3F10(*(__m128i **)v14, (__int64 *)(*(_QWORD *)v14 + v16), -2, 0.0, a3, a4);
LABEL_37:
      sub_1B3E40(v15->m128i_i8, v17);
      goto LABEL_17;
    }
    _BitScanReverse64(&v18, v16 >> 3);
    sub_1B3F10(*(__m128i **)v14, (__int64 *)(*(_QWORD *)v14 + v16), 2LL * (int)(63 - (v18 ^ 0x3F)), 0.0, a3, a4);
    if ( v16 <= 128 )
      goto LABEL_37;
    v19 = v15 + 8;
    sub_1B3E40(v15->m128i_i8, v15[8].m128i_i8);
    do
    {
      v20 = v19->m128i_i64[0];
      v21 = v19[-1].m128i_i64[1];
      v22 = &v19[-1].m128i_i64[1];
      if ( v21 <= v19->m128i_i64[0] )
      {
        v23 = (__int64 *)v19;
      }
      else
      {
        do
        {
          v22[1] = v21;
          v23 = v22;
          v21 = *--v22;
        }
        while ( v20 < v21 );
      }
      v19 = (__m128i *)((char *)v19 + 8);
      *v23 = v20;
    }
    while ( v17 != (char *)v19 );
LABEL_17:
    v12 += 24;
  }
  while ( v13 != v12 );
  v6 = v35;
  if ( !(_QWORD)v35 )
  {
    v5 = src;
LABEL_2:
    v7 = 0;
    goto LABEL_3;
  }
LABEL_19:
  v24 = (void *)qalloc_or_throw(4 * v6);
  memcpy(v24, src, 4 * v6);
  v25 = (char *)src;
  v26 = 4 * v35;
  v33 = v36;
  v32 = (char *)src + 4 * v35;
  v27 = (void *)qalloc_or_throw(4 * v6);
  memcpy(v27, v24, 4 * v6);
  if ( v25 != &v25[v26] )
  {
    v37 = nullptr;
    v38 = 0;
    v37 = (void *)qalloc_or_throw(4 * v6);
    *((_QWORD *)&v38 + 1) = v6;
    memcpy(v37, v27, 4 * v6);
    *(_QWORD *)&v38 = v6;
    v28 = -2;
    v39 = v33;
    if ( v26 >> 2 )
    {
      _BitScanReverse64(&v29, v26 >> 2);
      v28 = 2LL * (int)v29;
    }
    sub_1BCD60(v25, v32, v28, (__int64)&v37);
    if ( v37 )
      qfree(v37);
    v37 = nullptr;
    v38 = 0;
    v37 = (void *)qalloc_or_throw(4 * v6);
    *((_QWORD *)&v38 + 1) = v6;
    memcpy(v37, v27, 4 * v6);
    *(_QWORD *)&v38 = v6;
    v39 = v33;
    sub_1B8210((int *)v25, v32, (__int64)&v37);
    if ( v37 )
      qfree(v37);
  }
  if ( v27 )
    qfree(v27);
  if ( v24 )
    qfree(v24);
  v5 = src;
  if ( !(_QWORD)v35 )
    goto LABEL_2;
  v30 = 0;
  v31 = 0;
  do
  {
    if ( *((_DWORD *)src + v31) != v30 )
      break;
    v31 = ++v30;
  }
  while ( v30 < (unsigned __int64)v35 );
  if ( (_QWORD)v35 == v31 )
    goto LABEL_2;
  sub_1B5A20(&src);
  v5 = src;
  v7 = 1;
LABEL_3:
  if ( v5 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v5);
  }
  return v7;
}
