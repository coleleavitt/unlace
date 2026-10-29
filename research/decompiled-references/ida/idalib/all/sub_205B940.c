__int64 __fastcall sub_205B940(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // r14
  int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rax
  _QWORD *v18; // r15
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rdx
  __m128 v23; // xmm0
  int v24; // r11d
  __int64 v25; // rax
  __int64 *v26; // rsi
  __int64 v27; // r10
  int v28; // r9d
  int v29; // ecx
  int v30; // eax
  unsigned __int64 v31; // rax
  _QWORD *v32; // rdx
  __int64 v33; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // [rsp+8h] [rbp-F0h]
  __int64 *v38; // [rsp+8h] [rbp-F0h]
  __int64 v39; // [rsp+10h] [rbp-E8h]
  _QWORD *v41; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v42; // [rsp+28h] [rbp-D0h]
  unsigned int v43; // [rsp+34h] [rbp-C4h]
  int *v44; // [rsp+38h] [rbp-C0h]
  __int64 v45; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v46[2]; // [rsp+50h] [rbp-A8h] BYREF
  int v47; // [rsp+70h] [rbp-88h] BYREF
  __m128 v48; // [rsp+78h] [rbp-80h]
  __int64 v49; // [rsp+88h] [rbp-70h]
  void *ptr; // [rsp+90h] [rbp-68h] BYREF
  __int64 v51; // [rsp+98h] [rbp-60h]
  _BYTE v52[88]; // [rsp+A0h] [rbp-58h] BYREF

  ptr = v52;
  v51 = 0x400000000LL;
  if ( (*(_BYTE *)(a1 + 7) & 0x40) != 0 )
  {
    v5 = *(__int64 **)(a1 - 8);
    v6 = 0;
    v7 = *v5;
    if ( a2 != *v5 )
      goto LABEL_3;
  }
  else
  {
    v6 = 0;
    v5 = (__int64 *)(a1 - 32LL * (*(_DWORD *)(a1 + 4) & 0x7FFFFFF));
    v7 = *v5;
    if ( a2 != *v5 )
      goto LABEL_3;
  }
  v7 = a3;
  v6 = 1;
LABEL_3:
  v43 = 0;
  *(_QWORD *)ptr = v7;
  v8 = v5[4];
  v9 = (unsigned int)(v51 + 1);
  LODWORD(v51) = v51 + 1;
  if ( a2 == v8 )
  {
    v10 = v9 + 1;
    ++v6;
    v8 = a3;
    v43 = 1;
    if ( v9 + 1 <= (unsigned __int64)HIDWORD(v51) )
      goto LABEL_5;
  }
  else
  {
    v10 = v9 + 1;
    if ( v9 + 1 <= (unsigned __int64)HIDWORD(v51) )
      goto LABEL_5;
  }
  sub_2237220(&ptr, v52, v10, 8);
  v9 = (unsigned int)v51;
LABEL_5:
  *((_QWORD *)ptr + v9) = v8;
  v11 = v5[8];
  v12 = (unsigned int)(v51 + 1);
  LODWORD(v51) = v51 + 1;
  if ( a2 == v11 )
  {
    v13 = v12 + 1;
    ++v6;
    v11 = a3;
    v43 = 2;
    if ( v12 + 1 <= (unsigned __int64)HIDWORD(v51) )
      goto LABEL_7;
  }
  else
  {
    v13 = v12 + 1;
    if ( v12 + 1 <= (unsigned __int64)HIDWORD(v51) )
      goto LABEL_7;
  }
  sub_2237220(&ptr, v52, v13, 8);
  v12 = (unsigned int)v51;
LABEL_7:
  *((_QWORD *)ptr + v12) = v11;
  v14 = v5[12];
  v15 = (unsigned int)(v51 + 1);
  LODWORD(v51) = v51 + 1;
  if ( a2 == v14 )
  {
    v16 = v15 + 1;
    ++v6;
    v14 = a3;
    v43 = 3;
    if ( v15 + 1 <= (unsigned __int64)HIDWORD(v51) )
      goto LABEL_9;
LABEL_28:
    sub_2237220(&ptr, v52, v16, 8);
    v15 = (unsigned int)v51;
    goto LABEL_9;
  }
  v16 = v15 + 1;
  if ( v15 + 1 > (unsigned __int64)HIDWORD(v51) )
    goto LABEL_28;
LABEL_9:
  *((_QWORD *)ptr + v15) = v14;
  LODWORD(v51) = v51 + 1;
  v17 = (__int64 *)sub_20CB0D0(a1);
  v18 = ptr;
  v19 = *v17;
  v42 = (unsigned int)v51;
  v39 = v19 + 1680;
  v37 = *(_QWORD *)(a1 + 8);
  v44 = &v47;
  v47 = sub_2053D00(ptr, (__int64)ptr + 8 * (unsigned int)v51);
  v20 = sub_2050F80(v37, &v47);
  v41 = v18;
  v21 = *(_QWORD *)(v19 + 1680);
  v47 = v20;
  v22 = *(unsigned int *)(v19 + 1696);
  v23 = _mm_loadh_ps((const double *)&v41);
  v49 = v42;
  v48 = v23;
  if ( !(_DWORD)v22 )
    goto LABEL_21;
  v24 = v22 - 1;
  LODWORD(v25) = (v22 - 1) & v20;
  v26 = (__int64 *)(v21 + 8LL * (unsigned int)v25);
  v27 = *v26;
  if ( *v26 == -4096 )
    goto LABEL_21;
  if ( v42 != 4 )
  {
    v29 = 1;
    do
    {
      v30 = v29 + v25;
      ++v29;
      LODWORD(v25) = v24 & v30;
    }
    while ( *(_QWORD *)(v21 + 8LL * (unsigned int)v25) != -4096 );
LABEL_21:
    sub_2059BE0((__m128 *)v46, (_QWORD *)(v21 + 8 * v22), (_QWORD *)(v21 + 8 * v22), v39, 1);
    v31 = v46[0].m128i_i64[0];
    goto LABEL_22;
  }
  v28 = 1;
  while ( v27 == -8192
       || v37 != *(_QWORD *)(v27 + 8)
       || *(_QWORD *)(v27 - 128) != *v18
       || *(_QWORD *)(v27 - 96) != v18[1]
       || *(_QWORD *)(v27 - 64) != v18[2]
       || *(_QWORD *)(v27 - 32) != v18[3] )
  {
    v25 = v24 & (unsigned int)(v25 + v28);
    v26 = (__int64 *)(v21 + 8 * v25);
    v27 = *v26;
    if ( *v26 == -4096 )
      goto LABEL_21;
    ++v28;
  }
  sub_2059BE0((__m128 *)v46, v26, (_QWORD *)(v21 + 8 * v22), v39, 1);
  v31 = v46[0].m128i_i64[0];
LABEL_22:
  v38 = (__int64 *)v31;
  v32 = (_QWORD *)(*(_QWORD *)(v19 + 1680) + 8LL * *(unsigned int *)(v19 + 1696));
  sub_2059BE0((__m128 *)v46, v32, v32, v39, 1);
  if ( (__int64 *)v46[0].m128i_i64[0] == v38 )
  {
    *(_QWORD *)sub_205AAD0(v39, a1) = -8192;
    --*(_DWORD *)(v19 + 1688);
    ++*(_DWORD *)(v19 + 1692);
    if ( v6 == 1 )
    {
      sub_20166C0((_QWORD *)(a1 + 32LL * v43 - 128), a3);
    }
    else
    {
      if ( a2 == *(_QWORD *)(a1 - 128) )
        sub_20166C0((_QWORD *)(a1 - 128), a3);
      if ( a2 == *(_QWORD *)(a1 - 96) )
        sub_20166C0((_QWORD *)(a1 - 96), a3);
      if ( a2 == *(_QWORD *)(a1 - 64) )
        sub_20166C0((_QWORD *)(a1 - 64), a3);
      if ( a2 == *(_QWORD *)(a1 - 32) )
        sub_20166C0((_QWORD *)(a1 - 32), a3);
    }
    v45 = a1;
    v33 = 0;
    sub_205B730(v46, v39, (__int64)&v45, (__int64)v44, v35, v36);
  }
  else
  {
    v33 = *v38;
  }
  if ( ptr != v52 )
    free(ptr);
  return v33;
}
