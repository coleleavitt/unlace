unsigned __int64 __fastcall sub_2E6EC0(
        __int64 a1,
        int *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // r12
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  const char *v15; // rsi
  const char *v16; // rdi
  __int64 v17; // rax
  __int32 v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // r8
  __int64 v26; // r9
  double v27; // xmm4_8
  double v28; // xmm5_8
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // r12
  const void *v31; // r14
  void *v32; // rdi
  const void *v33; // r14
  void *v34; // rax
  __int64 v35; // rax
  __int64 *v36; // [rsp+0h] [rbp-88h] BYREF
  int v37; // [rsp+8h] [rbp-80h]
  __int64 v38; // [rsp+10h] [rbp-78h]
  __m128i v39; // [rsp+20h] [rbp-68h] BYREF
  __int64 v40; // [rsp+30h] [rbp-58h]
  __int64 v41; // [rsp+38h] [rbp-50h]
  __int64 v42; // [rsp+40h] [rbp-48h]
  __int64 **v43; // [rsp+48h] [rbp-40h]
  unsigned __int64 v44; // [rsp+58h] [rbp-30h]

  v10 = *(_QWORD *)(a1 + 80);
  v44 = __readfsqword(0x28u);
  v12 = sub_2E6E70(v10, a2);
  if ( v12 )
  {
    v13 = v12;
    v14 = *(_QWORD *)(v12 + 16);
    if ( *(_QWORD *)(a1 + 240) )
    {
      v15 = *(const char **)(a1 + 232);
      v16 = &s1;
      if ( !v14 )
      {
LABEL_5:
        if ( strcmp(v16, v15) && !*(_BYTE *)(v10 + 76) )
        {
          v29 = *(_QWORD *)(a1 + 176);
          if ( v29 > 1 )
          {
            v31 = *(const void **)(a1 + 168);
            v32 = *(void **)(a1 + 208);
            if ( *(_QWORD *)(a1 + 224) < v29 )
            {
              v35 = qvector_reserve(a1 + 208, *(_QWORD *)(a1 + 208), *(_QWORD *)(a1 + 176), 1);
              *(_QWORD *)(a1 + 208) = v35;
              v32 = (void *)v35;
            }
            *(_QWORD *)(a1 + 216) = v29;
            memmove(v32, v31, v29 - 1);
            *(_BYTE *)(*(_QWORD *)(a1 + 208) + v29 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(a1 + 216) = 0;
          }
          if ( a1 + 232 != v13 + 8 )
          {
            v30 = *(_QWORD *)(v13 + 16);
            if ( v30 > 1 )
            {
              v33 = *(const void **)(v13 + 8);
              v34 = *(void **)(a1 + 232);
              if ( *(_QWORD *)(a1 + 248) < v30 )
              {
                v34 = (void *)qvector_reserve(a1 + 232, *(_QWORD *)(a1 + 232), *(_QWORD *)(v13 + 16), 1);
                *(_QWORD *)(a1 + 232) = v34;
              }
              *(_QWORD *)(a1 + 240) = v30;
              memmove(v34, v33, v30 - 1);
              *(_BYTE *)(*(_QWORD *)(a1 + 232) + v30 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(a1 + 240) = 0;
            }
          }
        }
        v17 = *(_QWORD *)(v13 + 32);
        if ( v17 != 2 )
          goto LABEL_8;
        goto LABEL_12;
      }
    }
    else
    {
      v15 = &s1;
      if ( !v14 )
      {
        v17 = *(_QWORD *)(v13 + 32);
        if ( v17 != 2 )
        {
LABEL_8:
          if ( (v17 & 0xFFFFFFFFFFFFFFFDLL) == 1 )
          {
            v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
            if ( v22 != -1 )
            {
              if ( byte_8BA840 )
              {
                QT::QStackedWidget::setCurrentIndex(*(QT::QStackedWidget **)(a1 + 120), 0);
                QT::QWidget::show(*(QT::QWidget **)(a1 + 120));
                v36 = &idaplace_t___vtable;
                v37 = 0;
                v38 = v22;
                v40 = 0;
                v41 = 0xFFFFFFFFLL;
                v42 = 1;
                v43 = &v36;
                v39 = 0;
                v23 = idaplace_t__clone(&v36);
                v24 = *(_QWORD *)(a1 + 104);
                v43 = (__int64 **)v23;
                sub_1FFC10(v24, &v39, 1, 0, v25, v26, 0.0, a4, a5, a6, v27, v28, a9, a10);
                if ( v43 )
                  qfree(v43, v39.m128i_i8);
              }
            }
          }
          return v44 - __readfsqword(0x28u);
        }
LABEL_12:
        if ( *(_DWORD *)(v13 + 72) && byte_8BA840 )
        {
          QT::QStackedWidget::setCurrentIndex(*(QT::QStackedWidget **)(a1 + 120), 1);
          QT::QWidget::show(*(QT::QWidget **)(a1 + 120));
          v19 = sub_2E64E0(*(unsigned int *)(v13 + 72), *(_BYTE *)(v13 + 76), *(_QWORD *)(v13 + 80));
          v20 = *(_QWORD *)(a1 + 112);
          v39.m128i_i64[1] = v21;
          v39.m128i_i32[0] = v19;
          sub_3ACC30(v20, &v39, 1);
        }
        return v44 - __readfsqword(0x28u);
      }
    }
    v16 = *(const char **)(v13 + 8);
    goto LABEL_5;
  }
  return QT::QWidget::hide(*(QT::QWidget **)(a1 + 120));
}
