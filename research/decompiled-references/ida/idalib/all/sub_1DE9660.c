__int64 __fastcall sub_1DE9660(__int64 *a1, unsigned __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int16 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // r15
  _DWORD *v18; // r12
  _QWORD *v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rax
  __m128 v27; // xmm1
  __int64 v28; // rax
  __int64 v29; // r8
  unsigned __int64 *v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  void *v40; // rax
  unsigned __int64 v41; // rax
  __int16 v42; // si
  __int64 v43; // rdx
  int *v44; // rdi
  int v45; // ecx
  int v46; // ecx
  unsigned int v47; // ecx
  unsigned __int64 v48; // rax
  const __m128i *v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  _DWORD *v53; // rax
  int v54; // r8d
  unsigned int v55; // r13d
  __int64 v56; // [rsp+8h] [rbp-260h]
  __int64 v57; // [rsp+10h] [rbp-258h]
  bool v58; // [rsp+18h] [rbp-250h]
  void **v59; // [rsp+28h] [rbp-240h]
  __m128i v60; // [rsp+30h] [rbp-238h] BYREF
  void *v61[2]; // [rsp+40h] [rbp-228h]
  __int128 v62; // [rsp+50h] [rbp-218h]
  __int64 v63; // [rsp+60h] [rbp-208h] BYREF
  void *ptr; // [rsp+68h] [rbp-200h]
  __int64 v65; // [rsp+70h] [rbp-1F8h]
  _BYTE v66[64]; // [rsp+78h] [rbp-1F0h] BYREF
  void *v67[2]; // [rsp+B8h] [rbp-1B0h]
  __int64 v68; // [rsp+C8h] [rbp-1A0h]
  _QWORD *v69; // [rsp+D0h] [rbp-198h]
  __m128 v70; // [rsp+D8h] [rbp-190h]
  __int64 v71; // [rsp+E8h] [rbp-180h]
  __int64 v72; // [rsp+F0h] [rbp-178h]
  __int64 v73; // [rsp+F8h] [rbp-170h]
  __int64 v74; // [rsp+100h] [rbp-168h]
  void *v75[2]; // [rsp+110h] [rbp-158h] BYREF
  _BYTE v76[256]; // [rsp+120h] [rbp-148h] BYREF
  __int64 v77; // [rsp+220h] [rbp-48h]

  if ( (unsigned __int8)sub_C95850(a2) )
  {
    v18 = nullptr;
    v19 = sub_1DD1AB0((__int64)a1, *(_QWORD *)(a2 + 64), a3, a4);
    v17 = *(_QWORD *)(a2 + 40);
    v56 = (__int64)v19;
    if ( !v17 )
      goto LABEL_7;
  }
  else
  {
    v10 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 56), v6, v7, v8, v9, a3, a4);
    if ( v10 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      return 1;
    v16 = sub_19C4DF0(
            *a1,
            (_QWORD *)((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL),
            (*(_DWORD *)a2 >> 20) & 1,
            v11,
            v12,
            v13,
            a3,
            a4);
    if ( v16 == 1 )
      return 1;
    v17 = *(_QWORD *)(a2 + 40);
    v18 = (_DWORD *)(v16 & 0xFFFFFFFFFFFFFFFELL);
    v56 = *(_QWORD *)((v16 & 0xFFFFFFFFFFFFFFFELL) + 8);
    if ( !v17 )
    {
LABEL_7:
      v57 = 0;
      goto LABEL_10;
    }
  }
  v17 = sub_1DD3CF0((__int64)a1, v17, *(void **)(a2 + 48), 0, 0);
  v57 = v20;
  if ( !v17 )
    return 1;
LABEL_10:
  v21 = 0;
  if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
  {
    v22 = 8LL * *(unsigned int *)(a2 + 4);
    v23 = a2 + v22 + 64;
    v24 = a2 + v22 + 80;
    v25 = v23;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
      v25 = v24;
    v21 = *(_DWORD *)(v25 + 8);
  }
  v26 = (_QWORD *)*a1;
  v27 = (__m128)_mm_loadu_si128((const __m128i *)(a2 + 16));
  v65 = 0x800000000LL;
  v69 = v26;
  v28 = *(_QWORD *)(a2 + 32);
  ptr = v66;
  v71 = v28;
  v63 = 0;
  *(_OWORD *)v67 = 0;
  v68 = 0;
  v70 = v27;
  v72 = 0;
  v73 = 0;
  v74 = 0x101010000LL;
  sub_1A395A0((__int64)&v63);
  if ( (unsigned __int8)sub_1DD8F30(a1, a2, 0, (__int64)&v63, v29, v30, (__m128)0LL, v27) )
    goto LABEL_15;
  if ( sub_C95870(a2, a2, v31, v32) )
  {
    v36 = sub_C95870(a2, a2, v34, v35);
    v40 = (void *)sub_1DD8310((__int64)a1, *(_DWORD *)(a2 + 24), v36, v37, v38, v39, (__m128)0LL, v27);
    if ( !v40 )
    {
LABEL_15:
      v14 = (_QWORD *)(&dword_0 + 1);
      goto LABEL_16;
    }
    v67[1] = v40;
  }
  v77 = 0;
  v75[0] = v76;
  v75[1] = (void *)0x800000000LL;
  v41 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x80000) == 0 )
    goto LABEL_47;
  v42 = *(_WORD *)a2 & 0x1FF;
  v43 = 8LL * *(unsigned int *)(a2 + 4);
  v44 = (int *)(a2 + v43 + 80);
  if ( v42 == 24 )
    v44 = (int *)(a2 + v43 + 64);
  v45 = *v44;
  if ( !*v44 )
    goto LABEL_47;
  if ( (v41 & 0x80000) == 0 )
    v45 = 0;
  LODWORD(v77) = v45;
  v46 = 0;
  if ( (v41 & 0x80000) != 0 )
    v46 = v44[1];
  HIDWORD(v77) = v46;
  v47 = 0;
  if ( (v41 & 0x80000) != 0 )
    v47 = v44[3];
  v48 = v41 >> 16;
  if ( (v48 & 8) == 0 )
    goto LABEL_44;
  if ( v42 == 24 )
  {
    if ( *(_DWORD *)(a2 + v43 + 64) )
    {
      v49 = (const __m128i *)(a2 + v43 + 16LL * ((v48 & 8) != 0) + 64);
      goto LABEL_45;
    }
LABEL_44:
    v49 = nullptr;
    goto LABEL_45;
  }
  if ( !*(_DWORD *)(a2 + v43 + 80) )
    goto LABEL_44;
  v49 = (const __m128i *)(a2 + v43 + 16LL * ((v48 & 8) != 0) + 80);
