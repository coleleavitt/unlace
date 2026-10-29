__int64 __fastcall sub_CEB250(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // r14
  __m128i v21; // [rsp+0h] [rbp-138h] BYREF
  _BYTE v22[24]; // [rsp+10h] [rbp-128h] BYREF
  int v23; // [rsp+28h] [rbp-110h]
  __int64 *v24; // [rsp+30h] [rbp-108h]
  int v25[16]; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE v26[48]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-88h]
  int v28; // [rsp+B8h] [rbp-80h]
  _BYTE v29[48]; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-48h]
  int v31; // [rsp+F8h] [rbp-40h]

  sub_DFF430(v22, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 224LL) + 8LL * a2));
  v5 = sub_DFDA20(*(_QWORD *)(a1 + 176), 64);
  sub_DFF4A0(v26, v5);
  v6 = *(_QWORD *)(a1 + 24);
  v27 = *(_QWORD *)(v5 + 48);
  v28 = *(_DWORD *)(v5 + 56);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 104LL))(v6);
  sub_E103F0(v25, v26, v7);
  v8 = sub_B77A50(a3, 1);
  sub_A30FE0(v8, v25);
  if ( v23 == 1 )
  {
    v9 = v24;
  }
  else
  {
    if ( (unsigned int)(v23 - 2) <= 1 )
      BUG();
    v9 = (__int64 *)v24[4];
  }
  v10 = *v9;
  v11 = *(unsigned int *)(a1 + 452);
  v12 = v10 & 0xFFFFFFFFFFFFFFFCLL;
  v13 = (v10 & 2) == 0;
  v14 = 0;
  if ( !v13 )
    v14 = v12;
  v21.m128i_i64[0] = v14;
  v15 = *(unsigned int *)(a1 + 448);
  v21.m128i_i64[0] = a3;
  v16 = (__m128i)_mm_loadh_ps((const double *)v21.m128i_i64);
  if ( v15 + 1 > v11 )
  {
    v21 = v16;
    sub_22134E0(a1 + 440, a1 + 456, v15 + 1, 16);
    v15 = *(unsigned int *)(a1 + 448);
    v16 = _mm_load_si128(&v21);
  }
  *(__m128i *)(*(_QWORD *)(a1 + 440) + 16 * v15) = v16;
  v17 = *(_QWORD *)(a1 + 176);
  ++*(_DWORD *)(a1 + 448);
  v18 = sub_DFDA20(v17, 64);
  sub_DFF520(v29);
  v30 = *(_QWORD *)(v18 + 48);
  v31 = *(_DWORD *)(v18 + 56);
  sub_DFDA50(v17, 64);
  v19 = sub_CEB200((__int64)v22);
  sub_DFF6C0(v19, v29);
  *(_QWORD *)(v19 + 48) = v30;
  *(_DWORD *)(v19 + 56) = v31;
  sub_DFF560(v29);
  sub_E00FC0(v22);
  if ( v25[0] > 1u )
    sub_A2BBA0(v25);
  sub_DFF560(v26);
  sub_DFF560(v22);
  return 1;
}

