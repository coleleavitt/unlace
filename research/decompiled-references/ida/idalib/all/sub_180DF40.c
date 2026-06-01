__m128i *__fastcall sub_180DF40(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r13
  unsigned __int64 *v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rax
  __m128i *v22; // rbx
  __int64 v24; // r13
  __int64 *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r14
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v34[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v36; // [rsp+30h] [rbp-98h] BYREF
  char v37; // [rsp+88h] [rbp-40h]
  unsigned int v38; // [rsp+90h] [rbp-38h]
  char v39; // [rsp+94h] [rbp-34h]

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_13;
  v8 = a2;
  v10 = sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
  v12 = *v10;
  v13 = *v10 + 8LL * *((unsigned int *)v10 + 2);
  if ( v12 >= v13 )
  {
    if ( v12 == v13 )
      goto LABEL_8;
    if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 321 )
    {
      v14 = (__int64 *)(v13 + 8);
      do
      {
        v11 = (__int64)v14;
        if ( (__int64 *)v12 == v14 )
          goto LABEL_8;
        v15 = *v14++;
      }
      while ( *(_WORD *)(v15 + 36) != 321 );
    }
LABEL_22:
    v24 = *(_QWORD *)v12;
    if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 321 )
    {
      v25 = (__int64 *)(v12 + 8);
      do
        v24 = *v25++;
      while ( *(_WORD *)(v24 + 36) != 321 );
    }
    sub_168B9F0((__int64)v34, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x7Fu, 0);
    if ( v37 )
    {
      sub_AE9DF0(&v36, a4, 5u);
    }
    else if ( v39 )
    {
      v30 = sub_168B9E0(v34);
      v31 = v35;
      if ( v35 )
        v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 32LL))(v35);
      v33 = v31;
      v32 = sub_1587BC0(v30, &v33, v26, v27, v28, v29);
      sub_AE9DF0((unsigned __int8 **)(*v32 + 32LL * v38 + 8), a4, 5u);
    }
    v22 = nullptr;
    sub_15F7200(v34);
    sub_168B9F0((__int64)v34, (__int64 *)(a1 + 8), *(_DWORD *)(v24 + 24), 0x16CFu, 0);
    sub_15F7200(v34);
    return v22;
  }
  v11 = v12;
  a2 = *(_QWORD *)v12;
  if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) == 321 )
  {
LABEL_21:
    if ( v13 == v11 )
      goto LABEL_8;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v11 += 8;
    if ( v13 == v11 )
      break;
    a2 = *(_QWORD *)v11;
    if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) == 321 )
      goto LABEL_21;
  }
LABEL_8:
  if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
    goto LABEL_13;
  v16 = sub_B8C3D0(v8, a2, v12, v11, a5, a6);
  v17 = *v16;
  v18 = *v16 + 8LL * *((unsigned int *)v16 + 2);
  if ( *v16 < v18 )
  {
    v19 = *v16;
    while ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 53 )
    {
      v19 += 8LL;
      if ( v18 == v19 )
        goto LABEL_13;
    }
    if ( v18 != v19 )
      return nullptr;
    goto LABEL_13;
  }
  if ( v17 == v18 )
  {
LABEL_13:
    v20 = *(_QWORD **)(a1 + 248);
    v21 = v20[294];
    v20[304] += 40LL;
    v22 = (__m128i *)((v21 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v20[295] >= (unsigned __int64)&v22[2].m128i_u64[1] && v21 )
      v20[294] = (char *)v22 + 40;
    else
      v22 = (__m128i *)sub_986170((__int64)(v20 + 294), 40, 40, 3, a5, a6);
    sub_B095D0(v22, *(_QWORD *)(a1 + 248), a3);
    return v22;
  }
  while ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 53 )
  {
    v18 += 8LL;
    if ( v17 == v18 )
      goto LABEL_13;
  }
  return nullptr;
}
