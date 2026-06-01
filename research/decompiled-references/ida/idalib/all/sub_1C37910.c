__int64 __fastcall sub_1C37910(__int64 a1, int a2, char a3, __int64 a4, unsigned int *a5, __int64 a6, double a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rsi
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 result; // rax
  __m128i v20; // xmm1
  __int16 v21; // dx
  __m128i v22; // xmm2
  __int64 v23; // rdx
  __m128 v24; // xmm0
  __int64 v25; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+8h] [rbp-B0h]
  __m128i v27; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+20h] [rbp-98h]
  __m128i v29; // [rsp+30h] [rbp-88h]
  __int64 v30; // [rsp+40h] [rbp-78h]
  __m128i v31; // [rsp+50h] [rbp-68h] BYREF
  __int64 v32; // [rsp+60h] [rbp-58h]
  __m128i v33; // [rsp+70h] [rbp-48h] BYREF
  __int64 v34; // [rsp+80h] [rbp-38h]

  sub_17B41B0((__int64)&v27, (__int64 *)a1, a5, a7, a4, (__int64)a5, a6);
  v15 = sub_15AB9E0(a4, *(_QWORD **)(a1 + 248), v11, v12, v13, v14);
  v16 = *(_QWORD **)(a1 + 248);
  v17 = v15;
  v25 = v18;
  v29 = _mm_load_si128(&v27);
  v30 = v28;
  v33 = v29;
  v34 = v28;
  result = sub_EEE9A0(64, v16, 8u);
  v20 = _mm_load_si128(&v33);
  v32 = v34;
  v21 = *(_WORD *)result;
  v31 = v20;
  v21 &= 0xFE00u;
  LOBYTE(v21) = v21 | 0xEF;
  *(_WORD *)result = v21;
  if ( unk_2CD7484 )
  {
    v26 = result;
    sub_EE9B50(239);
    result = v26;
  }
  v22 = _mm_load_si128(&v31);
  v23 = v32;
  v26 = v17;
  *(_DWORD *)(result + 8) = a2;
  *(_BYTE *)(result + 12) = a3;
  v24 = _mm_loadh_ps((const double *)&v25);
  *(__m128i *)(result + 32) = v22;
  *(__m128 *)(result + 16) = v24;
  *(_QWORD *)(result + 48) = v23;
  *(_QWORD *)(result + 56) = a6;
  return result;
}
