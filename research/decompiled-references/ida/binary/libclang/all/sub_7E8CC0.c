__int64 __fastcall sub_7E8CC0(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbx
  unsigned __int8 v8; // al
  void *v9; // rdi
  unsigned __int8 v10; // r9
  unsigned __int64 v11; // r10
  __int64 v12; // rsi
  unsigned int v13; // ebx
  __m128i v14; // xmm0
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128i si128; // xmm0
  __int64 v20; // rbp
  __int64 v21; // r14
  __m128i v22; // rax
  __int64 v23; // rdx
  void *v25; // rax
  unsigned __int8 v28; // [rsp+1Fh] [rbp-99h]
  unsigned __int64 v29; // [rsp+20h] [rbp-98h]
  void *v30[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v31; // [rsp+40h] [rbp-78h]
  void *v32[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v33; // [rsp+60h] [rbp-58h]
  __int64 v34; // [rsp+68h] [rbp-50h]
  __int64 v35; // [rsp+70h] [rbp-48h]

  v4 = *(unsigned int *)(a2 + 48);
  do
  {
    v5 = *(_QWORD *)(a2 + 24);
    v6 = **(_QWORD **)(a2 + 40);
    v7 = 4LL * *(unsigned int *)(v6 + 4) + 20;
    v8 = sub_B100B0(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL));
    v9 = *(void **)(v5 + 16);
    v10 = v8;
    v11 = *(char *)(v6 + v7 + v4);
    v12 = *(unsigned int *)(v5 + 24);
    if ( (unsigned __int64)(v12 + 63) > 0x7F )
    {
      v29 = *(char *)(v6 + v7 + v4);
      v28 = v8;
      sub_2585D40(v30, v12, (unsigned __int64)(v12 + 63) >> 6, v9);
      LODWORD(v12) = v30[1];
      v10 = v28;
      v11 = v29;
      LODWORD(v32[1]) = v30[1];
      if ( LODWORD(v30[1]) > 0x40 )
      {
        sub_2585A50(v32, v29, v28);
        goto LABEL_6;
      }
    }
    else
    {
      LODWORD(v30[1]) = *(_DWORD *)(v5 + 24);
      v30[0] = v9;
      LODWORD(v32[1]) = v12;
    }
    if ( v10 )
    {
      v25 = (void *)(v11 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v12));
      if ( !(_DWORD)v12 )
        v25 = nullptr;
      v32[0] = v25;
    }
    else
    {
      v32[0] = (void *)v11;
    }
LABEL_6:
    sub_808730(v5 + 16, *(_QWORD *)(a2 + 32), v32);
    if ( LODWORD(v32[1]) > 0x40 && v32[0] )
      operator delete[](v32[0]);
    if ( LODWORD(v30[1]) > 0x40 && v30[0] )
      operator delete[](v30[0]);
    v13 = sub_7E3C00(a1, *(_QWORD *)(a2 + 24), a3);
    if ( !(_BYTE)v13 )
      return 0;
    ++v4;
    v14 = _mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)(a2 + 48)), (__m128i)0LL);
  }
  while ( v4 < _mm_add_epi64(v14, _mm_srli_si128(v14, 8)).m128i_u64[0] );
  v15 = a2;
  sub_AC4830(v32);
  si128 = _mm_load_si128((const __m128i *)v32);
  v20 = v34;
  v21 = v35;
  v31 = v33;
  v22 = si128;
  *(__m128i *)v30 = si128;
LABEL_15:
  if ( v20 == v22.m128i_i64[0] )
  {
LABEL_21:
    if ( v21 == v22.m128i_i64[1] )
      return v13;
  }
  v23 = v22.m128i_i8[8] & 3;
  if ( (_DWORD)v23 )
    v22.m128i_i64[0] = sub_ACE280(v30, v15, v23, v16, v17, v18);
  while ( 1 )
  {
    v15 = *(_QWORD *)v22.m128i_i64[0];
    if ( !(unsigned __int8)sub_7E3C00(a1, *(_QWORD *)v22.m128i_i64[0], a3) )
      return 0;
    v22.m128i_i64[1] = (__int64)v30[1];
    if ( ((__int64)v30[1] & 3) != 0 )
    {
      if ( v30[1] <= (char *)&dword_0 + 3 )
      {
        v15 = 1;
        sub_ACE0F0(v30, 1);
      }
      else
      {
        sub_ACE150(v30);
      }
      v22 = *(__m128i *)v30;
      goto LABEL_15;
    }
    v22.m128i_i64[0] = (__int64)v30[0] + 8;
    v30[0] = (void *)v22.m128i_i64[0];
    if ( v20 == v22.m128i_i64[0] )
      goto LABEL_21;
  }
}

