char *__fastcall ida_action_t__::vfunc_5(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  char *result; // rax
  __int64 v9; // r13
  int v10; // eax
  const void *v11; // rsi
  _BYTE *v12; // rax
  _BYTE *v13; // r15
  int v14; // eax
  __int64 v15; // rdx
  size_t v16; // rcx
  int v17; // eax
  QT::QWidget *v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  void *v24; // r8
  __m128i si128; // xmm0
  __int64 v26; // rdi
  void *v27; // rax
  void *v28; // rax
  size_t n; // [rsp+0h] [rbp-58h]
  size_t nb; // [rsp+0h] [rbp-58h]
  __int64 na; // [rsp+0h] [rbp-58h]
  void *v32; // [rsp+8h] [rbp-50h]
  size_t v33; // [rsp+8h] [rbp-50h]
  __m128i v34[4]; // [rsp+10h] [rbp-48h] BYREF

  result = &byte_8CD800;
  if ( byte_8CD800 )
    return result;
  v9 = *(_QWORD *)(a4 + 16);
  v10 = *(_DWORD *)(a1 + 112);
  if ( !v9 )
  {
LABEL_7:
    if ( (v10 & 0x40000) == 0 )
      goto LABEL_8;
    goto LABEL_26;
  }
  if ( !*(_BYTE *)(v9 + 24) )
  {
    v9 = *(_QWORD *)(v9 + 16);
    if ( v9 && (v10 & 2) == 0 )
    {
      *(_DWORD *)(v9 + 912) = 0;
      v10 = *(_DWORD *)(a1 + 112);
    }
    goto LABEL_7;
  }
  v9 = 0;
  if ( (v10 & 0x40000) == 0 )
  {
LABEL_8:
    if ( a2 == -1 )
      return (char *)sub_530A40(a4, 2);
    v11 = nullptr;
    result = (char *)sub_530A40(a4, 0);
    if ( a2 > 0 )
      goto LABEL_10;
    return result;
  }
LABEL_26:
  v11 = nullptr;
  result = (char *)mark_builtin_widgets(0x40000000000000LL, 0, 1);
  if ( a2 > 0 )
  {
LABEL_10:
    if ( v9 && (*(_QWORD *)(a4 + 40) || *(_BYTE *)(a4 + 28)) )
    {
      v12 = (_BYTE *)sub_1EB5B0(v9);
      v13 = v12;
      if ( v12[29] )
      {
        n = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v12 + 144LL))(v12);
        v14 = sub_1EB590(v9);
        v16 = n;
        if ( v14 != 1 )
        {
          v23 = *(_QWORD *)(a4 + 40);
          v24 = nullptr;
          si128 = _mm_unpacklo_epi64((__m128i)v23, (__m128i)v23);
          if ( v23 )
          {
            v33 = n;
            v34[0] = si128;
            na = 20 * v23;
            v27 = (void *)qalloc_or_throw(20 * v23);
            v11 = *(const void **)(a4 + 32);
            v28 = memcpy(v27, v11, na);
            si128 = _mm_load_si128(v34);
            v16 = v33;
            v24 = v28;
          }
          v26 = *(_QWORD *)(v16 + 24);
          if ( v26 )
          {
            *(_QWORD *)(v16 + 32) = 0;
            v32 = v24;
            nb = v16;
            v34[0] = si128;
            qfree(v26, v11, v15, v16, v24);
            si128 = _mm_load_si128(v34);
            v24 = v32;
            v16 = nb;
          }
          *(_QWORD *)(v16 + 24) = v24;
          *(__m128i *)(v16 + 32) = si128;
          *(_BYTE *)(v16 + 48) = *(_BYTE *)(a4 + 56);
        }
        (*(void (__fastcall **)(_BYTE *, size_t, _QWORD))(*(_QWORD *)v13 + 152LL))(v13, v16, 0);
      }
    }
    v17 = *(_DWORD *)(a1 + 112);
    if ( (v17 & 0x10000) != 0 )
    {
      mark_builtin_widgets(-25, -1, 1);
    }
    else
    {
      if ( (v17 & 0x80000) != 0 )
      {
        v18 = qword_8CF010;
        if ( !qword_8CF010 )
          return (char *)ui_action_t__::vfunc_5(a1, (unsigned int)a2, a3, a4);
        goto LABEL_19;
      }
      sub_1F9CB0();
      nullsub_70();
    }
    v18 = qword_8CF010;
    if ( !qword_8CF010 )
    {
LABEL_21:
      if ( (*(_BYTE *)(a1 + 114) & 1) != 0 )
      {
        v19 = *(_DWORD *)(a3 + 8);
        if ( v19 == 25 || v19 == 58 )
        {
          v20 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87DE00, (const QT::QObject *)v9);
          v21 = v20;
          if ( v20 )
          {
            v22 = *(_QWORD *)(a3 + 208);
            if ( v22 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v20 + 1000) + 56LL))(
                     *(_QWORD *)(v20 + 1000),
                     v22 + 8) )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 664LL))(v21);
              }
            }
          }
        }
      }
      return (char *)ui_action_t__::vfunc_5(a1, (unsigned int)a2, a3, a4);
    }
LABEL_19:
    if ( *(char *)(*((_QWORD *)v18 + 4) + 9LL) < 0 )
      QT::QWidget::update(*((QT::QWidget **)v18 + 87));
    goto LABEL_21;
  }
  return result;
}
