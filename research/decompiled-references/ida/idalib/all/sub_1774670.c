__int64 __fastcall sub_1774670(__int64 *a1, __int64 a2, __m128 a3)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v8; // rax
  __int64 v9; // r15
  int v10; // r12d
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // rax
  __m128i v19; // xmm1
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  void *v26; // rax
  unsigned __int64 v27; // rax
  __int16 v28; // si
  __int64 v29; // rdx
  int *v30; // rdi
  int v31; // ecx
  int v32; // ecx
  unsigned int v33; // ecx
  unsigned __int64 v34; // rax
  const __m128i *v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  _DWORD *v39; // rax
  int v40; // r8d
  int v41; // r13d
  __int64 v42; // [rsp+8h] [rbp-260h]
  __int64 v43; // [rsp+10h] [rbp-258h]
  bool v44; // [rsp+18h] [rbp-250h]
  void **v45; // [rsp+28h] [rbp-240h]
  __int128 v46; // [rsp+30h] [rbp-238h] BYREF
  void *v47[2]; // [rsp+40h] [rbp-228h]
  __int128 v48; // [rsp+50h] [rbp-218h]
  __int64 v49; // [rsp+60h] [rbp-208h] BYREF
  void *ptr; // [rsp+68h] [rbp-200h]
  __int64 v51; // [rsp+70h] [rbp-1F8h]
  _BYTE v52[64]; // [rsp+78h] [rbp-1F0h] BYREF
  void *v53[2]; // [rsp+B8h] [rbp-1B0h]
  __int64 v54; // [rsp+C8h] [rbp-1A0h]
  _QWORD *v55; // [rsp+D0h] [rbp-198h]
  __m128i v56; // [rsp+D8h] [rbp-190h]
  __int64 v57; // [rsp+E8h] [rbp-180h]
  __int64 v58; // [rsp+F0h] [rbp-178h]
  __int64 v59; // [rsp+F8h] [rbp-170h]
  __int64 v60; // [rsp+100h] [rbp-168h]
  void *v61[2]; // [rsp+110h] [rbp-158h] BYREF
  _BYTE v62[256]; // [rsp+120h] [rbp-148h] BYREF
  __int64 v63; // [rsp+220h] [rbp-48h]

  if ( (unsigned __int8)sub_C95850(a2) )
  {
    v10 = 0;
    v11 = (unsigned int)sub_176A2F0(a1, *(_QWORD *)(a2 + 64), a3);
    v9 = *(_QWORD *)(a2 + 40);
    LODWORD(v42) = v11;
    if ( !v9 )
      goto LABEL_7;
  }
  else
  {
    v5 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 56));
    if ( v5 == 1 )
      return 1;
    v8 = sub_19C4DF0(*a1, v5 & 0xFFFFFFFFFFFFFFFELL, (*(_DWORD *)a2 >> 20) & 1);
    if ( v8 == 1 )
      return 1;
    v9 = *(_QWORD *)(a2 + 40);
    v10 = v8 & 0xFFFFFFFE;
    v42 = *(_QWORD *)((v8 & 0xFFFFFFFFFFFFFFFELL) + 8);
    if ( !v9 )
    {
LABEL_7:
      v43 = 0;
      goto LABEL_10;
    }
  }
  v9 = sub_176EE90(a1, v9, *(void **)(a2 + 48), 0, 0);
  v43 = v12;
  if ( !v9 )
    return 1;
