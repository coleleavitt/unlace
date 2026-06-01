_QWORD *__fastcall sub_4E79D0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdi
  int v13; // eax
  __int64 *v14; // rdi
  int v15; // r14d
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  __m128i v20[4]; // [rsp+0h] [rbp-40h] BYREF

  if ( a1 != *(_QWORD *)(a2 + 8) || a1 != a3[1] || a4 && a1 != *(_QWORD *)(a4 + 8) )
    return nullptr;
  v6 = (_QWORD *)sub_186B270(0x40u);
  v7 = __dynamic_cast(
         a3,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::external_relation,
         0);
  if ( !v7 )
    __cxa_bad_cast();
  v8 = sub_15D1F10(v7[4]);
  v6[1] = a1;
  v9 = *(_QWORD *)(a1 + 24);
  *v6 = &off_1C4FB98;
  v10 = v8;
  v11 = sub_4D6490(v9);
  v12 = *(_QWORD *)(a1 + 24);
  v6[2] = 0;
  v6[3] = v11;
  v13 = sub_4D6490(v12);
  v14 = *(__int64 **)(a1 + 40);
  v15 = v13;
  v16 = *v14;
  v20[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
  v17 = (*(__int64 (__fastcall **)(__int64 *))(v16 + 16))(v14);
  v18 = sub_15D2D10(v15, v17, 5, 0, 0, 2, (__int64)v20, 0);
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  v6[2] = v18;
  return v6;
}

