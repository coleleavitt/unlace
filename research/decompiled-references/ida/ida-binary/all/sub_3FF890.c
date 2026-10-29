unsigned __int64 __fastcall sub_3FF890(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbp
  __int64 v4; // rax
  const char *v5; // rsi
  const char *v6; // rax
  const char *v7; // rdx
  size_t v8; // rax
  double v9; // xmm0_8
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *func; // rax
  __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // eax
  _BYTE *v24; // rax
  char v25; // dl
  char v26; // al
  unsigned __int64 v27; // r15
  __int64 *v28; // rsi
  int v29; // esi
  void (__fastcall *v30)(QT::QStandardItem *, _BYTE *, __int64); // r14
  QT::QStandardItem *v31; // rax
  __int64 v32; // r14
  QT::QStandardItem *v33; // rbx
  char v34; // r12
  int v35; // r13d
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r15
  __int64 v42; // rdx
  size_t v43; // rax
  const char *v44; // r14
  const char *v45; // rsi
  double v46; // xmm0_8
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 *v52; // rax
  __int64 v53; // r15
  __int64 v55; // [rsp+10h] [rbp-F8h]
  const char *v56; // [rsp+18h] [rbp-F0h]
  char v57; // [rsp+25h] [rbp-E3h] BYREF
  char v58; // [rsp+26h] [rbp-E2h] BYREF
  char v59; // [rsp+27h] [rbp-E1h] BYREF
  int v60[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v61; // [rsp+30h] [rbp-D8h] BYREF
  QT::QStandardItem *v62; // [rsp+38h] [rbp-D0h] BYREF
  void *v63[2]; // [rsp+40h] [rbp-C8h] BYREF
  int *v64; // [rsp+50h] [rbp-B8h]
  void *ptr[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+70h] [rbp-98h]
  void *v67; // [rsp+80h] [rbp-88h] BYREF
  __int128 v68; // [rsp+88h] [rbp-80h]
  char *v69; // [rsp+98h] [rbp-70h]
  _BYTE v70[40]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v71; // [rsp+C8h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 8);
  v71 = __readfsqword(0x28u);
  v3 = *(_QWORD **)a2;
  v55 = *(_QWORD *)a2 + 24 * v2;
  if ( *(_QWORD *)a2 != v55 )
  {
    do
    {
      v31 = (QT::QStandardItem *)operator new(0x20u);
      v32 = *v3;
      *(_OWORD *)v31 = 0;
      v33 = v31;
      v34 = *(_BYTE *)(a1 + 28);
      v35 = *(_DWORD *)(a1 + 24);
      QT::QStandardItem::QStandardItem(v31);
      *((_QWORD *)v33 + 2) = v32;
      *(_QWORD *)v33 = &xref_unified_tree_item_t___vtable;
      *((_DWORD *)v33 + 6) = v35;
      *((_BYTE *)v33 + 28) = v34;
      QT::QStandardItem::setColumnCount(v33, 4);
      QT::QVariant::QVariant(
        v70,
        QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType,
        (char *)v33 + 16);
      QT::QStandardItem::setData(v33, (const QT::QVariant *)v70, 258);
      QT::QVariant::~QVariant((QT::QVariant *)v70);
      QT::QVariant::QVariant((QT::QVariant *)v70, *((_DWORD *)v33 + 6));
      QT::QStandardItem::setData(v33, (const QT::QVariant *)v70, 257);
      QT::QVariant::~QVariant((QT::QVariant *)v70);
      if ( *(_BYTE *)(a1 + 28) || *((_BYTE *)v3 + 18) )
      {
        QT::QVariant::QVariant(v70, QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType, v3 + 1);
        QT::QStandardItem::setData(v33, (const QT::QVariant *)v70, 261);
        QT::QVariant::~QVariant((QT::QVariant *)v70);
      }
      *(_QWORD *)v60 = v33;
      v64 = nullptr;
      *(_OWORD *)v63 = 0;
      sub_3D32B0((int **)v63, nullptr, (__int64 *)v60, v36, v37, v38);
      if ( !v63[0] || *(int *)v63[0] > 1 )
        sub_3D2ED0((__int64)v63, 0, 0, 0, v39, v40);
      v41 = *v3;
      v42 = *v3;
      v68 = 0;
      v67 = nullptr;
      sub_169A50((__int64 *)&v67, (__int64)"%a", v42);
      v43 = 0;
      v44 = &s1;
      if ( (_QWORD)v68 )
      {
        v44 = (const char *)v67;
        if ( v67 )
        {
          if ( *(_BYTE *)v67 )
            v43 = strlen((const char *)v67 + 1) + 1;
        }
      }
      v45 = (const char *)v43;
      v46 = QT::QString::fromUtf8(ptr, v43, v44);
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree(v67, v45, v46);
      }
      v61 = (__int64)sub_3EE1B0((QT::QString *)ptr, v41);
      sub_3D32B0((int **)v63, v64, &v61, v47, v48, v49);
      if ( !v63[0] || *(int *)v63[0] > 1 )
        sub_3D2ED0((__int64)v63, 0, 0, 0, v50, v51);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      v52 = (__int64 *)getseg(*v3);
      v53 = -1;
      if ( v52 )
        v53 = *v52;
      if ( *v3 == -1 || (v4 = getseg(*v3)) == 0 )
      {
        v66 = 0;
        v9 = 0.0;
        *(_OWORD *)ptr = 0;
      }
      else
      {
        v5 = (const char *)v4;
        v67 = nullptr;
        v68 = 0;
        if ( get_segm_name(&v67, v4, 0) <= 0 )
        {
          v66 = 0;
          v9 = 0.0;
          *(_OWORD *)ptr = 0;
        }
        else
        {
          v6 = nullptr;
          v7 = &s1;
          if ( (_QWORD)v68 )
          {
            v7 = (const char *)v67;
            if ( v67 )
            {
              if ( *(_BYTE *)v67 )
              {
                v56 = (const char *)v67;
                v8 = strlen((const char *)v67 + 1);
                v7 = v56;
                v6 = (const char *)(v8 + 1);
              }
            }
          }
          v5 = v6;
          v9 = QT::QString::fromUtf8(ptr, v6, v7);
        }
        if ( v67 )
        {
          *(_QWORD *)&v68 = 0;
          v9 = qfree(v67, v5, v9);
        }
      }
      v62 = sub_3EE1B0((QT::QString *)ptr, v53);
      sub_3D32B0((int **)v63, v64, (__int64 *)&v62, v10, v11, v12);
      if ( !v63[0] || *(int *)v63[0] > 1 )
        sub_3D2ED0((__int64)v63, 0, 0, 0, v13, v14);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      func = (_QWORD *)get_func(v3[1]);
      v16 = v3[1];
      v17 = -1;
      if ( func )
        v17 = v16 - *func;
      sub_3F49B0((__int64)&v67, v16);
      ptr[0] = sub_3EE250((QT::QString *)&v67, v17);
      sub_3D32B0((int **)v63, v64, (__int64 *)ptr, v18, v19, v20);
      if ( !v63[0] || *(int *)v63[0] > 1 )
        sub_3D2ED0((__int64)v63, 0, 0, 0, v21, v22);
      if ( v67 && !_InterlockedSub((volatile signed __int32 *)v67, 1u) )
        free(v67);
      v23 = QT::QStandardItem::rowCount((QT::QStandardItem *)a1);
      QT::QStandardItem::insertRow(a1, v23, v63, v9);
      v24 = (_BYTE *)QT::QStandardItem::model((QT::QStandardItem *)a1);
      if ( v24 )
      {
        v57 = v24[72];
        v25 = v24[73];
        v26 = v24[74];
        v58 = v25;
      }
      else
      {
        v57 = 1;
        v26 = 1;
        v58 = 1;
      }
      v59 = v26;
      *(_QWORD *)&v68 = &v57;
      *((_QWORD *)&v68 + 1) = &v58;
      v69 = &v59;
      v67 = v3;
      v27 = *v3;
      if ( *(_DWORD *)(a1 + 24) == 1 )
      {
        v28 = &qword_8D1320;
        if ( !(_BYTE)byte_8D1300 )
        {
          v28 = &qword_8D1320;
          if ( __cxa_guard_acquire(&byte_8D1300) )
          {
            qword_8D1320 = (__int64)j__xrefblk_t_first_to;
            qword_8D1330 = (__int64)j__xrefblk_t_next_to;
            xmmword_8D1340 = 0;
            xmmword_8D1350 = (__int128)_mm_unpacklo_epi64(
                                         _mm_loadl_epi64((const __m128i *)&off_86A6D0),
                                         (__m128i)(unsigned __int64)sub_3EEA30);
            xmmword_8D1360 = 0;
            qword_8D1328 = 0;
            xmmword_8D1370 = (__int128)_mm_unpacklo_epi64(
                                         _mm_loadl_epi64((const __m128i *)&off_86A6D8),
                                         (__m128i)(unsigned __int64)sub_3EEA40);
            qword_8D1338 = 0;
            __cxa_atexit((void (*)(void *))sub_3EEB50, &qword_8D1320, &off_85BC80);
            __cxa_guard_release(&byte_8D1300);
            v28 = &qword_8D1320;
          }
        }
      }
      else
      {
        v28 = &qword_8D12A0;
        if ( !(_BYTE)byte_8D1280 )
        {
          v28 = &qword_8D12A0;
          if ( __cxa_guard_acquire(&byte_8D1280) )
          {
            qword_8D12A0 = (__int64)j__xrefblk_t_first_from;
            qword_8D12B0 = (__int64)j__xrefblk_t_next_from;
            xmmword_8D12C0 = 0;
            xmmword_8D12D0 = (__int128)_mm_unpacklo_epi64(
                                         _mm_loadl_epi64((const __m128i *)&off_86A6E0),
                                         (__m128i)(unsigned __int64)sub_3EEA10);
            xmmword_8D12E0 = 0;
            qword_8D12A8 = 0;
            xmmword_8D12F0 = (__int128)_mm_unpacklo_epi64(
                                         _mm_loadl_epi64((const __m128i *)&off_86A6E8),
                                         (__m128i)(unsigned __int64)sub_3EEA20);
            qword_8D12B8 = 0;
            __cxa_atexit((void (*)(void *))sub_3EEB50, &qword_8D12A0, &off_85BC80);
            __cxa_guard_release(&byte_8D1280);
            v28 = &qword_8D12A0;
          }
        }
      }
      if ( (unsigned __int8)sub_3F0440(v27, (char **)v28, (__int64)&v67) )
      {
        sub_3FF750(v33);
        v29 = 1;
      }
      else
      {
        v29 = 2;
      }
      v30 = *(void (__fastcall **)(QT::QStandardItem *, _BYTE *, __int64))(*(_QWORD *)v33 + 32LL);
      QT::QVariant::QVariant((QT::QVariant *)v70, v29);
      v30(v33, v70, 259);
      QT::QVariant::~QVariant((QT::QVariant *)v70);
      if ( v63[0] && !_InterlockedSub((volatile signed __int32 *)v63[0], 1u) )
        free(v63[0]);
      v3 += 3;
    }
    while ( (_QWORD *)v55 != v3 );
  }
  return v71 - __readfsqword(0x28u);
}
