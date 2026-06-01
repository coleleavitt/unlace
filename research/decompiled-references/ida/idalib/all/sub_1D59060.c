__int64 __fastcall sub_1D59060(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // r13
  _DWORD *v16; // r12
  _QWORD *v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rax
  __m128 v24; // xmm1
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  void *v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  __int16 v35; // si
  _DWORD *v36; // rax
  __int64 v37; // rcx
  int v38; // ecx
  int v39; // ecx
  bool v40; // zf
  __int64 v41; // rdx
  __int64 v42; // rsi
  const __m128i *v43; // rsi
  const __m128i *v44; // rdx
  void **v45; // rax
  __int64 v46; // [rsp+8h] [rbp-270h]
  __int64 v47; // [rsp+10h] [rbp-268h]
  unsigned __int64 v48; // [rsp+20h] [rbp-258h]
  unsigned __int64 v49; // [rsp+20h] [rbp-258h]
  unsigned int v50; // [rsp+20h] [rbp-258h]
  __int64 v51; // [rsp+28h] [rbp-250h]
  bool v52; // [rsp+28h] [rbp-250h]
  __int64 v53; // [rsp+30h] [rbp-248h]
  _DWORD *v54; // [rsp+38h] [rbp-240h]
  __m128i v55; // [rsp+40h] [rbp-238h] BYREF
  void *v56[2]; // [rsp+50h] [rbp-228h]
  __int128 v57; // [rsp+60h] [rbp-218h]
  __int64 v58; // [rsp+70h] [rbp-208h] BYREF
  void *ptr; // [rsp+78h] [rbp-200h]
  __int64 v60; // [rsp+80h] [rbp-1F8h]
  _BYTE v61[64]; // [rsp+88h] [rbp-1F0h] BYREF
  void *v62[2]; // [rsp+C8h] [rbp-1B0h]
  __int64 v63; // [rsp+D8h] [rbp-1A0h]
  _QWORD *v64; // [rsp+E0h] [rbp-198h]
  __m128 v65; // [rsp+E8h] [rbp-190h]
  __int64 v66; // [rsp+F8h] [rbp-180h]
  __int64 v67; // [rsp+100h] [rbp-178h]
  __int64 v68; // [rsp+108h] [rbp-170h]
  __int64 v69; // [rsp+110h] [rbp-168h]
  void *v70[2]; // [rsp+120h] [rbp-158h] BYREF
  _BYTE v71[256]; // [rsp+130h] [rbp-148h] BYREF
  __int64 v72; // [rsp+230h] [rbp-48h]

  if ( (unsigned __int8)sub_C95850(a2) )
  {
    v16 = nullptr;
    v17 = sub_1D51630(a1, *(_QWORD *)(a2 + 64), a3, a4);
    v15 = *(_QWORD *)(a2 + 40);
    v46 = (__int64)v17;
    if ( !v15 )
      goto LABEL_7;
  }
  else
  {
    v8 = sub_1D434A0(a1, *(unsigned __int16 **)(a2 + 56), a3, a4, v5, v6, v7);
    if ( v8 == 1 )
      return 1;
    v14 = sub_19C4DF0(*a1, (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFELL), (*(_DWORD *)a2 >> 20) & 1, v9, v10, v11, a3, a4);
    if ( v14 == 1 )
      return 1;
    v15 = *(_QWORD *)(a2 + 40);
    v16 = (_DWORD *)(v14 & 0xFFFFFFFFFFFFFFFELL);
    v46 = *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFFELL) + 8);
    if ( !v15 )
    {
LABEL_7:
      v47 = 0;
      goto LABEL_10;
    }
  }
  v15 = sub_1D55A30((__int64 **)a1, v15, *(void **)(a2 + 48), 0, 0);
  v47 = v18;
  if ( !v15 )
    return 1;
