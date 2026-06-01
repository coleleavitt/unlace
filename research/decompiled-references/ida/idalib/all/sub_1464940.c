void __fastcall sub_1464940(__int64 a1, __m128i a2, double a3)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdi
  int v9; // r12d
  __int64 v10; // rdx
  size_t v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  int v14; // eax
  bool v15; // zf
  signed int v16; // esi
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // r13
  _BYTE *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  unsigned int v28; // eax
  __int64 *v29; // rsi
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // r13
  _QWORD *v34; // rax
  __int64 v35; // rdi
  int v36; // eax
  int v37; // r11d
  __int64 *v38; // r10
  int v39; // eax
  __int64 v40; // r9
  __int64 v41; // r8
  __int64 *v42; // [rsp+8h] [rbp-90h]
  __int64 v43; // [rsp+18h] [rbp-80h] BYREF
  __m128 v44; // [rsp+20h] [rbp-78h] BYREF
  char v45; // [rsp+38h] [rbp-60h]
  __int16 v46; // [rsp+40h] [rbp-58h]

  v4 = *(unsigned int *)(*(_QWORD *)(a1 + 88) + 520LL);
  if ( (int)v4 < 0 )
    goto LABEL_2;
  sub_1439120(a1, v4, 0, 0, 0, 1);
  v16 = *(_DWORD *)(a1 + 1000);
  if ( v16 > 0 )
    sub_13D1D70(*(_QWORD *)(a1 + 1112), v16, *(_BYTE *)(a1 + 1004));
  if ( !(_DWORD)v4 )
    goto LABEL_34;
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 184LL) + 24 * v4;
  if ( !v17 )
    goto LABEL_34;
  if ( *(char *)(v17 + 3) < 0 )
    goto LABEL_34;
  v18 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  v19 = *(_QWORD *)(v18 + 8);
  if ( !v19 )
    goto LABEL_34;
  v20 = (_BYTE *)sub_13C2790(*(_QWORD *)(a1 + 104), *(_QWORD *)(v18 + 8));
  *v20 |= 1u;
  while ( 1 )
  {
    v23 = *(_QWORD *)(v19 + 8);
    if ( !v23 )
      break;
    v23 &= 0xFFFFFFFFFFFFFFF8LL;
    v24 = *(_QWORD *)(v19 + 8) & 4LL;
    v19 = v23;
    if ( !v24 || !v23 )
      goto LABEL_26;
  }
  v19 = 0;
LABEL_26:
  v25 = *(unsigned int *)(a1 + 1728);
  v43 = v19;
  v26 = a1 + 1712;
  if ( !(_DWORD)v25 )
  {
    v44.m128_u64[0] = 0;
    goto LABEL_42;
  }
  v27 = *(_QWORD *)(a1 + 1712);
  v28 = (v25 - 1) & (((unsigned int)v23 >> 4) ^ ((unsigned int)v23 >> 9));
  v29 = (__int64 *)(v27 + 8LL * v28);
  v30 = *v29;
  if ( *v29 == v19 )
    goto LABEL_28;
  v37 = 1;
  v38 = nullptr;
  if ( v30 == -4096 )
  {
LABEL_49:
    v39 = *(_DWORD *)(a1 + 1720);
    v21 = (unsigned int)(3 * v25);
    v44.m128_u64[0] = (unsigned __int64)v29;
    v36 = v39 + 1;
    v22 = (unsigned int)(4 * v36);
    if ( (unsigned int)v22 < (unsigned int)v21 )
    {
      v40 = (unsigned int)v25 >> 3;
      v41 = (unsigned int)(v25 - *(_DWORD *)(a1 + 1724) - v36);
      if ( (unsigned int)v41 > (unsigned int)v40 )
        goto LABEL_44;
      v42 = (__int64 *)(a1 + 1712);
      sub_1024740(a1 + 1712, v25, v25, v26, v41, v40);
LABEL_43:
      sub_101E950(v42, &v43, &v44);
      v19 = v43;
      v27 = *(_QWORD *)(a1 + 1712);
      v25 = *(unsigned int *)(a1 + 1728);
      v29 = (__int64 *)v44.m128_u64[0];
      v26 = (__int64)v42;
      v36 = *(_DWORD *)(a1 + 1720) + 1;
LABEL_44:
      v15 = *v29 == -4096;
      *(_DWORD *)(a1 + 1720) = v36;
      if ( !v15 )
        --*(_DWORD *)(a1 + 1724);
      *v29 = v19;
      sub_101F7C0(&v44, v29, (_QWORD *)(v27 + 8 * v25), v26, 1);
LABEL_34:
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 21LL) & 4) == 0 )
        goto LABEL_2;
      goto LABEL_29;
    }
