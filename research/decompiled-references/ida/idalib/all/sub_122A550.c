__int64 __fastcall sub_122A550(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rcx
  __int64 v13; // rbx
  __m128i *p_si128; // r12
  int v15; // eax
  __int64 v16; // rdx
  int *v17; // rsi
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // esi
  int v23; // r12d
  __int64 *v24; // r15
  __int64 *v25; // rbx
  __int64 *v26; // rax
  __int64 *i; // r14
  __int64 *v28; // rdx
  __int64 v29; // r15
  unsigned int v30; // ecx
  int *v31; // rsi
  int v32; // r11d
  unsigned __int64 v33; // rdx
  __int64 *v34; // rax
  __int64 *v35; // rbx
  int v36; // eax
  unsigned int v37; // ebp
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  int v42; // esi
  int v43; // r10d
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  int v50; // r9d
  unsigned __int64 v52; // [rsp+8h] [rbp-B0h]
  int v53; // [rsp+14h] [rbp-A4h]
  int v54; // [rsp+14h] [rbp-A4h]
  __m128 v58; // [rsp+30h] [rbp-88h] BYREF
  int *v59; // [rsp+40h] [rbp-78h] BYREF
  __int64 v60; // [rsp+48h] [rbp-70h]
  unsigned int v61; // [rsp+50h] [rbp-68h]
  __m128i si128; // [rsp+60h] [rbp-58h] BYREF
  __int64 v63; // [rsp+70h] [rbp-48h]
  int v64; // [rsp+78h] [rbp-40h]
  _BYTE v65[60]; // [rsp+7Ch] [rbp-3Ch] BYREF

  if ( a5 != 16 )
  {
    v5 = 0;
    if ( a5 != 4 )
      return v5;
  }
  v6 = *(_QWORD *)(a2 + 176);
  v5 = operator new(0x148u);
  sub_21B6CD0(v5, v6);
  v63 = 0x64A00000500LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9C60);
  v64 = 1281;
  v61 = 16;
  v60 = 0;
  v12 = (char *)sub_22300B0(64, 4, v8, v9, v10, v11);
  v59 = (int *)v12;
  v13 = 16;
  if ( v12 != v12 + 64 )
    v12 = (char *)memset(v12, 255, 0x40u);
  v53 = a5;
  p_si128 = &si128;
LABEL_6:
  v15 = p_si128->m128i_i32[0];
  LODWORD(v16) = (v13 - 1) & (37 * p_si128->m128i_i32[0]);
  v17 = (int *)&v12[4 * (unsigned int)v16];
  v18 = *v17;
  if ( p_si128->m128i_i32[0] != *v17 )
  {
    v43 = 1;
    v21 = 0;
    if ( v18 == -1 )
    {
LABEL_42:
      v58.m128_u64[0] = (unsigned __int64)v17;
      v19 = (unsigned int)(v60 + 1);
      v20 = (unsigned int)(4 * v19);
      if ( (unsigned int)v20 < 3 * (int)v13 )
      {
        v20 = (unsigned int)(v13 - (v19 + HIDWORD(v60)));
        if ( (unsigned int)v20 <= (unsigned int)v13 >> 3 )
        {
          v22 = v13;
          goto LABEL_11;
        }
        goto LABEL_12;
      }
      while ( 1 )
      {
        v22 = 2 * v13;
LABEL_11:
        sub_11B7620((__int64)&v59, v22, v19, (__int64)v12, v20, v21);
        sub_11A15A0((__int64 *)&v59, p_si128->m128i_i32, &v58);
        v15 = p_si128->m128i_i32[0];
        v12 = (char *)v59;
        v17 = (int *)v58.m128_u64[0];
        LODWORD(v19) = v60 + 1;
LABEL_12:
        LODWORD(v60) = v19;
        if ( *v17 != -1 )
          --HIDWORD(v60);
        *v17 = v15;
        p_si128 = (__m128i *)((char *)p_si128 + 4);
        sub_11B75C0(&v58, v17, (int *)&v12[4 * v61], (__int64)&v59, 1);
        if ( p_si128 == (__m128i *)v65 )
          goto LABEL_15;
LABEL_8:
        v13 = v61;
        v12 = (char *)v59;
        if ( v61 )
          goto LABEL_6;
        v58.m128_u64[0] = 0;
      }
    }
    while ( 1 )
    {
      if ( v18 == -2 && !v21 )
        v21 = (__int64)v17;
      v16 = ((_DWORD)v13 - 1) & (unsigned int)(v16 + v43);
      v17 = (int *)&v12[4 * v16];
      v18 = *v17;
      if ( v15 == *v17 )
        break;
      if ( v18 == -1 )
      {
        if ( v21 )
          v17 = (int *)v21;
        goto LABEL_42;
      }
      ++v43;
    }
  }
  sub_11B75C0(&v58, v17, (int *)&v12[4 * v13], (__int64)&v59, 1);
  p_si128 = (__m128i *)((char *)p_si128 + 4);
  if ( p_si128 != (__m128i *)v65 )
    goto LABEL_8;
