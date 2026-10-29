void __fastcall sub_2121730(__int64 a1, __int32 a2, __int64 a3)
{
  __int64 (*v4)(void); // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // [rsp+8h] [rbp-D0h]
  const char *v15; // [rsp+10h] [rbp-C8h] BYREF
  __int16 v16; // [rsp+30h] [rbp-A8h]
  __int64 v17; // [rsp+40h] [rbp-98h] BYREF
  __m128i v18; // [rsp+48h] [rbp-90h] BYREF
  __int64 v19; // [rsp+58h] [rbp-80h]
  char v20; // [rsp+60h] [rbp-78h]
  __int64 v21; // [rsp+68h] [rbp-70h]
  void *v22; // [rsp+70h] [rbp-68h]
  __int64 v23; // [rsp+78h] [rbp-60h]
  __int64 v24; // [rsp+80h] [rbp-58h]
  void *v25; // [rsp+88h] [rbp-50h] BYREF
  __int64 v26; // [rsp+90h] [rbp-48h]
  __m128i v27[4]; // [rsp+98h] [rbp-40h] BYREF

  v4 = *(__int64 (**)(void))(*(_QWORD *)a1 + 88LL);
  v5 = 1;
  if ( v4 != sub_2119CA0 )
  {
    v14 = a3;
    v5 = v4();
    a3 = v14;
  }
  v21 = a3;
  v17 = v5;
  v20 = 5;
  v22 = nullptr;
  v23 = 0;
  v24 = 0;
  v25 = v27;
  sub_211A0D0(&v25, &byte_22F0C30, (__int64)&byte_22F0C30);
  v6 = *(unsigned int *)(a1 + 56);
  v18.m128i_i32[0] = a2;
  v18.m128i_i64[1] = 0;
  if ( (_DWORD)v6 )
  {
    v7 = *(_QWORD *)(a1 + 24) + 96LL * *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v6 - 16);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 40);
      if ( v8 == *(_QWORD *)(v7 + 48) )
      {
        sub_211F240((char **)(v7 + 32), v8, (__int64)&v17);
      }
      else
      {
        v9 = v17;
        v10 = _mm_loadu_si128(&v18);
        *(_QWORD *)(v8 + 48) = 0;
        *(_QWORD *)(v8 + 56) = 0;
        *(_QWORD *)v8 = v9;
        *(__m128i *)(v8 + 8) = v10;
        v11 = v19;
        *(_QWORD *)(v8 + 64) = 0;
        *(_QWORD *)(v8 + 24) = v11;
        *(_BYTE *)(v8 + 32) = v20;
        *(_QWORD *)(v8 + 40) = v21;
        *(_QWORD *)(v8 + 48) = v22;
        v22 = nullptr;
        *(_QWORD *)(v8 + 56) = v23;
        v23 = 0;
        *(_QWORD *)(v8 + 64) = v24;
        *(_QWORD *)(v8 + 72) = v8 + 88;
        v24 = 0;
        if ( v25 == v27 )
        {
          *(__m128i *)(v8 + 88) = _mm_loadu_si128(v27);
        }
        else
        {
          *(_QWORD *)(v8 + 72) = v25;
          *(_QWORD *)(v8 + 88) = v27[0].m128i_i64[0];
        }
        *(_QWORD *)(v8 + 80) = v26;
        v25 = v27;
        v26 = 0;
        v27[0].m128i_i8[0] = 0;
        *(_QWORD *)(v7 + 40) += 104LL;
      }
      *(_DWORD *)(v7 + 56) = a2;
    }
  }
  else
  {
    v12 = *(_QWORD **)(a1 + 264);
    v13 = *(_QWORD *)(a1 + 8);
    v15 = "this directive must appear between .cfi_startproc and .cfi_endproc directives";
    v16 = 259;
    if ( v12 )
      v12 = (_QWORD *)*v12;
    sub_2100A30(v13, (__int64)v12, (__int64)&v15);
  }
  if ( v25 != v27 )
    operator delete(v25);
  if ( v22 )
    operator delete(v22);
}
