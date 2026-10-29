__int64 __fastcall sub_190FB60(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _WORD *a5, double a6, __m128 a7)
{
  char v7; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __m128 v15; // xmm0
  __int64 v16; // rdx
  char v17; // r8
  char v18; // si
  __int64 v19; // r14
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r9
  __m128i v24; // xmm2
  char v25; // al
  char v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  char v31; // dl
  unsigned __int64 v32; // rbp
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  char v36; // al
  _WORD *v37; // rax
  _QWORD *v38; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v39; // [rsp+10h] [rbp-D8h]
  __int64 v40; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+28h] [rbp-C0h]
  __m128 v42; // [rsp+30h] [rbp-B8h] BYREF
  __int64 *v43; // [rsp+40h] [rbp-A8h]
  __m128 v44; // [rsp+50h] [rbp-98h]
  __m128i v45; // [rsp+60h] [rbp-88h]
  __int64 (__fastcall **v46)(); // [rsp+70h] [rbp-78h] BYREF
  int v47; // [rsp+78h] [rbp-70h]
  __int64 v48; // [rsp+80h] [rbp-68h]
  char v49; // [rsp+88h] [rbp-60h]
  __int64 v50; // [rsp+90h] [rbp-58h] BYREF
  __int64 v51; // [rsp+98h] [rbp-50h]
  __int64 v52; // [rsp+A0h] [rbp-48h]
  unsigned int v53; // [rsp+A8h] [rbp-40h]

  v7 = 1;
  v11 = *(unsigned int *)(a1 + 4624);
  v40 = a4;
  v12 = *(_QWORD *)(a1 + 4616);
  v13 = 640 * v11;
  v14 = v12 + 640 * v11 - 640;
  if ( *(_DWORD *)v14 != 7 )
    v7 = *(_BYTE *)(v14 + 599);
  v15 = 0;
  v16 = v12 + v13;
  v17 = *(_BYTE *)(v14 + 603);
  v44 = 0;
  v45 = 0;
  if ( v12 == v16 )
  {
LABEL_19:
    v19 = *(_QWORD *)(a1 + 544);
    v21 = v40;
    v44.m128_i32[0] = a2;
    LOBYTE(v38) = v17;
    if ( a5 )
      goto LABEL_12;
    goto LABEL_20;
  }
  v18 = 0;
  v19 = 0;
  do
  {
    v20 = *(_DWORD *)(v16 - 640);
    if ( v20 == 6 )
    {
      if ( !*(_BYTE *)(v16 - 8) && v18 )
        goto LABEL_11;
LABEL_16:
      if ( *(_BYTE *)(v16 - 43) )
        break;
      goto LABEL_17;
    }
    if ( v20 - 4 <= 1 )
      break;
    if ( v20 == 2 )
      goto LABEL_16;
    if ( v20 == 3 || v20 <= 1 )
      break;
LABEL_17:
    a7 = (__m128)_mm_loadu_si128((const __m128i *)(v16 - 32));
    v24 = _mm_loadu_si128((const __m128i *)(v16 - 16));
    v16 -= 640;
    v19 = *(_QWORD *)(v16 + 624);
    v18 = *(_BYTE *)(v16 + 632);
    v44 = a7;
    v45 = v24;
  }
  while ( v12 != v16 );
  if ( !v18 )
    goto LABEL_19;
LABEL_11:
  LOBYTE(v38) = v17;
  v21 = v40;
  if ( !a5 )
  {
LABEL_20:
    if ( (*(_BYTE *)(v21 + 97) & 6) == 2 )
      goto LABEL_12;
    v39 = v21;
    v25 = sub_B7D7F0(a3);
    sub_18C74E0(a1, (v25 == 0) + 5, v39, 4);
    v26 = (char)v38;
    if ( (*(_BYTE *)(v40 + 97) & 6) == 4 )
    {
      v36 = sub_1E04000(a1, a2, a3);
      v26 = (char)v38;
      if ( v36 )
      {
        v35 = 1;
        goto LABEL_33;
      }
    }
    v27 = *(_QWORD *)(a1 + 248);
    v49 = 0;
    v47 = 16843008;
    v48 = v27;
    v46 = off_2C58E70;
    if ( !v7 )
    {
      LOBYTE(v38) = v26;
      sub_BC7960(&v46, v40);
      v26 = (char)v38;
      if ( v49 )
        goto LABEL_27;
    }
    if ( !v26 )
      goto LABEL_24;
    v37 = (_WORD *)sub_B73640(v40);
    if ( !v37 || (*v37 & 0x1FF) != 0x3C )
      goto LABEL_24;
    if ( v49 )
    {
LABEL_27:
      v28 = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640;
      if ( *(_BYTE *)(v28 + 632) )
      {
        v38 = *(_QWORD **)(a1 + 544);
        *(_DWORD *)(v28 + 608) = a2;
      }
      else
      {
        v38 = *(_QWORD **)(a1 + 544);
        *(_DWORD *)(v28 + 608) = a2;
        *(_BYTE *)(v28 + 632) = 1;
      }
      *(__m128 *)(v28 + 616) = _mm_loadh_ps((const double *)&v38);
    }
    v29 = *(unsigned int *)(a1 + 4624);
    v30 = *(_QWORD *)(a1 + 4616);
    v50 = a1;
    v53 = 0;
    v51 = 0;
    v31 = *(_BYTE *)(v30 + ((5 * v29 - 10) << 7) + 601);
    v52 = 0;
    v41 = 0;
    *(_BYTE *)(v30 + 640 * v29 - 39) = v31;
    v38 = &v50;
    v43 = &v40;
    v15 = _mm_loadh_ps((const double *)&v38);
    v42 = v15;
    sub_15F0FC0(a1, a2, (__int64 (__fastcall *)(__int64))sub_195EF20, (__int64)&v42);
    if ( v41 == 1
      || (v32 = v41 & 0xFFFFFFFFFFFFFFFELL,
          v33 = sub_EEB7E0(v41 & 0xFFFFFFFFFFFFFFFELL, a2, *(double *)v15.m128_u64),
          v34 = sub_183B1D0(a1, v40, v32, v33, v15, a7),
          v41 = v34,
          v34 == 1) )
    {
      v38 = (_QWORD *)(&dword_0 + 1);
      operator delete(v51, 16LL * v53, 8);
      v35 = (__int64)v38;
LABEL_33:
      v38 = (_QWORD *)v35;
      sub_190D5E0(a1, v15);
      return (__int64)v38;
    }
    a5 = (_WORD *)(v34 & 0xFFFFFFFFFFFFFFFELL);
    operator delete(v51, 16LL * v53, 8);
LABEL_24:
    sub_190D5E0(a1, v15);
    v21 = v40;
  }
LABEL_12:
  if ( (unsigned __int8)sub_190F640(a1, a2, a3, v21, a5, v7, v15) )
    return 1;
  else
    return sub_C96990(*(_QWORD **)(a1 + 248), v44.m128_i32[0], v40, (__int64)a5, v19, v22);
}
