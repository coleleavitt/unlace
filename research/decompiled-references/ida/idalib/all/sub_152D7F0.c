void __fastcall sub_152D7F0(__int64 a1, __int64 *a2, __int64 a3, __m128i *a4)
{
  __int64 v5; // r14
  unsigned __int16 v6; // r12
  __int32 v7; // eax
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // r15
  __int16 v12; // bp
  int v13; // eax
  __m128i si128; // xmm1
  __int64 v15; // rax
  size_t v16; // rax
  unsigned int *v17; // rdx
  size_t v18; // r12
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // [rsp+Ch] [rbp-DCh]
  __int32 v24; // [rsp+10h] [rbp-D8h]
  unsigned int v25; // [rsp+14h] [rbp-D4h]
  void *s1; // [rsp+18h] [rbp-D0h]
  __int128 v27; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+30h] [rbp-B8h]
  __int64 v29; // [rsp+40h] [rbp-A8h]
  __int64 v30; // [rsp+48h] [rbp-A0h]
  __int64 v31; // [rsp+50h] [rbp-98h]
  unsigned __int8 *v32[17]; // [rsp+60h] [rbp-88h] BYREF

  v5 = a4->m128i_i64[1];
  v6 = a4[1].m128i_u16[0];
  v23 = HIDWORD(a3);
  v28 = a4[1].m128i_i64[0];
  v7 = a4->m128i_i32[0];
  v27 = (__int128)_mm_loadu_si128(a4);
  v24 = v7;
  sub_14634E0(a2, a4->m128i_i32);
  v9 = a2[16];
  a2[26] += 64;
  v10 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( a2[17] >= v10 + 64 && v9 )
  {
    a2[16] = v10 + 64;
    v11 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v11 = sub_986170((__int64)(a2 + 16), 64, 64, 4, v10, v8);
  }
  v12 = a4[1].m128i_i16[0];
  *(_QWORD *)(v11 + 48) = 0;
  *(_QWORD *)(v11 + 56) = 0;
  if ( v12 == 2 )
  {
    v13 = v28;
    si128 = _mm_load_si128((const __m128i *)&v27);
    *(_QWORD *)(v11 + 24) = 0;
    *(_QWORD *)(v11 + 32) = 0;
    *(_DWORD *)(v11 + 16) = v13;
    *(_DWORD *)(v11 + 40) = 0;
    *(__m128i *)v11 = si128;
LABEL_6:
    v15 = operator new[](0x18u);
    *(_QWORD *)(v15 + 8) = v11;
    *(_DWORD *)(v15 + 16) = 452;
    *(_DWORD *)(v15 + 4) = v24;
    *(_DWORD *)v15 = v23;
    sub_14368B0((__int64)a2, (char *)v15, 1, 0, 1u, 0);
    return;
  }
  v25 = v6;
  if ( sub_141A630(v6) || v6 == 1 )
    BUG();
  v16 = j__strlen("nounroll");
  v17 = *(unsigned int **)(v5 + 16);
  v18 = *v17;
  s1 = v17 + 4;
  if ( v16 != v18 )
  {
    if ( j__strlen("nounroll_and_jam") != v18 )
      goto LABEL_14;
    if ( !v18 )
      goto LABEL_22;
    goto LABEL_13;
  }
  if ( !*v17 || !memcmp(v17 + 4, "nounroll", v18) )
    goto LABEL_22;
  if ( j__strlen("nounroll_and_jam") == v18 )
  {
LABEL_13:
    if ( memcmp(s1, "nounroll_and_jam", v18) )
      goto LABEL_14;
LABEL_22:
    sub_FC70B0((__int64)v32, a2[6], a4->m128i_i32[0], 2202);
    if ( sub_141A630(v25) )
      BUG();
    sub_AEC220(v32, (_BYTE *)(*(_QWORD *)(v5 + 16) + 16LL), **(unsigned int **)(v5 + 16));
    sub_AEA040((__int64)v32);
    return;
  }
LABEL_14:
  if ( v12 == 22 )
  {
    sub_14634E0(a2, a4->m128i_i32);
    v29 = 0;
    v30 = 0;
    LODWORD(v31) = 0;
    if ( !(unsigned __int8)sub_152CDC0(a2, (unsigned __int64)a4, 1u, v11, v21, v22, v27, v28, 0, 0) )
    {
      if ( (*(_BYTE *)(a2[7] + 60) & 0x10) != 0 )
      {
        sub_FC70B0((__int64)v32, a2[6], **(_DWORD **)(v11 + 48), 2217);
        sub_AEA040((__int64)v32);
      }
LABEL_16:
      if ( a4[1].m128i_i16[0] != 2 )
      {
        sub_FC70B0((__int64)v32, a2[6], a4->m128i_i32[0], 2202);
        sub_1520A40(v32, (__int64)"unroll");
        sub_AEA040((__int64)v32);
        return;
      }
      goto LABEL_6;
    }
  }
  else
  {
    LODWORD(v31) = 0;
    v30 = 0;
    if ( !(unsigned __int8)sub_152CDC0(a2, (unsigned __int64)a4, 0, v11, v19, v20, v27, v28, 0, 0) )
      goto LABEL_16;
  }
}
