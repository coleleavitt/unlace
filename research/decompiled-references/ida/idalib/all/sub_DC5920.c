__int64 __fastcall sub_DC5920(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  const __m128i *v5; // rax
  _QWORD *v6; // rdi
  __m128i v7; // xmm2
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64); // rax
  _QWORD *v10; // rdi
  __int64 (__fastcall *v11)(__int64); // rdx
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  bool v21; // zf
  __int64 *v22; // rax
  __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 *v28; // rcx
  __int64 v29; // rax
  __int64 v31; // rsi
  __int64 *v32; // rdx
  __int64 *v33; // r15
  __m128i v34; // [rsp+0h] [rbp-128h] BYREF
  __int64 *v35; // [rsp+18h] [rbp-110h]
  __m128i v36; // [rsp+20h] [rbp-108h]
  __m128i v37; // [rsp+30h] [rbp-F8h] BYREF
  _QWORD v38[4]; // [rsp+40h] [rbp-E8h] BYREF
  _QWORD v39[4]; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD v40[3]; // [rsp+80h] [rbp-A8h] BYREF
  int v41; // [rsp+98h] [rbp-90h]
  __int64 *v42; // [rsp+A0h] [rbp-88h]
  int v43; // [rsp+A8h] [rbp-80h]
  unsigned int v44; // [rsp+B0h] [rbp-78h] BYREF
  char v45; // [rsp+B4h] [rbp-74h]
  __int64 v46; // [rsp+B8h] [rbp-70h] BYREF
  __int64 *v47; // [rsp+C0h] [rbp-68h]

  v4 = *(_QWORD *)(a1 + 168);
  v34.m128i_i64[0] = a3;
  sub_E23170(v40, *(_QWORD *)(*(_QWORD *)(v4 + 224) + 8LL * a2));
  v5 = (const __m128i *)sub_E21760(*(_QWORD *)(a1 + 176), 16);
  v6 = *(_QWORD **)(a1 + 24);
  v7 = _mm_loadu_si128(v5);
  v8 = *v6;
  v37 = v7;
  v9 = *(__int64 (__fastcall **)(__int64))(v8 + 104);
  if ( v9 == sub_D8A670 )
  {
    v10 = (_QWORD *)v6[3];
    v11 = *(__int64 (__fastcall **)(__int64))(*v10 + 104LL);
    if ( v11 != v9 )
    {
LABEL_24:
      v11((__int64)v10);
      goto LABEL_6;
    }
    v6 = (_QWORD *)v10[3];
    v9 = *(__int64 (__fastcall **)(__int64))(*v6 + 104LL);
    if ( v9 == v11 )
    {
      v10 = (_QWORD *)v6[3];
      v11 = *(__int64 (__fastcall **)(__int64))(*v10 + 104LL);
      if ( v11 == v9 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10[3] + 104LL))(v10[3]);
        goto LABEL_6;
      }
      goto LABEL_24;
    }
  }
  v9((__int64)v6);
LABEL_6:
  sub_CFEAE0((__int64)v38, (__int64)&v37);
  v45 &= ~1u;
  v44 = 0;
  v12 = sub_21F90B0();
  sub_21FBFD0(v39, 0.0);
  sub_22023D0(&v46, v39, v12);
  sub_21F9830(v39);
  v44 = 3;
  v14 = sub_21F90D0(v39, v39, v13);
  if ( v38[0] == v14 )
  {
    sub_21FFED0(v39, v38);
    v15 = v39[0];
    if ( v46 != v14 )
    {
LABEL_8:
      if ( v15 != v14 )
      {
        sub_21F9590(&v46, v39);
        goto LABEL_10;
      }
      goto LABEL_29;
    }
  }
  else
  {
    sub_21F97D0(v39, v38);
    v15 = v39[0];
    if ( v46 != v14 )
      goto LABEL_8;
  }
  if ( v15 == v14 )
  {
    if ( v47 )
    {
      v31 = 3 * *(v47 - 1);
      v32 = &v47[v31];
      if ( v47 == &v47[v31] )
      {
        v33 = v47;
      }
      else
      {
        while ( 1 )
        {
          v33 = v32 - 3;
          v35 = v32;
          sub_9955A0(v32 - 3);
          if ( v47 == v33 )
            break;
          v32 = v33;
        }
        v31 = 3 * *(v35 - 4);
      }
      operator delete[](v33 - 1, v31 * 8 + 8);
    }
    goto LABEL_40;
  }
LABEL_29:
  v35 = &v46;
  sub_9955A0(&v46);
  if ( v14 != v39[0] )
  {
    sub_21F97D0(&v46, v39);
    goto LABEL_10;
  }
LABEL_40:
  sub_21FFED0(&v46, v39);
LABEL_10:
  sub_9955A0(v39);
  sub_9955A0(v38);
  v16 = sub_B9B790(v34.m128i_i64[0], 1);
  sub_A54D20(v16, (int *)&v44);
  if ( v41 == 1 )
  {
    v17 = v42;
  }
  else
  {
    if ( (unsigned int)(v41 - 2) <= 1 )
      BUG();
    v17 = (__int64 *)v42[4];
  }
  v18 = *v17;
  v19 = *(unsigned int *)(a1 + 452);
  v20 = v18 & 0xFFFFFFFFFFFFFFFCLL;
  v21 = (v18 & 2) == 0;
  v22 = nullptr;
  if ( !v21 )
    v22 = (__int64 *)v20;
  v35 = v22;
  v23 = *(unsigned int *)(a1 + 448);
  v24 = (__m128i)_mm_loadh_ps((const double *)v34.m128i_i64);
  if ( v23 + 1 > v19 )
  {
    v34 = v24;
    sub_2237220(a1 + 440, a1 + 456, v23 + 1, 16);
    v23 = *(unsigned int *)(a1 + 448);
    v24 = _mm_load_si128(&v34);
  }
  *(__m128i *)(*(_QWORD *)(a1 + 440) + 16 * v23) = v24;
  ++*(_DWORD *)(a1 + 448);
  v25 = *(_QWORD *)(a1 + 176);
  v34 = _mm_loadu_si128((const __m128i *)sub_E21760(v25, 16));
  sub_E21790(v25, 16);
  if ( v41 )
  {
    v27 = v40[0];
    v28 = v42;
LABEL_20:
    v29 = (__int64)v28 + v27 + 40;
    goto LABEL_21;
  }
  v26 = sub_CFDF60((__int64)v40);
  v27 = v40[0];
  v28 = v42;
  if ( !*(_BYTE *)(v26 + 60) || v40[0] != v43 )
    goto LABEL_20;
  v29 = (__int64)v42 + v40[0] + 72;
LABEL_21:
  v36 = _mm_load_si128(&v34);
  *(_QWORD *)v29 = v36.m128i_i64[0];
  *(_DWORD *)(v29 + 8) = v36.m128i_i32[2];
  sub_E24D00(v40);
  if ( v44 > 1 )
    sub_A4F8E0((int *)&v44);
  sub_E232A0(v40);
  return 1;
}
