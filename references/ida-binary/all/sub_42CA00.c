__int64 __fastcall sub_42CA00(QT::QAbstractItemView *a1, __int64 *a2, __int64 *a3, int a4)
{
  unsigned __int64 v5; // rdx
  __int64 v8; // rax
  const char **v9; // r13
  __int64 v10; // rbx
  const char *v11; // rsi
  const char *v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  char *v18; // r9
  _BYTE *v19; // r8
  __int64 v20; // rdx
  const char *v21; // rsi
  unsigned __int64 v22; // rdx
  char *v23; // r15
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v28; // rdx
  __int64 v29; // rsi
  QT::QAbstractItemView *v30; // rdi
  __int64 v31; // r15
  __int64 v32; // rax
  __m128i si128; // xmm0
  const char *v34; // rdi
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  int v40; // eax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  size_t v43; // r10
  size_t v44; // r10
  const char *v45; // r11
  void *v46; // rdi
  const char *v47; // r11
  void *v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rax
  void *v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // [rsp+8h] [rbp-C0h]
  void *src[2]; // [rsp+10h] [rbp-B8h] BYREF
  QT::QAbstractItemView *v59; // [rsp+20h] [rbp-A8h]
  __int64 v60; // [rsp+28h] [rbp-A0h]
  __int64 v61; // [rsp+30h] [rbp-98h]
  const char *v62; // [rsp+38h] [rbp-90h]
  __int8 v63; // [rsp+4Fh] [rbp-79h]
  __int64 v64; // [rsp+50h] [rbp-78h] BYREF
  __int128 v65; // [rsp+58h] [rbp-70h]
  __int64 v66; // [rsp+70h] [rbp-58h] BYREF
  __m128i v67; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v68; // [rsp+88h] [rbp-40h]

  v59 = a1;
  v68 = __readfsqword(0x28u);
  v5 = a3[1];
  if ( v5 )
  {
    if ( a2[2] < v5 )
      *a2 = qvector_reserve(a2, *a2, v5, 48);
    v8 = QT::QAbstractItemView::model(v59);
    v9 = *(const char ***)(v8 + 216);
    if ( !v9 )
      v9 = *(const char ***)(v8 + 208);
    v10 = *a3;
    v57 = *a3 + 16 * a3[1];
    if ( *a3 != v57 )
    {
      do
      {
        v11 = *v9;
        v67.m128i_i8[0] = 0;
        v66 = -1;
        dirtree_resolve_cursor(&v66, v11, v10);
        v64 = 0;
        v65 = 0;
        v12 = *v9;
        v13 = v66;
        v63 = v67.m128i_i8[0];
        dirtree_get_abspath_by_cursor(&v64, v12, v10, 0);
        if ( v13 == -1 || v63 )
        {
          if ( (a4 & 0x80u) != 0 )
          {
            if ( v64 )
            {
              *(_QWORD *)&v65 = 0;
              qfree(v64, v12);
            }
            goto LABEL_43;
          }
          v28 = a2[1];
          v29 = *a2;
          if ( a2[2] < (unsigned __int64)(v28 + 1) )
          {
            v37 = qvector_reserve(a2, v29, v28 + 1, 48);
            *a2 = v37;
            v28 = a2[1];
            v29 = v37;
          }
          v30 = v59;
          v31 = v29 + 48 * v28;
          *(_QWORD *)(v31 + 24) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)v31 = 0;
          *(_QWORD *)(v31 + 32) = 0xFFFFFFFCFFFFFFFCLL;
          *(_BYTE *)(v31 + 40) = 0;
          *(_OWORD *)(v31 + 8) = 0;
          ++a2[1];
          QT::QAbstractItemView::model(v30);
          sub_42B280((const void **)&v66, (__int64)&v64);
          v32 = v66;
          si128 = _mm_loadu_si128(&v67);
          v66 = 0;
          v67 = 0;
          v34 = *(const char **)v31;
          if ( *(_QWORD *)v31 )
          {
            *(_QWORD *)(v31 + 8) = 0;
            v60 = v32;
            *(__m128i *)src = si128;
            qfree(v34, (const char *)&v64);
            v32 = v60;
            si128 = _mm_load_si128((const __m128i *)src);
          }
          *(_QWORD *)v31 = v32;
          *(__m128i *)(v31 + 8) = si128;
          if ( v66 )
          {
            v67.m128i_i64[0] = 0;
            qfree(v66, (const char *)&v64);
          }
          v35 = *(_QWORD *)(v31 + 8);
          if ( v35 )
          {
            v22 = v35 + 1;
            v18 = *(char **)(v31 + 8);
            v21 = *(const char **)v31;
            --v35;
            if ( *(_QWORD *)(v31 + 16) >= v22 )
              goto LABEL_53;
LABEL_58:
            v61 = v35;
            v60 = (__int64)v18;
            src[0] = (void *)v22;
            v36 = qvector_reserve(v31, v21, v22, 1);
            v35 = v61;
            v18 = (char *)v60;
            *(_QWORD *)v31 = v36;
            v21 = (const char *)v36;
            v22 = (unsigned __int64)src[0];
          }
          else
          {
            v21 = *(const char **)v31;
            v22 = 2;
            v18 = (_BYTE *)(&dword_0 + 1);
            if ( *(_QWORD *)(v31 + 16) < 2u )
              goto LABEL_58;
          }
LABEL_53:
          *(_QWORD *)(v31 + 8) = v22;
          v18[(_QWORD)v21] = 0;
          v19 = (_BYTE *)(*(_QWORD *)v31 + v35);
          *v19 = 47;
          *(_DWORD *)(v31 + 24) |= 0x20u;
          if ( (a4 & 0x200) != 0 )
            *(_QWORD *)(v31 + 32) = 0xFFFFFFFDFFFFFFFDLL;
          goto LABEL_55;
        }
        QT::QAbstractItemView::model(v59);
        sub_42B280((const void **)&v66, (__int64)&v64);
        if ( (a4 & 0xFFFFFF7E) == 0 )
        {
          v19 = nullptr;
          v18 = nullptr;
          goto LABEL_13;
        }
        v15 = sub_426230(&v66, (const char *)&v64);
        v16 = sub_4170E0((__int64)v15);
        v17 = sub_42ACF0(v16, (const void **)&v66);
        v18 = (char *)v17;
        if ( v17 && *(_BYTE *)(v17 + 72) == 2 )
        {
          v18 = nullptr;
          v19 = nullptr;
          if ( (a4 & 0x15C) == 0 )
            goto LABEL_13;
        }
        else
        {
          v19 = nullptr;
          if ( (a4 & 0x15C) == 0 )
            goto LABEL_13;
        }
        src[0] = v18;
        v41 = sub_426230(v16, (const char *)&v66);
        v42 = sub_41E260((__int64)v41, (const char *)&v66);
        v18 = (char *)src[0];
        v19 = v42;
LABEL_13:
        v20 = a2[1];
        v21 = (const char *)*a2;
        if ( a2[2] < (unsigned __int64)(v20 + 1) )
        {
          v60 = (__int64)v19;
          src[0] = v18;
          v38 = qvector_reserve(a2, v21, v20 + 1, 48);
          v20 = a2[1];
          v19 = (_BYTE *)v60;
          *a2 = v38;
          v21 = (const char *)v38;
          v18 = (char *)src[0];
        }
        v22 = 48 * v20;
        v23 = (char *)&v21[v22];
        *((_QWORD *)v23 + 3) = 0xFFFFFFFF00000000LL;
        *((_QWORD *)v23 + 4) = 0xFFFFFFFCFFFFFFFCLL;
        *(_QWORD *)v23 = 0;
        v23[40] = 0;
        *(_OWORD *)(v23 + 8) = 0;
        ++a2[1];
        if ( !v19 )
        {
          if ( !v18 )
          {
            if ( (a4 & 1) != 0 && v23 != (char *)&v66 )
            {
              v19 = (_BYTE *)v67.m128i_i64[0];
              if ( v67.m128i_i64[0] && (v18 = (char *)(v67.m128i_i64[0] - 1), v67.m128i_i64[0] != 1) )
              {
                v52 = *(void **)v23;
                src[0] = (void *)v66;
                if ( *((_QWORD *)v23 + 2) < v67.m128i_i64[0] )
                {
                  v61 = v67.m128i_i64[0] - 1;
                  v60 = v67.m128i_i64[0];
                  v56 = qvector_reserve(v23, v52, v67.m128i_i64[0], 1);
                  v18 = (char *)v61;
                  v19 = (_BYTE *)v60;
                  *(_QWORD *)v23 = v56;
                  v52 = (void *)v56;
                }
                *((_QWORD *)v23 + 1) = v19;
                v21 = (const char *)src[0];
                v60 = (__int64)v19;
                memmove(v52, src[0], (size_t)v18);
                v19 = (_BYTE *)v60;
                *(_BYTE *)(*(_QWORD *)v23 + v60 - 1) = 0;
              }
              else
              {
                *((_QWORD *)v23 + 1) = 0;
              }
            }
            goto LABEL_38;
          }
          if ( v18 != v23 && (a4 & 1) != 0 )
          {
            v19 = *((_BYTE **)v18 + 1);
            if ( !v19 || (v44 = (size_t)(v19 - 1), v19 == (_BYTE *)&dword_0 + 1) )
            {
              *((_QWORD *)v23 + 1) = 0;
            }
            else
            {
              v45 = *(const char **)v18;
              v46 = *(void **)v23;
              if ( *((_QWORD *)v23 + 2) < (unsigned __int64)v19 )
              {
                v53 = *(_QWORD *)v23;
                v54 = *((_QWORD *)v18 + 1);
                v62 = *(const char **)v18;
                v61 = (__int64)(v19 - 1);
                v60 = (__int64)v18;
                src[0] = v19;
                v55 = qvector_reserve(v23, v53, v54, 1);
                v45 = v62;
                v44 = v61;
                *(_QWORD *)v23 = v55;
                v46 = (void *)v55;
                v18 = (char *)v60;
                v19 = src[0];
              }
              *((_QWORD *)v23 + 1) = v19;
              v21 = v45;
              v60 = (__int64)v18;
              src[0] = v19;
              memmove(v46, v45, v44);
              v19 = src[0];
              v18 = (char *)v60;
              *((_BYTE *)src[0] + *(_QWORD *)v23 - 1) = 0;
            }
          }
          if ( (a4 & 2) != 0 )
            *((_DWORD *)v23 + 6) |= 2u;
          if ( (a4 & 8) != 0 )
          {
            v14 = *((unsigned int *)v18 + 15);
            v39 = *((_DWORD *)v23 + 6);
            if ( (_DWORD)v14 && v18[72] != 2 )
            {
              *((_DWORD *)v23 + 6) = v39 | 8;
              goto LABEL_69;
            }
            *((_DWORD *)v23 + 6) = v39 & 0xFFFFFFF7;
            if ( (a4 & 4) != 0 )
            {
LABEL_70:
              v40 = *((_DWORD *)v23 + 6);
              v14 = *((unsigned int *)v18 + 16);
              if ( *((_DWORD *)v18 + 15) == (_DWORD)v14 )
                *((_DWORD *)v23 + 6) = v40 | 4;
              else
                *((_DWORD *)v23 + 6) = v40 & 0xFFFFFFFB;
            }
          }
          else
          {
LABEL_69:
            if ( (a4 & 4) != 0 )
              goto LABEL_70;
          }
          if ( (a4 & 0x200) != 0 )
          {
            *((_DWORD *)v23 + 8) = *((_DWORD *)v18 + 15);
            *((_DWORD *)v23 + 9) = *((_DWORD *)v18 + 16);
          }
          if ( (a4 & 0x400) != 0 )
            v23[40] = v18[72];
          goto LABEL_38;
        }
        if ( (a4 & 1) != 0 && v23 != v19 + 48 )
        {
          v18 = *((char **)v19 + 7);
          if ( v18 && (v43 = (size_t)(v18 - 1), v18 != (_BYTE *)&dword_0 + 1) )
          {
            v47 = *((const char **)v19 + 6);
            v48 = *(void **)v23;
            if ( *((_QWORD *)v23 + 2) < (unsigned __int64)v18 )
            {
              v49 = *(_QWORD *)v23;
              v50 = *((_QWORD *)v19 + 7);
              v62 = *((const char **)v19 + 6);
              v61 = (__int64)(v18 - 1);
              v60 = (__int64)v19;
              src[0] = v18;
              v51 = qvector_reserve(v23, v49, v50, 1);
              v47 = v62;
              v43 = v61;
              *(_QWORD *)v23 = v51;
              v48 = (void *)v51;
              v19 = (_BYTE *)v60;
              v18 = (char *)src[0];
            }
            *((_QWORD *)v23 + 1) = v18;
            v21 = v47;
            v60 = (__int64)v19;
            src[0] = v18;
            memmove(v48, v47, v43);
            v18 = (char *)src[0];
            v19 = (_BYTE *)v60;
            *((_BYTE *)src[0] + *(_QWORD *)v23 - 1) = 0;
          }
          else
          {
            *((_QWORD *)v23 + 1) = 0;
          }
        }
        if ( (a4 & 2) != 0 )
          *((_DWORD *)v23 + 6) |= 2u;
        if ( (a4 & 4) != 0 )
          *((_DWORD *)v23 + 6) |= 4u;
        if ( (a4 & 0x10) != 0 )
          *((_DWORD *)v23 + 7) = *((_DWORD *)v19 + 20);
        if ( (a4 & 8) != 0 )
        {
          v24 = *((_DWORD *)v23 + 6);
          if ( v19[84] == 2 )
            *((_DWORD *)v23 + 6) = v24 & 0xFFFFFFF7;
          else
            *((_DWORD *)v23 + 6) = v24 | 8;
        }
        if ( (a4 & 0x40) != 0 )
        {
          v22 = *((unsigned int *)v19 + 18);
          v25 = *((_DWORD *)v23 + 6);
          if ( !(_DWORD)v22 || (_DWORD)v22 == *((_DWORD *)v19 + 19) )
            *((_DWORD *)v23 + 6) = v25 & 0xFFFFFFBF;
          else
            *((_DWORD *)v23 + 6) = v25 | 0x40;
        }
        if ( (a4 & 0x100) != 0 )
        {
          v26 = *((_DWORD *)v23 + 6);
          if ( v19[84] == 3 )
            BYTE1(v26) |= 1u;
          else
            BYTE1(v26) &= ~1u;
          *((_DWORD *)v23 + 6) = v26;
        }
        if ( (a4 & 0x200) != 0 )
        {
          *((_DWORD *)v23 + 8) = *((_DWORD *)v19 + 18);
          *((_DWORD *)v23 + 9) = *((_DWORD *)v19 + 19);
        }
        if ( (a4 & 0x400) != 0 )
          v23[40] = v19[84];
LABEL_38:
        if ( v66 )
        {
          v67.m128i_i64[0] = 0;
          qfree(v66, v21, v22, v14, v19, v18);
        }
LABEL_55:
        if ( v64 )
        {
          *(_QWORD *)&v65 = 0;
          qfree(v64, v21, v22, v14, v19, v18);
        }
LABEL_43:
        v10 += 16;
      }
      while ( v57 != v10 );
    }
  }
  return 1;
}
