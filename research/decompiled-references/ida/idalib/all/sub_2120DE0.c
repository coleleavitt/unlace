void __fastcall sub_2120DE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (*v3)(void); // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // [rsp+8h] [rbp-D0h]
  const char *v14; // [rsp+10h] [rbp-C8h] BYREF
  __int16 v15; // [rsp+30h] [rbp-A8h]
  __int64 v16; // [rsp+40h] [rbp-98h] BYREF
  __m128i v17; // [rsp+48h] [rbp-90h] BYREF
  __int64 v18; // [rsp+58h] [rbp-80h]
  char v19; // [rsp+60h] [rbp-78h]
  __int64 v20; // [rsp+68h] [rbp-70h]
  void *v21; // [rsp+70h] [rbp-68h]
  __int64 v22; // [rsp+78h] [rbp-60h]
  __int64 v23; // [rsp+80h] [rbp-58h]
  void *v24; // [rsp+88h] [rbp-50h] BYREF
  __int64 v25; // [rsp+90h] [rbp-48h]
  __m128i v26[4]; // [rsp+98h] [rbp-40h] BYREF

  v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 88LL);
  v4 = 1;
  if ( v3 != sub_2119CA0 )
  {
    v13 = a3;
    v4 = v3();
    a3 = v13;
  }
  v20 = a3;
  v16 = v4;
  v19 = 17;
  v21 = nullptr;
  v22 = 0;
  v23 = 0;
  v24 = v26;
  sub_211A0D0(&v24, &byte_22F0C30, (__int64)&byte_22F0C30);
  v5 = *(unsigned int *)(a1 + 56);
  v17.m128i_i64[1] = a2;
  v17.m128i_i32[0] = 0;
  if ( (_DWORD)v5 )
  {
    v6 = *(_QWORD *)(a1 + 24) + 96LL * *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v5 - 16);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 40);
      if ( v7 == *(_QWORD *)(v6 + 48) )
      {
        sub_211F240((char **)(v6 + 32), v7, (__int64)&v16);
      }
      else
      {
        v8 = v16;
        v9 = _mm_loadu_si128(&v17);
        *(_QWORD *)(v7 + 48) = 0;
        *(_QWORD *)(v7 + 56) = 0;
        *(_QWORD *)v7 = v8;
        *(__m128i *)(v7 + 8) = v9;
        v10 = v18;
        *(_QWORD *)(v7 + 64) = 0;
        *(_QWORD *)(v7 + 24) = v10;
        *(_BYTE *)(v7 + 32) = v19;
        *(_QWORD *)(v7 + 40) = v20;
        *(_QWORD *)(v7 + 48) = v21;
        v21 = nullptr;
        *(_QWORD *)(v7 + 56) = v22;
        v22 = 0;
        *(_QWORD *)(v7 + 64) = v23;
        *(_QWORD *)(v7 + 72) = v7 + 88;
        v23 = 0;
        if ( v24 == v26 )
        {
          *(__m128i *)(v7 + 88) = _mm_loadu_si128(v26);
        }
        else
        {
          *(_QWORD *)(v7 + 72) = v24;
          *(_QWORD *)(v7 + 88) = v26[0].m128i_i64[0];
        }
        *(_QWORD *)(v7 + 80) = v25;
        v24 = v26;
        v25 = 0;
        v26[0].m128i_i8[0] = 0;
        *(_QWORD *)(v6 + 40) += 104LL;
      }
    }
  }
  else
  {
    v11 = *(_QWORD **)(a1 + 264);
    v12 = *(_QWORD *)(a1 + 8);
    v14 = "this directive must appear between .cfi_startproc and .cfi_endproc directives";
    v15 = 259;
    if ( v11 )
      v11 = (_QWORD *)*v11;
    sub_2100A30(v12, (__int64)v11, (__int64)&v14);
  }
  if ( v24 != v26 )
    operator delete(v24);
  if ( v21 )
    operator delete(v21);
}
