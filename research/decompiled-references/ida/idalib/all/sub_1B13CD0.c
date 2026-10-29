__int64 __fastcall sub_1B13CD0(__int64 a1, unsigned int a2, __int64 a3, double a4, __m128 a5)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r13
  const char *v13; // rax
  size_t v14; // rdx
  const char *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-D0h]
  _QWORD v23[4]; // [rsp+8h] [rbp-C8h] BYREF
  unsigned __int8 *v24; // [rsp+28h] [rbp-A8h] BYREF
  char v25; // [rsp+80h] [rbp-50h]
  char v26; // [rsp+8Ch] [rbp-44h]

  if ( (*(_QWORD *)(a3 + 27544) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    return 1;
  v8 = sub_6F3470(*(_QWORD *)(a1 + 240) + 552LL, "omp_allocator_handle_t", 0x16u);
  v9 = sub_18013B0(a1, v8, a2, *(_QWORD *)(a1 + 608), 0, 0, a4, *(double *)a5.m128_u64, 0, 0, 0, 0, 1u, 0, nullptr);
  if ( v9 && (v9 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v10 = v9 | 1;
    v11 = 0;
    *(_QWORD *)(a3 + 27544) = v10;
    v12 = v10;
    while ( 1 )
    {
      v13 = sub_B155B0(v11);
      v14 = 0;
      v15 = v13;
      if ( v13 )
      {
        v15 = v13;
        v14 = j__strlen(v13);
      }
      v16 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL), v15, v14);
      v17 = sub_1A5B7C0(a1, *(__int64 **)(a1 + 192), v16, a2, 15, 0, a4, *(double *)a5.m128_u64);
      if ( !v17 )
        break;
      if ( (*(_BYTE *)(v17 + 28) & 0x7Fu) - 26 > 0x1A )
        break;
      v18 = *(_QWORD *)(a1 + 248);
      v22 = v17;
      v23[0] = *(_QWORD *)(v17 + 48);
      v19 = sub_F67970(v23, v18);
      v20 = sub_190BDA0(a1, v22, v19, 1, a2, 0, a4, a5);
      if ( v20 <= 1 )
        break;
      v21 = sub_1BFA490(a1, v20 & 0xFFFFFFFFFFFFFFFELL, v12, 4, 1);
      if ( v21 <= 1 )
        break;
      *(_QWORD *)(a3 + 8 * v11++ + 27576) = v21 & 0xFFFFFFFFFFFFFFFELL;
      if ( v11 == 9 )
        return 1;
    }
  }
  sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), a2, 0x1198u, 0);
  if ( v25 )
  {
    sub_AE9DF0(&v24, (__int64)"omp_allocator_handle_t", 1u);
  }
  else if ( v26 )
  {
    sub_1B132F0((__int64)v23, (__int64)"omp_allocator_handle_t");
  }
  sub_15F7200(v23);
  return 0;
}
