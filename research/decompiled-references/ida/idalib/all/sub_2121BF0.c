void __fastcall sub_2121BF0(__int64 a1, __int32 a2, __int64 a3, __int64 a4)
{
  __int64 (*v6)(void); // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // [rsp+8h] [rbp-D0h]
  const char *v17; // [rsp+10h] [rbp-C8h] BYREF
  __int16 v18; // [rsp+30h] [rbp-A8h]
  __int64 v19; // [rsp+40h] [rbp-98h] BYREF
  __m128i v20; // [rsp+48h] [rbp-90h] BYREF
  __int64 v21; // [rsp+58h] [rbp-80h]
  char v22; // [rsp+60h] [rbp-78h]
  __int64 v23; // [rsp+68h] [rbp-70h]
  void *v24; // [rsp+70h] [rbp-68h]
  __int64 v25; // [rsp+78h] [rbp-60h]
  __int64 v26; // [rsp+80h] [rbp-58h]
  void *v27; // [rsp+88h] [rbp-50h] BYREF
  __int64 v28; // [rsp+90h] [rbp-48h]
  __m128i v29[4]; // [rsp+98h] [rbp-40h] BYREF

  v6 = *(__int64 (**)(void))(*(_QWORD *)a1 + 88LL);
  v7 = 1;
  if ( v6 != sub_2119CA0 )
  {
    v16 = a4;
    v7 = v6();
    a4 = v16;
  }
  v19 = v7;
  v22 = 7;
  v23 = a4;
  v24 = nullptr;
  v25 = 0;
  v26 = 0;
  v27 = v29;
  sub_211A0D0(&v27, &byte_22F0C30, (__int64)&byte_22F0C30);
  v8 = *(unsigned int *)(a1 + 56);
  v20.m128i_i32[0] = a2;
  v20.m128i_i64[1] = a3;
  if ( (_DWORD)v8 )
  {
    v9 = *(_QWORD *)(a1 + 24) + 96LL * *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v8 - 16);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 40);
      if ( v10 == *(_QWORD *)(v9 + 48) )
      {
        sub_211F240((char **)(v9 + 32), v10, (__int64)&v19);
      }
      else
      {
        v11 = v19;
        v12 = _mm_loadu_si128(&v20);
        *(_QWORD *)(v10 + 48) = 0;
        *(_QWORD *)(v10 + 56) = 0;
        *(_QWORD *)v10 = v11;
        *(__m128i *)(v10 + 8) = v12;
        v13 = v21;
        *(_QWORD *)(v10 + 64) = 0;
        *(_QWORD *)(v10 + 24) = v13;
        *(_BYTE *)(v10 + 32) = v22;
        *(_QWORD *)(v10 + 40) = v23;
        *(_QWORD *)(v10 + 48) = v24;
        v24 = nullptr;
        *(_QWORD *)(v10 + 56) = v25;
        v25 = 0;
        *(_QWORD *)(v10 + 64) = v26;
        *(_QWORD *)(v10 + 72) = v10 + 88;
        v26 = 0;
        if ( v27 == v29 )
        {
          *(__m128i *)(v10 + 88) = _mm_loadu_si128(v29);
        }
        else
        {
          *(_QWORD *)(v10 + 72) = v27;
          *(_QWORD *)(v10 + 88) = v29[0].m128i_i64[0];
        }
        *(_QWORD *)(v10 + 80) = v28;
        v27 = v29;
        v28 = 0;
        v29[0].m128i_i8[0] = 0;
        *(_QWORD *)(v9 + 40) += 104LL;
      }
      *(_DWORD *)(v9 + 56) = a2;
    }
  }
  else
  {
    v14 = *(_QWORD **)(a1 + 264);
    v15 = *(_QWORD *)(a1 + 8);
    v17 = "this directive must appear between .cfi_startproc and .cfi_endproc directives";
    v18 = 259;
    if ( v14 )
      v14 = (_QWORD *)*v14;
    sub_2100A30(v15, (__int64)v14, (__int64)&v17);
  }
  if ( v27 != v29 )
    operator delete(v27);
  if ( v24 )
    operator delete(v24);
}
