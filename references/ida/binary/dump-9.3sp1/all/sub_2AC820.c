__int64 __fastcall sub_2AC820(unsigned __int64 a1, int a2)
{
  __m128i *v3; // r12
  __m128i v4; // xmm0
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  unsigned __int64 v21; // rbp
  _QWORD *v22; // rdi
  _QWORD *v23; // rdi
  unsigned __int64 v24; // rbp
  _BYTE *v25; // rdi
  _BYTE *v26; // rdi
  __int64 v27; // [rsp+10h] [rbp-118h] BYREF
  unsigned __int64 v28; // [rsp+18h] [rbp-110h]
  __int64 v29; // [rsp+20h] [rbp-108h]
  __int128 v30; // [rsp+28h] [rbp-100h]
  __int64 v31; // [rsp+38h] [rbp-F0h]
  __int64 v32; // [rsp+40h] [rbp-E8h]
  int v33; // [rsp+48h] [rbp-E0h]
  __m128i v34; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-C8h]
  __int64 v36; // [rsp+68h] [rbp-C0h]
  __int64 v37; // [rsp+70h] [rbp-B8h]
  __int64 v38; // [rsp+78h] [rbp-B0h]
  __int64 v39; // [rsp+80h] [rbp-A8h]
  __int128 v40; // [rsp+88h] [rbp-A0h]
  int v41; // [rsp+98h] [rbp-90h]
  int v42; // [rsp+9Ch] [rbp-8Ch]
  _QWORD v43[2]; // [rsp+A0h] [rbp-88h] BYREF
  _QWORD v44[2]; // [rsp+B0h] [rbp-78h] BYREF
  _DWORD v45[4]; // [rsp+C0h] [rbp-68h] BYREF
  _DWORD v46[4]; // [rsp+D0h] [rbp-58h] BYREF
  int v47; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v48; // [rsp+E8h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v3 = &v34;
  v41 = a2;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v4 = _mm_loadl_epi64((const __m128i *)(a1 + 216));
  v42 = 0;
  v34 = _mm_unpacklo_epi64(v4, (__m128i)a1);
  v40 = 0;
  sub_29D1D0(&v34);
  v5 = *(_QWORD *)(a1 + 8);
  v27 = -1;
  v28 = 0xFFFFFFFF00000000LL;
  v29 = 0xFFFFFFFFLL;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v30 = 0;
  if ( (unsigned __int8)sub_36E1B0(v5) )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(int *)(v6 + 464) > 0 && (*(_BYTE *)(sub_13D280((_QWORD *)v6, 0) + 24) & 2) == 0 )
    {
      sub_13D280(*(_QWORD **)(a1 + 8), 0);
      v12 = *(_QWORD *)(a1 + 8);
      LODWORD(v28) = 65;
      *(_QWORD *)&v30 = v12;
      DWORD2(v30) = ***(_DWORD ***)(a1 + 48);
      copy_tinfo_t();
      v13 = *(_QWORD *)(a1 + 216);
      v43[0] = 6;
      v43[1] = &v27;
      sub_2A0060((__int64)v43, v13, v14, v15, v16, v17);
      v44[0] = 1;
      v44[1] = 0;
      copy_tinfo_t();
      v45[0] = 0;
      sub_29F770((__int64)v45, (unsigned int *)v44);
      v46[0] = 0;
      sub_29F770((__int64)v46, (unsigned int *)v43);
      v47 = 1;
      sub_2A8310((__int64)&v34, (__int64)v45, 0, v18, v19, v20);
      v47 = -1;
      sub_29EC30((__int64)v46);
      sub_29EC30((__int64)v45);
      sub_29EC30((__int64)v44);
      sub_29EC30((__int64)v43);
    }
  }
  LOBYTE(v3) = (int)sub_2AC610(&v34) > 0;
  sub_255630((__int64)&v27);
  clear_tinfo_t();
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  v7 = v37;
  if ( v37 )
  {
    v8 = *(_QWORD *)v37;
    if ( !v38 )
    {
      *(_QWORD *)v37 = *(_QWORD *)v37 & 3LL | v37 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v37 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v37, (__m128i)(unsigned __int64)v37);
      *(_QWORD *)v37 &= ~1uLL;
      *(_QWORD *)v37 |= 2uLL;
      goto LABEL_8;
    }
    v21 = v8 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_25:
      *(_QWORD *)v7 = v8 & 3 | v7 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v37 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v37, (__m128i)(unsigned __int64)v37);
      *(_QWORD *)v37 &= ~1uLL;
      *(_QWORD *)v37 |= 2uLL;
      v38 = 0;
LABEL_8:
      if ( v37 )
        qfree(v37);
      goto LABEL_10;
    }
    v22 = *(_QWORD **)(v21 + 8);
    if ( (*(_BYTE *)v22 & 2) != 0 )
    {
      v23 = *(_QWORD **)(v21 + 16);
      if ( (*(_BYTE *)v23 & 2) != 0 )
        goto LABEL_39;
    }
    else
    {
      sub_299640(v22);
      v23 = *(_QWORD **)(v21 + 16);
      if ( (*(_BYTE *)v23 & 2) != 0 )
        goto LABEL_21;
    }
    sub_299640(v23);
LABEL_21:
    if ( (*(_BYTE *)v21 & 2) != 0 )
    {
LABEL_22:
      if ( v8 > 3 )
        qfree(v8 & 0xFFFFFFFFFFFFFFFCLL);
      v7 = v37;
      v8 = *(_QWORD *)v37;
      goto LABEL_25;
    }
LABEL_39:
    clear_tinfo_t();
    clear_tinfo_t();
    *(_QWORD *)v21 |= 2uLL;
    goto LABEL_22;
  }
LABEL_10:
  v9 = v35;
  if ( !v35 )
    return (unsigned int)v3;
  v10 = *(_QWORD *)v35;
  if ( !v36 )
  {
    *(_QWORD *)v35 = *(_QWORD *)v35 & 3LL | v35 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(v35 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v35, (__m128i)(unsigned __int64)v35);
    *(_QWORD *)v35 &= ~1uLL;
    *(_QWORD *)v35 |= 2uLL;
    goto LABEL_13;
  }
  v24 = v10 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v25 = *(_BYTE **)(v24 + 8);
    if ( (*v25 & 2) != 0 )
    {
      v26 = *(_BYTE **)(v24 + 16);
      if ( (*v26 & 2) != 0 )
        goto LABEL_38;
    }
    else
    {
      sub_29F060((__int64)v25);
      v26 = *(_BYTE **)(v24 + 16);
      if ( (*v26 & 2) != 0 )
        goto LABEL_29;
    }
    sub_29F060((__int64)v26);
LABEL_29:
    if ( (*(_BYTE *)v24 & 2) != 0 )
    {
LABEL_30:
      if ( v10 > 3 )
        qfree(v10 & 0xFFFFFFFFFFFFFFFCLL);
      v9 = v35;
      v10 = *(_QWORD *)v35;
      goto LABEL_33;
    }
LABEL_38:
    *(_DWORD *)(v24 + 56) = -1;
    sub_29EC30(v24 + 40);
    sub_29EC30(v24 + 24);
    *(_QWORD *)v24 |= 2uLL;
    goto LABEL_30;
  }
LABEL_33:
  *(_QWORD *)v9 = v10 & 3 | v9 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(v35 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v35, (__m128i)(unsigned __int64)v35);
  *(_QWORD *)v35 &= ~1uLL;
  *(_QWORD *)v35 |= 2uLL;
  v36 = 0;
LABEL_13:
  if ( v35 )
    qfree(v35);
  return (unsigned int)v3;
}
