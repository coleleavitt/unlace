unsigned __int64 __fastcall sub_38DC20(
        __int64 a1,
        int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rax
  __m128i si128; // xmm0
  QT::QComboBox *v13; // rdi
  __int64 **v14; // rbx
  __int64 v15; // rax
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 *v18; // rax
  __int64 *v19; // rbx
  QT::QTableWidget *v20; // rbp
  __int64 v21; // r13
  int v22; // r14d
  unsigned int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // rcx
  QT::QTableWidgetItem *v26; // rdi
  __int64 v28; // rbp
  __int64 v29; // rsi
  __int64 (__fastcall *v30)(__int64, __int64); // rax
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rax
  size_t v34; // rax
  char *v35; // r13
  size_t v36; // rdx
  double v37; // xmm0_8
  void (__fastcall *v38)(__int64, _QWORD, _BYTE *, double); // r15
  __int64 v39; // rdi
  unsigned __int8 (*v40)(void); // rax
  unsigned int v41; // r15d
  __int64 flags; // rax
  int v43; // esi
  void (__fastcall *v44)(__int64, __int64, _BYTE *); // r15
  unsigned int v45; // r15d
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  QT::QTableWidget *v49; // rdi
  __int64 v50; // r14
  QT::QTableWidget *v51; // rbp
  size_t v52; // rax
  double v53; // xmm0_8
  QT::QTableWidgetItem *v54; // r13
  QT::QTableWidget *v55; // r13
  QT::QTableWidgetItem *v56; // rbp
  __int64 *v57; // [rsp+10h] [rbp-4D8h]
  char v58; // [rsp+1Fh] [rbp-4C9h]
  void (__fastcall *v59)(__int64, __int64, _BYTE *); // [rsp+28h] [rbp-4C0h]
  const char *v60; // [rsp+38h] [rbp-4B0h] BYREF
  char *v61; // [rsp+40h] [rbp-4A8h] BYREF
  __int128 v62; // [rsp+48h] [rbp-4A0h]
  void *ptr[2]; // [rsp+60h] [rbp-488h] BYREF
  __int64 v64; // [rsp+70h] [rbp-478h]
  _BYTE v65[32]; // [rsp+80h] [rbp-468h] BYREF
  char v66[1032]; // [rsp+A0h] [rbp-448h] BYREF
  unsigned __int64 v67; // [rsp+4A8h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  v11 = sub_38B570(a1, a2);
  if ( v11 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DD0F0);
    v13 = *(QT::QComboBox **)(a1 + 96);
    v14 = (__int64 **)v11;
    LODWORD(v64) = 0;
    *(__m128i *)ptr = si128;
    v15 = QT::QComboBox::lineEdit(v13);
    v58 = sub_357F80(&v60, v15, (__int128 *)ptr, *(double *)si128.m128i_i64, a4, a5, a6, v16, v17, a9, a10);
    v18 = v14[1];
    v19 = *v14;
    v57 = v18;
    if ( v18 != v19 )
    {
      while ( 1 )
      {
        v20 = *(QT::QTableWidget **)(a1 + 88);
        v21 = *v19;
        v22 = QT::QTableWidget::rowCount(v20);
        if ( v22 > 0 )
        {
          v23 = 0;
          while ( 1 )
          {
            v26 = (QT::QTableWidgetItem *)QT::QTableWidget::item(v20, v23, 0);
            if ( !v26 )
              break;
            if ( v21 == sub_389C80(v26, (QT::QTableWidgetItem *)v23, v24, v25, *(double *)si128.m128i_i64) )
            {
              if ( !v58 || (__int64)&v60[*(_QWORD *)(*v19 + 8)] < 0 )
                goto LABEL_41;
              goto LABEL_10;
            }
            if ( v22 == ++v23 )
              goto LABEL_12;
          }
          if ( !v58 || (__int64)&v60[*(_QWORD *)(*v19 + 8)] < 0 )
          {
            v23 = 0;
LABEL_41:
            QT::QTableWidget::removeRow(*(QT::QTableWidget **)(a1 + 88), v23);
            goto LABEL_10;
          }
          goto LABEL_10;
        }
LABEL_12:
        if ( v58 && (__int64)&v60[*(_QWORD *)(*v19 + 8)] >= 0 )
          break;
LABEL_10:
        if ( v57 == ++v19 )
          return v67 - __readfsqword(0x28u);
      }
      v64 = 0;
      *(_OWORD *)ptr = 0;
      v28 = operator new(0x40u);
      QT::QTableWidgetItem::QTableWidgetItem((QT::QTableWidgetItem *)v28, (const QT::QString *)ptr, 0);
      QT::QTableWidgetItem::setFlags(v28, 33);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      v29 = *v19;
      v30 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*v19 + 16LL);
      if ( v30 == struc_operand_info_t__::vfunc_2 )
      {
        v31 = *(unsigned int *)(v29 + 24);
        v62 = 0;
        v32 = *(_QWORD *)(v29 + 16);
        v61 = nullptr;
        print_operand(&v61, v32, v31, 0, 0);
        v33 = v62;
        if ( (unsigned __int64)v62 <= 1 )
        {
LABEL_21:
          if ( v33 )
          {
            v34 = v33 - 1;
            v35 = v61;
            v36 = v34 >> 63;
          }
          else
          {
            LOBYTE(v36) = 0;
            v34 = 0;
            v35 = (char *)&s1;
          }
          if ( !v35 || (_BYTE)v36 )
          {
            v34 = 0;
            if ( v35 )
              v34 = strlen(v35);
          }
          v37 = QT::QString::fromUtf8(ptr, v34, v35);
          v38 = *(void (__fastcall **)(__int64, _QWORD, _BYTE *, double))(*(_QWORD *)v28 + 32LL);
          QT::QVariant::QVariant((QT::QVariant *)v65, (const QT::QString *)ptr);
          v38(v28, 0, v65, v37);
          QT::QVariant::~QVariant((QT::QVariant *)v65);
          if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            free(ptr[0]);
          QT::QTableWidgetItem::setFlags(v28, *(_DWORD *)(v28 + 56) | 0x10u);
          v39 = *v19;
          v40 = *(unsigned __int8 (**)(void))(*(_QWORD *)*v19 + 24LL);
          if ( (char *)v40 == (char *)struc_operand_info_t__::vfunc_3 )
          {
            v41 = *(_DWORD *)(v39 + 24);
            flags = get_flags_ex(*(_QWORD *)(v39 + 16), 0);
            v43 = (unsigned __int8)is_defarg(flags, v41) ^ 1;
          }
          else
          {
            v43 = v40();
          }
          v44 = *(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v28 + 32LL);
          QT::QVariant::QVariant((QT::QVariant *)v65, 2 * v43);
          v44(v28, 10, v65);
          QT::QVariant::~QVariant((QT::QVariant *)v65);
          btoa32(v66, 1024, *(unsigned int *)(*v19 + 8), 16);
          v45 = QT::QTableWidget::rowCount(*(QT::QTableWidget **)(a1 + 88));
          QT::QTableWidget::insertRow(*(QT::QTableWidget **)(a1 + 88), v45);
          v46 = v45;
          QT::QTableWidget::setItem(*(QT::QTableWidget **)(a1 + 88), v45, 0, (QT::QTableWidgetItem *)v28);
          v49 = *(QT::QTableWidget **)(v28 + 40);
          v50 = *v19;
          if ( !v49 || (v46 = v28, (unsigned int)QT::QTableWidget::column(v49, (const QT::QTableWidgetItem *)v28)) )
          {
            if ( !under_debugger )
              interr(40477, v46, v47, v48, v37);
            BUG();
          }
          v59 = *(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v28 + 32LL);
          sub_1C7F30((QT::QVariant *)v65, v50);
          v59(v28, 256, v65);
          QT::QVariant::~QVariant((QT::QVariant *)v65);
          v51 = *(QT::QTableWidget **)(a1 + 88);
          v52 = strlen(v66);
          v53 = QT::QString::fromUtf8(ptr, v52, v66);
          v54 = (QT::QTableWidgetItem *)operator new(0x40u);
          QT::QTableWidgetItem::QTableWidgetItem(v54, (const QT::QString *)ptr, 0);
          QT::QTableWidgetItem::setFlags(v54, 33);
          QT::QTableWidget::setItem(v51, v45, 1, v54);
          if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            free(ptr[0]);
          v55 = *(QT::QTableWidget **)(a1 + 88);
          *(double *)si128.m128i_i64 = QT::QString::fromUtf8(ptr, 0, (const char *)&unk_5C2F25, v53);
          v56 = (QT::QTableWidgetItem *)operator new(0x40u);
          QT::QTableWidgetItem::QTableWidgetItem(v56, (const QT::QString *)ptr, 0);
          QT::QTableWidgetItem::setFlags(v56, 33);
          QT::QTableWidget::setItem(v55, v45, 2, v56);
          if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            free(ptr[0]);
          if ( v61 )
          {
            *(_QWORD *)&v62 = 0;
            *(double *)si128.m128i_i64 = qfree(v61, (const char *)v45, *(double *)si128.m128i_i64);
          }
          goto LABEL_10;
        }
        tag_remove(&v61, v61, 0);
      }
      else
      {
        ((void (__fastcall *)(char **))v30)(&v61);
      }
      v33 = v62;
      goto LABEL_21;
    }
  }
  return v67 - __readfsqword(0x28u);
}
