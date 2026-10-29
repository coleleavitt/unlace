void __fastcall sub_170C830(__int64 *a1, _BYTE **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  __m128i v8; // xmm1
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebp
  __m128 v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r13
  int v20; // ebp
  __int64 v21; // r12
  double v22[2]; // [rsp+0h] [rbp-198h] BYREF
  __m128 v23; // [rsp+10h] [rbp-188h] BYREF
  int v24; // [rsp+20h] [rbp-178h]
  __int64 v25; // [rsp+24h] [rbp-174h]
  int v26; // [rsp+2Ch] [rbp-16Ch]
  int v27; // [rsp+30h] [rbp-168h]
  __int128 v28; // [rsp+38h] [rbp-160h] BYREF
  __int64 v29; // [rsp+48h] [rbp-150h]
  char v30; // [rsp+50h] [rbp-148h]
  __int64 v31; // [rsp+58h] [rbp-140h]
  __int64 v32; // [rsp+60h] [rbp-138h]
  __int64 v33; // [rsp+68h] [rbp-130h]
  _QWORD v34[2]; // [rsp+70h] [rbp-128h] BYREF
  int v35; // [rsp+80h] [rbp-118h]
  __int64 v36; // [rsp+84h] [rbp-114h]
  __int64 v37; // [rsp+8Ch] [rbp-10Ch]
  __int128 v38; // [rsp+98h] [rbp-100h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-F0h]
  char v40; // [rsp+B0h] [rbp-E8h]
  __int64 v41; // [rsp+B8h] [rbp-E0h]
  __int64 v42; // [rsp+C0h] [rbp-D8h]
  __int64 v43; // [rsp+C8h] [rbp-D0h]
  __m128i v44; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+E0h] [rbp-B8h]
  __int64 v46; // [rsp+E8h] [rbp-B0h]
  __int64 v47; // [rsp+F0h] [rbp-A8h]
  __int64 v48; // [rsp+F8h] [rbp-A0h]
  void *v49; // [rsp+100h] [rbp-98h]
  __int64 v50; // [rsp+108h] [rbp-90h]
  _BYTE v51[64]; // [rsp+110h] [rbp-88h] BYREF
  void *ptr; // [rsp+150h] [rbp-48h]
  __int64 v53; // [rsp+158h] [rbp-40h]
  _BYTE v54[56]; // [rsp+160h] [rbp-38h] BYREF

  v7 = *a1;
  v45 = 0;
  v8 = _mm_loadu_si128((const __m128i *)(v7 + 184));
  v46 = 0;
  v49 = v51;
  v50 = 0x400000000LL;
  ptr = v54;
  v44 = v8;
  v53 = 0x200000000LL;
  v47 = 0;
  v48 = 0;
  sub_15A2F70((__int64)&v44, a3);
  sub_15A3210((__int64)&v44, 7, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v44, a4);
  sub_15A3210((__int64)&v44, 8, (char *)&byte_22F0C30);
  if ( a5 )
  {
    v13 = 35;
    if ( **a2 )
      v13 = 7;
    *(_QWORD *)&v22[1] = a5;
    *(_QWORD *)&v22[0] = sub_15A5CA0((__int64)&v44, 8, v9, v10, v11, v12);
    v25 = 0x300000000LL;
    v24 = v13;
    v14 = _mm_loadh_ps(v22);
    v27 = 0;
    v23 = v14;
    v30 = v30 & 0x80 | 0x40;
    v28 = 0;
    v29 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    sub_15A3440((unsigned int *)&v23, 1, v15, v16, v17, v18);
    if ( (*(_BYTE *)(a5 + 28) & 0x7Fu) - 49 <= 2 )
      v26 = 47;
    v19 = *a1;
    sub_17048E0((__int64)v34, (__int64)&v23);
    sub_1706C30(v19, (__int64)v34);
    sub_1705410((__int64)&v38);
    sub_1705410((__int64)&v28);
  }
  else
  {
    v20 = 35;
    v21 = *a1;
    if ( **a2 )
      v20 = 7;
    v34[0] = 0;
    v34[1] = sub_15A5CA0((__int64)&v44, 8, v9, v10, v11, v12);
    v36 = 0x300000000LL;
    v35 = v20;
    v37 = 72;
    v38 = 0;
    v39 = 0;
    v40 = v40 & 0x80 | 0x40;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    sub_1706C30(v21, (__int64)v34);
    sub_1705410((__int64)&v38);
  }
  if ( ptr != v54 )
    free(ptr);
  if ( v49 != v51 )
    free(v49);
}
