unsigned __int64 __fastcall sub_4DE7C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64, __int64, __int64); // r8
  __int64 (*v9)(); // rax
  __int64 v10; // r8
  __int64 v12; // rbx
  __int64 i; // rax
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  __int128 v15; // [rsp+8h] [rbp-40h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v3 = a2;
  v4 = *(_QWORD *)a1;
  v16 = __readfsqword(0x28u);
  v6 = (*(__int64 (__fastcall **)(__int64))(v4 + 24))(a1);
  v14 = 0;
  v15 = 0;
  if ( v6 )
  {
    v12 = v6;
    a2 = 0;
    v14 = qvector_reserve(&v14, 0, v6, 8);
    memset((void *)(v14 + 8 * v15), 0, 8 * (v12 - v15));
    *(_QWORD *)&v15 = v12;
    for ( i = 0; i != v12; ++i )
      *(_QWORD *)(v14 + 8 * i) = i;
  }
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 88LL);
  if ( v8 == chooser_flat_bucket_data_t__::vfunc_11 )
  {
    v9 = *(__int64 (**)())(*(_QWORD *)a1 + 80LL);
    v10 = 0;
    if ( v9 != chooser_flat_bucket_data_t__::vfunc_10 )
      v10 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (*)(), __int64, _QWORD))v9)(
              a1,
              a2,
              chooser_flat_bucket_data_t__::vfunc_10,
              v7,
              0);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *, __int64))(*(_QWORD *)a3 + 16LL))(
      a3,
      v3,
      a1,
      &v14,
      v10);
  }
  else
  {
    v8(a1, v3, a3, (__int64)&v14);
  }
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 56LL))(a1, &v14);
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14, (const char *)&v14);
  }
  return v16 - __readfsqword(0x28u);
}
