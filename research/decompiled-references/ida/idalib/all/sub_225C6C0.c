void __fastcall sub_225C6C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r13
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rcx
  size_t v13; // r11
  __int64 v14; // r14
  __int64 v15; // r12
  size_t v16; // r12
  size_t v17; // rdx
  __int64 v18; // r12
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // rcx
  void *v22; // rdx
  size_t v23; // r8
  void *v24; // rdx
  char v25; // al
  void *v26; // rdx
  __int64 v27; // r15
  __int64 v28; // r14
  __int64 v29; // r9
  int v30; // eax
  size_t v31; // rdx
  size_t v32; // r13
  __int64 v33; // r13
  __m128i *v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // [rsp+0h] [rbp-C8h]
  __int64 v37; // [rsp+0h] [rbp-C8h]
  __int64 v38; // [rsp+0h] [rbp-C8h]
  __int64 v39; // [rsp+8h] [rbp-C0h]
  size_t v40; // [rsp+8h] [rbp-C0h]
  size_t v41; // [rsp+18h] [rbp-B0h]
  __int64 v42; // [rsp+20h] [rbp-A8h]
  __int64 v43; // [rsp+28h] [rbp-A0h]
  void *s2; // [rsp+40h] [rbp-88h] BYREF
  size_t v47; // [rsp+48h] [rbp-80h]
  __m128i si128; // [rsp+50h] [rbp-78h] BYREF
  void *v49[2]; // [rsp+60h] [rbp-68h] BYREF
  __m128i v50; // [rsp+70h] [rbp-58h] BYREF
  char v51; // [rsp+80h] [rbp-48h]

  v4 = a4;
  v43 = (a3 - 1) / 2;
  v6 = a1 + 72 * a2;
  if ( a2 >= v43 )
  {
    v21 = a2;
    v19 = v6 + 32;
    v20 = a1 + 72 * a2;
    goto LABEL_15;
  }
  v7 = a2;
  v8 = a1 + 72 * a2;
  v9 = v6 + 32;
  while ( 1 )
  {
    v12 = 2 * (v7 + 1);
    v14 = v12 - 1;
    v11 = a1 + 144 * (v7 + 1);
    v6 = a1 + 72 * (v12 - 1);
    v16 = *(_QWORD *)(v11 + 8);
    v13 = *(_QWORD *)(v6 + 8);
    v17 = v13;
    if ( v16 <= v13 )
      v17 = *(_QWORD *)(v11 + 8);
    if ( !v17
      || (v42 = v7,
          v41 = *(_QWORD *)(v6 + 8),
          v39 = 2 * (v7 + 1),
          v36 = a1 + 144 * (v7 + 1),
          v10 = memcmp(*(const void **)v11, *(const void **)v6, v17),
          v11 = v36,
          v12 = v39,
          v13 = v41,
          v7 = v42,
          !v10) )
    {
      v18 = v16 - v13;
      if ( v18 > 0x7FFFFFFF )
      {
        v6 = v11;
        v14 = v12;
        goto LABEL_6;
      }
      if ( v18 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_6;
      v10 = v18;
    }
    if ( v10 >= 0 )
    {
      v6 = v11;
      v14 = v12;
    }
LABEL_6:
    v15 = a1 + 72 * v7;
    sub_A0AAD0(v8, (_QWORD *)v6);
    sub_A0AAD0(v9, (_QWORD *)(v6 + 32));
    v7 = v14;
    *(_BYTE *)(v15 + 64) = *(_BYTE *)(v6 + 64);
    if ( v14 >= v43 )
      break;
    v9 = v6 + 32;
    v8 = v6;
  }
  v19 = v6 + 32;
  v4 = a4;
  v20 = v6;
  v21 = v14;
LABEL_15:
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v21 )
  {
    v38 = 2 * v21 + 1;
    v20 = a1 + 72 * v38;
    sub_A0AAD0(v6, (_QWORD *)v20);
    v35 = v19;
    v19 = v20 + 32;
    sub_A0AAD0(v35, (_QWORD *)(v20 + 32));
    v21 = v38;
    *(_BYTE *)(v6 + 64) = *(_BYTE *)(v20 + 64);
    v6 = a1 + 72 * v38;
  }
  v22 = *(void **)v4;
  s2 = &si128;
  if ( v22 == (void *)(v4 + 16) )
  {
    si128 = _mm_load_si128((const __m128i *)(v4 + 16));
  }
  else
  {
    s2 = v22;
    si128.m128i_i64[0] = *(_QWORD *)(v4 + 16);
  }
  v23 = *(_QWORD *)(v4 + 8);
  v24 = *(void **)(v4 + 32);
  *(_QWORD *)v4 = v4 + 16;
  *(_QWORD *)(v4 + 8) = 0;
  v47 = v23;
  *(_BYTE *)(v4 + 16) = 0;
  v49[0] = &v50;
  if ( v24 == (void *)(v4 + 48) )
  {
    v50 = _mm_load_si128((const __m128i *)(v4 + 48));
  }
  else
  {
    v49[0] = v24;
    v50.m128i_i64[0] = *(_QWORD *)(v4 + 48);
  }
  *(_QWORD *)(v4 + 32) = v4 + 48;
  v25 = *(_BYTE *)(v4 + 64);
  v26 = *(void **)(v4 + 40);
  *(_BYTE *)(v4 + 48) = 0;
  v51 = v25;
  *(_QWORD *)(v4 + 40) = 0;
  v49[1] = v26;
  v27 = (v21 - 1) / 2;
  if ( v21 > a2 )
  {
    v28 = v21;
    v29 = v20;
    while ( 1 )
    {
      v31 = v23;
      v6 = a1 + 72 * v27;
      v32 = *(_QWORD *)(v6 + 8);
      if ( v32 <= v23 )
        v31 = *(_QWORD *)(v6 + 8);
      if ( v31 )
      {
        v40 = v23;
        v37 = v29;
        v30 = memcmp(*(const void **)v6, s2, v31);
        v29 = v37;
        v23 = v40;
        if ( v30 )
          goto LABEL_26;
      }
      v33 = v32 - v23;
      if ( v33 > 0x7FFFFFFF )
      {
LABEL_34:
        v20 = v29;
        v6 = a1 + 72 * v28;
        goto LABEL_35;
      }
      if ( v33 >= (__int64)0xFFFFFFFF80000000LL )
        break;
LABEL_27:
      sub_A0AAD0(v29, (_QWORD *)(a1 + 72 * v27));
      sub_A0AAD0(v19, (_QWORD *)(v6 + 32));
      *(_BYTE *)(a1 + 72 * v28 + 64) = *(_BYTE *)(v6 + 64);
      if ( a2 >= v27 )
      {
        v19 = v6 + 32;
        v20 = a1 + 72 * v27;
        goto LABEL_35;
      }
      v23 = v47;
      v28 = v27;
      v29 = a1 + 72 * v27;
      v19 = v6 + 32;
      v27 = (v27 - 1) / 2;
    }
    v30 = v33;
LABEL_26:
    if ( v30 >= 0 )
      goto LABEL_34;
    goto LABEL_27;
  }
LABEL_35:
  sub_A0AAD0(v20, &s2);
  sub_A0AAD0(v19, v49);
  v34 = (__m128i *)v49[0];
  *(_BYTE *)(v6 + 64) = v51;
  if ( v34 != &v50 )
    operator delete(v34);
  if ( s2 != &si128 )
    operator delete(s2);
}
