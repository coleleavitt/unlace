void __fastcall sub_21220E0(__int64 a1, __int32 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 (*v6)(); // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rsi
  __m128i v11; // xmm0
  __int64 v12; // rax
  void *v13; // rdi
  _QWORD *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // [rsp+8h] [rbp-E0h]
  int v17; // [rsp+10h] [rbp-D8h]
  __int64 v18; // [rsp+18h] [rbp-D0h]
  const char *v19; // [rsp+20h] [rbp-C8h] BYREF
  __int16 v20; // [rsp+40h] [rbp-A8h]
  __int64 v21; // [rsp+50h] [rbp-98h] BYREF
  __m128i v22; // [rsp+58h] [rbp-90h] BYREF
  __int64 v23; // [rsp+68h] [rbp-80h]
  char v24; // [rsp+70h] [rbp-78h]
  __int64 v25; // [rsp+78h] [rbp-70h]
  void *v26; // [rsp+80h] [rbp-68h]
  __int64 v27; // [rsp+88h] [rbp-60h]
  __int64 v28; // [rsp+90h] [rbp-58h]
  void *v29; // [rsp+98h] [rbp-50h]
  __int64 v30; // [rsp+A0h] [rbp-48h]
  __m128i v31[4]; // [rsp+A8h] [rbp-40h] BYREF

  v6 = *(__int64 (**)())(*(_QWORD *)a1 + 88LL);
  v7 = 1;
  if ( v6 != sub_2119CA0 )
  {
    v18 = a5;
    v17 = a4;
    v16 = a3;
    v7 = ((__int64 (__fastcall *)(__int64))v6)(a1);
    a5 = v18;
    a4 = v17;
    a3 = v16;
  }
  v22.m128i_i64[1] = a3;
  v8 = *(unsigned int *)(a1 + 56);
  v21 = v7;
  v24 = 4;
  v25 = a5;
  v26 = nullptr;
  v27 = 0;
  v28 = 0;
  v29 = v31;
  v30 = 0;
  v31[0].m128i_i8[0] = 0;
  v22.m128i_i32[0] = a2;
  LODWORD(v23) = a4;
  if ( !(_DWORD)v8 )
  {
    v14 = *(_QWORD **)(a1 + 264);
    v15 = *(_QWORD *)(a1 + 8);
    v19 = "this directive must appear between .cfi_startproc and .cfi_endproc directives";
    v20 = 259;
    if ( v14 )
      v14 = (_QWORD *)*v14;
    sub_2100A30(v15, (__int64)v14, (__int64)&v19);
    v13 = v29;
    if ( v29 == v31 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v9 = *(_QWORD *)(a1 + 24) + 96LL * *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v8 - 16);
  if ( !v9 )
    return;
  v10 = *(_QWORD *)(v9 + 40);
  if ( v10 == *(_QWORD *)(v9 + 48) )
  {
    sub_211F240((char **)(v9 + 32), v10, (__int64)&v21);
  }
  else
  {
    v11 = _mm_loadu_si128(&v22);
    *(_QWORD *)v10 = v7;
    *(_QWORD *)(v10 + 48) = 0;
    *(__m128i *)(v10 + 8) = v11;
    v12 = v23;
    *(_QWORD *)(v10 + 56) = 0;
    *(_QWORD *)(v10 + 24) = v12;
    LOBYTE(v12) = v24;
    *(_QWORD *)(v10 + 64) = 0;
    *(_BYTE *)(v10 + 32) = v12;
    *(_QWORD *)(v10 + 40) = v25;
    *(_QWORD *)(v10 + 48) = v26;
    v26 = nullptr;
    *(_QWORD *)(v10 + 56) = v27;
    v27 = 0;
    *(_QWORD *)(v10 + 64) = v28;
    *(_QWORD *)(v10 + 72) = v10 + 88;
    v28 = 0;
    if ( v29 == v31 )
    {
      *(__m128i *)(v10 + 88) = _mm_loadu_si128(v31);
    }
    else
    {
      *(_QWORD *)(v10 + 72) = v29;
      *(_QWORD *)(v10 + 88) = v31[0].m128i_i64[0];
    }
    *(_QWORD *)(v10 + 80) = v30;
    v29 = v31;
    v30 = 0;
    v31[0].m128i_i8[0] = 0;
    *(_QWORD *)(v9 + 40) += 104LL;
  }
  *(_DWORD *)(v9 + 56) = a2;
  v13 = v29;
  if ( v29 != v31 )
LABEL_10:
    operator delete(v13);
LABEL_11:
  if ( v26 )
    operator delete(v26);
}
