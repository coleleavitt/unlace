unsigned __int64 __fastcall sub_3CC620(
        _QWORD *a1,
        const char *a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        double a6,
        __m128 a7)
{
  __m128 v7; // xmm0
  __int64 v8; // r15
  volatile signed __int32 *v9; // xmm1_8
  signed __int32 v10; // eax
  __int64 v11; // rax
  __m128 v12; // xmm0
  __m128 v14; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v7 = (__m128)_mm_loadu_si128(a3);
  v8 = a3->m128i_i64[1];
  v15 = __readfsqword(0x28u);
  v9 = (volatile signed __int32 *)_mm_movehl_ps(a7, v7).m128_u64[0];
  v14 = v7;
  if ( v9 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd(v9 + 2, 1u);
    else
      ++*((_DWORD *)v9 + 2);
    sub_3CC480(a1, a2, &v14, a4, a5);
    if ( *((_QWORD *)v9 + 1) == 0x100000001LL )
    {
      *(_QWORD *)(v8 + 8) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 24LL))(v9);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v10 = _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF);
      }
      else
      {
        v10 = *((_DWORD *)v9 + 2);
        *((_DWORD *)v9 + 2) = v10 - 1;
      }
      if ( v10 == 1 )
        sub_28E9C0(v9);
    }
  }
  else
  {
    sub_3CC480(a1, a2, &v14, a4, a5);
  }
  *a1 = &local_types_dirtree_widget_t___vtable;
  a1[2] = local_types_dirtree_widget_t___vtable_at__16;
  a1[38] = local_types_dirtree_widget_t___vtable_at__304;
  v11 = a1[306];
  a1[30] = local_types_dirtree_widget_t___vtable_at__240;
  if ( v11 )
  {
    v12 = _mm_loadh_ps(&dbl_8CA7C0);
    v14 = v12;
    sub_534250(&v14, unk_8CA748, 0, *(double *)v12.m128_u64);
    sub_534250(&v14, unk_8CA750, 0, *(double *)v12.m128_u64);
    sub_534250(&v14, 0, 0, *(double *)v12.m128_u64);
  }
  return v15 - __readfsqword(0x28u);
}
