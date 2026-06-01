void __fastcall sub_211FD70(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rdx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rdi
  const char *v12; // [rsp+10h] [rbp-B8h] BYREF
  __int16 v13; // [rsp+30h] [rbp-98h]
  __int64 v14; // [rsp+40h] [rbp-88h] BYREF
  __m128i v15; // [rsp+48h] [rbp-80h] BYREF
  __int64 v16; // [rsp+58h] [rbp-70h]
  char v17; // [rsp+60h] [rbp-68h]
  __int64 v18; // [rsp+68h] [rbp-60h]
  void *v19; // [rsp+70h] [rbp-58h]
  __int64 v20; // [rsp+78h] [rbp-50h]
  __int64 v21; // [rsp+80h] [rbp-48h]
  void *v22; // [rsp+88h] [rbp-40h] BYREF
  __int64 v23; // [rsp+90h] [rbp-38h]
  __m128i v24[3]; // [rsp+98h] [rbp-30h] BYREF

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 88LL);
  v3 = 1;
  if ( v2 != sub_2119CA0 )
    v3 = v2();
  v18 = a2;
  v14 = v3;
  v17 = 15;
  v19 = nullptr;
  v20 = 0;
  v21 = 0;
  v22 = v24;
  sub_211A0D0(&v22, &byte_22F0C30, (__int64)&byte_22F0C30);
  v4 = *(unsigned int *)(a1 + 56);
  v15.m128i_i32[0] = 0;
  v15.m128i_i64[1] = 0;
  if ( (_DWORD)v4 )
  {
    v5 = *(_QWORD *)(a1 + 24) + 96LL * *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v4 - 16);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 40);
      if ( v6 == *(_QWORD *)(v5 + 48) )
      {
        sub_211F240((char **)(v5 + 32), v6, (__int64)&v14);
      }
      else
      {
        v7 = v14;
        v8 = _mm_loadu_si128(&v15);
        *(_QWORD *)(v6 + 48) = 0;
        *(_QWORD *)(v6 + 56) = 0;
        *(_QWORD *)v6 = v7;
        *(__m128i *)(v6 + 8) = v8;
        v9 = v16;
        *(_QWORD *)(v6 + 64) = 0;
        *(_QWORD *)(v6 + 24) = v9;
        *(_BYTE *)(v6 + 32) = v17;
        *(_QWORD *)(v6 + 40) = v18;
        *(_QWORD *)(v6 + 48) = v19;
        v19 = nullptr;
        *(_QWORD *)(v6 + 56) = v20;
        v20 = 0;
        *(_QWORD *)(v6 + 64) = v21;
        *(_QWORD *)(v6 + 72) = v6 + 88;
        v21 = 0;
        if ( v22 == v24 )
        {
          *(__m128i *)(v6 + 88) = _mm_loadu_si128(v24);
        }
        else
        {
          *(_QWORD *)(v6 + 72) = v22;
          *(_QWORD *)(v6 + 88) = v24[0].m128i_i64[0];
        }
        *(_QWORD *)(v6 + 80) = v23;
        v22 = v24;
        v23 = 0;
        v24[0].m128i_i8[0] = 0;
        *(_QWORD *)(v5 + 40) += 104LL;
      }
    }
  }
  else
  {
    v10 = *(_QWORD **)(a1 + 264);
    v11 = *(_QWORD *)(a1 + 8);
    v12 = "this directive must appear between .cfi_startproc and .cfi_endproc directives";
    v13 = 259;
    if ( v10 )
      v10 = (_QWORD *)*v10;
    sub_2100A30(v11, (__int64)v10, (__int64)&v12);
  }
  if ( v22 != v24 )
    operator delete(v22);
  if ( v19 )
    operator delete(v19);
}