LABEL_15:
  v23 = v53;
  v24 = *(__int64 **)(a2 + 8);
  v25 = &v24[*(unsigned int *)(a2 + 16)];
  if ( v25 == v24 )
    goto LABEL_27;
  v26 = v24 + 1;
  if ( !*v24 )
  {
    do
    {
      v24 = v26;
      if ( v25 == v26 )
        goto LABEL_27;
      ++v26;
    }
    while ( !*(v26 - 1) );
  }
  for ( i = v24; ; i = v28 )
  {
    v29 = *i;
    if ( v23 != 4 )
    {
LABEL_18:
      sub_21B80F0(v5, v29);
      v28 = i + 1;
      if ( v25 == i + 1 )
        goto LABEL_27;
      goto LABEL_19;
    }
    v54 = *(_DWORD *)(*(_QWORD *)v29 + 40LL);
    sub_119EA90((__m128 *)&si128, &v59[v61], &v59[v61], (__int64)&v59, 1);
    v52 = si128.m128i_i64[0];
    if ( v61 )
    {
      v30 = (v61 - 1) & (37 * v54);
      v31 = &v59[v30];
      v32 = *v31;
      if ( v54 == *v31 )
        goto LABEL_24;
      v42 = 1;
      if ( v32 != -1 )
      {
        while ( 1 )
        {
          v50 = v42 + 1;
          v30 = (v61 - 1) & (v30 + v42);
          v31 = &v59[v30];
          if ( v54 == *v31 )
            break;
          if ( *v31 == -1 )
            goto LABEL_40;
          v42 = v50;
        }
LABEL_24:
        sub_119EA90((__m128 *)&si128, v31, &v59[v61], (__int64)&v59, 1);
        v33 = si128.m128i_i64[0];
        goto LABEL_25;
      }
    }
LABEL_40:
    sub_119EA90((__m128 *)&si128, &v59[v61], &v59[v61], (__int64)&v59, 1);
    v33 = si128.m128i_i64[0];
LABEL_25:
    if ( v33 == v52 )
      goto LABEL_18;
    v28 = i + 1;
    if ( v25 == i + 1 )
      goto LABEL_27;
LABEL_19:
    if ( !i[1] )
      break;
LABEL_20:
    ;
  }
  while ( v25 != ++v28 )
  {
    if ( *v28 )
      goto LABEL_20;
  }
LABEL_27:
  v34 = sub_1105E80();
  v35 = v34;
  if ( v23 == 4 )
  {
    v44 = sub_21BB380(v34, 3264);
    v46 = sub_21B9090(v5, 0, v44, v45);
    sub_21B80F0(v5, v46);
    v47 = sub_21BB380(v35, 1607);
    v49 = sub_21B9090(v5, 0, v47, v48);
    sub_21B80F0(v5, v49);
  }
  if ( a4 )
  {
    v36 = *(_DWORD *)(a1 + 48);
    if ( (unsigned int)(v36 - 1) <= 4 || (unsigned int)(v36 - 21) <= 3 )
      v37 = 2323;
    else
      v37 = 2260;
    sub_21B7DF0(v5, v37);
    v38 = sub_21BB380(v35, v37);
    v40 = sub_21B8AA0(v5, 0, v38, v39, a3, a4);
    sub_21B80F0(v5, v40);
  }
  operator delete(v59, 4LL * v61, 4);
  return v5;
}
