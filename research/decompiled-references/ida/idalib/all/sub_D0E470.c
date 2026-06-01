__int64 __fastcall sub_D0E470(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  const __m128i *v5; // rax
  __int64 *v6; // rdi
  __m128i v7; // xmm1
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  bool v18; // zf
  __int64 *v19; // rax
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v28; // rsi
  __int64 *v29; // rdx
  __int64 *v30; // r15
  __m128i v31; // [rsp+0h] [rbp-128h] BYREF
  __int64 *v32; // [rsp+18h] [rbp-110h]
  __int64 v33; // [rsp+20h] [rbp-108h]
  __int64 v34; // [rsp+28h] [rbp-100h]
  __m128i v35; // [rsp+30h] [rbp-F8h] BYREF
  _QWORD v36[4]; // [rsp+40h] [rbp-E8h] BYREF
  _QWORD v37[4]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v38[24]; // [rsp+80h] [rbp-A8h] BYREF
  int v39; // [rsp+98h] [rbp-90h]
  __int64 *v40; // [rsp+A0h] [rbp-88h]
  unsigned int v41; // [rsp+B0h] [rbp-78h] BYREF
  char v42; // [rsp+B4h] [rbp-74h]
  __int64 v43; // [rsp+B8h] [rbp-70h] BYREF
  __int64 *v44; // [rsp+C0h] [rbp-68h]

  v4 = *(_QWORD *)(a1 + 168);
  v31.m128i_i64[0] = a3;
  sub_E23170(v38, *(_QWORD *)(*(_QWORD *)(v4 + 224) + 8LL * a2));
  v5 = (const __m128i *)sub_E21760(*(_QWORD *)(a1 + 176), 16);
  v6 = *(__int64 **)(a1 + 24);
  v7 = _mm_loadu_si128(v5);
  v8 = *v6;
  v35 = v7;
  (*(void (__fastcall **)(__int64 *))(v8 + 104))(v6);
  sub_CFEAE0((__int64)v36, (__int64)&v35);
  v42 &= ~1u;
  v41 = 0;
  v9 = sub_21F90B0();
  sub_21FBFD0(v37, 0.0);
  sub_22023D0(&v43, v37, v9);
  sub_21F9830(v37);
  v41 = 3;
  v11 = sub_21F90D0(v37, v37, v10);
  if ( v36[0] == v11 )
  {
    sub_21FFED0(v37, v36);
    v12 = v37[0];
    if ( v43 != v11 )
    {
LABEL_3:
      if ( v11 != v12 )
      {
        sub_21F9590(&v43, v37);
        goto LABEL_5;
      }
      goto LABEL_15;
    }
  }
  else
  {
    sub_21F97D0(v37, v36);
    v12 = v37[0];
    if ( v43 != v11 )
      goto LABEL_3;
  }
  if ( v11 == v12 )
  {
    if ( v44 )
    {
      v28 = 3 * *(v44 - 1);
      v29 = &v44[v28];
      if ( v44 == &v44[v28] )
      {
        v30 = v44;
      }
      else
      {
        while ( 1 )
        {
          v30 = v29 - 3;
          v32 = v29;
          sub_9955A0(v29 - 3);
          if ( v44 == v30 )
            break;
          v29 = v30;
        }
        v28 = 3 * *(v32 - 4);
      }
      operator delete[](v30 - 1, v28 * 8 + 8);
    }
    goto LABEL_27;
  }
LABEL_15:
  v32 = &v43;
  sub_9955A0(&v43);
  if ( v11 != v37[0] )
  {
    sub_21F97D0(&v43, v37);
    goto LABEL_5;
  }
LABEL_27:
  sub_21FFED0(&v43, v37);
LABEL_5:
  sub_9955A0(v37);
  sub_9955A0(v36);
  v13 = sub_B9B790(v31.m128i_i64[0], 1);
  sub_A54D20(v13, (int *)&v41);
  if ( v39 == 1 )
  {
    v14 = v40;
  }
  else
  {
    if ( (unsigned int)(v39 - 2) <= 1 )
      BUG();
    v14 = (__int64 *)v40[4];
  }
  v15 = *v14;
  v16 = *(unsigned int *)(a1 + 452);
  v17 = v15 & 0xFFFFFFFFFFFFFFFCLL;
  v18 = (v15 & 2) == 0;
  v19 = nullptr;
  if ( !v18 )
    v19 = (__int64 *)v17;
  v32 = v19;
  v20 = *(unsigned int *)(a1 + 448);
  v21 = (__m128i)_mm_loadh_ps((const double *)v31.m128i_i64);
  if ( v20 + 1 > v16 )
  {
    v31 = v21;
    sub_2237220(a1 + 440, a1 + 456, v20 + 1, 16);
    v20 = *(unsigned int *)(a1 + 448);
    v21 = _mm_load_si128(&v31);
  }
  *(__m128i *)(*(_QWORD *)(a1 + 440) + 16 * v20) = v21;
  v22 = *(_QWORD *)(a1 + 176);
  ++*(_DWORD *)(a1 + 448);
  v23 = sub_D08C00(v22);
  v25 = v24;
  v26 = sub_D0E280((__int64)v38);
  v34 = v25;
  v33 = v23;
  *(_QWORD *)v26 = v23;
  *(_DWORD *)(v26 + 8) = v34;
  sub_E24D00(v38);
  if ( v41 > 1 )
    sub_A4F8E0((int *)&v41);
  sub_E232A0(v38);
  return 1;
}
