__int64 __fastcall sub_2ACBE0(unsigned __int64 a1, int a2)
{
  __m128i *v3; // r12
  __m128i v4; // xmm0
  __int64 v5; // rdi
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rsi
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  unsigned __int64 v23; // rbp
  _QWORD *v24; // rdi
  _QWORD *v25; // rdi
  unsigned __int64 v26; // rbp
  _BYTE *v27; // rdi
  _BYTE *v28; // rdi
  __int64 v29; // [rsp+10h] [rbp-118h] BYREF
  unsigned __int64 v30; // [rsp+18h] [rbp-110h]
  __int64 v31; // [rsp+20h] [rbp-108h]
  __int128 v32; // [rsp+28h] [rbp-100h]
  __int64 v33; // [rsp+38h] [rbp-F0h]
  __int64 v34; // [rsp+40h] [rbp-E8h] BYREF
  int v35; // [rsp+48h] [rbp-E0h]
  __m128i v36; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int64 v37; // [rsp+60h] [rbp-C8h]
  __int64 v38; // [rsp+68h] [rbp-C0h]
  unsigned __int64 v39; // [rsp+70h] [rbp-B8h]
  __int64 v40; // [rsp+78h] [rbp-B0h]
  __int64 v41; // [rsp+80h] [rbp-A8h]
  __int128 v42; // [rsp+88h] [rbp-A0h]
  int v43; // [rsp+98h] [rbp-90h]
  int v44; // [rsp+9Ch] [rbp-8Ch]
  _QWORD v45[2]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-70h] BYREF
  _DWORD v48[4]; // [rsp+C0h] [rbp-68h] BYREF
  _DWORD v49[4]; // [rsp+D0h] [rbp-58h] BYREF
  int v50; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v51; // [rsp+E8h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v3 = &v36;
  v43 = a2;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v4 = _mm_loadl_epi64((const __m128i *)(a1 + 216));
  v44 = 0;
  v36 = _mm_unpacklo_epi64(v4, (__m128i)a1);
  v42 = 0;
  sub_29D590(&v36);
  v5 = *(_QWORD *)(a1 + 8);
  v29 = -1;
  v30 = 0xFFFFFFFF00000000LL;
  v31 = 0xFFFFFFFFLL;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v32 = 0;
  if ( (unsigned __int8)sub_36E6F0(v5) )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(int *)(v6 + 464) > 0 && (*(_BYTE *)(sub_13CCC0((_QWORD *)v6, 0) + 24) & 2) == 0 )
    {
      v12 = sub_13CCC0(*(_QWORD **)(a1 + 8), 0);
      v13 = *(_QWORD *)(a1 + 8);
      LODWORD(v30) = 65;
      *(_QWORD *)&v32 = v13;
      DWORD2(v32) = ***(_DWORD ***)(a1 + 48);
      copy_tinfo_t(&v34, v12 + 80);
      v14 = *(_QWORD *)(a1 + 216);
      v45[0] = 6;
      v45[1] = &v29;
      sub_2A0420((__int64)v45, v14, v15, v16, v17, v18);
      v19 = *(_QWORD *)(a1 + 216);
      v46 = 1;
      v47 = 0;
      copy_tinfo_t(&v47, v19 + 232);
      v48[0] = 0;
      sub_29FB30((__int64)v48, (unsigned int *)&v46);
      v49[0] = 0;
      sub_29FB30((__int64)v49, (unsigned int *)v45);
      v50 = 1;
      sub_2A86D0((__int64)&v36, (__int64)v48, 0, v20, v21, v22);
      v50 = -1;
      sub_29EFF0((__int64)v49);
      sub_29EFF0((__int64)v48);
      sub_29EFF0((__int64)&v46);
      sub_29EFF0((__int64)v45);
    }
  }
  LOBYTE(v3) = (int)sub_2AC9D0(&v36) > 0;
  sub_2559F0((__int64)&v29);
  clear_tinfo_t(&v34);
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  v7 = v39;
  if ( v39 )
  {
    v8 = *(_QWORD *)v39;
    if ( !v40 )
    {
      *(_QWORD *)v39 = *(_QWORD *)v39 & 3LL | v39 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v39 + 8) = _mm_unpacklo_epi64((__m128i)v39, (__m128i)v39);
      *(_QWORD *)v39 &= ~1uLL;
      *(_QWORD *)v39 |= 2uLL;
      goto LABEL_8;
    }
    v23 = v8 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_25:
      *(_QWORD *)v7 = v8 & 3 | v7 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v39 + 8) = _mm_unpacklo_epi64((__m128i)v39, (__m128i)v39);
      *(_QWORD *)v39 &= ~1uLL;
      *(_QWORD *)v39 |= 2uLL;
      v40 = 0;
