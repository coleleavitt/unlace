void __fastcall sub_2121E50(__int64 a1, __int32 a2, __int32 a3, __int64 a4)
{
  __int64 (*v4)(); // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __m128i v9; // xmm0
  __int64 v10; // rax
  void *v11; // rdi
  _QWORD *v12; // rsi
  __int64 v13; // rdi
  __int32 v14; // [rsp+10h] [rbp-C8h]
  __int64 v15; // [rsp+18h] [rbp-C0h]
  const char *v16; // [rsp+20h] [rbp-B8h] BYREF
  __int16 v17; // [rsp+40h] [rbp-98h]
  __int64 v18; // [rsp+50h] [rbp-88h] BYREF
  __m128i v19; // [rsp+58h] [rbp-80h] BYREF
  __int64 v20; // [rsp+68h] [rbp-70h]
  char v21; // [rsp+70h] [rbp-68h]
  __int64 v22; // [rsp+78h] [rbp-60h]
  void *v23; // [rsp+80h] [rbp-58h]
  __int64 v24; // [rsp+88h] [rbp-50h]
  __int64 v25; // [rsp+90h] [rbp-48h]
  void *v26; // [rsp+98h] [rbp-40h]
  __int64 v27; // [rsp+A0h] [rbp-38h]
  __m128i v28[3]; // [rsp+A8h] [rbp-30h] BYREF

  v4 = *(__int64 (**)())(*(_QWORD *)a1 + 88LL);
  v5 = 1;
  if ( v4 != sub_2119CA0 )
  {
    v15 = a4;
    v14 = a3;
    v5 = ((__int64 (__fastcall *)(__int64))v4)(a1);
    a4 = v15;
    a3 = v14;
  }
  v19.m128i_i32[1] = a3;
  v6 = *(unsigned int *)(a1 + 56);
  v22 = a4;
  v18 = v5;
  v21 = 13;
  v23 = nullptr;
  v24 = 0;
  v25 = 0;
  v26 = v28;
  v27 = 0;
  v28[0].m128i_i8[0] = 0;
  v19.m128i_i32[0] = a2;
  if ( !(_DWORD)v6 )
  {
    v12 = *(_QWORD **)(a1 + 264);
    v13 = *(_QWORD *)(a1 + 8);
    v16 = "this directive must appear between .cfi_startproc and .cfi_endproc directives";
    v17 = 259;
    if ( v12 )
      v12 = (_QWORD *)*v12;
    sub_2100A30(v13, (__int64)v12, (__int64)&v16);
    v11 = v26;
    if ( v26 == v28 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v7 = *(_QWORD *)(a1 + 24) + 96LL * *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v6 - 16);
  if ( !v7 )
    return;
  v8 = *(_QWORD *)(v7 + 40);
  if ( v8 == *(_QWORD *)(v7 + 48) )
  {
    sub_211F240((char **)(v7 + 32), v8, (__int64)&v18);
  }
  else
  {
    v9 = _mm_loadu_si128(&v19);
    *(_QWORD *)v8 = v5;
    *(_QWORD *)(v8 + 48) = 0;
    *(__m128i *)(v8 + 8) = v9;
    v10 = v20;
    *(_QWORD *)(v8 + 56) = 0;
    *(_QWORD *)(v8 + 24) = v10;
    LOBYTE(v10) = v21;
    *(_QWORD *)(v8 + 64) = 0;
    *(_BYTE *)(v8 + 32) = v10;
    *(_QWORD *)(v8 + 40) = v22;
    *(_QWORD *)(v8 + 48) = v23;
    v23 = nullptr;
    *(_QWORD *)(v8 + 56) = v24;
    v24 = 0;
    *(_QWORD *)(v8 + 64) = v25;
    *(_QWORD *)(v8 + 72) = v8 + 88;
    v25 = 0;
    if ( v26 == v28 )
    {
      *(__m128i *)(v8 + 88) = _mm_loadu_si128(v28);
    }
    else
    {
      *(_QWORD *)(v8 + 72) = v26;
      *(_QWORD *)(v8 + 88) = v28[0].m128i_i64[0];
    }
    *(_QWORD *)(v8 + 80) = v27;
    v26 = v28;
    v27 = 0;
    v28[0].m128i_i8[0] = 0;
    *(_QWORD *)(v7 + 40) += 104LL;
  }
  v11 = v26;
  if ( v26 != v28 )
LABEL_10:
    operator delete(v11);
LABEL_11:
  if ( v23 )
    operator delete(v23);
}