LABEL_10:
  v19 = 0;
  if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
  {
    v20 = 8LL * *(unsigned int *)(a2 + 4);
    v21 = a2 + v20 + 64;
    v22 = a2 + v20 + 80;
    if ( (*(_WORD *)a2 & 0x1FF) == 0x18 )
      v22 = v21;
    v19 = *(_DWORD *)(v22 + 8);
  }
  v23 = (_QWORD *)*a1;
  v24 = (__m128)_mm_loadu_si128((const __m128i *)(a2 + 16));
  v60 = 0x800000000LL;
  v64 = v23;
  v25 = *(_QWORD *)(a2 + 32);
  ptr = v61;
  v66 = v25;
  v58 = 0;
  *(_OWORD *)v62 = 0;
  v63 = 0;
  v65 = v24;
  v67 = 0;
  v68 = 0;
  v69 = 0x101010000LL;
  sub_1A395A0((__int64)&v58);
  if ( (unsigned __int8)sub_1D415B0(a1, (__int16 *)a2, 0, (__int64)&v58) )
    goto LABEL_15;
  if ( sub_C95870(a2, a2, v26, v27) )
  {
    v31 = sub_C95870(a2, a2, v29, v30);
    v32 = (void *)sub_1D41150((__int64)a1, v31);
    if ( !v32 )
    {
LABEL_15:
      v12 = (_QWORD *)(&dword_0 + 1);
      goto LABEL_16;
    }
    v62[1] = v32;
  }
  v33 = *(_QWORD *)a2;
  v72 = 0;
  v70[0] = v71;
  v70[1] = (void *)0x800000000LL;
  if ( (v33 & 0x80000) == 0 )
    goto LABEL_51;
  v34 = 8LL * *(unsigned int *)(a2 + 4);
  v35 = *(_WORD *)a2 & 0x1FF;
  v36 = (_DWORD *)(a2 + v34 + 64);
  v51 = 8LL * *(unsigned int *)(a2 + 4);
  v37 = a2 + v34 + 80;
  if ( v35 != 24 )
    v36 = (_DWORD *)v37;
  v38 = *v36;
  v54 = v36;
  if ( !*v36 )
    goto LABEL_51;
  if ( ((v33 >> 16) & 8) == 0 )
    v38 = 0;
  LODWORD(v72) = v38;
  v39 = 0;
  if ( ((v33 >> 16) & 8) != 0 )
    v39 = v36[1];
  v48 = v33;
  HIDWORD(v72) = v39;
  if ( sub_18C0AE0(a2) )
  {
    v40 = (v48 & 0x80000) == 0;
    v49 = v48 >> 16;
    if ( v40 )
      JUMPOUT(0x2EAC16);
    if ( sub_18C0AE0(a2) )
    {
      v41 = 16LL * ((v49 & 8) != 0);
      v42 = v35 == 24 ? v51 + v41 + 64 : v51 + v41 + 80;
      v43 = (const __m128i *)(a2 + v42);
      v44 = &v43[2 * (unsigned int)v54[3]];
    }
    else
    {
      v44 = (const __m128i *)(32LL * (unsigned int)v54[3]);
      v43 = nullptr;
    }
  }
  else
  {
    v44 = nullptr;
    v43 = nullptr;
  }
  if ( (unsigned __int8)sub_1D57940((__int64 **)a1, v43, v44, (__int64)v70) )
  {
    v12 = (_QWORD *)(&dword_0 + 1);
  }
  else
  {
LABEL_51:
    v40 = !sub_18C0AE0(a2);
    v45 = nullptr;
    if ( !v40 )
      v45 = v70;
    v50 = *(_DWORD *)(a2 + 72);
    v53 = (__int64)v45;
    v52 = (*(_DWORD *)a2 & 0x100000) != 0;
    v55 = 0;
    *(_OWORD *)v56 = 0;
    v57 = 0;
    sub_15AB8B0((__int64)&v55, v15, v47);
    v12 = sub_19CB370(
            (__m128 *)*a1,
            v16,
            v46,
            v50,
            v52,
            &v55,
            (__m128)0LL,
            v24,
            v19,
            0,
            (__int64)&v58,
            v53,
            0,
            0,
            nullptr);
    if ( HIDWORD(v56[1]) )
      free(v56[0]);
  }
  if ( v70[0] != v71 )
    free(v70[0]);
LABEL_16:
  if ( BYTE3(v69) )
  {
    if ( (_DWORD)v58 == 5 )
    {
      if ( !BYTE4(v69) )
        goto LABEL_20;
      goto LABEL_27;
    }
    if ( !v62[1] || (*(_BYTE *)(v64[29] + 46LL) & 0x20) == 0 )
      goto LABEL_20;
    sub_1663B80(v64, (__int64)&v58);
  }
  if ( !BYTE4(v69) || (_DWORD)v58 != 5 )
    goto LABEL_20;
LABEL_27:
  sub_1A445B0((__int64)v64, (__int64)&v58, v26, v27, v28);
LABEL_20:
  if ( v62[0] )
    sub_1A39780((char *)v62[0]);
  if ( ptr != v61 )
    free(ptr);
  return (__int64)v12;
}
