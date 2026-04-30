__int64 __fastcall sub_30A6D0(
        QT::QString *a1,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  char v11; // bp
  QT::QAction *v13; // rdi
  unsigned int isEnabled; // r12d
  int v15; // ecx
  __int64 v16; // rax
  __m128 v17; // xmm0
  int v18; // ebx
  __int64 v19; // r13
  __int64 v20; // r15
  char *v21; // r14
  _BYTE *v22; // rdx
  __int64 v23; // rdx
  char *v24; // rcx
  double v25; // xmm4_8
  double v26; // xmm5_8
  size_t v27; // rax
  size_t v28; // r8
  size_t v29; // rax
  size_t v30; // r8
  int v31; // ebx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  double v37; // xmm4_8
  double v38; // xmm5_8
  double v39; // xmm4_8
  double v40; // xmm5_8
  double v41; // xmm4_8
  double v42; // xmm5_8
  unsigned int v43; // eax
  __int64 v44; // rsi
  QT::QWidget *v45; // rdi
  double v46; // xmm4_8
  double v47; // xmm5_8
  QT::QWidget *v48; // rdi
  double v49; // xmm4_8
  double v50; // xmm5_8
  __int64 v51; // rsi
  __int64 v52; // rdx
  int v53; // ecx
  int v54; // r8d
  int v55; // r9d
  QT::QWidget *v56; // rdi
  unsigned int v57; // eax
  __int64 v58; // rbx
  int v59; // ebp
  __int64 v60; // rdx
  char *v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  double v64; // xmm4_8
  double v65; // xmm5_8
  void *v66; // rdi
  size_t v67; // r14
  size_t v68; // r14
  void *v69; // rdi
  double v70; // xmm4_8
  double v71; // xmm5_8
  void *src; // [rsp+0h] [rbp-78h]
  void *srca; // [rsp+0h] [rbp-78h]
  size_t v74; // [rsp+8h] [rbp-70h]
  int v75; // [rsp+8h] [rbp-70h]
  size_t v76; // [rsp+8h] [rbp-70h]
  size_t v77; // [rsp+8h] [rbp-70h]
  __int64 v78; // [rsp+10h] [rbp-68h]
  __int64 v79; // [rsp+10h] [rbp-68h]
  __int64 v80; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v82; // [rsp+28h] [rbp-50h]
  unsigned __int64 v83; // [rsp+38h] [rbp-40h]

  v83 = __readfsqword(0x28u);
  if ( (_BYTE)a2 )
    return sub_305A00(*(double *)a3.m128_u64, a4, a5, a6, a7, a8, a9, a10, (__int64)QT::QCoreApplication::self, a1);
  v11 = byte_8CD710;
  if ( byte_8CD710 )
    return sub_305A00(*(double *)a3.m128_u64, a4, a5, a6, a7, a8, a9, a10, (__int64)QT::QCoreApplication::self, a1);
  v13 = qword_8C9928;
  isEnabled = QT::QAction::isEnabled(qword_8C9928);
  if ( !(_BYTE)isEnabled
    || (unsigned __int8)sub_310FB0()
    && (v13 = nullptr, (unsigned __int8)sub_308340(0, (__int64)a2, v23, v24, a3, a4, a5, a6, v25, v26, a9, a10)) )
  {
    if ( *((_QWORD *)a1 + 2) )
    {
      a2 = (const char *)a1;
      QT::QString::toUtf8_helper((QT::QString *)&ptr, a1);
      v13 = (QT::QAction *)v82;
      if ( !(_QWORD)v82 )
        v13 = (QT::QAction *)&QT::QByteArray::_empty;
      sub_303690((__int64)v13);
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      {
        v13 = (QT::QAction *)ptr;
        free(ptr);
      }
    }
    v15 = dword_8CD7F4;
    if ( dword_8CD7F4 <= 1 )
    {
      if ( dword_8CD7F4 == 1 )
        goto LABEL_77;
      v13 = (QT::QAction *)qword_8CD7F8;
    }
    else
    {
      v13 = (QT::QAction *)qword_8CD7F8;
      v16 = qword_8CD7F8 + 8;
      a2 = (const char *)(qword_8CD7F8 + 8LL * (unsigned int)(dword_8CD7F4 - 2) + 16);
      while ( **(_BYTE **)v16 == 45 )
      {
        if ( *(_BYTE *)(*(_QWORD *)v16 + 1LL) == 114 )
        {
          v17 = 0;
          byte_8CD710 = 1;
          ptr = nullptr;
          v82 = 0;
          goto LABEL_14;
        }
        v16 += 8;
        if ( a2 == (const char *)v16 )
          break;
      }
    }
    if ( **((_BYTE **)v13 + dword_8CD7F4 - 1) != 45 )
    {
LABEL_12:
      v17 = 0;
      byte_8CD710 = 1;
      ptr = nullptr;
      v82 = 0;
      if ( v15 <= 1 )
      {
        v32 = 0;
        unk_8D2350 = 1;
      }
      else
      {
        v13 = (QT::QAction *)qword_8CD7F8;
LABEL_14:
        v18 = 1;
        while ( 1 )
        {
          v19 = (__int64)v13;
          v20 = 8LL * v18;
          v21 = (char *)v13 + v20;
          v22 = *(_BYTE **)((char *)v13 + v20);
          if ( *v22 != 45 )
            break;
          switch ( v22[1] )
          {
            case '?':
            case 'H':
            case 'h':
              sub_308040();
              v19 = qword_8CD7F8;
              v21 = (char *)(qword_8CD7F8 + v20);
              goto LABEL_24;
            case 'L':
              qword_8CD7D8 = v22 + 2;
              goto LABEL_24;
            case 'M':
              set_merge_state(1);
              goto LABEL_20;
            case 'T':
              src = v22 + 2;
              v29 = strlen(v22 + 2);
              v30 = v29;
              if ( v29 )
              {
                v68 = v29 + 1;
                v69 = qword_8CD7C0;
                if ( *((_QWORD *)&xmmword_8CD7C8 + 1) < v29 + 1 )
                {
                  v76 = v29;
                  qword_8CD7C0 = (void *)qvector_reserve(&qword_8CD7C0, qword_8CD7C0, v29 + 1, 1);
                  v30 = v76;
                  v69 = qword_8CD7C0;
                }
                v74 = v30;
                *(_QWORD *)&xmmword_8CD7C8 = v68;
                memmove(v69, src, v30);
                *((_BYTE *)qword_8CD7C0 + v74) = 0;
                v19 = qword_8CD7F8;
                v21 = (char *)(qword_8CD7F8 + v20);
              }
              else
              {
                *(_QWORD *)&xmmword_8CD7C8 = 0;
              }
              goto LABEL_24;
            case 'W':
              src = v22 + 2;
              v27 = strlen(v22 + 2);
              v28 = v27;
              if ( v27 )
              {
                v66 = ptr;
                v67 = v27 + 1;
                if ( *((_QWORD *)&v82 + 1) < v27 + 1 )
                {
                  v77 = v27;
                  ptr = (void *)qvector_reserve(&ptr, ptr, v67, 1);
                  v28 = v77;
                  v66 = ptr;
                }
                *(_QWORD *)&v82 = v67;
                v74 = v28;
                memmove(v66, src, v28);
                *((_BYTE *)ptr + v74) = 0;
                v19 = qword_8CD7F8;
                v21 = (char *)(qword_8CD7F8 + v20);
              }
              else
              {
                *(_QWORD *)&v82 = 0;
              }
LABEL_24:
              a2 = (const char *)(v19 + 8LL * (v18 + 1));
              memmove(v21, a2, 8LL * (dword_8CD7F4 - v18));
              v15 = --dword_8CD7F4;
              break;
            case 'r':
              v15 = dword_8CD7F4;
              ++v18;
              v11 = 1;
              break;
            default:
LABEL_20:
              v15 = dword_8CD7F4;
              ++v18;
              break;
          }
          if ( v18 >= v15 )
          {
            unk_8D2350 = 1;
LABEL_35:
            v32 = 0;
            goto LABEL_36;
          }
          v13 = (QT::QAction *)qword_8CD7F8;
        }
        unk_8D2350 = 1;
        if ( v15 <= v18 )
          goto LABEL_35;
        if ( **((_BYTE **)v13 + v18) == 63 )
          sub_308040();
        v31 = v18 + 1;
        if ( v31 >= dword_8CD7F4 )
          goto LABEL_35;
        v32 = *(_QWORD *)(qword_8CD7F8 + 8LL * v31);
LABEL_36:
        if ( (unsigned __int64)v82 > 1 )
        {
          qstrncpy(aCWindows, ptr, 4097);
          a2 = &s1;
          if ( (_QWORD)v82 )
            a2 = (const char *)ptr;
          qstrncpy(aCOs2, a2, 4097);
        }
      }
      set_ida_state(3);
      sub_24A680(0, (__int64)a2, v33, v34, v35, v36, (__int64)src, v74, v78);
      sub_1D1B20(*(double *)v17.m128_u64, a4, a5, a6, v37, v38, a9, a10);
      sub_1D70A0(*(double *)v17.m128_u64, a4, a5, a6, v39, v40, a9, a10);
      sub_1DCD00(*(double *)v17.m128_u64, a4);
      sub_1D50E0(*(double *)v17.m128_u64, a4, a5, a6, v41, v42, a9, a10);
      v43 = sub_1C76A0((unsigned int)dword_8CD7F4, qword_8CD7F8, &dword_8CD7E0);
      isEnabled = (unsigned __int8)byte_8CD800;
      v44 = v43;
      if ( byte_8CD800 )
      {
        LOBYTE(isEnabled) = v43 == 0;
      }
      else
      {
        if ( v43 )
          goto LABEL_70;
        if ( !byte_8CD711 )
        {
          byte_8CD711 = 1;
          qatexit(sub_3085F0);
        }
        sub_249BD0();
        v45 = qword_8CD748;
        sub_30EE90(qword_8CD748, v44);
        if ( (get_merge_state(v45) & 3) == 0 )
          sub_17F410();
        *(double *)v17.m128_u64 = sub_4900C0();
        sub_25D080(*(double *)v17.m128_u64, a4, a5, a6, v46, v47, a9, a10);
        if ( dword_8CC5F0 || v11 )
        {
          v48 = qword_8CF010;
          sub_346E30(qword_8CF010, 1);
        }
        else
        {
          v48 = nullptr;
          sub_30A040(nullptr, *(double *)v17.m128_u64);
          if ( (unsigned __int8)sub_269440() && (get_merge_state(0) & 3) == 0 )
            sub_303600(v17, a4, a5, a6, v70, v71, a9, a10, 0, v44);
        }
        if ( (get_merge_state(v48) & 3) == 0 )
        {
          sub_1828C0();
          sub_2EF6B0(*(double *)v17.m128_u64);
          sub_17E3D0();
        }
        get_merge_state(v48);
        sub_531B30(9, 0, 0);
        if ( v32 && (unsigned __int8)str2ea(&v80, v32, -1) )
          sub_192AA0(0, v80, -1, 1u);
        if ( !batch )
          sub_16D250(1, v17, a4, a5, a6, v49, v50, a9, a10);
        v51 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 48LL))(QT::QCoreApplication::self + 2);
        sub_531B30(7, v51, 0);
        if ( !batch )
          QT::QCoreApplication::processEvents(3);
        if ( qword_8CF010 )
        {
          v56 = *((QT::QWidget **)qword_8CF010 + 87);
          if ( v56 )
            sub_342440(v56);
        }
        v57 = sub_1A1640((unsigned int)dword_8CD7F4, qword_8CD7F8, v52, v53, v54, v55);
        v44 = v57;
        if ( v57 )
        {
LABEL_70:
          if ( batch )
            (*(void (__fastcall **)(_QWORD *, __int64))(QT::QCoreApplication::self[2] + 16LL))(
              QT::QCoreApplication::self + 2,
              v44);
          set_ida_state(0);
          if ( v11 )
          {
            dword_8CC5F0 = 0;
            sub_308340(1, v44, v60, v61, v17, a4, a5, a6, v64, v65, a9, a10);
          }
          else
          {
            sub_24A680(1, v44, v60, (__int64)v61, v62, v63, (__int64)srca, v75, v79);
          }
        }
        else
        {
          isEnabled = 1;
        }
      }
      if ( ptr )
      {
        *(_QWORD *)&v82 = 0;
        *(double *)v17.m128_u64 = qfree(ptr, (const char *)v44);
      }
      v58 = 8;
      v59 = 1;
      for ( byte_8CD710 = 0; dword_8CD7F4 > v59; v58 += 8 )
      {
        ++v59;
        *(double *)v17.m128_u64 = qfree(*(_QWORD *)(qword_8CD7F8 + v58), (const char *)v44, *(double *)v17.m128_u64);
        *(_QWORD *)(qword_8CD7F8 + v58) = 0;
      }
      dword_8CD7F4 = 1;
      if ( qword_8CD7C0 )
      {
        *(_QWORD *)&xmmword_8CD7C8 = 0;
        qfree(qword_8CD7C0, (const char *)v44, *(double *)v17.m128_u64);
        qword_8CD7C0 = nullptr;
        *((_QWORD *)&xmmword_8CD7C8 + 1) = 0;
      }
      return isEnabled;
    }
LABEL_77:
    sub_303700(*(double *)a3.m128_u64, (__int64)v13, a2);
    v15 = dword_8CD7F4;
    goto LABEL_12;
  }
  return isEnabled;
}
