void __fastcall sub_2122380(__int64 a1, const void *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 (*v5)(void); // rdx
  __int64 v6; // rax
  char *v7; // r12
  char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rax
  _QWORD *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // [rsp+8h] [rbp-D0h]
  const char *v18; // [rsp+10h] [rbp-C8h] BYREF
  __int16 v19; // [rsp+30h] [rbp-A8h]
  __int64 v20; // [rsp+40h] [rbp-98h] BYREF
  __m128i v21; // [rsp+48h] [rbp-90h] BYREF
  __int64 v22; // [rsp+58h] [rbp-80h]
  char v23; // [rsp+60h] [rbp-78h]
  __int64 v24; // [rsp+68h] [rbp-70h]
  void *v25; // [rsp+70h] [rbp-68h]
  char *v26; // [rsp+78h] [rbp-60h]
  char *v27; // [rsp+80h] [rbp-58h]
  void *v28; // [rsp+88h] [rbp-50h] BYREF
  __int64 v29; // [rsp+90h] [rbp-48h]
  __m128i v30[4]; // [rsp+98h] [rbp-40h] BYREF

  v5 = *(__int64 (**)(void))(*(_QWORD *)a1 + 88LL);
  v6 = 1;
  if ( v5 != sub_2119CA0 )
  {
    v17 = a4;
    v6 = v5();
    a4 = v17;
  }
  v20 = v6;
  v7 = nullptr;
  v23 = 10;
  v24 = a4;
  v25 = nullptr;
  v26 = nullptr;
  v27 = nullptr;
  if ( a3 )
  {
    v8 = (char *)operator new(a3);
    v7 = &v8[a3];
    v25 = v8;
    v27 = &v8[a3];
    memcpy(v8, a2, a3);
  }
  v26 = v7;
  v28 = v30;
  sub_211A0D0(&v28, &byte_22F0C30, (__int64)&byte_22F0C30);
  v9 = *(unsigned int *)(a1 + 56);
  v21.m128i_i32[0] = 0;
  v21.m128i_i64[1] = 0;
  if ( (_DWORD)v9 )
  {
    v10 = *(_QWORD *)(a1 + 24) + 96LL * *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v9 - 16);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 40);
      if ( v11 == *(_QWORD *)(v10 + 48) )
      {
        sub_211F240((char **)(v10 + 32), v11, (__int64)&v20);
      }
      else
      {
        v12 = v20;
        v13 = _mm_loadu_si128(&v21);
        *(_QWORD *)(v11 + 48) = 0;
        *(_QWORD *)(v11 + 56) = 0;
        *(_QWORD *)v11 = v12;
        *(__m128i *)(v11 + 8) = v13;
        v14 = v22;
        *(_QWORD *)(v11 + 64) = 0;
        *(_QWORD *)(v11 + 24) = v14;
        *(_BYTE *)(v11 + 32) = v23;
        *(_QWORD *)(v11 + 40) = v24;
        *(_QWORD *)(v11 + 48) = v25;
        v25 = nullptr;
        *(_QWORD *)(v11 + 56) = v26;
        v26 = nullptr;
        *(_QWORD *)(v11 + 64) = v27;
        *(_QWORD *)(v11 + 72) = v11 + 88;
        v27 = nullptr;
        if ( v28 == v30 )
        {
          *(__m128i *)(v11 + 88) = _mm_loadu_si128(v30);
        }
        else
        {
          *(_QWORD *)(v11 + 72) = v28;
          *(_QWORD *)(v11 + 88) = v30[0].m128i_i64[0];
        }
        *(_QWORD *)(v11 + 80) = v29;
        v28 = v30;
        v29 = 0;
        v30[0].m128i_i8[0] = 0;
        *(_QWORD *)(v10 + 40) += 104LL;
      }
    }
  }
  else
  {
    v15 = *(_QWORD **)(a1 + 264);
    v16 = *(_QWORD *)(a1 + 8);
    v18 = "this directive must appear between .cfi_startproc and .cfi_endproc directives";
    v19 = 259;
    if ( v15 )
      v15 = (_QWORD *)*v15;
    sub_2100A30(v16, (__int64)v15, (__int64)&v18);
  }
  if ( v28 != v30 )
    operator delete(v28);
  if ( v25 )
    operator delete(v25);
}
