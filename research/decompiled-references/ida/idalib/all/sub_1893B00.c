void __fastcall sub_1893B00(
        __int64 *a1,
        void **a2,
        unsigned int a3,
        __int64 *a4,
        unsigned __int32 a5,
        unsigned __int32 a6,
        __m128i a7,
        __m128 a8,
        __int64 a9)
{
  __int64 *v9; // r9
  __int64 *v10; // rbx
  __int64 *v11; // r14
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v27; // [rsp+30h] [rbp-E8h]
  __m128i *v28; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD v30[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v32; // [rsp+70h] [rbp-A8h] BYREF
  char v33; // [rsp+C8h] [rbp-50h]
  unsigned int v34; // [rsp+D0h] [rbp-48h]
  char v35; // [rsp+D4h] [rbp-44h]

  v28 = (__m128i *)a4;
  if ( a4 )
  {
    sub_1CB44B0(a1, &v28);
    v9 = *(__int64 **)(a9 + 8);
    v10 = &v9[*(unsigned int *)(a9 + 16)];
    if ( v9 != v10 )
    {
      v11 = *(__int64 **)(a9 + 8);
      do
      {
        while ( 1 )
        {
          v12 = *v11;
          if ( *(_WORD *)(*(_QWORD *)(*v11 + 72) + 8LL) == 403 )
            break;
          if ( v10 == ++v11 )
            goto LABEL_9;
        }
        *(_BYTE *)(v12 + 58) |= 1u;
        sub_168B9F0((__int64)v30, a1 + 1, *(_DWORD *)(v12 + 24), 0x1999u, 0);
        if ( v33 )
        {
          sub_AE9DF0(&v32, v12, 0x10u);
        }
        else if ( v35 )
        {
          v18 = sub_168B9E0(v30);
          v22 = v31;
          if ( v31 )
          {
            v27 = v18;
            v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 32LL))(v31);
            v18 = v27;
          }
          v29 = v22;
          v23 = sub_1587BC0(v18, &v29, v18, v19, v20, v21);
          sub_AE9DF0((unsigned __int8 **)(*v23 + 32LL * v34 + 8), v12, 0x10u);
        }
        ++v11;
        sub_15F7200(v30);
      }
      while ( v10 != v11 );
    }
LABEL_9:
    v13 = a1[490];
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 272) + 8LL * *(unsigned int *)(v13 + 280) - 8);
    sub_17CC930(
      (unsigned __int64)a1,
      a2,
      a3,
      v28,
      (void **)(*(_QWORD *)v13 + 8 * (*(unsigned int *)(v13 + 8) - v14)),
      v14,
      a7,
      *(double *)a8.m128_u64,
      a5,
      a6,
      a9);
    sub_1891290(a1, (__int64)a2, v28->m128i_i64, v15, v16, v17, a7, a8);
  }
}
