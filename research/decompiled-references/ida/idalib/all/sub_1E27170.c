__int64 __fastcall sub_1E27170(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rbp
  unsigned __int64 v15; // rax
  __int64 v16; // r15
  _DWORD *v17; // r12
  _QWORD *v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // rax
  __m128 v26; // xmm1
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  void *v34; // rax
  unsigned __int64 v35; // rax
  __int16 v36; // si
  __int64 v37; // rdx
  int *v38; // rdi
  int v39; // ecx
  int v40; // ecx
  unsigned int v41; // ecx
  unsigned __int64 v42; // rax
  const __m128i *v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  _DWORD *v47; // rax
  int v48; // r8d
  unsigned int v49; // r13d
  __int64 v50; // [rsp+8h] [rbp-260h]
  __int64 v51; // [rsp+10h] [rbp-258h]
  bool v52; // [rsp+18h] [rbp-250h]
  void **v53; // [rsp+28h] [rbp-240h]
  __m128i v54; // [rsp+30h] [rbp-238h] BYREF
  void *v55[2]; // [rsp+40h] [rbp-228h]
  __int128 v56; // [rsp+50h] [rbp-218h]
  __int64 v57; // [rsp+60h] [rbp-208h] BYREF
  void *ptr; // [rsp+68h] [rbp-200h]
  __int64 v59; // [rsp+70h] [rbp-1F8h]
  _BYTE v60[64]; // [rsp+78h] [rbp-1F0h] BYREF
  void *v61[2]; // [rsp+B8h] [rbp-1B0h]
  __int64 v62; // [rsp+C8h] [rbp-1A0h]
  _QWORD *v63; // [rsp+D0h] [rbp-198h]
  __m128 v64; // [rsp+D8h] [rbp-190h]
  __int64 v65; // [rsp+E8h] [rbp-180h]
  __int64 v66; // [rsp+F0h] [rbp-178h]
  __int64 v67; // [rsp+F8h] [rbp-170h]
  __int64 v68; // [rsp+100h] [rbp-168h]
  void *v69[2]; // [rsp+110h] [rbp-158h] BYREF
  _BYTE v70[256]; // [rsp+120h] [rbp-148h] BYREF
  __int64 v71; // [rsp+220h] [rbp-48h]

  if ( (unsigned __int8)sub_C95850(a2) )
  {
    v17 = nullptr;
    v18 = sub_1E1F4E0(a1, *(_QWORD *)(a2 + 64), a3, a4);
    v16 = *(_QWORD *)(a2 + 40);
    v50 = (__int64)v18;
    if ( !v16 )
      goto LABEL_7;
  }
  else
  {
    v9 = sub_1E11560(a1, *(unsigned __int16 **)(a2 + 56), a3, a4, v6, v7, v8);
    if ( v9 == 1 )
      return 1;
    v15 = sub_19C4DF0(*a1, (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL), (*(_DWORD *)a2 >> 20) & 1, v10, v11, v12, a3, a4);
    if ( v15 == 1 )
      return 1;
    v16 = *(_QWORD *)(a2 + 40);
    v17 = (_DWORD *)(v15 & 0xFFFFFFFFFFFFFFFELL);
    v50 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFFELL) + 8);
    if ( !v16 )
    {
LABEL_7:
      v51 = 0;
      goto LABEL_10;
    }
  }
  v16 = sub_1E237D0((__int64)a1, v16, *(void **)(a2 + 48), 0, 0);
  v51 = v19;
  if ( !v16 )
    return 1;
