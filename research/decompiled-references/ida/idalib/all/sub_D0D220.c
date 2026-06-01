__int64 __fastcall sub_D0D220(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // r12d
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rbx
  int v15; // r13d
  __m128i v17; // [rsp+0h] [rbp-B8h] BYREF
  void *v18; // [rsp+10h] [rbp-A8h] BYREF
  unsigned int v19; // [rsp+18h] [rbp-A0h]
  char v20; // [rsp+1Ch] [rbp-9Ch]
  _BYTE v21[24]; // [rsp+20h] [rbp-98h] BYREF
  int v22; // [rsp+38h] [rbp-80h]
  __int64 *v23; // [rsp+40h] [rbp-78h]
  int v24[26]; // [rsp+50h] [rbp-68h] BYREF

  sub_E23170(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 224LL) + 8LL * a2));
  v4 = *(_DWORD *)sub_E21760(*(_QWORD *)(a1 + 176), 8);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  v19 = 32;
  v18 = (void *)v4;
  v20 = 0;
  sub_B96770((__int64)v24, (__int64 *)&v18);
  if ( v19 > 0x40 && v18 )
    operator delete[](v18);
  v5 = sub_B9B790(a3, 1);
  sub_A54D20(v5, v24);
  if ( v22 == 1 )
  {
    v6 = v23;
  }
  else
  {
    if ( (unsigned int)(v22 - 2) <= 1 )
      BUG();
    v6 = (__int64 *)v23[4];
  }
  v7 = *v6;
  v8 = *(unsigned int *)(a1 + 452);
  v9 = v7 & 0xFFFFFFFFFFFFFFFCLL;
  v10 = (v7 & 2) == 0;
  v11 = 0;
  if ( !v10 )
    v11 = v9;
  v17.m128i_i64[0] = v11;
  v12 = *(unsigned int *)(a1 + 448);
  v17.m128i_i64[0] = a3;
  v13 = (__m128i)_mm_loadh_ps((const double *)v17.m128i_i64);
  if ( v12 + 1 > v8 )
  {
    v17 = v13;
    sub_2237220(a1 + 440, a1 + 456, v12 + 1, 16);
    v12 = *(unsigned int *)(a1 + 448);
    v13 = _mm_load_si128(&v17);
  }
  *(__m128i *)(*(_QWORD *)(a1 + 440) + 16 * v12) = v13;
  ++*(_DWORD *)(a1 + 448);
  v14 = *(_QWORD *)(a1 + 176);
  v15 = *(_DWORD *)sub_E21760(v14, 8);
  sub_E21790(v14, 8);
  *(_DWORD *)sub_D0D1D0((__int64)v21) = v15;
  sub_E24D00(v21);
  if ( v24[0] > 1u )
    sub_A4F8E0(v24);
  sub_E232A0(v21);
  return 1;
}
