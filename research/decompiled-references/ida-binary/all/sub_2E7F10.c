__int64 __fastcall sub_2E7F10(
        QT::QWidget *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        int a25,
        int a26,
        int a27,
        __int64 a28)
{
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  __int64 v32; // rbp
  __int64 v33; // rbp
  __int64 v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // rbp
  __m128i *v37; // rbp
  QT::QWidget *v38; // rsi
  double v39; // xmm0_8
  double v40; // xmm0_8
  __m128i v41; // xmm0
  __m128i v42; // xmm0
  __int64 idati; // rax
  __int64 v44; // r13
  double v45; // xmm0_8
  QT::QWidget *v46; // r12
  __int64 v47; // rbp
  volatile signed __int32 *v48; // r13
  volatile signed __int32 *v49; // rdx
  signed __int32 v50; // eax
  signed __int32 v51; // eax
  QT::QWidget *v52; // rsi
  double v53; // xmm0_8
  double v54; // xmm0_8
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdi
  __m128i v58; // [rsp+10h] [rbp-108h] BYREF
  __m128i v59; // [rsp+20h] [rbp-F8h] BYREF
  int v60; // [rsp+30h] [rbp-E8h]
  __int64 v61; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v62; // [rsp+48h] [rbp-D0h]
  __int128 v63; // [rsp+58h] [rbp-C0h]
  __int128 v64; // [rsp+68h] [rbp-B0h]
  __int64 v65; // [rsp+78h] [rbp-A0h]
  __m128i v66; // [rsp+80h] [rbp-98h]
  __m128i v67; // [rsp+90h] [rbp-88h]
  __int64 v68; // [rsp+A0h] [rbp-78h]
  __int128 v69; // [rsp+A8h] [rbp-70h]
  __int64 v70; // [rsp+B8h] [rbp-60h]
  __int64 v71; // [rsp+C0h] [rbp-58h]
  char v72; // [rsp+C8h] [rbp-50h]
  __int64 v73; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v74; // [rsp+D8h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  if ( byte_8BA840 )
  {
    if ( !*((_QWORD *)a1 + 13) )
    {
      v61 = 0;
      v65 = 0;
      v67.m128i_i64[0] = 0;
      v67.m128i_i64[1] = -1;
      v68 = 0;
      v70 = 0;
      v71 = 0;
      v62 = 0;
      v63 = 0;
      v64 = 0;
      v66 = 0;
      v69 = 0;
      sub_1E8870((__int64)&v58, 1);
      v30 = _mm_load_si128(&v58);
      v72 = 0;
      v66 = v30;
      v31 = _mm_load_si128(&v59);
      LODWORD(v68) = v60;
      v73 = 0;
      v67 = v31;
      sub_1E8790((__int64)&v61, (__int64)a1, 0, 0, *(double *)v31.m128i_i64);
      LODWORD(v61) = v61 | 0x20;
      LODWORD(v65) = 1;
      v32 = qalloc_or_throw(24);
      *(_QWORD *)(v32 + 16) = getinf(19);
      *(_DWORD *)(v32 + 8) = 0;
      *(_QWORD *)v32 = &idaplace_t___vtable;
      *((_QWORD *)&v69 + 1) = v32;
      v33 = qalloc_or_throw(24);
      v34 = getinf(20);
      *(_DWORD *)(v33 + 8) = 0x7FFFFFFF;
      *(_QWORD *)v33 = &idaplace_t___vtable;
      *(_QWORD *)(v33 + 16) = v34;
      v70 = v33;
      sub_1E8870((__int64)&v58, 1);
      v35 = _mm_load_si128(&v58);
      v36 = *((_QWORD *)&v69 + 1);
      LODWORD(v68) = v60;
      v66 = v35;
      v67 = _mm_load_si128(&v59);
      v67.m128i_i16[7] = word_8BCE1C;
      if ( (_QWORD)v69 )
      {
        qfree(v69, (_BYTE *)&dword_0 + 1);
        *(_QWORD *)&v69 = 0;
      }
      if ( v36 )
        *(_QWORD *)&v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      v37 = (__m128i *)operator new(0x410u);
      sub_2DF680(v37, "Indexer preview", (int *)&v61, -1);
      *((_QWORD *)a1 + 13) = v37;
      v37->m128i_i64[0] = (__int64)&disassembly_preview_t___vtable;
      v37[1].m128i_i64[0] = (__int64)disassembly_preview_t___vtable_at__16;
      v37[2].m128i_i64[1] = (__int64)disassembly_preview_t___vtable_at__40;
      v37[6].m128i_i64[1] = (__int64)disassembly_preview_t___vtable_at__104;
      QT::QWidget::setParent((QT::QWidget *)v37, a1);
      QT::QWidget::setFocusPolicy(*((_QWORD *)a1 + 13), 0);
      v38 = *((QT::QWidget **)a1 + 13);
      QT::QStackedWidget::addWidget(*((QT::QStackedWidget **)a1 + 15), v38);
      v39 = qfree(*((_QWORD *)&v69 + 1), (const char *)v38);
      *((_QWORD *)&v69 + 1) = 0;
      v40 = qfree(v70, (const char *)v38, v39);
      v70 = 0;
      if ( (_QWORD)v69 )
        qfree(v69, (const char *)v38, v40);
    }
    if ( !*((_QWORD *)a1 + 14) )
    {
      v61 = 0;
      v65 = 0;
      v67.m128i_i64[0] = 0;
      v67.m128i_i64[1] = -1;
      v68 = 0;
      v70 = 0;
      v71 = 0;
      v62 = 0;
      v63 = 0;
      v64 = 0;
      v66 = 0;
      v69 = 0;
      sub_1E8870((__int64)&v58, 1);
      v41 = _mm_load_si128(&v58);
      v72 = 0;
      v66 = v41;
      v42 = _mm_load_si128(&v59);
      LODWORD(v68) = v60;
      v73 = 0;
      v67 = v42;
      sub_1E8790((__int64)&v61, (__int64)a1, 0, 0, *(double *)v42.m128i_i64);
      LODWORD(v61) = v61 | 0x20;
      idati = get_idati(&v61);
      *((_QWORD *)&v64 + 1) = create_tlc_for_til(idati, 0);
      v44 = *((_QWORD *)&v64 + 1);
      v45 = sub_3AC770(&v61, *((_QWORD *)&v64 + 1), 0);
      v46 = (QT::QWidget *)operator new(0x3F8u);
      v47 = operator new(0x18u);
      v58.m128i_i64[0] = v44;
      *(_QWORD *)(v47 + 16) = v44;
      *(_QWORD *)(v47 + 8) = 0x100000001LL;
      *(_QWORD *)v47 = std::_Sp_counted_ptr_type_listing_contents_t_______gnu_cxx::_Lock_policy_2____vtable;
      v58.m128i_i64[1] = v47;
      if ( v47 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v47 + 8), 1u);
        else
          *(_DWORD *)(v47 + 8) = 2;
      }
      sub_3AF7B0(v46, "Indexer type listing");
      v48 = (volatile signed __int32 *)v58.m128i_i64[1];
      if ( v58.m128i_i64[1] )
      {
        v49 = (volatile signed __int32 *)(v58.m128i_i64[1] + 8);
        if ( *(_QWORD *)(v58.m128i_i64[1] + 8) == 0x100000001LL )
        {
          v56 = *(_QWORD *)v58.m128i_i64[1];
          v57 = v58.m128i_i64[1];
          *(_QWORD *)(v58.m128i_i64[1] + 8) = 0;
          (*(void (__fastcall **)(__int64, const char *, volatile signed __int32 *, double))(v56 + 16))(
            v57,
            "Indexer type listing",
            v49,
            v45);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 24LL))(v48);
        }
        else
        {
          if ( &_pthread_key_create )
          {
            v50 = _InterlockedExchangeAdd(v49, 0xFFFFFFFF);
          }
          else
          {
            v50 = *(_DWORD *)(v58.m128i_i64[1] + 8);
            *(_DWORD *)(v58.m128i_i64[1] + 8) = v50 - 1;
          }
          if ( v50 == 1 )
            sub_28E9C0(v48);
        }
      }
      *((_QWORD *)a1 + 14) = v46;
      *(_QWORD *)v46 = &type_listing_preview_t___vtable;
      *((_QWORD *)v46 + 2) = type_listing_preview_t___vtable_at__16;
      *((_QWORD *)v46 + 5) = type_listing_preview_t___vtable_at__40;
      *((_QWORD *)v46 + 13) = type_listing_preview_t___vtable_at__104;
      if ( v47 )
      {
        if ( *(_QWORD *)(v47 + 8) == 0x100000001LL )
        {
          v55 = *(_QWORD *)v47;
          *(_QWORD *)(v47 + 8) = 0;
          (*(void (__fastcall **)(__int64, double))(v55 + 16))(v47, v45);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 24LL))(v47);
          v46 = *((QT::QWidget **)a1 + 14);
        }
        else
        {
          if ( &_pthread_key_create )
          {
            v51 = _InterlockedExchangeAdd((volatile signed __int32 *)(v47 + 8), 0xFFFFFFFF);
          }
          else
          {
            v51 = *(_DWORD *)(v47 + 8);
            *(_DWORD *)(v47 + 8) = v51 - 1;
          }
          if ( v51 == 1 )
            sub_28E9C0((volatile signed __int32 *)v47);
          v46 = *((QT::QWidget **)a1 + 14);
        }
      }
      QT::QWidget::setParent(v46, a1);
      v52 = *((QT::QWidget **)a1 + 14);
      QT::QStackedWidget::addWidget(*((QT::QStackedWidget **)a1 + 15), v52);
      v53 = qfree(*((_QWORD *)&v69 + 1), (const char *)v52, v45);
      *((_QWORD *)&v69 + 1) = 0;
      v54 = qfree(v70, (const char *)v52, v53);
      v70 = 0;
      if ( (_QWORD)v69 )
        qfree(v69, (const char *)v52, v54);
    }
  }
  return QT::QWidget::hide(*((QT::QWidget **)a1 + 15));
}