LABEL_10:
  v20 = 0;
  if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
  {
    v21 = 8LL * *(unsigned int *)(a2 + 4);
    v22 = a2 + v21 + 64;
    v23 = a2 + v21 + 80;
    v24 = v22;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
      v24 = v23;
    v20 = *(_DWORD *)(v24 + 8);
  }
  v25 = (_QWORD *)*a1;
  v26 = (__m128)_mm_loadu_si128((const __m128i *)(a2 + 16));
  v59 = 0x800000000LL;
  v63 = v25;
  v27 = *(_QWORD *)(a2 + 32);
  ptr = v60;
  v65 = v27;
  v57 = 0;
  *(_OWORD *)v61 = 0;
  v62 = 0;
  v64 = v26;
  v66 = 0;
  v67 = 0;
  v68 = 0x101010000LL;
  sub_1A395A0((__int64)&v57);
  if ( (unsigned __int8)sub_1E0F650(a1, a2, 0, (__int64)&v57) )
    goto LABEL_15;
  if ( sub_C95870(a2, a2, v28, v29) )
  {
    v33 = sub_C95870(a2, a2, v31, v32);
    v34 = (void *)sub_1E0AF30((__int64)a1, v33);
    if ( !v34 )
    {
LABEL_15:
      v13 = (_QWORD *)(&dword_0 + 1);
      goto LABEL_16;
    }
    v61[1] = v34;
  }
  v71 = 0;
  v69[0] = v70;
  v69[1] = (void *)0x800000000LL;
  v35 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x80000) == 0 )
    goto LABEL_47;
  v36 = *(_WORD *)a2 & 0x1FF;
  v37 = 8LL * *(unsigned int *)(a2 + 4);
  v38 = (int *)(a2 + v37 + 80);
  if ( v36 == 24 )
    v38 = (int *)(a2 + v37 + 64);
  v39 = *v38;
  if ( !*v38 )
    goto LABEL_47;
  if ( (v35 & 0x80000) == 0 )
    v39 = 0;
  LODWORD(v71) = v39;
  v40 = 0;
  if ( (v35 & 0x80000) != 0 )
    v40 = v38[1];
  HIDWORD(v71) = v40;
  v41 = 0;
  if ( (v35 & 0x80000) != 0 )
    v41 = v38[3];
  v42 = v35 >> 16;
  if ( (v42 & 8) == 0 )
    goto LABEL_44;
  if ( v36 == 24 )
  {
    if ( *(_DWORD *)(a2 + v37 + 64) )
    {
      v43 = (const __m128i *)(a2 + v37 + 16LL * ((v42 & 8) != 0) + 64);
      goto LABEL_45;
    }
LABEL_44:
    v43 = nullptr;
    goto LABEL_45;
  }
  if ( !*(_DWORD *)(a2 + v37 + 80) )
    goto LABEL_44;
  v43 = (const __m128i *)(a2 + v37 + 16LL * ((v42 & 8) != 0) + 80);
LABEL_45:
  if ( !(unsigned __int8)sub_1E25C60(a1, v43, &v43[2 * v41], (__int64)v69) )
  {
    v35 = *(_QWORD *)a2;
LABEL_47:
    if ( (v35 & 0x80000) == 0 )
      goto LABEL_55;
    v44 = 8LL * *(unsigned int *)(a2 + 4);
    v45 = a2 + v44 + 64;
    v46 = a2 + v44 + 80;
    v47 = (_DWORD *)v45;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
      v47 = (_DWORD *)v46;
    if ( *v47 )
      v53 = v69;
    else
LABEL_55:
      v53 = nullptr;
    v48 = *(_DWORD *)a2;
    v49 = *(_DWORD *)(a2 + 72);
    v54 = 0;
    *(_OWORD *)v55 = 0;
    v52 = (v48 & 0x100000) != 0;
    v56 = 0;
    sub_15AB8B0((__int64)&v54, v16, v51);
    v13 = sub_19CB370(
            (__m128 *)*a1,
            v17,
            v50,
            v49,
            v52,
            &v54,
            (__m128)0LL,
            v26,
            v20,
            0,
            (__int64)&v57,
            (__int64)v53,
            0,
            0,
            nullptr);
    if ( HIDWORD(v55[1]) )
      free(v55[0]);
    goto LABEL_58;
  }
  v13 = (_QWORD *)(&dword_0 + 1);
LABEL_58:
  if ( v69[0] != v70 )
    free(v69[0]);
LABEL_16:
  if ( BYTE3(v68) )
  {
    if ( (_DWORD)v57 == 5 )
    {
      if ( !BYTE4(v68) )
        goto LABEL_20;
      goto LABEL_27;
    }
    if ( !v61[1] || (*(_BYTE *)(v63[29] + 46LL) & 0x20) == 0 )
      goto LABEL_20;
    sub_1663B80(v63, (__int64)&v57);
  }
  if ( !BYTE4(v68) || (_DWORD)v57 != 5 )
    goto LABEL_20;
LABEL_27:
  sub_1A445B0((__int64)v63, (__int64)&v57, v28, v29, v30);
LABEL_20:
  if ( v61[0] )
    sub_1A39780((char *)v61[0]);
  if ( ptr != v60 )
    free(ptr);
  return (__int64)v13;
}
