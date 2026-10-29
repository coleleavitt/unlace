__int64 __fastcall sub_DC5D40(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  __int64 (*v7)(void); // rax
  _QWORD *v8; // rdi
  __int64 (*v9)(void); // rdx
  _QWORD **v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 *v24; // rcx
  __int64 v25; // rdi
  __m128i v27; // [rsp+0h] [rbp-108h] BYREF
  _BYTE v28[48]; // [rsp+10h] [rbp-F8h] BYREF
  _QWORD v29[3]; // [rsp+40h] [rbp-C8h] BYREF
  int v30; // [rsp+58h] [rbp-B0h]
  __int64 *v31; // [rsp+60h] [rbp-A8h]
  int v32; // [rsp+68h] [rbp-A0h]
  _BYTE v33[48]; // [rsp+70h] [rbp-98h] BYREF
  int v34[26]; // [rsp+A0h] [rbp-68h] BYREF

  sub_E23170(v29, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 224LL) + 8LL * a2));
  v5 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  sub_E231E0(v28, v5);
  v6 = *(_QWORD **)(a1 + 24);
  v7 = *(__int64 (**)(void))(*v6 + 104LL);
  if ( (char *)v7 != (char *)sub_D8A670 )
  {
LABEL_22:
    v11 = v7();
    goto LABEL_5;
  }
  v8 = (_QWORD *)v6[3];
  v9 = *(__int64 (**)(void))(*v8 + 104LL);
  if ( v9 == v7 )
  {
    v10 = (_QWORD **)v8[3];
    v7 = (__int64 (*)(void))(*v10)[13];
    if ( v7 == v9 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v10[3] + 104LL))(v10[3]);
      goto LABEL_5;
    }
    goto LABEL_22;
  }
  v11 = v9();
LABEL_5:
  sub_E25340(v34, v28, v11);
  v12 = sub_B9B790(a3, 1);
  sub_A54D20(v12, v34);
  if ( v30 == 1 )
  {
    v13 = v31;
  }
  else
  {
    if ( (unsigned int)(v30 - 2) <= 1 )
      BUG();
    v13 = (__int64 *)v31[4];
  }
  v14 = *v13;
  v15 = *(unsigned int *)(a1 + 452);
  v16 = v14 & 0xFFFFFFFFFFFFFFFCLL;
  v17 = (v14 & 2) == 0;
  v18 = 0;
  if ( !v17 )
    v18 = v16;
  v27.m128i_i64[0] = v18;
  v19 = *(unsigned int *)(a1 + 448);
  v27.m128i_i64[0] = a3;
  v20 = (__m128i)_mm_loadh_ps((const double *)v27.m128i_i64);
  if ( v19 + 1 > v15 )
  {
    v27 = v20;
    sub_2237220(a1 + 440, a1 + 456, v19 + 1, 16);
    v19 = *(unsigned int *)(a1 + 448);
    v20 = _mm_load_si128(&v27);
  }
  *(__m128i *)(*(_QWORD *)(a1 + 440) + 16 * v19) = v20;
  v21 = *(_QWORD *)(a1 + 176);
  ++*(_DWORD *)(a1 + 448);
  sub_E21760(v21, 48);
  sub_E23260(v33);
  sub_E21790(v21, 48);
  if ( v30 )
  {
    v23 = v29[0];
    v24 = v31;
LABEL_14:
    v25 = (__int64)v24 + v23 + 40;
    goto LABEL_15;
  }
  v22 = sub_CFDF60((__int64)v29);
  v23 = v29[0];
  v24 = v31;
  if ( !*(_BYTE *)(v22 + 60) )
    goto LABEL_14;
  v25 = (__int64)v31 + v29[0] + 72;
  if ( v29[0] != v32 )
    goto LABEL_14;
LABEL_15:
  sub_E23400(v25, v33);
  sub_E232A0(v33);
  sub_E24D00(v29);
  if ( v34[0] > 1u )
    sub_A4F8E0(v34);
  sub_E232A0(v28);
  sub_E232A0(v29);
  return 1;
}
