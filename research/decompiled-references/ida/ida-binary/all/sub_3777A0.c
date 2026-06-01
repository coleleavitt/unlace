__int64 __fastcall sub_3777A0(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  const char *v12; // rbx
  __int64 v13; // rax
  char **v14; // r14
  __int64 v15; // r12
  double v16; // xmm0_8
  const char *v17; // rsi
  bool v18; // zf
  __int64 v19; // rax
  __int64 *v20; // r13
  __int64 *v21; // r15
  _QWORD *v22; // r13
  double v23; // xmm4_8
  double v24; // xmm5_8
  __int64 v25; // rcx
  __int64 v26; // rdx
  const char **v27; // rax
  __int64 v28; // rsi
  __int64 v29; // [rsp+0h] [rbp-58h] BYREF
  __int128 v30; // [rsp+8h] [rbp-50h]
  unsigned __int64 v31; // [rsp+18h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v10 = sub_377710(a1, a2);
  if ( v10 == -1 )
    return 0;
  v12 = (const char *)v10;
  v13 = sub_2B70C0(a1);
  v14 = (char **)(v13 + 272);
  v15 = v13;
  if ( sub_370670(v13 + 272, (__int64)v12) )
    return 0;
  v16 = 0.0;
  v17 = nullptr;
  v29 = 0;
  v30 = 0;
  v29 = qvector_reserve(&v29, 0, 1, 8);
  *(_QWORD *)(v29 + 8 * v30) = v12;
  v18 = (_QWORD)v30 == -1;
  v19 = v30 + 1;
  *(_QWORD *)&v30 = v30 + 1;
  if ( !v18 )
  {
    v20 = (__int64 *)v29;
    v21 = (__int64 *)(v29 + 8 * v19);
    if ( (__int64 *)v29 != v21 )
    {
      do
      {
        v17 = (const char *)*v20;
        sub_370AA0((__int64)v14, *v20++, 0);
      }
      while ( v21 != v20 );
    }
    sub_370D50(v14, v17);
    sub_3723D0((__int64)v14);
  }
  v22 = sub_3706B0((__int64)v14, (__int64)v12);
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    v16 = qfree(v29, v12);
  }
  if ( !v22 )
    return 0;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, 0, 0);
  v25 = *(_QWORD *)(v15 + 272);
  v26 = v25 + 40LL * *(_QWORD *)(v15 + 280);
  if ( v25 == v26 )
  {
LABEL_17:
    v28 = 0xFFFFFFFFLL;
  }
  else
  {
    v27 = *(const char ***)(v15 + 272);
    while ( v12 != *v27 )
    {
      v27 += 5;
      if ( (const char **)v26 == v27 )
        goto LABEL_17;
    }
    v28 = -858993459 * (unsigned int)(((__int64)v27 - v25) >> 3);
  }
  sub_3766E0(a1, v28, v26, v25, v16, a4, a5, a6, v23, v24, a9, a10);
  return 1;
}
