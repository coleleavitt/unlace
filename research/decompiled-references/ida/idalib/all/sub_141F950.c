void __fastcall sub_141F950(_QWORD *a1, unsigned int a2, int *a3, __int64 *a4)
{
  int v7; // edx
  __int64 v8; // rsi
  char *v9; // rax
  size_t v10; // rdx
  unsigned __int8 v11; // al
  unsigned int v12; // r15d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rdi
  void *v20; // rax
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // rsi
  int v24; // ecx
  __int128 v25; // [rsp-10h] [rbp-308h]
  size_t v26; // [rsp+0h] [rbp-2F8h]
  unsigned __int64 v27; // [rsp+0h] [rbp-2F8h]
  __int64 v28; // [rsp+0h] [rbp-2F8h]
  char *v29; // [rsp+8h] [rbp-2F0h]
  char *src; // [rsp+10h] [rbp-2E8h]
  size_t n; // [rsp+18h] [rbp-2E0h]
  char *v32; // [rsp+20h] [rbp-2D8h] BYREF
  size_t v33; // [rsp+28h] [rbp-2D0h]
  int v34[4]; // [rsp+30h] [rbp-2C8h] BYREF
  __int16 v35; // [rsp+40h] [rbp-2B8h]
  unsigned int v36[8]; // [rsp+50h] [rbp-2A8h] BYREF
  __m128i v37; // [rsp+70h] [rbp-288h] BYREF
  char v38; // [rsp+90h] [rbp-268h]
  unsigned __int8 *v39[10]; // [rsp+A0h] [rbp-258h] BYREF
  void *ptr; // [rsp+F0h] [rbp-208h] BYREF
  __m128i si128; // [rsp+F8h] [rbp-200h]
  _BYTE v42[136]; // [rsp+108h] [rbp-1F0h] BYREF
  unsigned __int8 *v43; // [rsp+190h] [rbp-168h] BYREF
  unsigned __int64 v44; // [rsp+198h] [rbp-160h]
  char v45; // [rsp+1A0h] [rbp-158h]
  unsigned __int64 v46; // [rsp+1B0h] [rbp-148h]
  char v47; // [rsp+1B8h] [rbp-140h]
  void *v48; // [rsp+1C8h] [rbp-130h]
  _BYTE v49[64]; // [rsp+1D8h] [rbp-120h] BYREF
  void *v50; // [rsp+218h] [rbp-E0h]
  _BYTE v51[64]; // [rsp+228h] [rbp-D0h] BYREF
  void *v52; // [rsp+268h] [rbp-90h]
  _BYTE v53[64]; // [rsp+278h] [rbp-80h] BYREF
  char v54; // [rsp+2B8h] [rbp-40h]

  v7 = *a3;
  v8 = a1[6];
  if ( (*(_BYTE *)a1[7] & 8) != 0 )
  {
    sub_FC70B0((__int64)&v43, v8, v7, 1325);
  }
  else
  {
    sub_FC70B0((__int64)&v43, v8, v7, 1238);
    sub_AE9DF0(&v43, (*(_BYTE *)(a1[7] + 1LL) & 8) != 0, 2u);
  }
  sub_AEA040((__int64)&v43);
  if ( (unsigned __int8)sub_1464550(a1, v34, 1) )
    return;
  if ( v35 != 16 )
  {
    sub_FC70B0((__int64)&v43, a1[6], v34[0], 1127);
    sub_AEA040((__int64)&v43);
    if ( v35 != 2 )
      sub_141A820((__int64)a1, (unsigned int *)&v43);
    return;
  }
  sub_141CB80((__int64)&v43, (__int64)a1, v36, 0);
  if ( !v54 )
    return;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v42;
  v9 = (char *)sub_145C740(a1, v34, &ptr, 0);
  v33 = v10;
  v26 = v10;
  n = v10;
  v32 = v9;
  v29 = v9;
  src = v9;
  v11 = sub_141AD20((__int64)a1, v34[0], &v32);
  v12 = v11;
  v13 = sub_141BDA0((__int64)a1, v32, v33, v11, 1u, a4);
  v14 = v13;
  if ( !v13 )
  {
    v22 = a1[149];
    if ( v22 && (*(unsigned __int8 (__fastcall **)(__int64, char *, size_t))(*(_QWORD *)v22 + 40LL))(v22, v29, v26) )
    {
LABEL_42:
      if ( ptr != v42 )
        free(ptr);
      if ( v54 )
        goto LABEL_26;
      return;
    }
    v23 = a1[6];
    v24 = 1131;
LABEL_41:
    sub_FC70B0((__int64)v39, v23, v34[0], v24);
    sub_AEC220(v39, v32, v33);
    sub_AEA040((__int64)v39);
    goto LABEL_42;
  }
  while ( 1 )
  {
    v15 = *(_QWORD *)(v14 + 8);
    if ( !v15 )
      break;
    v14 = v15 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v15 & 4) == 0 || !v14 )
      goto LABEL_12;
  }
  v14 = 0;
LABEL_12:
  if ( *(_BYTE *)(v14 + 77) )
  {
    v23 = a1[6];
    v24 = 1113;
    goto LABEL_41;
  }
  v27 = v13;
  sub_1023400(&v37, a1[11], v13);
  v16 = v27;
  if ( !v38 )
  {
    sub_FC70B0((__int64)v39, a1[6], v34[0], 7);
    sub_AEC220(v39, v32, v33);
    sub_AE9DF0(v39, (__int64)"a buffer to the contents could not be created", 1u);
    sub_AEA040((__int64)v39);
    goto LABEL_42;
  }
  v17 = v37.m128i_u64[1];
  v28 = v37.m128i_i64[0];
  if ( v47 )
  {
    v18 = v46;
    if ( v46 > v37.m128i_i64[1] )
    {
      v18 = v37.m128i_i64[1];
      v17 = 0;
    }
    else
    {
      v17 = v37.m128i_i64[1] - v46;
    }
    v28 = v18 + v37.m128i_i64[0];
  }
  if ( v45 && v17 > v44 )
    v17 = v44;
  v19 = a1[149];
  if ( v19 )
    (*(void (__fastcall **)(__int64, _QWORD, char *, size_t, _QWORD, unsigned __int64, unsigned __int8 **))(*(_QWORD *)v19 + 48LL))(
      v19,
      a2,
      v32,
      v33,
      v12,
      v16,
      &v43);
  v20 = (void *)sub_9C3B30(a1 + 16, n, 3u);
  *((_QWORD *)&v25 + 1) = n;
  *(_QWORD *)&v25 = memcpy(v20, src, n);
  sub_141F670(a1, a2, (__int64)&v43, v28, v17, v21, v25);
  if ( ptr != v42 )
    free(ptr);
  if ( v54 )
  {
LABEL_26:
    if ( v53[48] && v52 != v53 )
      free(v52);
    if ( v51[48] && v50 != v51 )
      free(v50);
    if ( v49[48] && v48 != v49 )
      free(v48);
  }
}
