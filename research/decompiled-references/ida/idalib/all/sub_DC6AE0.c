__int64 __fastcall sub_DC6AE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // r13
  int v7; // eax
  __int64 *v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm0
  _QWORD *v16; // rdi
  __int64 v17; // r12
  __int64 (__fastcall *v18)(__int64); // rax
  _QWORD *v19; // rdi
  __int64 (*v20)(void); // rdx
  _QWORD *v21; // rdi
  _QWORD **v22; // rdi
  __int64 v23; // rsi
  unsigned int v24; // ebx
  __m128i v26; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v27[64]; // [rsp+10h] [rbp-A8h] BYREF
  int v28[14]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int8 v29; // [rsp+88h] [rbp-30h]

  v5 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v6 = sub_B9B790(a3, 1);
  v7 = *(_DWORD *)(v5 + 24);
  if ( v7 == 1 )
  {
    v8 = *(__int64 **)(v5 + 32);
  }
  else
  {
    if ( (unsigned int)(v7 - 2) <= 1 )
      BUG();
    v8 = *(__int64 **)(*(_QWORD *)(v5 + 32) + 32LL);
  }
  v9 = *v8;
  v10 = *(unsigned int *)(a1 + 452);
  v11 = v9 & 0xFFFFFFFFFFFFFFFCLL;
  v12 = (v9 & 2) == 0;
  v13 = 0;
  if ( !v12 )
    v13 = v11;
  v26.m128i_i64[0] = v13;
  v14 = *(unsigned int *)(a1 + 448);
  v26.m128i_i64[0] = a3;
  v15 = (__m128i)_mm_loadh_ps((const double *)v26.m128i_i64);
  if ( v14 + 1 > v10 )
  {
    v26 = v15;
    sub_2237220(a1 + 440, a1 + 456, v14 + 1, 16);
    v14 = *(unsigned int *)(a1 + 448);
    v15 = _mm_load_si128(&v26);
  }
  *(__m128i *)(*(_QWORD *)(a1 + 440) + 16 * v14) = v15;
  v16 = *(_QWORD **)(a1 + 24);
  ++*(_DWORD *)(a1 + 448);
  v17 = *(_QWORD *)(*(_QWORD *)(a3 + 40) + 8LL);
  v18 = *(__int64 (__fastcall **)(__int64))(*v16 + 104LL);
  if ( v18 != sub_D8A670 )
    goto LABEL_17;
  v19 = (_QWORD *)v16[3];
  v20 = *(__int64 (**)(void))(*v19 + 104LL);
  if ( (char *)v20 != (char *)v18 )
  {
LABEL_15:
    v23 = v20();
    goto LABEL_13;
  }
  v21 = (_QWORD *)v19[3];
  v18 = *(__int64 (__fastcall **)(__int64))(*v21 + 104LL);
  if ( (char *)v18 != (char *)v20 )
  {
LABEL_17:
    v23 = ((__int64 (*)(void))v18)();
    goto LABEL_13;
  }
  v22 = (_QWORD **)v21[3];
  v20 = (__int64 (*)(void))(*v22)[13];
  if ( (char *)v20 != (char *)v18 )
    goto LABEL_15;
  v23 = (*(__int64 (__fastcall **)(_QWORD *))(*v22[3] + 104LL))(v22[3]);
LABEL_13:
  sub_CE5520((__int64)v27, v23);
  sub_E28BE0(v28, v5, v27, v17);
  sub_CE7BE0((__int64)v27);
  v24 = v29;
  if ( v29 )
  {
    sub_A54D20(v6, v28);
    if ( v29 )
    {
      if ( v28[0] > 1u )
        sub_A4F8E0(v28);
    }
  }
  return v24;
}
