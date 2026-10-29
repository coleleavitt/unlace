__m128i *__fastcall sub_148EB60(const __m128i *a1, __int64 a2, _DWORD *a3, double a4, __m128 a5)
{
  __int64 v8; // rbx
  __m128i v9; // xmm0
  char v10; // al
  __int64 *v11; // rdi
  __int32 v12; // eax
  __m128i *result; // rax
  __int64 v14; // rax
  __int64 *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rcx
  bool v22; // r15
  unsigned __int16 v23; // bx
  __int16 v24; // r15
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rbx
  __int16 v28; // ax
  char v29; // r15
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // [rsp-10h] [rbp-148h]
  __int64 v34; // [rsp-8h] [rbp-140h]
  unsigned __int32 v35; // [rsp+Ch] [rbp-12Ch]
  __int64 v36; // [rsp+10h] [rbp-128h]
  unsigned int v37; // [rsp+18h] [rbp-120h]
  int v38; // [rsp+18h] [rbp-120h]
  bool v39; // [rsp+1Fh] [rbp-119h]
  char v40; // [rsp+23h] [rbp-115h] BYREF
  int v41; // [rsp+24h] [rbp-114h] BYREF
  __int64 v42; // [rsp+28h] [rbp-110h] BYREF
  __m128i v43; // [rsp+30h] [rbp-108h] BYREF
  __int64 v44; // [rsp+40h] [rbp-F8h]
  __m128i *v45; // [rsp+50h] [rbp-E8h] BYREF
  __int8 v46; // [rsp+58h] [rbp-E0h]
  const __m128i *v47; // [rsp+60h] [rbp-D8h]
  int v48; // [rsp+68h] [rbp-D0h]
  __int16 v49; // [rsp+6Ch] [rbp-CCh]
  __int64 (__fastcall *v50)(__int64); // [rsp+70h] [rbp-C8h]
  __int64 v51; // [rsp+78h] [rbp-C0h]
  __int64 v52; // [rsp+80h] [rbp-B8h]
  void *ptr; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+98h] [rbp-A0h]
  _QWORD v55[19]; // [rsp+A0h] [rbp-98h] BYREF

  v8 = a1[2].m128i_i64[0];
  v9 = _mm_loadu_si128(a1 + 1);
  v43 = v9;
  v44 = v8;
  v10 = sub_141A630((unsigned __int16)v8);
  if ( (_WORD)v8 == 1 || v10 )
    v36 = 0;
  else
    v36 = v43.m128i_i64[1];
  v11 = (__int64 *)a1->m128i_i64[1];
  a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
  sub_14634E0(v11, a1[1].m128i_i32);
  v12 = a1[2].m128i_i32[2];
  v47 = a1;
  v35 = v12;
  v45 = (__m128i *)&a1[122];
  LOBYTE(v12) = a1[122].m128i_i8[0];
  a1[122].m128i_i8[0] = 1;
  v46 = v12;
  v49 = 63;
  v48 = 1507350;
  v50 = sub_146A990;
  v51 = 0;
  v52 = 0;
  if ( !(unsigned __int8)sub_156A040(&v45, 14, &byte_22F0C30, 0) )
  {
    v41 = 0;
    v37 = v52;
    v14 = a1->m128i_i64[1];
    v42 = 0;
    sub_13D35F0((__int64)&ptr, (__int64)&v43, *(_QWORD *)(v14 + 88), *(_QWORD *)(v14 + 56), nullptr);
    v15 = (__int64 *)ptr;
    v16 = sub_148EA30((__int64)a1, (__int64)ptr, v54, v37, &v41, &v40, v9, a5, &v42);
    v19 = v33;
    v20 = v16;
    v21 = v34;
    if ( ptr != v55 )
      operator delete(ptr);
    if ( v20 == 1 )
    {
      sub_156E210(&v45);
    }
    else
    {
      sub_14808E0((__int64)&v45, v15, v19, v21, v17, v18);
      if ( a3 )
        *a3 = HIDWORD(v52);
      v22 = (_WORD)v8 == 158;
      v23 = v8 - 406;
      if ( v40 )
      {
        v39 = v23 <= 8u;
        v26 = v42;
        v38 = v41;
        v27 = sub_15D92D0(*(_QWORD *)(a2 + 40), 88);
        v28 = sub_F963B0(v36, 0, 6);
        *(_QWORD *)v27 = v36;
        *(_WORD *)(v27 + 32) = v28;
        LOBYTE(v28) = *(_BYTE *)(v27 + 35);
        *(_DWORD *)(v27 + 24) = v35;
        *(_DWORD *)(v27 + 28) = v35;
        v29 = v28 & 0xFC | v22;
        v30 = *(_QWORD *)(v27 + 56);
        *(_QWORD *)(v27 + 8) = 0;
        *(_QWORD *)(v27 + 16) = 0;
        *(_BYTE *)(v27 + 34) = -10;
        *(_BYTE *)(v27 + 35) = (2 * v39) | v29;
        *(_QWORD *)(v27 + 40) = 0;
        *(_DWORD *)(v27 + 52) = v38;
        *(_DWORD *)(v27 + 48) = 0;
        *(_QWORD *)(v27 + 56) = v30 & 0x7F800000 | 0x200000;
        v31 = sub_15D7D80(v27);
        v32 = *(unsigned __int16 *)(v27 + 56);
        *(_QWORD *)(v27 + 72) = v31;
        *(_QWORD *)(v27
                  + 16LL * ((*(_BYTE *)(v27 + 58) & 8) != 0)
                  + 8 * (v32 + 13LL * ((*(_BYTE *)(v27 + 58) & 4) != 0))
                  + 80) = v26;
        sub_147F4B0(a2 + 48, v27);
        sub_147F4B0(a2 + 8, v27);
      }
      else
      {
        v24 = v22 << 8;
        LOBYTE(v24) = v24 | 0xF6;
        v55[0] = v20 & 0xFFFFFFFFFFFFFFFCLL;
        ptr = v55;
        v54 = 0xC00000001LL;
        v25 = sub_147A2E0(
                a2 + 40,
                v36,
                ((unsigned __int64)v35 << 32) | v35,
                0,
                0,
                v55,
                1u,
                (unsigned __int16)((v23 <= 8u) << 9) | v24,
                v41);
        sub_147F4B0(a2 + 8, v25);
        if ( ptr != v55 )
          free(ptr);
      }
    }
  }
  result = v45;
  v45->m128i_i8[0] = v46;
  return result;
}
