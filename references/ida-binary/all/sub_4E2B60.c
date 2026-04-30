__int64 __fastcall filtered_widget_mixin_t::jump_match(__int64 a1, const __m128i *a2, double a3)
{
  int v4; // eax
  __int64 v6; // rdx
  unsigned int v7; // ebp
  __int64 v8; // rdi
  int v9; // r12d
  __int64 (__fastcall *v10)(__int64, void **); // rax
  int v11; // r15d
  unsigned int v12; // ebp
  __int64 v13; // rsi
  int v15; // eax
  int v16; // ebp
  int v17; // [rsp+Ch] [rbp-ACh]
  _BYTE v18[32]; // [rsp+10h] [rbp-A8h] BYREF
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v20; // [rsp+38h] [rbp-80h]
  __int64 v21; // [rsp+40h] [rbp-78h]
  _BYTE v22[40]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 136);
  v23 = __readfsqword(0x28u);
  v6 = (unsigned int)(v4 + 1);
  *(_DWORD *)(a1 + 136) = v6;
  if ( __ROR4__(-1030792151 * v4, 2) <= 0x28F5C28u && (unsigned __int8)sub_541EF0(a1, a2, v6) )
    return 0xFFFFFFFFLL;
  if ( *(_QWORD *)(a1 + 56) == a2->m128i_i64[0]
    && *(_QWORD *)(a1 + 64) == a2->m128i_i64[1]
    && *(_QWORD *)(a1 + 72) == a2[1].m128i_i64[0] )
  {
    v15 = *(_DWORD *)(a1 + 140);
    if ( v15 == 1 )
      return 0;
    if ( v15 == 2 )
      return 0xFFFFFFFFLL;
  }
  v7 = *(_DWORD *)(a1 + 48);
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_DWORD *)(a1 + 48) & 4;
  v10 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v8 + 128LL);
  v11 = v9 != 0 ? -1 : 1;
  if ( (v7 & 0x20) == 0 )
  {
    ptr = (void *)-1LL;
    v12 = 0;
    v20 = 0;
    v21 = 0;
    v17 = v10(v8, &ptr);
    if ( v9 )
    {
      v16 = v17;
      v17 = -1;
      v12 = v16 - 1;
      if ( v12 != -1 )
        goto LABEL_11;
    }
    else if ( v17 )
    {
      goto LABEL_11;
    }
    return 0;
  }
  v12 = HIBYTE(v7);
  ptr = (void *)-1LL;
  v20 = 0;
  v21 = 0;
  v10(v8, &ptr);
  v17 = v11 + v12;
LABEL_11:
  while ( (*(_BYTE *)(a1 + 48) & 0x10) == 0
       && (unsigned __int8)QT::QHeaderView::isSectionHidden(*(QT::QHeaderView **)(a1 + 128), v12) )
  {
LABEL_10:
    v12 += v11;
    if ( v17 == v12 )
      return 0;
  }
  (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD, _QWORD, const __m128i *))(**(_QWORD **)(a1 + 40) + 112LL))(
    v18,
    *(_QWORD *)(a1 + 40),
    a2->m128i_u32[0],
    v12,
    a2);
  (*(void (__fastcall **)(_BYTE *, _QWORD, _BYTE *, _QWORD))(**(_QWORD **)(a1 + 40) + 144LL))(
    v22,
    *(_QWORD *)(a1 + 40),
    v18,
    0);
  QT::QVariant::toString((QT::QVariant *)&ptr);
  QT::QVariant::~QVariant((QT::QVariant *)v22);
  v13 = a1 + 104;
  if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
  {
    if ( (unsigned __int8)QT::QString::startsWith(&ptr, v13, 0, a3) )
      goto LABEL_14;
    goto LABEL_7;
  }
  if ( QT::QString::indexOf(&ptr, v13, 0, 0, a3) == -1 )
  {
LABEL_7:
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    goto LABEL_10;
  }
LABEL_14:
  *(__m128i *)(a1 + 80) = _mm_loadu_si128(a2);
  *(_QWORD *)(a1 + 96) = a2[1].m128i_i64[0];
  if ( ptr )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
  }
  return 1;
}
