__int64 __fastcall sub_1E53170(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebp
  __int16 v5; // ax
  __int64 v6; // rax
  __int64 *v7; // r12
  char *v8; // rdx
  char v9; // cl
  __int64 v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rcx
  char *v13; // rdi
  char *v14; // rax
  char *v15; // rdi
  __int64 v16; // r9
  const __m128i *v17; // r15
  const __m128i *v18; // r14
  __int64 v19; // rax
  __m128i v20; // xmm0
  unsigned __int64 v21; // rsi
  _QWORD *v22; // rax
  char *v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  void **v27; // rdi
  unsigned int v28; // eax
  __m128i v29; // [rsp+0h] [rbp-118h] BYREF
  void **p_ptr; // [rsp+10h] [rbp-108h]
  __int64 v31; // [rsp+18h] [rbp-100h]
  void *v32; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v33; // [rsp+28h] [rbp-F0h]
  _BYTE v34[32]; // [rsp+30h] [rbp-E8h] BYREF
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-C0h]
  char v37; // [rsp+60h] [rbp-B8h] BYREF
  void *v38; // [rsp+80h] [rbp-98h] BYREF
  __int64 v39; // [rsp+88h] [rbp-90h]
  void **v40; // [rsp+90h] [rbp-88h]
  _BYTE v41[4]; // [rsp+98h] [rbp-80h] BYREF
  int v42; // [rsp+9Ch] [rbp-7Ch]

  v2 = 0;
  if ( (*a2 & 0x4000) == 0 )
    return v2;
  v31 = a1;
  v40 = &v32;
  v32 = v34;
  v33 = 0x200000000LL;
  v38 = off_2C6ECE0;
  v5 = *(_WORD *)a2;
  v41[0] = 0;
  v42 = -1;
  LODWORD(v39) = 16842752;
  if ( ((v5 + 509) & 0x1FFu) <= 0x7E )
    sub_BC97E0((__int64 *)&v38, (__int64)a2);
  v6 = (unsigned int)a2[4];
  v7 = (__int64 *)(a2 + 12);
  v8 = v41;
  v9 = 1;
  v38 = v41;
  v10 = (__int64)&a2[2 * v6 + 12];
  BYTE4(v40) = 1;
  v39 = 8;
  LODWORD(v40) = 0;
  if ( (_DWORD *)v10 != a2 + 12 )
  {
    while ( 1 )
    {
      v11 = *v7;
      if ( v9 )
      {
        v12 = 8LL * HIDWORD(v39);
        v13 = &v8[v12];
        if ( &v8[v12] != v8 )
        {
          v14 = v8;
          if ( v11 == *(_QWORD *)v8 )
            goto LABEL_14;
          while ( 1 )
          {
            v14 += 8;
            if ( v13 == v14 )
              break;
            if ( v11 == *(_QWORD *)v14 )
              goto LABEL_14;
          }
        }
        if ( HIDWORD(v39) < (unsigned int)v39 )
          break;
      }
      v14 = (char *)sub_2236760(&v38, v11);
      v9 = BYTE4(v40);
      v8 = (char *)v38;
      if ( BYTE4(v40) )
        goto LABEL_14;
      v15 = (char *)v38 + 8 * (unsigned int)v39;
LABEL_15:
      if ( v15 != v14 && (*(_QWORD *)v14 == -2 || *(_QWORD *)v14 == -1) )
      {
        do
          v14 += 8;
        while ( v15 != v14 && *(_QWORD *)v14 >= 0xFFFFFFFFFFFFFFFELL );
      }
      if ( (__int64 *)v10 == ++v7 )
        goto LABEL_21;
    }
    ++HIDWORD(v39);
    *(_QWORD *)v13 = v11;
    v8 = (char *)v38;
    v14 = (char *)v38 + v12;
LABEL_14:
    v15 = &v8[8 * HIDWORD(v39)];
    v9 = 1;
    goto LABEL_15;
  }
LABEL_21:
  p_ptr = &ptr;
  v16 = 16LL * (unsigned int)v33;
  ptr = &v37;
  v17 = (const __m128i *)((char *)v32 + v16);
  v36 = 0x200000000LL;
  if ( v32 == (char *)v32 + v16 )
  {
    v2 = 0;
    goto LABEL_44;
  }
  v18 = (const __m128i *)v32;
  while ( 1 )
  {
    v19 = v18->m128i_i64[0];
    v20 = _mm_loadu_si128(v18);
    v21 = 0;
    if ( v18->m128i_i64[0] )
    {
      v21 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v19 & 4) == 0 )
        v21 = 0;
    }
    if ( !v9 )
      break;
    v22 = v38;
    v23 = (char *)v38 + 8 * HIDWORD(v39);
    if ( v38 == v23 )
      goto LABEL_34;
    while ( v21 != *v22 )
    {
      if ( v23 == (char *)++v22 )
        goto LABEL_34;
    }
LABEL_31:
    v24 = (unsigned int)v36;
    v25 = (unsigned int)v36 + 1LL;
    if ( v25 > HIDWORD(v36) )
    {
      v29 = v20;
      sub_2237220(p_ptr, p_ptr + 2, v25, 16);
      v24 = (unsigned int)v36;
      v20 = _mm_load_si128(&v29);
    }
    *((__m128i *)ptr + v24) = v20;
    LODWORD(v36) = v36 + 1;
LABEL_34:
    if ( v17 == ++v18 )
      goto LABEL_40;
LABEL_35:
    v9 = BYTE4(v40);
  }
  v29 = v20;
  v26 = sub_2236570(&v38, v21);
  v20 = _mm_load_si128(&v29);
  if ( v26 )
    goto LABEL_31;
  if ( v17 != ++v18 )
    goto LABEL_35;
LABEL_40:
  v27 = (void **)ptr;
  v2 = 0;
  if ( (_DWORD)v36 )
  {
    v28 = sub_1E50B50(v31, (unsigned int)a2[1], 22, (__int64)ptr, (unsigned int)v36, v16);
    v27 = (void **)ptr;
    v2 = v28;
  }
  if ( v27 != p_ptr + 2 )
    free(v27);
LABEL_44:
  if ( !BYTE4(v40) )
    free(v38);
  if ( v32 != v34 )
    free(v32);
  return v2;
}
