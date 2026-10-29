__int64 __fastcall sub_151BF50(const __m128i *a1, unsigned int a2)
{
  unsigned int **v2; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r12d
  __int8 v12; // al
  _BYTE *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned int v16; // eax
  int v17; // r14d
  int v18; // eax
  __int16 v19; // dx
  char *v20; // rdi
  __int64 v21; // r14
  __int64 v22; // r15
  _QWORD *v23; // rax
  _QWORD *v24; // r13
  __int64 v25; // rsi
  _BYTE *v26; // r14
  void *v27; // rdi
  __int32 v29; // eax
  __int64 *v30; // rdi
  __int64 v31; // [rsp+8h] [rbp-2C0h]
  unsigned int v32; // [rsp+8h] [rbp-2C0h]
  void (__fastcall *v33)(__int64, __int64); // [rsp+10h] [rbp-2B8h] BYREF
  __int8 v34; // [rsp+1Fh] [rbp-2A9h]
  __m128i v35; // [rsp+20h] [rbp-2A8h] BYREF
  __m128 v36; // [rsp+30h] [rbp-298h]
  __int64 (__fastcall **v37)(); // [rsp+40h] [rbp-288h] BYREF
  void *v38; // [rsp+48h] [rbp-280h]
  __int64 v39; // [rsp+58h] [rbp-270h] BYREF
  void *v40; // [rsp+90h] [rbp-238h]
  __int64 v41; // [rsp+A0h] [rbp-228h] BYREF
  _BYTE v42[16]; // [rsp+C0h] [rbp-208h] BYREF
  void (__fastcall *v43)(_BYTE *, _BYTE *, __int64); // [rsp+D0h] [rbp-1F8h]
  _BYTE v44[16]; // [rsp+E0h] [rbp-1E8h] BYREF
  void (__fastcall *v45)(_BYTE *, _BYTE *, __int64); // [rsp+F0h] [rbp-1D8h]
  void *ptr; // [rsp+100h] [rbp-1C8h]
  int v47; // [rsp+108h] [rbp-1C0h]
  int v48; // [rsp+10Ch] [rbp-1BCh]
  void *v49[2]; // [rsp+120h] [rbp-1A8h] BYREF
  _OWORD v50[3]; // [rsp+130h] [rbp-198h] BYREF
  int v51; // [rsp+160h] [rbp-168h]
  void *v52; // [rsp+168h] [rbp-160h]
  __int64 v53; // [rsp+170h] [rbp-158h]
  _BYTE v54[128]; // [rsp+178h] [rbp-150h] BYREF
  void *v55; // [rsp+1F8h] [rbp-D0h]
  __int64 v56; // [rsp+200h] [rbp-C8h]
  _BYTE v57[32]; // [rsp+208h] [rbp-C0h] BYREF
  __int64 v58; // [rsp+228h] [rbp-A0h]
  _QWORD *v59; // [rsp+230h] [rbp-98h] BYREF
  unsigned int v60; // [rsp+238h] [rbp-90h]
  _BYTE v61[56]; // [rsp+290h] [rbp-38h] BYREF

  v2 = nullptr;
  v4 = a1[6].m128i_i64[0];
  v5 = *(_QWORD *)(v4 + 760);
  v6 = *(unsigned int *)(v5 + 264);
  if ( (_DWORD)v6 )
    v2 = *(unsigned int ***)(*(_QWORD *)(v5 + 256) + 40 * v6 - 40);
  v7 = *(_QWORD *)(v4 + 248);
  v31 = sub_A86E90(v7);
  v11 = sub_1519770((__int64)a1, a2, v31, v2);
  if ( (_BYTE)v11 )
  {
    do
    {
      LOWORD(v49[0]) = 449;
      v11 = sub_15680D0(a1, v49, 1, 2);
    }
    while ( !(_BYTE)v11 );
    v29 = a1[1].m128i_i32[1];
    v30 = (__int64 *)a1->m128i_i64[1];
    if ( !v29 )
      v29 = a1[1].m128i_i32[0];
    a1[2].m128i_i32[2] = v29;
    sub_14634E0(v30, a1[1].m128i_i32);
    return v11;
  }
  if ( a1[2].m128i_i16[0] != 449 )
    sub_1504CE0((__int64)a1, 8u);
  v12 = a1[134].m128i_i8[10];
  a1[134].m128i_i8[10] = 0;
  v50[0] = 0;
  v34 = v12;
  v49[0] = v50;
  v49[1] = (void *)0x600000002LL;
  v51 = 80;
  v58 = 1;
  v52 = v54;
  v53 = 0x800000000LL;
  v55 = v57;
  v56 = 0x800000000LL;
  v13 = &v59;
  do
  {
    *(_DWORD *)v13 = -1;
    v13 += 24;
  }
  while ( v13 != v61 );
  sub_EBB620(v31, v7, (__int64)v49, v8, v9, v10);
  v35.m128i_i64[0] = (__int64)a1;
  v33 = sub_1504610;
  v14 = a1[6].m128i_i64[0];
  v35.m128i_i32[2] = a2;
  v15 = *(_QWORD *)(v14 + 760);
  v36 = _mm_loadh_ps((const double *)&v33);
  v16 = sub_1AF55F0(v15);
  v33 = (void (__fastcall *)(__int64, __int64))&v35;
  sub_EB7D30((__int64)&v37, v7, &v35, 0, nullptr, 0, v16);
  if ( (unsigned __int8)sub_20F35E0(v49, &v37, 1) )
  {
    sub_1AFF160(*(_QWORD *)(a1[6].m128i_i64[0] + 760), a2, v31);
    goto LABEL_16;
  }
  v17 = 1;
  while ( 1 )
  {
    v32 = a1[1].m128i_u32[0];
    v18 = sub_1506700(a1);
    if ( v18 == 28 )
    {
      --v17;
    }
    else
    {
      if ( v18 != 8 )
        goto LABEL_12;
      ++v17;
    }
    if ( !v17 )
      break;
LABEL_12:
    v19 = a1[2].m128i_i16[0];
    if ( v19 == 1 || (unsigned __int16)(v19 - 456) <= 2u || v19 == 460 )
      break;
    sub_1504200((__int64)a1);
  }
  sub_1505FE0((__int64)a1, 8u, 0x1Cu, v18, a2, v32, 1);
LABEL_16:
  v20 = (char *)ptr;
  v37 = &off_2B4C0E8;
  if ( v48 && v47 )
  {
    v21 = 0;
    v22 = 8LL * (unsigned int)(v47 - 1) + 8;
    do
    {
      v23 = *(_QWORD **)&v20[v21];
      if ( v23 && v23 != (_QWORD *)-8LL )
      {
        operator delete(*(_QWORD *)&v20[v21], *v23 + 17LL, 8);
        v20 = (char *)ptr;
      }
      v21 += 8;
    }
    while ( v21 != v22 );
  }
  free(v20);
  if ( v45 )
    v45(v44, v44, 3);
  if ( v43 )
    v43(v42, v42, 3);
  v37 = &off_2B4C0C0;
  if ( v40 != &v41 )
    free(v40);
  if ( v38 != &v39 )
    free(v38);
  if ( v36.m128_u64[0] )
    ((void (__fastcall *)(void (__fastcall *)(__int64, __int64), void (__fastcall *)(__int64, __int64), __int64))v36.m128_u64[0])(
      v33,
      v33,
      3);
  if ( (v58 & 1) != 0 )
  {
    v26 = v61;
    v24 = &v59;
    goto LABEL_38;
  }
  v24 = v59;
  v25 = 3LL * v60;
  if ( v60 && (v26 = &v59[v25], &v59[v25] != v59) )
  {
    do
    {
LABEL_38:
      while ( 1 )
      {
        if ( (unsigned int)(*(_DWORD *)v24 + 2) > 1 && *((_DWORD *)v24 + 4) > 0x40u )
        {
          v27 = (void *)v24[1];
          if ( v27 )
            break;
        }
        v24 += 3;
        if ( v26 == (_BYTE *)v24 )
          goto LABEL_42;
      }
      operator delete[](v27);
      v24 += 3;
    }
    while ( v26 != (_BYTE *)v24 );
LABEL_42:
    if ( (v58 & 1) == 0 )
    {
      v24 = v59;
      v25 = 3LL * v60;
      goto LABEL_59;
    }
  }
  else
  {
LABEL_59:
    operator delete(v24, v25 * 8, 8);
  }
  if ( v55 != v57 )
    free(v55);
  if ( v52 != v54 )
    free(v52);
  if ( v49[0] != v50 )
    free(v49[0]);
  a1[134].m128i_i8[10] = v34;
  return v11;
}
