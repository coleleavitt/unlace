__int64 __fastcall sub_2007930(__int64 a1, const __m128i *a2, __int64 *a3)
{
  __int64 v3; // r12
  __int64 v6; // rdx
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  volatile signed __int32 *v17; // rax
  __int64 v18; // rsi
  volatile signed __int32 *v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rdi
  void *v22; // rbp
  __m128i si128; // xmm0
  int v26; // eax
  signed __int32 v27; // eax
  __int64 v28; // [rsp-8h] [rbp-50h]
  __int64 v29; // [rsp+0h] [rbp-48h] BYREF
  void *v30; // [rsp+8h] [rbp-40h] BYREF
  __int64 v31; // [rsp+10h] [rbp-38h] BYREF
  volatile signed __int32 *v32; // [rsp+18h] [rbp-30h]

  v3 = a1 + 80;
  v6 = *(_QWORD *)(a1 + 64);
  *(_BYTE *)(a1 + 72) = 1;
  v7 = _mm_loadu_si128(a2 + 2);
  v8 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  v30 = nullptr;
  *(_QWORD *)a1 = &off_2BE4E48;
  v9 = a2->m128i_i64[0];
  a2->m128i_i64[0] = 0;
  *(_QWORD *)(a1 + 8) = v9;
  v10 = a2->m128i_i64[1];
  a2->m128i_i64[1] = 0;
  *(_QWORD *)(a1 + 16) = v10;
  v11 = a2[1].m128i_i64[0];
  a2[1].m128i_i64[0] = 0;
  *(_QWORD *)(a1 + 24) = v11;
  v12 = a2[1].m128i_i64[1];
  a2[1].m128i_i64[1] = 0;
  *(_QWORD *)(a1 + 32) = v12;
  v13 = a2[3].m128i_i64[0];
  a2[3].m128i_i64[0] = 0;
  *(_QWORD *)(a1 + 56) = v13;
  v14 = a2[3].m128i_i64[1];
  a2[3].m128i_i64[1] = v6;
  *(_QWORD *)(a1 + 64) = v14;
  a2[2] = v8;
  *(__m128i *)(a1 + 40) = v7;
  sub_22603D0(&v29);
  v15 = *(_QWORD *)(a1 + 16);
  v16 = *(_QWORD *)(a1 + 24);
  v31 = *a3;
  v17 = (volatile signed __int32 *)a3[1];
  *(_OWORD *)a3 = 0;
  v18 = *(_QWORD *)(a1 + 8);
  v32 = v17;
  sub_20096F0(a1 + 80, v18, v15, (v16 - v15) >> 5, (unsigned int)&v31, (unsigned int)&v29, (__int64)&v30);
  v19 = v32;
  v20 = v28;
  if ( v32 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_4;
    }
    else
    {
      v26 = *((_DWORD *)v32 + 2);
      v20 = (unsigned int)(v26 - 1);
      *((_DWORD *)v32 + 2) = v20;
      if ( v26 != 1 )
        goto LABEL_4;
    }
    (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v19 + 16LL))(v19, v18, v20);
    if ( &_pthread_key_create )
    {
      v27 = _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF);
    }
    else
    {
      v27 = *((_DWORD *)v19 + 3);
      v20 = (unsigned int)(v27 - 1);
      *((_DWORD *)v19 + 3) = v20;
    }
    if ( v27 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 24LL))(v19);
  }
LABEL_4:
  v21 = v29;
  if ( v29 && !_InterlockedSub((volatile signed __int32 *)(v29 + 8), 1u) )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 8LL))(v21, v18, v20);
  v22 = v30;
  if ( v30 )
  {
    if ( (*(_DWORD *)v30)-- == 1 )
    {
      sub_FD6C20((__int64)v22);
      operator delete(v22, 0x328u);
    }
  }
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 248) = off_2BE4B38;
  *(_QWORD *)(a1 + 256) = a1 + 264;
  *(_QWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 264) = &off_2BE4CE0;
  *(_QWORD *)(a1 + 288) = a1 + 304;
  *(_QWORD *)(a1 + 296) = 0x400000000LL;
  *(_QWORD *)(a1 + 336) = a1 + 352;
  *(_QWORD *)(a1 + 368) = a1 + 272;
  *(_DWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 416) = 0;
  *(__m128i *)(a1 + 352) = si128;
  *(_OWORD *)(a1 + 400) = 0;
  sub_2007280((__m128i *)(a1 + 424));
  return sub_2009B20(v3);
}
