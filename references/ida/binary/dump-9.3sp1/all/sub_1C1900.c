__int64 __fastcall sub_1C1900(_QWORD *a1, double a2, double a3, __m128 a4)
{
  __int64 v4; // rbp
  void *v5; // rdi
  __int64 v6; // rbx
  unsigned int v7; // ebx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rdi
  __m128i *v16; // r14
  __int64 v17; // r12
  char *v18; // r13
  unsigned __int64 v19; // rax
  __int64 *m128i_i64; // r12
  __int64 *v21; // rax
  void *v22; // rax
  void *v23; // rsi
  const void *v24; // r12
  unsigned int *v25; // r14
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rcx
  void *v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  char *v39; // [rsp+0h] [rbp-A0h]
  _QWORD *v40; // [rsp+8h] [rbp-98h]
  void *src; // [rsp+18h] [rbp-88h] BYREF
  __int128 v42; // [rsp+20h] [rbp-80h]
  _QWORD *v43; // [rsp+30h] [rbp-70h]
  void *v44; // [rsp+38h] [rbp-68h] BYREF
  __int128 v45; // [rsp+40h] [rbp-60h]
  _QWORD *v46; // [rsp+50h] [rbp-50h]
  unsigned __int64 v47; // [rsp+60h] [rbp-40h]

  v4 = a1[4];
  v47 = __readfsqword(0x28u);
  v43 = a1;
  v5 = nullptr;
  v6 = (int)v4;
  v42 = 0;
  src = nullptr;
  if ( !(_DWORD)v4 )
    goto LABEL_2;
  v9 = 0;
  src = (void *)qvector_reserve((__int64)&src, 0, (int)v4, 4);
  memset((char *)src + 4 * v42, 0, 4 * ((int)v4 - (_QWORD)v42));
  *(_QWORD *)&v42 = (int)v4;
  if ( (int)v4 <= 0 )
    goto LABEL_19;
  v11 = (unsigned int)(v4 - 1);
  v12 = 0;
  v9 = v11 + 1;
  do
  {
    *((_DWORD *)src + v12) = v12;
    v10 = v12++;
  }
  while ( v11 != v10 );
  v13 = 0;
  v14 = 24 * v9;
  do
  {
    v15 = v13 + *v43;
    v16 = *(__m128i **)v15;
    v17 = 8LL * *(_QWORD *)(v15 + 8);
    v18 = (char *)(*(_QWORD *)v15 + v17);
    if ( *(char **)v15 == v18 )
      goto LABEL_17;
    if ( !(v17 >> 3) )
    {
      sub_1B8590(*(__m128i **)v15, (__int64 *)(*(_QWORD *)v15 + v17), -2, 0.0, a3, a4);
LABEL_37:
      v9 = (__int64)v18;
      sub_1B84C0(v16->m128i_i8, v18);
      goto LABEL_17;
    }
    _BitScanReverse64(&v19, v17 >> 3);
    sub_1B8590(*(__m128i **)v15, (__int64 *)(*(_QWORD *)v15 + v17), 2LL * (int)(63 - (v19 ^ 0x3F)), 0.0, a3, a4);
    if ( v17 <= 128 )
      goto LABEL_37;
    m128i_i64 = v16[8].m128i_i64;
    sub_1B84C0(v16->m128i_i8, v16[8].m128i_i8);
    do
    {
      v11 = *m128i_i64;
      v10 = *(m128i_i64 - 1);
      v21 = m128i_i64 - 1;
      if ( v10 <= *m128i_i64 )
      {
        v9 = (__int64)m128i_i64;
      }
      else
      {
        do
        {
          v21[1] = v10;
          v9 = (__int64)v21;
          v10 = *--v21;
        }
        while ( v11 < v10 );
      }
      ++m128i_i64;
      *(_QWORD *)v9 = v11;
    }
    while ( v18 != (char *)m128i_i64 );
LABEL_17:
    v13 += 24;
  }
  while ( v14 != v13 );
  v6 = v42;
  if ( !(_QWORD)v42 )
  {
    v5 = src;
LABEL_2:
    v7 = 0;
    goto LABEL_3;
  }
LABEL_19:
  v22 = (void *)qalloc_or_throw(4 * v6, v9, v10, v11);
  v23 = src;
  v24 = v22;
  memcpy(v22, src, 4 * v6);
  v25 = (unsigned int *)src;
  v26 = 4 * v42;
  v40 = v43;
  v39 = (char *)src + 4 * v42;
  v29 = (void *)qalloc_or_throw(4 * v6, (__int64)v23, v27, v28);
  memcpy(v29, v24, 4 * v6);
  if ( v25 != &v25[(unsigned __int64)v26 / 4] )
  {
    v44 = nullptr;
    v45 = 0;
    v44 = (void *)qalloc_or_throw(4 * v6, (__int64)v24, v30, v31);
    *((_QWORD *)&v45 + 1) = v6;
    memcpy(v44, v29, 4 * v6);
    *(_QWORD *)&v45 = v6;
    v32 = -2;
    v46 = v40;
    if ( v26 >> 2 )
    {
      _BitScanReverse64(&v33, v26 >> 2);
      v32 = 2LL * (int)v33;
    }
    sub_1C13E0(v25, (__int64)v39, v32, (__int64)&v44);
    if ( v44 )
      qfree((__int64)v44);
    v44 = nullptr;
    v45 = 0;
    v44 = (void *)qalloc_or_throw(4 * v6, (__int64)v39, v34, v35);
    *((_QWORD *)&v45 + 1) = v6;
    memcpy(v44, v29, 4 * v6);
    *(_QWORD *)&v45 = v6;
    v46 = v40;
    sub_1BC890((int *)v25, v39, (__int64)&v44, v36);
    if ( v44 )
      qfree((__int64)v44);
  }
  if ( v29 )
    qfree((__int64)v29);
  if ( v24 )
    qfree((__int64)v24);
  v5 = src;
  if ( !(_QWORD)v42 )
    goto LABEL_2;
  v37 = 0;
  v38 = 0;
  do
  {
    if ( *((_DWORD *)src + v38) != v37 )
      break;
    v38 = ++v37;
  }
  while ( v37 < (unsigned __int64)v42 );
  if ( (_QWORD)v42 == v38 )
    goto LABEL_2;
  sub_1BA0A0(&src);
  v5 = src;
  v7 = 1;
LABEL_3:
  if ( v5 )
  {
    *(_QWORD *)&v42 = 0;
    qfree((__int64)v5);
  }
  return v7;
}