LABEL_10:
  v13 = 0;
  if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
  {
    v14 = 8LL * *(unsigned int *)(a2 + 4);
    v15 = a2 + v14 + 64;
    v16 = a2 + v14 + 80;
    v17 = v15;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
      v17 = v16;
    v13 = *(_DWORD *)(v17 + 8);
  }
  v18 = (_QWORD *)*a1;
  v19 = _mm_loadu_si128((const __m128i *)(a2 + 16));
  v51 = 0x800000000LL;
  v55 = v18;
  v20 = *(_QWORD *)(a2 + 32);
  ptr = v52;
  v57 = v20;
  v49 = 0;
  *(_OWORD *)v53 = 0;
  v54 = 0;
  v56 = v19;
  v58 = 0;
  v59 = 0;
  v60 = 0x101010000LL;
  sub_1A395A0(&v49);
  if ( (unsigned __int8)sub_174BAF0(a1, (__int16 *)a2, 0, (__int64)&v49) )
    goto LABEL_15;
  if ( sub_C95870(a2, a2, v21, v22) )
  {
    v25 = sub_C95870(a2, a2, v23, v24);
    v26 = (void *)sub_17473B0((__int64)a1, v25);
    if ( !v26 )
    {
LABEL_15:
      v6 = 1;
      goto LABEL_16;
    }
    v53[1] = v26;
  }
  v63 = 0;
  v61[0] = v62;
  v61[1] = (void *)0x800000000LL;
  v27 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x80000) == 0 )
    goto LABEL_47;
  v28 = *(_WORD *)a2 & 0x1FF;
  v29 = 8LL * *(unsigned int *)(a2 + 4);
  v30 = (int *)(a2 + v29 + 80);
  if ( v28 == 24 )
    v30 = (int *)(a2 + v29 + 64);
  v31 = *v30;
  if ( !*v30 )
    goto LABEL_47;
  if ( (v27 & 0x80000) == 0 )
    v31 = 0;
  LODWORD(v63) = v31;
  v32 = 0;
  if ( (v27 & 0x80000) != 0 )
    v32 = v30[1];
  HIDWORD(v63) = v32;
  v33 = 0;
  if ( (v27 & 0x80000) != 0 )
    v33 = v30[3];
  v34 = v27 >> 16;
  if ( (v34 & 8) == 0 )
    goto LABEL_44;
  if ( v28 == 24 )
  {
    if ( *(_DWORD *)(a2 + v29 + 64) )
    {
      v35 = (const __m128i *)(a2 + v29 + 16LL * ((v34 & 8) != 0) + 64);
      goto LABEL_45;
    }
LABEL_44:
    v35 = nullptr;
    goto LABEL_45;
  }
  if ( !*(_DWORD *)(a2 + v29 + 80) )
    goto LABEL_44;
  v35 = (const __m128i *)(a2 + v29 + 16LL * ((v34 & 8) != 0) + 80);
LABEL_45:
  if ( !(unsigned __int8)sub_1771010(a1, v35, &v35[2 * v33], (__int64)v61) )
  {
    v27 = *(_QWORD *)a2;
LABEL_47:
    if ( (v27 & 0x80000) == 0 )
      goto LABEL_55;
    v36 = 8LL * *(unsigned int *)(a2 + 4);
    v37 = a2 + v36 + 64;
    v38 = a2 + v36 + 80;
    v39 = (_DWORD *)v37;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
      v39 = (_DWORD *)v38;
    if ( *v39 )
      v45 = v61;
    else
LABEL_55:
      v45 = nullptr;
    v40 = *(_DWORD *)a2;
    v41 = *(_DWORD *)(a2 + 72);
    v46 = 0;
    *(_OWORD *)v47 = 0;
    v44 = (v40 & 0x100000) != 0;
    v48 = 0;
    sub_15AB8B0((__int64)&v46, v9, v43);
    v6 = sub_19CB370(*a1, v10, v42, v41, v44, (unsigned int)&v46, v13, 0, (__int64)&v49, (__int64)v45, 0, 0, 0);
    if ( HIDWORD(v47[1]) )
      free(v47[0]);
    goto LABEL_58;
  }
  v6 = 1;
LABEL_58:
  if ( v61[0] != v62 )
    free(v61[0]);
LABEL_16:
  if ( BYTE3(v60) )
  {
    if ( (_DWORD)v49 == 5 )
    {
      if ( !BYTE4(v60) )
        goto LABEL_20;
      goto LABEL_27;
    }
    if ( !v53[1] || (*(_BYTE *)(v55[29] + 46LL) & 0x20) == 0 )
      goto LABEL_20;
    sub_1663B80(v55, (__int64)&v49);
  }
  if ( !BYTE4(v60) || (_DWORD)v49 != 5 )
    goto LABEL_20;
LABEL_27:
  sub_1A445B0(v55, &v49);
LABEL_20:
  if ( v53[0] )
    sub_1A39780(v53[0]);
  if ( ptr != v52 )
    free(ptr);
  return v6;
}
