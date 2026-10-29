void __fastcall sub_211F670(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  void (*v5)(void); // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  __m128 v9; // xmm0
  __int64 v10; // rsi
  __m128i v11; // xmm1
  __int64 v12; // rdx
  _QWORD *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-90h]
  unsigned __int128 v17; // [rsp+20h] [rbp-88h] BYREF
  __int64 v18; // [rsp+38h] [rbp-70h]
  __int16 v19; // [rsp+40h] [rbp-68h]
  __int64 v20; // [rsp+48h] [rbp-60h]
  void *v21; // [rsp+50h] [rbp-58h]
  __int64 v22; // [rsp+58h] [rbp-50h]
  __int64 v23; // [rsp+60h] [rbp-48h]
  void *v24; // [rsp+68h] [rbp-40h]
  __int64 v25; // [rsp+70h] [rbp-38h]
  __m128i v26[3]; // [rsp+78h] [rbp-30h] BYREF

  v5 = *(void (**)(void))(*(_QWORD *)a1 + 88LL);
  if ( (char *)v5 != (char *)sub_2119CA0 )
  {
    v16 = a4;
    v15 = a3;
    v5();
    a4 = v16;
    a3 = v15;
  }
  v6 = *(_QWORD *)(a1 + 8);
  v17 = __PAIR128__(a4, a3);
  v19 = 261;
  v15 = sub_2108A30(v6, (const void ***)&v17);
  v7 = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)v7 )
  {
    v8 = *(_QWORD *)(a1 + 24) + 96LL * *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v7 - 16);
    if ( v8 )
    {
      v26[0].m128i_i8[0] = 0;
      LOBYTE(v19) = 18;
      v9 = _mm_loadh_ps((const double *)&v15);
      v20 = a2;
      v17 = (unsigned __int128)v9;
      v10 = *(_QWORD *)(v8 + 40);
      v21 = nullptr;
      v22 = 0;
      v23 = 0;
      v24 = v26;
      v25 = 0;
      if ( v10 == *(_QWORD *)(v8 + 48) )
      {
        sub_211F240((char **)(v8 + 32), v10, (__int64)&v17);
      }
      else
      {
        v11 = _mm_loadu_si128((const __m128i *)((char *)&v17 + 8));
        *(_QWORD *)v10 = v17;
        *(__m128i *)(v10 + 8) = v11;
        *(_QWORD *)(v10 + 24) = v18;
        *(_BYTE *)(v10 + 32) = v19;
        v12 = v20;
        *(_QWORD *)(v10 + 48) = 0;
        *(_QWORD *)(v10 + 56) = 0;
        *(_QWORD *)(v10 + 64) = 0;
        *(_QWORD *)(v10 + 40) = v12;
        *(_QWORD *)(v10 + 48) = v21;
        v21 = nullptr;
        *(_QWORD *)(v10 + 56) = v22;
        v22 = 0;
        *(_QWORD *)(v10 + 64) = v23;
        v23 = 0;
        *(_QWORD *)(v10 + 72) = v10 + 88;
        if ( v24 == v26 )
        {
          *(__m128i *)(v10 + 88) = _mm_loadu_si128(v26);
        }
        else
        {
          *(_QWORD *)(v10 + 72) = v24;
          *(_QWORD *)(v10 + 88) = v26[0].m128i_i64[0];
        }
        *(_QWORD *)(v10 + 80) = v25;
        v24 = v26;
        v25 = 0;
        v26[0].m128i_i8[0] = 0;
        *(_QWORD *)(v8 + 40) += 104LL;
      }
      if ( v24 != v26 )
        operator delete(v24);
      if ( v21 )
        operator delete(v21);
    }
  }
  else
  {
    v13 = *(_QWORD **)(a1 + 264);
    v14 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)&v17 = "this directive must appear between .cfi_startproc and .cfi_endproc directives";
    v19 = 259;
    if ( v13 )
      v13 = (_QWORD *)*v13;
    sub_2100A30(v14, (__int64)v13, (__int64)&v17);
  }
}
