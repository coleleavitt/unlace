__int64 __fastcall sub_4D5940(__int64 a1, __int64 a2)
{
  const char *v4; // rsi
  __int64 v5; // rax
  size_t v6; // r13
  unsigned __int64 v7; // r12
  void *v8; // r14
  __int64 v9; // rdi
  __m128i v10; // xmm0
  int v11; // eax
  void *v12; // rdi
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r13
  _BYTE *v15; // rdi
  int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  const char *v21; // rsi
  unsigned int v22; // ebx
  int v24; // r12d
  __int64 v25; // rax
  void *v26; // rax
  __int64 v27; // rax
  __m128i v28; // [rsp+0h] [rbp-D8h] BYREF
  void *src; // [rsp+10h] [rbp-C8h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-C0h]
  int v31; // [rsp+28h] [rbp-B0h]
  void *ptr[4]; // [rsp+30h] [rbp-A8h] BYREF
  void *v33; // [rsp+50h] [rbp-88h] BYREF
  const char *v34; // [rsp+58h] [rbp-80h]
  _OWORD v35[2]; // [rsp+70h] [rbp-68h] BYREF
  __m128i v36; // [rsp+90h] [rbp-48h]
  unsigned __int64 v37; // [rsp+A8h] [rbp-30h]

  v37 = __readfsqword(0x28u);
  v4 = nullptr;
  src = nullptr;
  *(_OWORD *)n = 0;
  *(_DWORD *)a2 = sub_4D4090(a1);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **))(**(_QWORD **)(a1 + 80) + 248LL))(
         *(_QWORD *)(a1 + 80),
         0,
         &src);
  v6 = n[0];
  v7 = v5;
  v8 = nullptr;
  if ( n[0] )
  {
    v26 = (void *)qalloc_or_throw(n[0]);
    v4 = (const char *)src;
    v8 = v26;
    memcpy(v26, src, v6);
  }
  v9 = *(_QWORD *)(a2 + 8);
  v10 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  if ( v9 )
  {
    *(_QWORD *)(a2 + 16) = 0;
    v28 = v10;
    qfree(v9, v4);
    v10 = _mm_load_si128(&v28);
  }
  *(_QWORD *)(a2 + 8) = v8;
  *(__m128i *)(a2 + 16) = v10;
  v11 = QT::QComboBox::currentIndex(*(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 8LL));
  if ( v11 )
  {
    v24 = v11 - 1;
    v25 = *(_QWORD *)(a2 + 16);
    if ( v24 < (unsigned __int64)(8 * v25) )
    {
      memset(*(void **)(a2 + 8), 0, v25 & 0x1FFFFFFFFFFFFFFFLL);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + ((unsigned __int64)v24 >> 3)) |= 1 << (v24 & 7);
      if ( (*(_DWORD *)a2 & 0xC00) != 0x800 )
        goto LABEL_11;
      goto LABEL_25;
    }
  }
  else
  {
    v12 = *(void **)(a2 + 8);
    v13 = (v7 + 7) >> 3;
    if ( *(_QWORD *)(a2 + 24) < v13 )
    {
      v27 = qvector_reserve(a2 + 8, *(_QWORD *)(a2 + 8), (v7 + 7) >> 3, 1);
      *(_QWORD *)(a2 + 8) = v27;
      v12 = (void *)v27;
    }
    *(_QWORD *)(a2 + 16) = v13;
    v14 = v7 >> 3;
    v15 = memset(v12, 255, v7 >> 3);
    v16 = v7 & 7;
    if ( v16 )
      v15[v14] |= (1 << v16) - 1;
  }
  if ( (*(_DWORD *)a2 & 0xC00) != 0x800 )
  {
LABEL_11:
    *(_DWORD *)(a2 + 32) = -1;
    goto LABEL_12;
  }
LABEL_25:
  v36 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 104) + 64LL));
  v35[1] = v36;
  v35[0] = v36;
  *(_DWORD *)(a2 + 32) = __ROR4__(_byteswap_ulong(QT::QColor::rgb((QT::QColor *)v35)), 8) & 0xFFFFFF;
LABEL_12:
  QT::QComboBox::currentText((QT::QComboBox *)ptr);
  QT::QString::toUtf8_helper((QT::QString *)&v33, (const QT::QString *)ptr);
  v21 = v34;
  if ( !v34 )
    v21 = (const char *)&QT::QByteArray::_empty;
  v22 = sub_4D37C0(
          a2,
          v21,
          v17,
          v18,
          v19,
          v20,
          v28.m128i_i64[0],
          v28.m128i_i32[2],
          (int)src,
          n[0],
          n[1],
          v31,
          (__int64)ptr[0]);
  if ( v33 && !_InterlockedSub((volatile signed __int32 *)v33, 1u) )
    free(v33);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( src )
  {
    n[0] = 0;
    qfree(src, v21);
  }
  return v22;
}
