unsigned __int64 __fastcall sub_408750(__int64 a1, __int64 a2, const __m128i *a3, char a4)
{
  __int64 v5; // rax
  int v7; // ecx
  __int64 v8; // rdi
  const void *v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // r12
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *func; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rdi
  __int64 *v28; // rax
  __int64 v29; // rdx
  void *v30; // rcx
  __int64 v31; // rsi
  int v32; // eax
  __int64 v33; // r14
  unsigned __int8 isChecked; // al
  __int64 v35; // rax
  unsigned __int64 v36; // [rsp+28h] [rbp-C8h] BYREF
  __m128i v37; // [rsp+30h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+40h] [rbp-B0h]
  __m128i v39; // [rsp+50h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+60h] [rbp-90h]
  void *v41[2]; // [rsp+70h] [rbp-80h] BYREF
  __int64 v42; // [rsp+80h] [rbp-70h]
  _BYTE v43[24]; // [rsp+90h] [rbp-60h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-48h]
  unsigned __int64 v45; // [rsp+B8h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 304);
  v45 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 312) != v5 )
    *(_QWORD *)(a1 + 312) = v5;
  *(_DWORD *)(a1 + 328) = -1;
  if ( a3->m128i_i32[0] >= 0 )
  {
    v7 = a3->m128i_i32[1];
    if ( v7 >= 0 )
    {
      v8 = a3[1].m128i_i64[0];
      if ( v8 )
      {
        if ( a2 )
        {
          if ( v7 )
          {
            (*(void (__fastcall **)(__m128i *, __int64, _QWORD, _QWORD, const __m128i *))(*(_QWORD *)v8 + 112LL))(
              &v37,
              a3[1].m128i_i64[0],
              a3->m128i_u32[0],
              0,
              a3);
          }
          else
          {
            v38 = a3[1].m128i_i64[0];
            v37 = _mm_loadu_si128(a3);
          }
          v9 = (const void *)sub_3F27F0(a1, (__int64)&v37);
          if ( v9 )
          {
            v10 = __dynamic_cast(
                    v9,
                    (const struct __class_type_info *)&`typeinfo for'QT::QStandardItem,
                    (const struct __class_type_info *)&`typeinfo for'xref_tree_item_t,
                    0);
            v11 = v10;
            if ( v10 )
            {
              v12 = *(__int64 (__fastcall **)(__int64))(*v10 + 80LL);
              v13 = v12 == sub_3EDDF0 ? v11[2] : v12((__int64)v11);
              sub_3F2890(&v39, a1, (__int64)&v37);
              if ( (v39.m128i_i32[1] | v39.m128i_i32[0]) >= 0 )
              {
                if ( v40 )
                {
                  (*(void (__fastcall **)(_BYTE *, _QWORD *, __int64))(*v11 + 16LL))(v43, v11, 257);
                  v36 = v44 & 0xFFFFFFFFFFFFFFFCLL;
                  if ( (unsigned __int8)QT::QMetaType::isValid((QT::QMetaType *)&v36) )
                  {
                    v14 = QT::QVariant::toInt((QT::QVariant *)v43, nullptr);
                    if ( v14 == 2 )
                    {
                      v35 = sub_408500(
                              *(_QWORD *)(a1 + 112),
                              0,
                              v15,
                              v16,
                              v17,
                              v18,
                              (__int128)_mm_load_si128(&v39),
                              v40);
                      sub_3F9CC0((__int64)v41, a1, v13, v35);
                    }
                    else
                    {
                      if ( v14 != 1 )
                        goto LABEL_18;
                      func = (__int64 *)get_func(v13);
                      if ( func )
                      {
                        v25 = *func;
                        if ( v25 != -1 )
                          v13 = v25;
                      }
                      v26 = sub_408500(
                              *(_QWORD *)(a1 + 112),
                              0,
                              v21,
                              v22,
                              v23,
                              v24,
                              (__int128)_mm_load_si128(&v39),
                              v40);
                      sub_3F9CC0((__int64)v41, a1, v26, v13);
                    }
                    v27 = (__int64 *)v41[0];
                    v28 = (__int64 *)v41[1];
                    v29 = v42;
                    if ( v41[0] == v41[1] )
                    {
                      if ( v41[0] )
                        operator delete(v41[0], v42 - (unsigned __int64)v41[0]);
                    }
                    else
                    {
                      v30 = *(void **)(a1 + 304);
                      v31 = *(_QWORD *)(a1 + 320);
                      *(void **)(a1 + 304) = v41[0];
                      *(_QWORD *)(a1 + 312) = v28;
                      *(_QWORD *)(a1 + 320) = v29;
                      if ( !v30
                        || (operator delete(v30, v31 - (_QWORD)v30),
                            v28 = *(__int64 **)(a1 + 312),
                            v27 = *(__int64 **)(a1 + 304),
                            v27 != v28) )
                      {
                        if ( a4 )
                        {
                          v32 = v28 - v27 - 1;
                          *(_DWORD *)(a1 + 328) = v32;
                          v33 = v27[v32];
                        }
                        else
                        {
                          *(_DWORD *)(a1 + 328) = 0;
                          v33 = *v27;
                        }
                        isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1 + 264));
                        sub_192AA0(0, v33, -1, isChecked);
                      }
                    }
                  }
LABEL_18:
                  QT::QVariant::~QVariant((QT::QVariant *)v43);
                }
              }
            }
          }
        }
      }
    }
  }
  return v45 - __readfsqword(0x28u);
}
