_BOOL8 __fastcall sub_2E22D0(
        int a1,
        _QWORD *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rcx
  __m128 v12; // xmm0
  __int64 (__fastcall *v14)(__int64); // rax
  const char **v15; // rax
  const char *v16; // r13
  double v17; // xmm4_8
  double v18; // xmm5_8
  int v19; // eax
  void *v20; // rsi
  const char *v21; // [rsp+0h] [rbp-68h] BYREF
  __int128 v22; // [rsp+8h] [rbp-60h]
  _BYTE *v23; // [rsp+20h] [rbp-48h] BYREF
  __int128 v24; // [rsp+28h] [rbp-40h]
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  if ( a1 == -3 )
    return 1;
  if ( a1 != -2 )
    return a1 == -7;
  v11 = *a2;
  v12 = 0;
  v21 = nullptr;
  v14 = *(__int64 (__fastcall **)(__int64))(v11 + 72);
  v22 = 0;
  v23 = nullptr;
  v24 = 0;
  if ( v14 == form_actions_impl_t__::vfunc_9 )
  {
    v15 = (const char **)a2[4];
  }
  else
  {
    v15 = (const char **)v14((__int64)a2);
    v11 = *a2;
  }
  v16 = *v15;
  *(double *)v12.m128_u64 = (*(double (__fastcall **)(_QWORD *, __int64, const char **))v11)(a2, 1, &v21);
  v19 = sub_2E16C0((__int64 *)&v23, (__int64)v16, &v21, v12, a4, a5, a6, v17, v18, a9, a10);
  if ( v19 != 1 )
  {
    if ( v19 == 2 )
    {
      if ( v23 )
      {
        *(_QWORD *)&v24 = 0;
        *(double *)v12.m128_u64 = qfree(v23, v16);
      }
      if ( v21 )
      {
        *(_QWORD *)&v22 = 0;
        qfree(v21, v16, *(double *)v12.m128_u64);
      }
      return 1;
    }
    v20 = v23;
    if ( *((_QWORD *)&v24 + 1) <= 0xDu )
    {
      v23 = (_BYTE *)qvector_reserve(&v23, v23, 14, 1);
      v20 = v23;
    }
    *(_QWORD *)&v24 = 14;
    qmemcpy(v20, "Bad register!", 13);
    v23[13] = 0;
  }
  (*(void (__fastcall **)(_QWORD *, __int64, _BYTE **))(*a2 + 8LL))(a2, 2, &v23);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 48LL))(a2, 1);
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    *(double *)v12.m128_u64 = qfree(v23, (_BYTE *)&dword_0 + 1);
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21, (_BYTE *)&dword_0 + 1, *(double *)v12.m128_u64);
  }
  return 0;
}
