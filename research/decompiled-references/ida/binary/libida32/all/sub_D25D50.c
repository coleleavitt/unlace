__int64 __fastcall sub_D25D50(__int64 a1, unsigned int a2, __int64 a3)
{
  const __m128i *v5; // rax
  __int64 *v6; // rdi
  __m128i v7; // xmm1
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // rax
  __m128i v24; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+10h] [rbp-C8h]
  __int64 v26; // [rsp+18h] [rbp-C0h]
  __m128i v27; // [rsp+20h] [rbp-B8h] BYREF
  void *v28; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-A0h]
  _BYTE v30[24]; // [rsp+40h] [rbp-98h] BYREF
  int v31; // [rsp+58h] [rbp-80h]
  __int64 *v32; // [rsp+60h] [rbp-78h]
  int v33[26]; // [rsp+70h] [rbp-68h] BYREF

  sub_DFF430(v30, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 224LL) + 8LL * a2));
  v5 = (const __m128i *)sub_DFDA20(*(_QWORD *)(a1 + 176), 16);
  v6 = *(__int64 **)(a1 + 24);
  v7 = _mm_loadu_si128(v5);
  v8 = *v6;
  v27 = v7;
  (*(void (__fastcall **)(__int64 *))(v8 + 104))(v6);
  sub_D23FD0((__int64)&v28, (__int64)&v27, 0);
  sub_B72A30((__int64)v33, (__int64 *)&v28);
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  v9 = sub_B77A50(a3, 1);
  sub_A30FE0(v9, v33);
  if ( v31 == 1 )
  {
    v10 = v32;
  }
  else
  {
    if ( (unsigned int)(v31 - 2) <= 1 )
      BUG();
    v10 = (__int64 *)v32[4];
  }
  v11 = *v10;
  v12 = *(unsigned int *)(a1 + 452);
  v13 = v11 & 0xFFFFFFFFFFFFFFFCLL;
  v14 = (v11 & 2) == 0;
  v15 = 0;
  if ( !v14 )
    v15 = v13;
  v24.m128i_i64[0] = v15;
  v16 = *(unsigned int *)(a1 + 448);
  v24.m128i_i64[0] = a3;
  v17 = (__m128i)_mm_loadh_ps((const double *)v24.m128i_i64);
  if ( v16 + 1 > v12 )
  {
    v24 = v17;
    sub_22134E0(a1 + 440, a1 + 456, v16 + 1, 16);
    v16 = *(unsigned int *)(a1 + 448);
    v17 = _mm_load_si128(&v24);
  }
  *(__m128i *)(*(_QWORD *)(a1 + 440) + 16 * v16) = v17;
  v18 = *(_QWORD *)(a1 + 176);
  ++*(_DWORD *)(a1 + 448);
  v19 = sub_D01350(v18);
  v21 = v20;
  v22 = sub_CEA4A0((__int64)v30);
  v26 = v21;
  v25 = v19;
  *(_QWORD *)v22 = v19;
  *(_DWORD *)(v22 + 8) = v26;
  sub_E00FC0(v30);
  if ( v33[0] > 1u )
    sub_A2BBA0(v33);
  sub_DFF560(v30);
  return 1;
}

