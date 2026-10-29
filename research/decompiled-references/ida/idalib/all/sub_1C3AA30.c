__int64 __fastcall sub_1C3AA30(
        __int64 *a1,
        unsigned int a2,
        unsigned __int64 a3,
        int a4,
        __m128 a5,
        __m128 a6,
        __int64 a7,
        unsigned __int64 a8,
        int a9)
{
  unsigned __int64 v13; // rax
  __int64 result; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rbx
  __int16 v21; // dx
  bool v22; // zf
  __m128 v23; // xmm0
  _BYTE *v24; // rax
  unsigned __int64 v25; // r15
  unsigned int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned int v30; // eax
  int v31; // r15d
  __int16 v32; // ax
  unsigned __int64 v33; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v34; // [rsp+8h] [rbp-E0h]
  int v35; // [rsp+1Ch] [rbp-CCh] BYREF
  _QWORD v36[25]; // [rsp+20h] [rbp-C8h] BYREF

  if ( a8 && (*(_BYTE *)(a1[29] + 1) & 8) == 0 )
    sub_1C39B10(a1, a8);
  v13 = sub_19179E0((__int64)a1, a2, a8, 0, a5, a6);
  if ( v13 == 1 )
    return 1;
  v15 = v13 & 0xFFFFFFFFFFFFFFFELL;
  v16 = sub_19B4A30((__int64)a1, v13 & 0xFFFFFFFFFFFFFFFELL, a2, 0, 0, 0, a5, a6);
  if ( v16 == 1 )
    return 1;
  v20 = v16 & 0xFFFFFFFFFFFFFFFELL;
  v33 = v16 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v16 & 0xFFFFFFFFFFFFFFFELL) != 0 )
  {
    v24 = (_BYTE *)a1[29];
    if ( (*v24 & 1) == 0 && (v24[1] & 8) == 0 )
    {
      v25 = a1[33];
      v26 = sub_C00A40(v20, v15, v17, v18, v19);
      v15 = 6674;
      if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v25 + 32), 0x1A12u, v26, v25, v27, v28) != 1 )
      {
        v29 = a1[31];
        v15 = v20;
        v36[1] = a1;
        v36[0] = v29;
        sub_1C31860((__int64)v36, v20);
      }
    }
  }
  if ( (*(_WORD *)a3 & 0x1FF) == 0x8D )
  {
    v30 = sub_EEB7E0(a3, v15, *(double *)a5.m128_u64);
    sub_168B9F0((__int64)v36, a1 + 1, v30, 0xB7Bu, 0);
    v35 = 2;
    sub_1587D10((__int64)v36, &v35);
    sub_15F7200(v36);
    v31 = sub_EEB7E0(a3, (__int64)&v35, *(double *)a5.m128_u64);
    a3 = sub_EEE9A0(8, (_QWORD *)a1[31], 8u);
    v32 = *(_WORD *)a3 & 0xFE00;
    LOBYTE(v32) = -18;
    v22 = unk_2CD7484 == 0;
    *(_WORD *)a3 = v32;
    if ( !v22 )
      sub_EE9B50(238);
    *(_BYTE *)(a3 + 1) &= ~2u;
    *(_DWORD *)(a3 + 4) = v31;
  }
  result = sub_EEE9A0(32, (_QWORD *)a1[31], 8u);
  v21 = *(_WORD *)result & 0xFE00;
  LOBYTE(v21) = -12;
  v22 = unk_2CD7484 == 0;
  *(_WORD *)result = v21;
  if ( !v22 )
  {
    v34 = result;
    sub_EE9B50(244);
    result = v34;
  }
  v34 = a3;
  *(_DWORD *)(result + 24) = a4;
  v23 = _mm_loadh_ps((const double *)&v33);
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 28) = a9;
  *(__m128 *)(result + 8) = v23;
  return result;
}
