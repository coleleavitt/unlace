unsigned __int64 __fastcall sub_4CA670(__int64 a1, QT::QSplitter **a2, __int64 a3, int a4, int a5)
{
  QT::QSplitter *v6; // rax
  __int64 (__fastcall *v7)(__int64); // rax
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebp
  __int64 v12; // rdx
  int i; // ebx
  __int64 v14; // r15
  char *v15; // rcx
  __int64 v16; // rax
  char *v17; // rsi
  __int64 v18; // rbp
  __int64 v19; // r14
  _DWORD *v20; // rax
  __int64 v21; // r14
  int v22; // ebx
  _DWORD *v23; // rdx
  int v24; // r15d
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // r12
  __m128i v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // rbx
  __m128i v35; // xmm1
  void *v36; // rdi
  unsigned int j; // r15d
  __int64 (__fastcall *v38)(__int64, int); // rax
  const QT::QObject *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  __m128i v45; // [rsp+8h] [rbp-A8h] BYREF
  int v46; // [rsp+1Ch] [rbp-94h]
  int v47; // [rsp+20h] [rbp-90h]
  int v48; // [rsp+24h] [rbp-8Ch]
  unsigned __int64 v49; // [rsp+30h] [rbp-80h] BYREF
  void *src[2]; // [rsp+38h] [rbp-78h] BYREF
  __int64 v51; // [rsp+48h] [rbp-68h]
  __int64 v52; // [rsp+58h] [rbp-58h] BYREF
  __int128 v53; // [rsp+60h] [rbp-50h]
  unsigned __int64 v54; // [rsp+70h] [rbp-40h]

  v47 = a4;
  v48 = a5;
  v54 = __readfsqword(0x28u);
  *(_OWORD *)src = 0;
  v6 = a2[4];
  v51 = 0;
  v52 = 0;
  v53 = 0;
  if ( a4 == 1 )
    v46 = *((_DWORD *)v6 + 7) + 1 - *((_DWORD *)v6 + 5);
  else
    v46 = *((_DWORD *)v6 + 8) + 1 - *((_DWORD *)v6 + 6);
  v7 = *((__int64 (__fastcall **)(__int64))*a2 + 58);
  if ( v7 == sub_4C46B0 )
    v8 = QT::QSplitter::count(a2[13]);
  else
    v8 = v7((__int64)a2);
  v11 = v8;
  v12 = v8;
  if ( !src[0]
    || v8 > *((_QWORD *)src[0] + 1)
          - ((__int64)((__int64)src[1] - (((unsigned __int64)src[0] + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 2) )
  {
    goto LABEL_55;
  }
  if ( (*((_BYTE *)src[0] + 4) & 1) == 0 )
  {
    if ( *(_DWORD *)src[0] == 1 )
    {
      *((_DWORD *)src[0] + 1) |= 1u;
      goto LABEL_8;
    }
LABEL_55:
    v29 = v51;
    if ( v12 >= v51 )
      v29 = v12;
    v30 = QT::QArrayData::allocate(&v49, 4, 16, v29, 1, v10);
    v31 = v49;
    v32 = (__m128i)(unsigned __int64)v30;
    v33 = 0;
    v34 = 4 * v51;
    v35 = _mm_unpacklo_epi64((__m128i)v49, v32);
    if ( 4 * v51 )
    {
      v45 = v35;
      memcpy((void *)v32.m128i_i64[0], src[1], 4 * v51);
      v35 = _mm_load_si128(&v45);
      v33 = v34 >> 2;
    }
    if ( v31 )
      *(_DWORD *)(v31 + 4) |= 1u;
    v36 = src[0];
    v51 = v33;
    *(__m128i *)src = v35;
    if ( v36 && !_InterlockedSub((volatile signed __int32 *)v36, 1u) )
      free(v36);
  }
LABEL_8:
  if ( v11 <= 0 )
    goto LABEL_35;
  for ( i = 0; i != v11; ++i )
  {
    v14 = v51;
    if ( !src[0] )
      goto LABEL_13;
    if ( *(int *)src[0] <= 1 )
    {
      v26 = ((unsigned __int64)src[0] + 31) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *((_QWORD *)src[0] + 1) - ((__int64)((__int64)src[1] - v26) >> 2) != v51 )
      {
        *((_DWORD *)src[1] + v51++) = 0;
        goto LABEL_18;
      }
      if ( !v51 && src[1] != (void *)v26 )
      {
        *((_DWORD *)src[1] - 1) = 0;
        src[1] = (char *)src[1] - 4;
        ++v51;
        goto LABEL_18;
      }
    }
    if ( *(int *)src[0] > 1 )
      goto LABEL_13;
    v27 = *((_QWORD *)src[0] + 1);
    v10 = (__int64)src[1] - (((unsigned __int64)src[0] + 31) & 0xFFFFFFFFFFFFFFF0LL);
    v16 = v51;
    v28 = v10 >> 2;
    if ( v27 - v51 - (v10 >> 2) > 0 )
    {
      v17 = (char *)src[1] + 4 * v51;
      goto LABEL_15;
    }
    if ( v10 > 0 && 3 * v51 < 2 * v27 )
    {
      v15 = (char *)src[1] - 4 * v28;
      if ( v51 && v15 != src[1] && src[1] && v15 )
      {
        v15 = (char *)memmove((char *)src[1] - 4 * v28, src[1], 4 * v51);
        v16 = v51;
      }
      src[1] = v15;
    }
    else
    {
LABEL_13:
      sub_187120((__int64)src, 0, 1, 0, v9, v10);
      v15 = (char *)src[1];
      v16 = v51;
    }
    v17 = &v15[4 * v14];
LABEL_15:
    if ( v14 < v16 )
    {
      v45.m128i_i64[0] = (__int64)v17;
      memmove(v17 + 4, v17, 4 * (v16 - v14));
      v16 = v51;
      v17 = (char *)v45.m128i_i64[0];
    }
    v51 = v16 + 1;
    *(_DWORD *)v17 = 0;
LABEL_18:
    if ( !src[0] || *(int *)src[0] > 1 )
      sub_187120((__int64)src, 0, 0, 0, v9, v10);
  }
  v18 = i;
  v19 = 0;
  if ( (v48 & 0x100) != 0 )
  {
    for ( j = 0; ; j = v19 )
    {
      v38 = *((__int64 (__fastcall **)(__int64, int))*a2 + 57);
      if ( v38 == sub_4C46E0 )
      {
        v39 = (const QT::QObject *)QT::QSplitter::widget(a2[13], j);
        v40 = QT::QMetaObject::cast((QT::QMetaObject *)&off_899980, v39);
      }
      else
      {
        v40 = v38((__int64)a2, j);
      }
      if ( v40 == a3 )
      {
        v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 112LL))(a3);
        v10 = (unsigned int)(HIDWORD(v41) + 30);
        if ( v47 == 1 )
          v10 = (unsigned int)(v41 + 30);
        if ( !src[0] || *(int *)src[0] > 1 )
        {
          v45.m128i_i32[0] = v10;
          sub_187120((__int64)src, 0, 0, 0, v9, v10);
          v10 = v45.m128i_u32[0];
        }
        *((_DWORD *)src[1] + v19) = v10;
        v42 = v53;
        v43 = v52;
        if ( *((_QWORD *)&v53 + 1) < (unsigned __int64)(v53 + 1) )
        {
          v45.m128i_i32[0] = v10;
          v52 = qvector_reserve(&v52, v52, v53 + 1, 4);
          v43 = v52;
          v10 = v45.m128i_u32[0];
          v42 = v53;
        }
        *(_DWORD *)(v43 + 4 * v42) = j;
        v46 -= v10;
        *(_QWORD *)&v53 = v53 + 1;
      }
      if ( ++v19 == i )
        break;
    }
  }
  else
  {
    do
      ++v19;
    while ( v19 != i );
  }
  v20 = (_DWORD *)v52;
  v21 = 0;
  v22 = i - v53;
  v23 = (_DWORD *)(v52 + 4 * v53);
  if ( (_DWORD *)v52 == v23 )
    goto LABEL_31;
LABEL_27:
  while ( *v20 != (_DWORD)v21 )
  {
    if ( v23 == ++v20 )
      goto LABEL_31;
  }
  if ( v23 == v20 )
  {
    while ( 1 )
    {
LABEL_31:
      v24 = v46 / v22;
      if ( !src[0] || *(int *)src[0] > 1 )
        sub_187120((__int64)src, 0, 0, 0, v9, v10);
      *((_DWORD *)src[1] + v21++) = v24;
      if ( v21 == v18 )
        break;
LABEL_30:
      v20 = (_DWORD *)v52;
      v23 = (_DWORD *)(v52 + 4 * v53);
      if ( (_DWORD *)v52 != v23 )
        goto LABEL_27;
    }
  }
  else if ( ++v21 != v18 )
  {
    goto LABEL_30;
  }
LABEL_35:
  QT::QSplitter::setSizes(a2[13], src);
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree(v52, (const char *)src);
  }
  if ( src[0] && !_InterlockedSub((volatile signed __int32 *)src[0], 1u) )
    free(src[0]);
  return v54 - __readfsqword(0x28u);
}
