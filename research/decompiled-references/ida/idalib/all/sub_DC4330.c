__int64 __fastcall sub_DC4330(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 *v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // r12
  __int64 (__fastcall *v8)(__int64); // rax
  _QWORD *v9; // rdi
  void (*v10)(void); // rdx
  _QWORD *v11; // rdi
  _QWORD **v12; // rdi
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rbx
  char v23; // r13
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 *v26; // rcx
  _BYTE *v27; // rax
  __m128i v29; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v30[3]; // [rsp+10h] [rbp-98h] BYREF
  int v31; // [rsp+28h] [rbp-80h]
  __int64 *v32; // [rsp+30h] [rbp-78h]
  int v33; // [rsp+38h] [rbp-70h]
  unsigned int v34; // [rsp+40h] [rbp-68h] BYREF
  char v35; // [rsp+44h] [rbp-64h]
  __int64 v36; // [rsp+48h] [rbp-60h]
  int v37; // [rsp+50h] [rbp-58h]
  char v38; // [rsp+54h] [rbp-54h]

  sub_E23170(v30, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 224LL) + 8LL * a2));
  v5 = (unsigned __int8 *)sub_E21760(*(_QWORD *)(a1 + 176), 8);
  v6 = *(_QWORD **)(a1 + 24);
  v7 = *v5;
  v8 = *(__int64 (__fastcall **)(__int64))(*v6 + 104LL);
  if ( v8 == sub_D8A670 )
  {
    v9 = (_QWORD *)v6[3];
    v10 = *(void (**)(void))(*v9 + 104LL);
    if ( (char *)v10 != (char *)v8 )
    {
LABEL_20:
      v10();
      goto LABEL_6;
    }
    v11 = (_QWORD *)v9[3];
    v8 = *(__int64 (__fastcall **)(__int64))(*v11 + 104LL);
    if ( (char *)v8 == (char *)v10 )
    {
      v12 = (_QWORD **)v11[3];
      v10 = (void (*)(void))(*v12)[13];
      if ( (char *)v10 == (char *)v8 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v12[3] + 104LL))(v12[3]);
        goto LABEL_6;
      }
      goto LABEL_20;
    }
  }
  ((void (*)(void))v8)();
LABEL_6:
  v36 = v7;
  v35 &= ~1u;
  v37 = 1;
  v38 = 1;
  v34 = 2;
  v13 = sub_B9B790(a3, 1);
  sub_A54D20(v13, (int *)&v34);
  if ( v31 == 1 )
  {
    v14 = v32;
  }
  else
  {
    if ( (unsigned int)(v31 - 2) <= 1 )
      BUG();
    v14 = (__int64 *)v32[4];
  }
  v15 = *v14;
  v16 = *(unsigned int *)(a1 + 452);
  v17 = v15 & 0xFFFFFFFFFFFFFFFCLL;
  v18 = (v15 & 2) == 0;
  v19 = 0;
  if ( !v18 )
    v19 = v17;
  v29.m128i_i64[0] = v19;
  v20 = *(unsigned int *)(a1 + 448);
  v29.m128i_i64[0] = a3;
  v21 = (__m128i)_mm_loadh_ps((const double *)v29.m128i_i64);
  if ( v20 + 1 > v16 )
  {
    v29 = v21;
    sub_2237220(a1 + 440, a1 + 456, v20 + 1, 16);
    v20 = *(unsigned int *)(a1 + 448);
    v21 = _mm_load_si128(&v29);
  }
  *(__m128i *)(*(_QWORD *)(a1 + 440) + 16 * v20) = v21;
  ++*(_DWORD *)(a1 + 448);
  v22 = *(_QWORD *)(a1 + 176);
  v23 = *(_BYTE *)sub_E21760(v22, 8);
  sub_E21790(v22, 8);
  if ( v31 )
  {
    v25 = v30[0];
    v26 = v32;
LABEL_16:
    v27 = (char *)v26 + v25 + 40;
    goto LABEL_17;
  }
  v24 = sub_CFDF60((__int64)v30);
  v25 = v30[0];
  v26 = v32;
  if ( !*(_BYTE *)(v24 + 60) || v30[0] != v33 )
    goto LABEL_16;
  v27 = (char *)v32 + v30[0] + 72;
LABEL_17:
  *v27 = v23;
  sub_E24D00(v30);
  if ( v34 > 1 )
    sub_A4F8E0((int *)&v34);
  sub_E232A0(v30);
  return 1;
}
