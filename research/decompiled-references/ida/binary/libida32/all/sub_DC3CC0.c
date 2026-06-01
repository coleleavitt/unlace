__int64 __fastcall sub_DC3CC0(__int64 a1, unsigned int a2, __int64 a3)
{
  const __m128i *v5; // rax
  __int64 *v6; // rdi
  __m128i v7; // xmm2
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64); // rax
  _QWORD *v10; // rdi
  void (*v11)(void); // rdx
  _QWORD *v12; // rdi
  _QWORD **v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 *v26; // rcx
  __int64 v27; // rax
  __m128i v29; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v30; // [rsp+10h] [rbp-C8h]
  __m128i v31; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-A8h] BYREF
  int v33; // [rsp+38h] [rbp-A0h]
  char v34; // [rsp+3Ch] [rbp-9Ch]
  _QWORD v35[3]; // [rsp+40h] [rbp-98h] BYREF
  int v36; // [rsp+58h] [rbp-80h]
  __int64 *v37; // [rsp+60h] [rbp-78h]
  unsigned int v38; // [rsp+68h] [rbp-70h]
  unsigned int v39; // [rsp+70h] [rbp-68h] BYREF
  char v40; // [rsp+74h] [rbp-64h]
  __int64 v41; // [rsp+78h] [rbp-60h]
  int v42; // [rsp+80h] [rbp-58h]
  char v43; // [rsp+84h] [rbp-54h]

  sub_DFF430(v35, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 224LL) + 8LL * a2));
  v5 = (const __m128i *)sub_DFDA20(*(_QWORD *)(a1 + 176), 16);
  v6 = *(__int64 **)(a1 + 24);
  v7 = _mm_loadu_si128(v5);
  v8 = *v6;
  v31 = v7;
  v9 = *(__int64 (__fastcall **)(__int64))(v8 + 104);
  if ( v9 == sub_D66930 )
  {
    v10 = (_QWORD *)v6[3];
    v11 = *(void (**)(void))(*v10 + 104LL);
    if ( (char *)v11 != (char *)v9 )
    {
LABEL_20:
      v11();
      goto LABEL_6;
    }
    v12 = (_QWORD *)v10[3];
    v9 = *(__int64 (__fastcall **)(__int64))(*v12 + 104LL);
    if ( (char *)v9 == (char *)v11 )
    {
      v13 = (_QWORD **)v12[3];
      v11 = (void (*)(void))(*v13)[13];
      if ( (char *)v11 == (char *)v9 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v13[3] + 104LL))(v13[3]);
        goto LABEL_6;
      }
      goto LABEL_20;
    }
  }
  ((void (*)(void))v9)();
LABEL_6:
  sub_D27A40((__int64)&v32, (__int64)&v31, 0);
  v40 &= ~1u;
  v41 = v32;
  v39 = 2;
  v42 = v33;
  v43 = v34;
  v14 = sub_B77A50(a3, 1);
  sub_A30FE0(v14, (int *)&v39);
  if ( v36 == 1 )
  {
    v15 = v37;
  }
  else
  {
    if ( (unsigned int)(v36 - 2) <= 1 )
      BUG();
    v15 = (__int64 *)v37[4];
  }
  v16 = *v15;
  v17 = *(unsigned int *)(a1 + 452);
  v18 = v16 & 0xFFFFFFFFFFFFFFFCLL;
  v19 = (v16 & 2) == 0;
  v20 = 0;
  if ( !v19 )
    v20 = v18;
  v29.m128i_i64[0] = v20;
  v21 = *(unsigned int *)(a1 + 448);
  v29.m128i_i64[0] = a3;
  v22 = (__m128i)_mm_loadh_ps((const double *)v29.m128i_i64);
  if ( v21 + 1 > v17 )
  {
    v29 = v22;
    sub_22134E0(a1 + 440, a1 + 456, v21 + 1, 16);
    v21 = *(unsigned int *)(a1 + 448);
    v22 = _mm_load_si128(&v29);
  }
  *(__m128i *)(*(_QWORD *)(a1 + 440) + 16 * v21) = v22;
  ++*(_DWORD *)(a1 + 448);
  v23 = *(_QWORD *)(a1 + 176);
  v29 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v23, 16));
  sub_DFDA50(v23, 16);
  if ( v36 )
  {
    v25 = v35[0];
    v26 = v37;
LABEL_16:
    v27 = (__int64)v26 + v25 + 40;
    goto LABEL_17;
  }
  v24 = sub_CDA220((__int64)v35);
  v25 = v35[0];
  v26 = v37;
  if ( !*(_BYTE *)(v24 + 60) || v38 != v35[0] )
    goto LABEL_16;
  v27 = (__int64)v37 + v38 + 72;
LABEL_17:
  v30 = _mm_load_si128(&v29);
  *(_QWORD *)v27 = v30.m128i_i64[0];
  *(_DWORD *)(v27 + 8) = v30.m128i_i32[2];
  sub_E00FC0(v35);
  if ( v39 > 1 )
    sub_A2BBA0((int *)&v39);
  sub_DFF560(v35);
  return 1;
}