LABEL_45:
  if ( !(unsigned __int8)sub_1DD6C30(a1, v49, &v49[2 * v47], (__int64)v75, (__m128)0LL, v27) )
  {
    v41 = *(_QWORD *)a2;
LABEL_47:
    if ( (v41 & 0x80000) == 0 )
      goto LABEL_55;
    v50 = 8LL * *(unsigned int *)(a2 + 4);
    v51 = a2 + v50 + 64;
    v52 = a2 + v50 + 80;
    v53 = (_DWORD *)v51;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
      v53 = (_DWORD *)v52;
    if ( *v53 )
      v59 = v75;
    else
LABEL_55:
      v59 = nullptr;
    v54 = *(_DWORD *)a2;
    v55 = *(_DWORD *)(a2 + 72);
    v60 = 0;
    *(_OWORD *)v61 = 0;
    v58 = (v54 & 0x100000) != 0;
    v62 = 0;
    sub_15AB8B0((__int64)&v60, v17, v57);
    v14 = sub_19CB370(
            (__m128 *)*a1,
            v18,
            v56,
            v55,
            v58,
            &v60,
            (__m128)0LL,
            v27,
            v21,
            0,
            (__int64)&v63,
            (__int64)v59,
            0,
            0,
            nullptr);
    if ( HIDWORD(v61[1]) )
      free(v61[0]);
    goto LABEL_58;
  }
  v14 = (_QWORD *)(&dword_0 + 1);
LABEL_58:
  if ( v75[0] != v76 )
    free(v75[0]);
LABEL_16:
  if ( BYTE3(v74) )
  {
    if ( (_DWORD)v63 == 5 )
    {
      if ( !BYTE4(v74) )
        goto LABEL_20;
      goto LABEL_27;
    }
    if ( !v67[1] || (*(_BYTE *)(v69[29] + 46LL) & 0x20) == 0 )
      goto LABEL_20;
    sub_1663B80(v69, (__int64)&v63);
  }
  if ( !BYTE4(v74) || (_DWORD)v63 != 5 )
    goto LABEL_20;
LABEL_27:
  sub_1A445B0((__int64)v69, (__int64)&v63, v31, v32, v33);
LABEL_20:
  if ( v67[0] )
    sub_1A39780((char *)v67[0]);
  if ( ptr != v66 )
    free(ptr);
  return (__int64)v14;
}