LABEL_8:
      if ( v39 )
        qfree(v39);
      goto LABEL_10;
    }
    v24 = *(_QWORD **)(v23 + 8);
    if ( (*(_BYTE *)v24 & 2) != 0 )
    {
      v25 = *(_QWORD **)(v23 + 16);
      if ( (*(_BYTE *)v25 & 2) != 0 )
        goto LABEL_39;
    }
    else
    {
      sub_299A00(v24);
      v25 = *(_QWORD **)(v23 + 16);
      if ( (*(_BYTE *)v25 & 2) != 0 )
        goto LABEL_21;
    }
    sub_299A00(v25);
LABEL_21:
    if ( (*(_BYTE *)v23 & 2) != 0 )
    {
LABEL_22:
      if ( v8 > 3 )
        qfree(v8 & 0xFFFFFFFFFFFFFFFCLL);
      v7 = v39;
      v8 = *(_QWORD *)v39;
      goto LABEL_25;
    }
LABEL_39:
    clear_tinfo_t(v23 + 32);
    clear_tinfo_t(v23 + 24);
    *(_QWORD *)v23 |= 2uLL;
    goto LABEL_22;
  }
LABEL_10:
  v9 = v37;
  if ( !v37 )
    return (unsigned int)v3;
  v10 = *(_QWORD *)v37;
  if ( !v38 )
  {
    *(_QWORD *)v37 = *(_QWORD *)v37 & 3LL | v37 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(v37 + 8) = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
    *(_QWORD *)v37 &= ~1uLL;
    *(_QWORD *)v37 |= 2uLL;
    goto LABEL_13;
  }
  v26 = v10 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v27 = *(_BYTE **)(v26 + 8);
    if ( (*v27 & 2) != 0 )
    {
      v28 = *(_BYTE **)(v26 + 16);
      if ( (*v28 & 2) != 0 )
        goto LABEL_38;
    }
    else
    {
      sub_29F420((__int64)v27);
      v28 = *(_BYTE **)(v26 + 16);
      if ( (*v28 & 2) != 0 )
        goto LABEL_29;
    }
    sub_29F420((__int64)v28);
LABEL_29:
    if ( (*(_BYTE *)v26 & 2) != 0 )
    {
LABEL_30:
      if ( v10 > 3 )
        qfree(v10 & 0xFFFFFFFFFFFFFFFCLL);
      v9 = v37;
      v10 = *(_QWORD *)v37;
      goto LABEL_33;
    }
LABEL_38:
    *(_DWORD *)(v26 + 56) = -1;
    sub_29EFF0(v26 + 40);
    sub_29EFF0(v26 + 24);
    *(_QWORD *)v26 |= 2uLL;
    goto LABEL_30;
  }
LABEL_33:
  *(_QWORD *)v9 = v10 & 3 | v9 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(v37 + 8) = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
  *(_QWORD *)v37 &= ~1uLL;
  *(_QWORD *)v37 |= 2uLL;
  v38 = 0;
LABEL_13:
  if ( v37 )
    qfree(v37);
  return (unsigned int)v3;
}
