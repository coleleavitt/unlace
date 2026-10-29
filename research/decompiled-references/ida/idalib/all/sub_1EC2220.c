__int64 __fastcall sub_1EC2220(__int64 a1, unsigned int a2)
{
  _DWORD *v2; // r11
  __int64 v3; // rdx
  _DWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r10
  _DWORD *v7; // r8
  _DWORD *v8; // rax
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 *v11; // r13
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rbx
  _QWORD *v15; // rsi
  __int64 v16; // r14
  unsigned int v17; // r8d
  __int64 v18; // rdx
  char v19; // r8
  char v20; // cl
  char v21; // r13
  __int64 v22; // rsi
  __int64 v23; // r13
  int v24; // r9d
  __int64 v25; // rdx
  _QWORD *v26; // rsi
  _DWORD *v27; // rax
  _DWORD *v28; // rdx
  int v29; // eax
  _QWORD *v30; // rax
  __int64 result; // rax
  _DWORD *v32; // rax
  _DWORD *v33; // rdx
  __int64 v34; // [rsp+10h] [rbp-B8h]
  char v35; // [rsp+1Fh] [rbp-A9h]
  __int64 v36; // [rsp+20h] [rbp-A8h]
  __int64 v37; // [rsp+20h] [rbp-A8h]
  int v38; // [rsp+28h] [rbp-A0h]
  __int64 v39; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v40; // [rsp+30h] [rbp-98h]
  char v41; // [rsp+30h] [rbp-98h]
  char v42; // [rsp+40h] [rbp-88h]
  int v43; // [rsp+40h] [rbp-88h]
  __int64 *v45; // [rsp+48h] [rbp-80h]
  _QWORD *v46; // [rsp+58h] [rbp-70h] BYREF
  __int64 v47; // [rsp+60h] [rbp-68h] BYREF
  char v48; // [rsp+68h] [rbp-60h]
  __m128i v49; // [rsp+70h] [rbp-58h] BYREF
  __int64 v50; // [rsp+80h] [rbp-48h]

  v2 = *(_DWORD **)(a1 + 1648);
  v3 = 16LL * *(unsigned int *)(a1 + 1656);
  v4 = v2;
  v5 = v3 >> 4;
  if ( v3 )
  {
    do
    {
      while ( 1 )
      {
        v6 = v5 >> 1;
        v7 = &v4[4 * (v5 >> 1)];
        if ( 0x7FFFFFFF - a2 < *v7 )
          break;
        v4 = v7 + 4;
        v5 = v5 - v6 - 1;
        if ( v5 <= 0 )
        {
          v8 = v7;
          if ( v2 == v4 )
            goto LABEL_21;
          goto LABEL_5;
        }
      }
      v5 >>= 1;
    }
    while ( v6 );
    v8 = v4 - 4;
    if ( v2 == v4 )
      goto LABEL_21;
LABEL_5:
    v9 = *((_QWORD *)v8 + 1);
    v10 = *(unsigned int *)(v9 + 1640);
    if ( *(_DWORD *)(v9 + 1640) )
      goto LABEL_6;
LABEL_22:
    v29 = -1;
    return (unsigned int)(*(_DWORD *)(v9 + 1644) + v29);
  }
LABEL_21:
  v9 = *(_QWORD *)&v4[(unsigned __int64)v3 / 4 + 2];
  v10 = *(unsigned int *)(v9 + 1640);
  if ( !*(_DWORD *)(v9 + 1640) )
    goto LABEL_22;
LABEL_6:
  v35 = 0;
  v34 = 0;
  while ( 1 )
  {
    v15 = *(_QWORD **)(a1 + 80);
    v14 = v10 >> 1;
    v16 = (v10 >> 1) + v34;
    v17 = -2 - (v16 + *(_DWORD *)(v9 + 1644));
    v18 = *(_QWORD *)(v15[49] + 8LL * (v17 >> 6));
    v36 = 8LL * (v17 >> 6);
    if ( _bittest64(&v18, (-2 - ((_BYTE)v16 + *(_BYTE *)(v9 + 1644))) & 0x3F) )
    {
      v11 = (__int64 *)(v15[34] + 8 * ((unsigned __int64)(int)v17 >> 5));
      v12 = *v11;
      v13 = 24LL * (v17 & 0x1F);
      if ( !*v11 )
        goto LABEL_16;
      goto LABEL_8;
    }
    v42 = v17 & 0x3F;
    v40 = (int)v17;
    v38 = -2 - (v16 + *(_DWORD *)(v9 + 1644));
    sub_1EB0040((__int64)&v47, v9, v16);
    v19 = v38;
    v20 = v42;
    v21 = v48 & 1;
    if ( (v48 & 1) != 0 )
      break;
    v22 = *(_QWORD *)(a1 + 80);
    v49.m128i_i64[1] = 0;
    v23 = 8 * (v40 >> 5);
    v24 = v47 & 0x7FFFFFFF;
    v25 = *(_QWORD *)(v23 + *(_QWORD *)(v22 + 272));
    if ( !v25 )
    {
      v45 = (__int64 *)(v23 + *(_QWORD *)(v22 + 272));
      v43 = v47 & 0x7FFFFFFF;
      v41 = v20;
      v32 = (_DWORD *)sub_1EC2080((__int64 *)(*(_QWORD *)(v22 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
      v19 = v38;
      v20 = v41;
      v24 = v43;
      v33 = v32 + 192;
      *v45 = (__int64)v32;
      do
      {
        *v32 = 0;
        v32 += 6;
        *((_OWORD *)v32 - 1) = 0;
        *((_QWORD *)v32 - 1) = 0;
      }
      while ( v33 != v32 );
      v25 = *v45;
    }
    v50 = 0;
    v39 = 24LL * (v19 & 0x1F);
    v49.m128i_i32[0] = v24 | v49.m128i_i32[0] & 0x80000000;
    v49.m128i_i8[3] &= ~0x80u;
    *(__m128i *)(v25 + v39) = _mm_load_si128(&v49);
    *(_QWORD *)(v25 + v39 + 16) = 0;
    v26 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 392LL) + v36);
    *v26 |= 1LL << v20;
    sub_A0AE90(&v47);
    v15 = *(_QWORD **)(a1 + 80);
    v13 = v39;
    v11 = (__int64 *)(v15[34] + v23);
    v12 = *v11;
    if ( !*v11 )
    {
LABEL_16:
      v37 = v13;
      v27 = (_DWORD *)sub_1EC2080((__int64 *)(v15[36] & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
      v13 = v37;
      *v11 = (__int64)v27;
      v28 = v27 + 192;
      do
      {
        *v27 = 0;
        v27 += 6;
        *((_OWORD *)v27 - 1) = 0;
        *((_QWORD *)v27 - 1) = 0;
      }
      while ( v27 != v28 );
      v12 = *v11;
    }
LABEL_8:
    if ( (*(_DWORD *)(v12 + v13) & 0x7FFFFFFFu) <= a2 )
    {
      v34 = v16 + 1;
      v14 = v10 - v14 - 1;
    }
    if ( v14 <= 0 )
      goto LABEL_26;
LABEL_11:
    v10 = v14;
  }
  v30 = (_QWORD *)v47;
  v47 = 0;
  v46 = v30;
  sub_1EBF0A0(a1, &v46);
  if ( v46 )
    (*(void (__fastcall **)(_QWORD *))(*v46 + 8LL))(v46);
  sub_A0AE90(&v47);
  v35 = v21;
  if ( v14 > 0 )
    goto LABEL_11;
LABEL_26:
  result = 0;
  if ( !v35 )
  {
    v29 = v34 - 1;
    return (unsigned int)(*(_DWORD *)(v9 + 1644) + v29);
  }
  return result;
}
