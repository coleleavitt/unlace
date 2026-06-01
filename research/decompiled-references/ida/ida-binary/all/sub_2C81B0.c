__int64 __fastcall sub_2C81B0(__int64 a1, __int64 a2, const QT::QObject *a3)
{
  __int64 v5; // rdi
  _BYTE *v7; // rdx
  __int64 (*v8)(void); // rax
  const char *v9; // rsi
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 *v19; // [rsp+0h] [rbp-58h] BYREF
  int v20; // [rsp+8h] [rbp-50h]
  __m128i v21; // [rsp+10h] [rbp-48h]
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]

  v5 = *(_QWORD *)(a2 + 40);
  v22 = __readfsqword(0x28u);
  v7 = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 120LL))(v5);
  v8 = *(__int64 (**)(void))(**(_QWORD **)(a2 + 40) + 128LL);
  if ( *v7 == 104 )
  {
    v20 = 0;
    v19 = &idaplace_t___vtable;
    v21.m128i_i64[0] = v8();
    v16 = idaplace_t__clone(&v19);
    v17 = *(_QWORD *)(a1 + 40);
    v18 = v16;
    if ( v17 )
      qfree(v17, (const char *)a2);
    *(_QWORD *)(a1 + 40) = v18;
  }
  else
  {
    v9 = (const char *)a3;
    v10 = v8();
    v20 = 0;
    v19 = (__int64 *)&hexplace_t___vtable;
    v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
    v11 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87C660, a3);
    if ( v11 )
    {
      v9 = *(const char **)(v11 + 728);
      hexplace_t__adjust(&v19, v9);
      v21.m128i_i64[0] = v10;
    }
    v12 = hexplace_t__clone(&v19);
    v13 = *(_QWORD *)(a1 + 40);
    v14 = v12;
    if ( v13 )
      qfree(v13, v9);
    *(_QWORD *)(a1 + 40) = v14;
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 40) + 8LL) == -1 )
      *(_WORD *)(a1 + 30) = *(_WORD *)(a2 + 30);
  }
  return 1;
}
