unsigned __int64 __fastcall sub_1721C20(__int64 a1, _QWORD *a2, char **a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  int v7; // edx
  __int64 v8; // rdx
  __m128 v9; // xmm0
  __int64 v10; // rcx
  __int64 *v11; // r12
  unsigned int *v12; // rax
  __int64 v13; // rdx
  char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rbx
  unsigned int *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // rbx
  __int64 *v27; // r14
  char i; // al
  char *v29; // rax
  __int64 v30; // rdx
  unsigned int *v31; // rsi
  __int64 v32; // rdx
  _BYTE *v33; // rsi
  char *v34; // rax
  size_t v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r9
  char *v39; // rax
  __int64 *v40; // rax
  size_t v41; // rax
  __int64 v43; // [rsp+8h] [rbp-150h] BYREF
  const void **v44[4]; // [rsp+10h] [rbp-148h] BYREF
  __int16 v45; // [rsp+30h] [rbp-128h]
  void *v46; // [rsp+40h] [rbp-118h] BYREF
  __m128i si128; // [rsp+48h] [rbp-110h]
  __int64 v48; // [rsp+58h] [rbp-100h] BYREF
  __int16 v49; // [rsp+60h] [rbp-F8h]
  __m128 v50; // [rsp+80h] [rbp-D8h] BYREF
  int v51; // [rsp+90h] [rbp-C8h]
  int v52; // [rsp+94h] [rbp-C4h]
  __int64 v53; // [rsp+98h] [rbp-C0h]
  __int64 v54; // [rsp+A0h] [rbp-B8h]
  __int64 v55; // [rsp+A8h] [rbp-B0h]
  void *v56; // [rsp+B0h] [rbp-A8h]
  __int64 v57; // [rsp+B8h] [rbp-A0h]
  _BYTE v58[64]; // [rsp+C0h] [rbp-98h] BYREF
  void *ptr; // [rsp+100h] [rbp-58h]
  __int64 v60; // [rsp+108h] [rbp-50h]
  _BYTE v61[72]; // [rsp+110h] [rbp-48h] BYREF

  v6 = *(_DWORD *)(a1 + 32);
  v7 = *(_DWORD *)(a1 + 16);
  v43 = a4;
  v52 = v6;
  v56 = v58;
  v51 = v7;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = _mm_loadh_ps((const double *)&v43);
  v57 = 0x400000000LL;
  ptr = v61;
  v50 = v9;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v60 = 0x200000000LL;
  if ( (*(_BYTE *)(v8 + 3) & 2) == 0 )
    goto LABEL_14;
  sub_1423DB0((__int64)&v46, a2, v8, a4, a5, a6);
  if ( ((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    if ( si128.m128i_i64[1] )
      goto LABEL_4;
    v8 = *(_QWORD *)(a1 + 8);
    a3 = (char **)v50.m128_u64[0];
LABEL_14:
    v21 = *(unsigned int **)(v8 + 16);
    v22 = *v21;
    v49 = 261;
    v46 = v21 + 4;
    si128.m128i_i64[0] = v22;
    v14 = sub_15A4EB0(a3, (const void ***)&v46, v22, 261, a5, a6);
    sub_15A2F70((__int64)&v50, (__int64)v14);
    goto LABEL_7;
  }
  if ( si128.m128i_i64[1] )
  {
LABEL_4:
    v11 = *(__int64 **)(*(_QWORD *)(si128.m128i_i64[0] + 8 * si128.m128i_i64[1] - 8) + 16LL);
    goto LABEL_5;
  }
  v40 = sub_13F1C60((__int64 *)((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFF8LL));
  v11 = v40;
  if ( v40 )
    v11 = (__int64 *)v40[2];
LABEL_5:
  v12 = *(unsigned int **)(*(_QWORD *)(a1 + 8) + 16LL);
  v13 = *v12;
  v49 = 261;
  v46 = v12 + 4;
  si128.m128i_i64[0] = v13;
  v14 = sub_15A4EB0((char **)v50.m128_u64[0], (const void ***)&v46, v13, v10, a5, a6);
  sub_15A2F70((__int64)&v50, (__int64)v14);
  if ( v11 && (*((_BYTE *)v11 + 36) & 2) != 0 )
  {
    sub_15A3210((__int64)&v50, 7, (char *)&byte_22F0C30);
    v26 = (__int64 *)v11[1];
    v27 = &v26[*((unsigned int *)v11 + 6)];
    i = *((_BYTE *)v11 + 36);
    if ( (i & 4) != 0 )
    {
      if ( --v27 != v26 )
        goto LABEL_24;
      sub_15A3090((__int64)&v50, (__int64)"...");
      v26 = (__int64 *)v11[1];
    }
    if ( v27 != v26 )
    {
      for ( i = *((_BYTE *)v11 + 36); ; i = *((_BYTE *)v11 + 36) )
      {
LABEL_24:
        v30 = *v26++;
        v31 = *(unsigned int **)(v30 + 16);
        v32 = *v31;
        v33 = v31 + 4;
        if ( (i & 4) != 0 || (i & 8) != 0 )
        {
          if ( v27 == v26 )
          {
            v46 = &v48;
            si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
            sub_A1FE50(&v46, v33, &v33[v32]);
            if ( (*((_BYTE *)v11 + 36) & 4) != 0 )
            {
              v35 = j__strlen(", ...");
              sub_A1FE50(&v46, ", ...", &aObjects[v35 + 7]);
            }
            else
            {
              v41 = j__strlen("...");
              sub_A1FE50(&v46, "...", &asc_23153D8[v41 + 2]);
            }
            v45 = 261;
            v44[0] = (const void **)v46;
            v44[1] = (const void **)si128.m128i_i64[0];
            v39 = sub_15A4EB0((char **)v50.m128_u64[0], v44, v36, v37, 261, v38);
            sub_15A3090((__int64)&v50, (__int64)v39);
            if ( v46 != &v48 )
              free(v46);
            break;
          }
          v46 = v33;
          v49 = 261;
          si128.m128i_i64[0] = v32;
          v34 = sub_15A4EB0((char **)v50.m128_u64[0], (const void ***)&v46, v32, v23, v24, v25);
          sub_15A3090((__int64)&v50, (__int64)v34);
        }
        else
        {
          v46 = v33;
          v49 = 261;
          si128.m128i_i64[0] = v32;
          v29 = sub_15A4EB0((char **)v50.m128_u64[0], (const void ***)&v46, v32, v23, v24, 261);
          sub_15A3090((__int64)&v50, (__int64)v29);
          if ( v27 == v26 )
            break;
        }
        if ( (__int64 *)v11[1] != v26 )
          sub_15A3210((__int64)&v50, 15, (char *)&byte_22F0C30);
      }
    }
    v14 = byte_8;
    sub_15A3210((__int64)&v50, 8, (char *)&byte_22F0C30);
  }
LABEL_7:
  v19 = sub_15A5CA0((__int64)&v50, (__int64)v14, v15, v16, v17, v18);
  if ( ptr != v61 )
    free(ptr);
  if ( v56 != v58 )
    free(v56);
  return v19;
}
