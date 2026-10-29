__int64 __fastcall sub_CEB4D0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 v6; // rdi
  unsigned int v7; // eax
  void *v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rbx
  __m128i v22; // [rsp+0h] [rbp-E8h] BYREF
  void *v23; // [rsp+10h] [rbp-D8h] BYREF
  unsigned int v24; // [rsp+18h] [rbp-D0h]
  char v25; // [rsp+1Ch] [rbp-CCh]
  int v26; // [rsp+20h] [rbp-C8h]
  void *v27; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-B0h]
  char v29; // [rsp+3Ch] [rbp-ACh]
  int v30; // [rsp+40h] [rbp-A8h]
  _BYTE v31[24]; // [rsp+50h] [rbp-98h] BYREF
  int v32; // [rsp+68h] [rbp-80h]
  __int64 *v33; // [rsp+70h] [rbp-78h]
  unsigned int v34; // [rsp+80h] [rbp-68h] BYREF
  char v35; // [rsp+84h] [rbp-64h]
  void *v36; // [rsp+88h] [rbp-60h]
  unsigned int v37; // [rsp+90h] [rbp-58h]
  char v38; // [rsp+94h] [rbp-54h]
  int v39; // [rsp+98h] [rbp-50h]

  sub_DFF430(v31, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 224LL) + 8LL * a2));
  v5 = sub_DFDA20(*(_QWORD *)(a1 + 176), 24);
  v24 = *(_DWORD *)(v5 + 8);
  if ( v24 > 0x40 )
    sub_21E17D0(&v23);
  else
    v23 = *(void **)v5;
  v6 = *(_QWORD *)(a1 + 24);
  v25 = *(_BYTE *)(v5 + 12);
  v26 = *(_DWORD *)(v5 + 16);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 104LL))(v6);
  v7 = v24;
  v28 = v24;
  if ( v24 > 0x40 )
  {
    sub_21E17D0(&v27);
    v7 = v28;
    v8 = v27;
  }
  else
  {
    v8 = v23;
  }
  v37 = v7;
  v36 = v8;
  v30 = v26;
  v39 = v26;
  v35 &= ~1u;
  v38 = v25;
  v34 = 4;
  v9 = sub_B77A50(a3, 1);
  sub_A30FE0(v9, (int *)&v34);
  if ( v32 == 1 )
  {
    v10 = v33;
  }
  else
  {
    if ( (unsigned int)(v32 - 2) <= 1 )
      BUG();
    v10 = (__int64 *)v33[4];
  }
  v11 = *v10;
  v12 = *(unsigned int *)(a1 + 452);
  v13 = v11 & 0xFFFFFFFFFFFFFFFCLL;
  v14 = (v11 & 2) == 0;
  v15 = 0;
  if ( !v14 )
    v15 = v13;
  v22.m128i_i64[0] = v15;
  v16 = *(unsigned int *)(a1 + 448);
  v22.m128i_i64[0] = a3;
  v17 = (__m128i)_mm_loadh_ps((const double *)v22.m128i_i64);
  if ( v16 + 1 > v12 )
  {
    v22 = v17;
    sub_22134E0(a1 + 440, a1 + 456, v16 + 1, 16);
    v16 = *(unsigned int *)(a1 + 448);
    v17 = _mm_load_si128(&v22);
  }
  *(__m128i *)(*(_QWORD *)(a1 + 440) + 16 * v16) = v17;
  v18 = *(_QWORD *)(a1 + 176);
  ++*(_DWORD *)(a1 + 448);
  sub_CE7240((__int64)&v27, v18);
  v19 = sub_CEB480((__int64)v31);
  v20 = v19;
  if ( *(_DWORD *)(v19 + 8) > 0x40u && *(_QWORD *)v19 )
    operator delete[](*(void **)v19);
  *(_QWORD *)v20 = v27;
  *(_DWORD *)(v20 + 8) = v28;
  *(_BYTE *)(v20 + 12) = v29;
  *(_DWORD *)(v20 + 16) = v30;
  sub_E00FC0(v31);
  if ( v34 > 1 )
    sub_A2BBA0((int *)&v34);
  if ( v24 > 0x40 && v23 )
    operator delete[](v23);
  sub_DFF560(v31);
  return 1;
}

