__int64 __fastcall sub_196C0D0(__int64 *a1, __int64 a2)
{
  const __m128i *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 v6; // rax
  int v7; // r12d
  __int64 v8; // rsi
  __int64 v9; // rdx
  __m128i v10; // xmm1
  __int64 v11; // r14
  __int64 v12; // r13
  __int64 v13; // rax
  __m128i v14; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v15; // [rsp+10h] [rbp-198h]
  __int128 v16; // [rsp+20h] [rbp-188h] BYREF
  void *v17[2]; // [rsp+30h] [rbp-178h]
  __int128 v18; // [rsp+40h] [rbp-168h]
  void *ptr[2]; // [rsp+50h] [rbp-158h] BYREF
  _QWORD v20[41]; // [rsp+60h] [rbp-148h] BYREF

  v2 = *(const __m128i **)(*(_QWORD *)(a2 + 16) + 64LL);
  v3 = v2->m128i_i64[0];
  ptr[0] = v20;
  ptr[1] = (void *)0x800000000LL;
  v20[32] = v3;
  if ( (unsigned __int8)sub_196BD30(a1, v2 + 1, &v2[2 * v2->m128i_u32[2] + 1], (__int64)ptr) )
  {
    v4 = 1;
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 16);
    v7 = *(_DWORD *)(v6 + 16);
    v8 = *(_QWORD *)v6;
    v9 = *(_QWORD *)(v6 + 8);
    v10 = _mm_loadu_si128((const __m128i *)(v6 + 24));
    v11 = *(_QWORD *)(v6 + 56);
    v12 = *(_QWORD *)(v6 + 48);
    v13 = *(_QWORD *)(v6 + 40);
    v14 = v10;
    v16 = 0;
    v15 = v13;
    *(_OWORD *)v17 = 0;
    v18 = 0;
    sub_15AB8B0((__int64)&v16, v8, v9);
    v4 = sub_1CD0C10(*a1, (unsigned int)&v16, v7, (unsigned int)&v14, v12, v11, (__int64)ptr);
    if ( HIDWORD(v17[1]) )
      free(v17[0]);
  }
  if ( ptr[0] != v20 )
    free(ptr[0]);
  return v4;
}