LABEL_42:
    v42 = (__int64 *)(a1 + 1712);
    sub_1024740(a1 + 1712, 2 * v25, v25, v26, v21, v22);
    goto LABEL_43;
  }
  while ( 1 )
  {
    if ( !v38 && v30 == -8192 )
      v38 = v29;
    v28 = (v25 - 1) & (v37 + v28);
    v29 = (__int64 *)(v27 + 8LL * v28);
    v30 = *v29;
    if ( v19 == *v29 )
      break;
    if ( v30 == -4096 )
    {
      if ( v38 )
        v29 = v38;
      goto LABEL_49;
    }
    ++v37;
  }
LABEL_28:
  sub_101F7C0(&v44, v29, (_QWORD *)(v27 + 8 * v25), v26, 1);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 21LL) & 4) == 0 )
    goto LABEL_2;
LABEL_29:
  v31 = operator new(0x18u);
  v32 = *(_QWORD *)(a1 + 1192);
  v33 = v31;
  *(_QWORD *)(v31 + 8) = a1;
  *(_WORD *)(v31 + 16) = 1;
  *(_QWORD *)v31 = &off_2C44860;
  *(_QWORD *)(a1 + 872) = v31;
  if ( v32 )
  {
    *(_QWORD *)(a1 + 1192) = 0;
    v34 = (_QWORD *)operator new(0x18u);
    v35 = *(_QWORD *)(a1 + 1192);
    v34[1] = v33;
    v34[2] = v32;
    *v34 = &off_2BB2860;
    *(_QWORD *)(a1 + 1192) = v34;
    if ( v35 )
      *(double *)a2.m128i_i64 = (*(double (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
  }
  else
  {
    *(_QWORD *)(a1 + 1192) = v31;
  }
  sub_13DB670((__int64)&v44, *(_QWORD *)(a1 + 1112), a2, a3);
  if ( v45 )
    *(_DWORD *)(a1 + 864) = v44.m128_i32[0];
LABEL_2:
  v5 = *(_QWORD *)(a1 + 2360);
  v6 = *(_QWORD *)(a1 + 2368);
  v44.m128_u64[0] = (unsigned __int64)"<built-in>";
  v46 = 259;
  sub_22307C0(&v43, v5, v6, &v44);
  v7 = v43;
  v8 = *(_QWORD **)(a1 + 88);
  v43 = 0;
  v44.m128_u64[0] = v7;
  v9 = sub_10270C0(v8, (__int64 *)&v44, 0, 0, 0, 0, a2);
  if ( v44.m128_u64[0] )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v44.m128_u64[0] + 8LL))(v44.m128_u64[0]);
  *(_DWORD *)(a1 + 2392) = v9;
  sub_1439120(a1, v9, 0, 0, 0, 1);
  v10 = *(_QWORD *)(a1 + 40);
  v11 = *(_QWORD *)(v10 + 88);
  if ( !v11 )
  {
    if ( *(_DWORD *)(a1 + 748) == 1 )
      goto LABEL_6;
LABEL_13:
    if ( !*(_BYTE *)(v10 + 76) || !*(_BYTE *)(a1 + 2400) )
    {
LABEL_6:
      v12 = v43;
      if ( !v43 )
        return;
      goto LABEL_7;
    }
LABEL_15:
    sub_145CA20(a1);
    goto LABEL_6;
  }
  v13 = sub_141EB20(
          a1,
          0,
          *(void **)(v10 + 80),
          v11,
          0,
          0,
          0,
          0,
          nullptr,
          nullptr,
          nullptr,
          nullptr,
          nullptr,
          nullptr,
          0,
          1,
          1);
  if ( v13 )
  {
    v14 = sub_1026F70(*(_QWORD *)(a1 + 88), v13, 0, 0, 0, 0, a2);
    v15 = *(_DWORD *)(a1 + 748) == 1;
    *(_DWORD *)(a1 + 2396) = v14;
    if ( v15 )
      goto LABEL_6;
    v10 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(v10 + 88) && v14 && *(_BYTE *)(a1 + 2401) )
      goto LABEL_15;
    goto LABEL_13;
  }
  sub_FC70B0((__int64)&v44, *(_QWORD *)(a1 + 48), 0, 1170);
  sub_AEC220(
    (unsigned __int8 **)&v44,
    *(_BYTE **)(*(_QWORD *)(a1 + 40) + 80LL),
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 88LL));
  sub_AEA040((__int64)&v44);
  v12 = v43;
  if ( v43 )
LABEL_7:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
}
