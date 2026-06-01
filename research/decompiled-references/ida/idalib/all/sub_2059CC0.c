unsigned __int64 __fastcall sub_2059CC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r15
  int v5; // ebx
  int v7; // r9d
  __int64 *v8; // r10
  unsigned int i; // r8d
  __int64 *v10; // r14
  __int64 v11; // rbp
  __int64 v12; // rax
  __int16 v13; // dx
  unsigned int v14; // r8d
  unsigned int v15; // eax
  _QWORD *v16; // r11
  _QWORD *v17; // rdi
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  char v25; // al
  __int64 *v26; // r10
  __int64 v27; // rcx
  int v28; // r9d
  unsigned int v29; // r8d
  char v30; // al
  __int64 v31; // rdx
  size_t v32; // rdx
  int v33; // eax
  bool v34; // zf
  unsigned int v35; // eax
  __int64 *v36; // [rsp+0h] [rbp-88h]
  __int64 v37; // [rsp+0h] [rbp-88h]
  unsigned int v38; // [rsp+0h] [rbp-88h]
  unsigned int v39; // [rsp+0h] [rbp-88h]
  unsigned int v40; // [rsp+0h] [rbp-88h]
  unsigned int v41; // [rsp+Ch] [rbp-7Ch]
  int v42; // [rsp+Ch] [rbp-7Ch]
  int v43; // [rsp+Ch] [rbp-7Ch]
  int v44; // [rsp+Ch] [rbp-7Ch]
  int v45; // [rsp+10h] [rbp-78h]
  __int64 v46; // [rsp+10h] [rbp-78h]
  __int64 v47; // [rsp+10h] [rbp-78h]
  __int64 v48; // [rsp+10h] [rbp-78h]
  __int64 v49; // [rsp+18h] [rbp-70h]
  __int64 *v50; // [rsp+18h] [rbp-70h]
  __int64 *v51; // [rsp+18h] [rbp-70h]
  __int64 *v52; // [rsp+18h] [rbp-70h]
  __m128 v53; // [rsp+20h] [rbp-68h] BYREF
  __int64 v54; // [rsp+30h] [rbp-58h] BYREF
  char v55; // [rsp+40h] [rbp-48h]

  v2 = a1;
  v3 = *(unsigned int *)(a1 + 16);
  v4 = *(_QWORD *)a1;
  if ( !(_DWORD)v3 )
  {
LABEL_25:
    sub_2059C50(&v53, (_QWORD *)(v4 + 8 * v3), (_QWORD *)(v4 + 8 * v3), v2, 1);
    return v53.m128_u64[0];
  }
  v5 = v3 - 1;
  v7 = 1;
  v8 = &v54;
  for ( i = v5 & *(_DWORD *)a2; ; i = v5 & v14 )
  {
    v10 = (__int64 *)(v4 + 8LL * i);
    v11 = *v10;
    v12 = *v10;
    if ( *v10 != -4096 && v11 != -8192 )
      break;
LABEL_23:
    if ( v12 == -4096 )
    {
      v4 = *(_QWORD *)v2;
      v3 = *(unsigned int *)(v2 + 16);
      goto LABEL_25;
    }
LABEL_7:
    v14 = v7 + i;
    ++v7;
  }
  if ( *(_QWORD *)(a2 + 8) != *(_QWORD *)(v11 + 8) )
    goto LABEL_7;
  v13 = *(_WORD *)(v11 + 2);
  if ( *(unsigned __int8 *)(a2 + 16) != v13 )
    goto LABEL_7;
  if ( *(_BYTE *)(a2 + 17) != *(_BYTE *)(v11 + 1) >> 1 )
    goto LABEL_7;
  v15 = *(_DWORD *)(v11 + 4) & 0x7FFFFFF;
  if ( *(_QWORD *)(a2 + 32) != v15 )
    goto LABEL_7;
  if ( v15 )
  {
    v16 = *(_QWORD **)(a2 + 24);
    v17 = (_QWORD *)(v11 - 32LL * v15);
    if ( *v17 != *v16 )
      goto LABEL_7;
    v18 = 8LL * (v15 - 1);
    v19 = 0;
    v20 = v18;
    while ( v19 != v20 )
    {
      v21 = v16[v19 / 8 + 1];
      v19 += 8LL;
      if ( v21 != v17[v19 / 2] )
        goto LABEL_7;
    }
    v10 = (__int64 *)(v4 + 8LL * i);
  }
  v22 = *(_QWORD *)(a2 + 48);
  if ( v13 == 63 )
  {
    v31 = *(unsigned int *)(v11 + 32);
    if ( v31 != v22 )
      goto LABEL_7;
    v32 = 4 * v31;
    if ( v32 )
    {
      v50 = v8;
      v46 = v2;
      v42 = v7;
      v38 = i;
      v33 = memcmp(*(const void **)(a2 + 40), *(const void **)(v11 + 24), v32);
      i = v38;
      v7 = v42;
      v2 = v46;
      v8 = v50;
      if ( v33 )
        goto LABEL_7;
    }
    v23 = *(_QWORD *)(a2 + 56);
LABEL_38:
    if ( v23 )
      goto LABEL_7;
    v55 = 0;
LABEL_21:
    if ( !*(_BYTE *)(a2 + 96) )
      goto LABEL_33;
LABEL_22:
    v12 = v11;
    goto LABEL_23;
  }
  if ( v22 )
    goto LABEL_7;
  v23 = *(_QWORD *)(a2 + 56);
  if ( v13 != 34 )
    goto LABEL_38;
  if ( v23 != *(_QWORD *)(v11 + 24) )
    goto LABEL_7;
  v55 = 0;
  if ( !*(_BYTE *)(v11 + 72) )
    goto LABEL_21;
  v51 = v8;
  v47 = v2;
  v43 = v7;
  v39 = i;
  sub_20150B0((__int64)&v53, v11 + 40);
  v34 = *(_BYTE *)(a2 + 96) == 0;
  v55 = 1;
  v29 = v39;
  v28 = v43;
  v27 = v47;
  v26 = v51;
  if ( v34 )
  {
    sub_200ED00((__int64)&v53);
    v11 = *v10;
    i = v39;
    v7 = v43;
    v2 = v47;
    v8 = v51;
    goto LABEL_22;
  }
  v35 = *(_DWORD *)(a2 + 72);
  if ( v35 != v53.m128_i32[2]
    || (v35 <= 0x40
      ? (v25 = *(_QWORD *)(a2 + 64) == v53.m128_u64[0])
      : (v25 = sub_2205D70(a2 + 64, &v53), v26 = v51, v27 = v47, v28 = v43, v29 = v39),
        !v25
     || (*(_DWORD *)(a2 + 88) <= 0x40u
       ? (__int64 *)(v30 = *(_QWORD *)(a2 + 80) == v54)
       : (v49 = v27,
          v45 = v28,
          v41 = v29,
          v36 = v26,
          v30 = sub_2205D70(a2 + 80, v26),
          v27 = v49,
          v28 = v45,
          v29 = v41,
          v26 = v36),
         !v30)) )
  {
    v52 = v26;
    v48 = v27;
    v44 = v28;
    v40 = v29;
    sub_200ED00((__int64)&v53);
    v12 = *v10;
    i = v40;
    v7 = v44;
    v2 = v48;
    v8 = v52;
    goto LABEL_23;
  }
  v37 = v27;
  sub_200ED00((__int64)&v53);
  v2 = v37;
LABEL_33:
  sub_2059C50(&v53, v10, (_QWORD *)(*(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 16)), v2, 1);
  return v53.m128_u64[0];
}
