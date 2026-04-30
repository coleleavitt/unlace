__int64 __fastcall sub_1E2BC0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  const char *v14; // rsi
  char v15; // al
  char *v16; // rbx
  __int64 v17; // r15
  __int64 v18; // r13
  __int64 v19; // r12
  __int64 v20; // rbp
  char *v21; // rax
  const char *v22; // rdi
  __int64 v23; // rax
  __int64 *v24; // r11
  __int64 *v25; // r12
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int128 v30; // xmm1
  __int64 v31; // xmm0_8
  int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // edx
  unsigned int v36; // ebp
  char v38; // [rsp+0h] [rbp-C8h]
  char *v39; // [rsp+0h] [rbp-C8h]
  char *s2; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v42; // [rsp+18h] [rbp-B0h]
  __int64 (__fastcall **v43)(); // [rsp+30h] [rbp-98h] BYREF
  int v44; // [rsp+38h] [rbp-90h]
  __int64 v45; // [rsp+3Ch] [rbp-8Ch]
  int v46; // [rsp+44h] [rbp-84h]
  __int128 v47; // [rsp+50h] [rbp-78h] BYREF
  __int64 v48; // [rsp+60h] [rbp-68h]
  __int64 v49; // [rsp+68h] [rbp-60h]
  int v50; // [rsp+70h] [rbp-58h]
  __int64 (__fastcall ***v51)(); // [rsp+78h] [rbp-50h]
  unsigned __int64 v52; // [rsp+88h] [rbp-40h]

  v14 = nullptr;
  v52 = __readfsqword(0x28u);
  v42 = 0;
  s2 = nullptr;
  v15 = sub_196F50(
          (int)&s2,
          0,
          (int)"Please specify register",
          a12,
          a13,
          a14,
          (__m128)0LL,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          v38);
  v16 = s2;
  if ( !v15 )
  {
    v36 = 1;
    goto LABEL_22;
  }
  v17 = qword_8CC390;
  v18 = qword_8CC390 + 56 * xmmword_8CC398;
  if ( qword_8CC390 == v18 )
    goto LABEL_26;
  v19 = v42;
  v20 = qword_8CC390;
  v21 = (char *)&s1;
  if ( (_QWORD)v42 )
    v21 = s2;
  v39 = v21;
  while ( 1 )
  {
    v23 = *(_QWORD *)(v20 + 8);
    if ( v19 )
    {
      v14 = v16;
      v22 = &s1;
      if ( !v23 )
        goto LABEL_7;
      goto LABEL_11;
    }
    if ( !v23 )
      break;
LABEL_11:
    v22 = *(const char **)v20;
    v14 = v39;
LABEL_7:
    if ( !strcmp(v22, v14) )
      break;
    v20 += 56;
    if ( v18 == v20 )
      goto LABEL_26;
  }
  if ( !v20 || (v24 = *(__int64 **)(a1 + 1000), v25 = *(__int64 **)(a1 + 1008), v25 == v24) )
  {
LABEL_26:
    v36 = 0;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v14 = (const char *)v24[3];
    if ( v14 )
      break;
LABEL_25:
    v24 += 7;
    if ( v25 == v24 )
      goto LABEL_26;
  }
  v26 = 0;
  while ( 1 )
  {
    v27 = v17 + 56LL * *(int *)(v24[2] + 4 * v26);
    if ( *(_DWORD *)(v27 + 44) == *(_DWORD *)(v20 + 44) && *(_BYTE *)(v27 + 32) == *(_BYTE *)(v20 + 32) )
      break;
    if ( v14 == (const char *)++v26 )
      goto LABEL_25;
  }
  v28 = *v24;
  v46 = v26;
  v43 = dbgreg_place_t___vtable;
  v45 = v28;
  v44 = 0;
  v29 = sub_1EA6A0(a1 + 384);
  v30 = *(_OWORD *)v29;
  v31 = *(_QWORD *)(v29 + 16);
  v32 = *(_DWORD *)(v29 + 32);
  v33 = *(_QWORD *)(v29 + 24);
  v47 = v30;
  v49 = v33;
  v50 = v32;
  v51 = &v43;
  v48 = v31;
  v34 = qalloc_or_throw(24);
  v35 = v44;
  *(_QWORD *)v34 = dbgreg_place_t___vtable;
  v14 = (const char *)&v47;
  *(_DWORD *)(v34 + 8) = v35;
  *(_QWORD *)(v34 + 12) = v45;
  *(_DWORD *)(v34 + 20) = v46;
  v51 = (__int64 (__fastcall ***)())v34;
  sub_1FFC10(a1, &v47, 3, 0);
  if ( v51 )
    qfree(v51, (const char *)&v47);
  v16 = s2;
  v36 = 1;
LABEL_22:
  if ( v16 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v16, v14);
  }
  return v36;
}
