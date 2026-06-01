char __fastcall sub_6878D0(
        const __m128i *a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v12; // r12
  bool (__fastcall *v13)(__int64, __int64); // rdx
  _DWORD *v14; // rdx
  __int64 (__fastcall *v15)(const __m128i *, __int64, int, double, double, double, double, double, double, double, __m128); // rax
  __int64 v16; // rax
  double v17; // xmm4_8
  double v18; // xmm5_8
  bool (__fastcall *v19)(__int64, __int64); // rax
  _DWORD *v20; // rax
  __int64 v22; // rsi
  int v23; // ecx
  _DWORD *v24; // rdx
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 *v30; // rcx
  int v31; // edi
  unsigned int v32; // edx
  __int64 *v33; // rsi
  __int64 v34; // rdx
  __int64 *v35; // r8
  __int64 *i; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v40[2]; // [rsp+10h] [rbp-58h] BYREF
  __m128i v41; // [rsp+20h] [rbp-48h] BYREF

  v12 = sub_15D1F10(a2);
  v13 = *(bool (__fastcall **)(__int64, __int64))(a1->m128i_i64[0] + 56);
  if ( v13 != sub_676470 )
  {
    if ( !v13((__int64)a1, v12) )
      goto LABEL_23;
LABEL_14:
    v25 = sub_679460((__int64)a1, v12);
    v26 = *(_QWORD *)(a1[1].m128i_i64[1] + 64);
    v27 = sub_67B850((__int64 *)a1[1].m128i_i64[0], (unsigned int *)a2);
    sub_1374250(v40, v26, v27);
    v28 = v40[0];
    v29 = *(unsigned int *)(v25 + 8);
    v30 = *(__int64 **)v25;
    v31 = *(_DWORD *)(v40[0] + 12LL);
    v32 = v29 - 1;
    v29 *= 16;
    v33 = (__int64 *)(*(_QWORD *)v25 + v29);
    v34 = 16LL * (v31 & v32);
    v35 = (__int64 *)(*(_QWORD *)v25 + v34);
    if ( v34 != v29 )
    {
      for ( i = (__int64 *)(*(_QWORD *)v25 + v34); v33 != i; i += 2 )
      {
        v37 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v37 + 12) == v31 && v40[0] == v37 )
            goto LABEL_22;
        }
        else if ( !v37 )
        {
          goto LABEL_21;
        }
      }
    }
    if ( v30 != v35 )
    {
      v38 = *v30;
      if ( (unsigned __int64)*v30 <= 1 )
        goto LABEL_36;
LABEL_32:
      if ( *(_DWORD *)(v38 + 12) == v31 && v40[0] == v38 )
        goto LABEL_22;
      do
      {
        v30 += 2;
        if ( v35 == v30 )
          break;
        v38 = *v30;
        if ( (unsigned __int64)*v30 > 1 )
          goto LABEL_32;
LABEL_36:
        ;
      }
      while ( v38 );
    }
LABEL_21:
    ++*(_DWORD *)(v40[0] + 8LL);
    v39 = v28;
    sub_675F80(&a1[3].m128i_i64[1], &v39);
    v41 = (__m128i)v40[0];
    sub_686B20(v25, &v41);
    v28 = v40[0];
LABEL_22:
    sub_675460(v28, v40[1]);
LABEL_23:
    v15 = *(__int64 (__fastcall **)(const __m128i *, __int64, int, double, double, double, double, double, double, double, __m128))(a1->m128i_i64[0] + 24);
    if ( v15 == sub_686E20 )
      goto LABEL_5;
    goto LABEL_24;
  }
  v14 = *(_DWORD **)(v12 + 24);
  if ( v14 && *v14 == 4 )
    goto LABEL_14;
  v15 = *(__int64 (__fastcall **)(const __m128i *, __int64, int, double, double, double, double, double, double, double, __m128))(a1->m128i_i64[0] + 24);
  if ( v15 == sub_686E20 )
  {
LABEL_5:
    v16 = sub_15D1F10(a2);
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_6;
    v22 = *(_QWORD *)(a2 + 16);
    v23 = *(_DWORD *)(a2 + 24);
    v24 = *(_DWORD **)(v22 + 24);
    if ( v24 )
    {
      if ( *v24 != -1 )
        goto LABEL_6;
      if ( !v23 )
        goto LABEL_39;
    }
    else if ( !v23 )
    {
      return 1;
    }
    sub_681BA0(a1, v22, (unsigned int *)a2, v16, a3, a4, a5, a6, v17, v18, a9, a10);
    goto LABEL_25;
  }
LABEL_24:
  ((void (__fastcall *)(const __m128i *, __int64, _QWORD))v15)(a1, a2, 0);
LABEL_25:
  if ( !*(_WORD *)(a2 + 4) )
  {
    v24 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v24 )
      return 1;
    if ( *v24 == -1 )
    {
      if ( *(_DWORD *)(a2 + 24) )
        return 1;
LABEL_39:
      if ( *v24 == -1 )
        return 1;
    }
  }
LABEL_6:
  v19 = *(bool (__fastcall **)(__int64, __int64))(a1->m128i_i64[0] + 56);
  if ( v19 != sub_676470 )
    return v19((__int64)a1, v12);
  v20 = *(_DWORD **)(v12 + 24);
  return v20 && *v20 == 4;
}

