unsigned __int64 __fastcall sub_4DE9B0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 (*v6)(); // rdx
  __int64 v8; // rbp
  unsigned __int64 v9; // r12
  __int64 (*v10)(); // rax
  unsigned __int64 i; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // [rsp+0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v2 = *a1;
  v17 = __readfsqword(0x28u);
  v4 = (*(__int64 (__fastcall **)(__int64 *))(v2 + 24))(a1);
  v15 = 0;
  v16 = 0;
  if ( v4 )
  {
    v8 = v4;
    v15 = qvector_reserve(&v15, 0, v4, 8);
    v9 = 0;
    v10 = *(__int64 (**)())(*a1 + 80);
    if ( v10 != chooser_flat_bucket_data_t__::vfunc_10 )
      v9 = ((__int64 (__fastcall *)(__int64 *))v10)(a1);
    for ( i = 0; i != v8; ++i )
    {
      if ( i >= v9 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, unsigned __int64))(*a1 + 48))(a1, a2, i);
        if ( !v12 || (*(_BYTE *)(v12 + 92) & 0x10) == 0 )
          continue;
      }
      v13 = v16;
      v14 = v15;
      if ( *((_QWORD *)&v16 + 1) < (unsigned __int64)(v16 + 1) )
      {
        v15 = qvector_reserve(&v15, v15, v16 + 1, 8);
        v14 = v15;
        v13 = v16;
      }
      *(_QWORD *)(v14 + 8 * v13) = i;
      *(_QWORD *)&v16 = v16 + 1;
    }
    v5 = *a1;
  }
  else
  {
    v5 = *a1;
    v6 = *(__int64 (**)())(*a1 + 80);
    if ( v6 != chooser_flat_bucket_data_t__::vfunc_10 )
    {
      ((void (__fastcall *)(__int64 *))v6)(a1);
      v5 = *a1;
    }
  }
  (*(void (__fastcall **)(__int64 *, __int64 *))(v5 + 56))(a1, &v15);
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15, (const char *)&v15);
  }
  return v17 - __readfsqword(0x28u);
}
