void __fastcall sub_2121990(__int64 a1, __int32 a2, __int64 a3, __int64 a4)
{
  __int64 (*v5)(void); // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // [rsp+8h] [rbp-D0h]
  const char *v16; // [rsp+10h] [rbp-C8h] BYREF
  __int16 v17; // [rsp+30h] [rbp-A8h]
  __int64 v18; // [rsp+40h] [rbp-98h] BYREF
  __m128i v19; // [rsp+48h] [rbp-90h] BYREF
  __int64 v20; // [rsp+58h] [rbp-80h]
  char v21; // [rsp+60h] [rbp-78h]
  __int64 v22; // [rsp+68h] [rbp-70h]
  void *v23; // [rsp+70h] [rbp-68h]
  __int64 v24; // [rsp+78h] [rbp-60h]
  __int64 v25; // [rsp+80h] [rbp-58h]
  void *v26; // [rsp+88h] [rbp-50h] BYREF
  __int64 v27; // [rsp+90h] [rbp-48h]
  __m128i v28[4]; // [rsp+98h] [rbp-40h] BYREF

  v5 = *(__int64 (**)(void))(*(_QWORD *)a1 + 88LL);
  v6 = 1;
  if ( v5 != sub_2119CA0 )
  {
    v15 = a4;
    v6 = v5();
    a4 = v15;
  }
  v18 = v6;
  v21 = 19;
  v22 = a4;
  v23 = nullptr;
  v24 = 0;
  v25 = 0;
  v26 = v28;
  sub_211A0D0(&v26, &byte_22F0C30, (__int64)&byte_22F0C30);
  v7 = *(unsigned int *)(a1 + 56);
  v19.m128i_i32[0] = a2;
  v19.m128i_i64[1] = a3;
  if ( (_DWORD)v7 )
  {
    v8 = *(_QWORD *)(a1 + 24) + 96LL * *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v7 - 16);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 40);
      if ( v9 == *(_QWORD *)(v8 + 48) )
      {
        sub_211F240((char **)(v8 + 32), v9, (__int64)&v18);
      }
      else
      {
        v10 = v18;
        v11 = _mm_loadu_si128(&v19);
        *(_QWORD *)(v9 + 48) = 0;
        *(_QWORD *)(v9 + 56) = 0;
        *(_QWORD *)v9 = v10;
        *(__m128i *)(v9 + 8) = v11;
        v12 = v20;
        *(_QWORD *)(v9 + 64) = 0;
        *(_QWORD *)(v9 + 24) = v12;
        *(_BYTE *)(v9 + 32) = v21;
        *(_QWORD *)(v9 + 40) = v22;
        *(_QWORD *)(v9 + 48) = v23;
        v23 = nullptr;
        *(_QWORD *)(v9 + 56) = v24;
        v24 = 0;
        *(_QWORD *)(v9 + 64) = v25;
        *(_QWORD *)(v9 + 72) = v9 + 88;
        v25 = 0;
        if ( v26 == v28 )
        {
          *(__m128i *)(v9 + 88) = _mm_loadu_si128(v28);
        }
        else
        {
          *(_QWORD *)(v9 + 72) = v26;
          *(_QWORD *)(v9 + 88) = v28[0].m128i_i64[0];
        }
        *(_QWORD *)(v9 + 80) = v27;
        v26 = v28;
        v27 = 0;
        v28[0].m128i_i8[0] = 0;
        *(_QWORD *)(v8 + 40) += 104LL;
      }
    }
  }
  else
  {
    v13 = *(_QWORD **)(a1 + 264);
    v14 = *(_QWORD *)(a1 + 8);
    v16 = "this directive must appear between .cfi_startproc and .cfi_endproc directives";
    v17 = 259;
    if ( v13 )
      v13 = (_QWORD *)*v13;
    sub_2100A30(v14, (__int64)v13, (__int64)&v16);
  }
  if ( v26 != v28 )
    operator delete(v26);
  if ( v23 )
    operator delete(v23);
}
