__int64 __fastcall sub_1D29010(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // r15
  _DWORD *v17; // rbp
  _QWORD *v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __m128 v26; // xmm1
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int16 v41; // si
  __int64 v42; // rdx
  int *v43; // rdi
  int v44; // ecx
  int v45; // ecx
  unsigned int v46; // ecx
  unsigned __int64 v47; // rax
  const __m128i *v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  _DWORD *v52; // rax
  int v53; // r8d
  unsigned int v54; // r13d
  __int64 v55; // [rsp+8h] [rbp-260h]
  __int64 v56; // [rsp+10h] [rbp-258h]
  bool v57; // [rsp+18h] [rbp-250h]
  void **v58; // [rsp+28h] [rbp-240h]
  __m128i v59; // [rsp+30h] [rbp-238h] BYREF
  void *v60[2]; // [rsp+40h] [rbp-228h]
  __int128 v61; // [rsp+50h] [rbp-218h]
  _QWORD v62[3]; // [rsp+60h] [rbp-208h] BYREF
  __int64 v63; // [rsp+78h] [rbp-1F0h] BYREF
  __int128 v64; // [rsp+B8h] [rbp-1B0h]
  __int64 v65; // [rsp+C8h] [rbp-1A0h]
  __int64 v66; // [rsp+D0h] [rbp-198h]
  __m128 v67; // [rsp+D8h] [rbp-190h]
  __int64 v68; // [rsp+E8h] [rbp-180h]
  __int64 v69; // [rsp+F0h] [rbp-178h]
  __int64 v70; // [rsp+F8h] [rbp-170h]
  __int64 v71; // [rsp+100h] [rbp-168h]
  void *ptr[2]; // [rsp+110h] [rbp-158h] BYREF
  _BYTE v73[256]; // [rsp+120h] [rbp-148h] BYREF
  __int64 v74; // [rsp+220h] [rbp-48h]

  if ( (unsigned __int8)sub_C95850(a2) )
  {
    v17 = nullptr;
    v18 = sub_1D1AC70(a1, *(_QWORD *)(a2 + 64), a3, a4);
    v16 = *(_QWORD *)(a2 + 40);
    v55 = (__int64)v18;
    if ( !v16 )
      goto LABEL_7;
  }
  else
  {
    v9 = sub_1D11200(a1, *(unsigned __int16 **)(a2 + 56), a3, a4, v6, v7, v8);
    if ( v9 == 1 )
      return 1;
    v15 = sub_19C4DF0(*a1, (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL), (*(_DWORD *)a2 >> 20) & 1, v10, v11, v12, a3, a4);
    if ( v15 == 1 )
      return 1;
    v16 = *(_QWORD *)(a2 + 40);
    v17 = (_DWORD *)(v15 & 0xFFFFFFFFFFFFFFFELL);
    v55 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFFELL) + 8);
    if ( !v16 )
    {
LABEL_7:
      v56 = 0;
      goto LABEL_10;
    }
  }
  v16 = sub_1D23E30((__int64 **)a1, v16, *(void **)(a2 + 48), 0, 0);
  v56 = v19;
  if ( v16 )
  {
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
    v25 = *a1;
    v26 = (__m128)_mm_loadu_si128((const __m128i *)(a2 + 16));
    v62[2] = 0x800000000LL;
    v66 = v25;
    v27 = *(_QWORD *)(a2 + 32);
    v62[1] = &v63;
    v68 = v27;
    v62[0] = 0;
    v64 = 0;
    v65 = 0;
    v67 = v26;
    v69 = 0;
    v70 = 0;
    v71 = 0x101010000LL;
    sub_1A395A0((__int64)v62);
    if ( (unsigned __int8)sub_1D1B490((__int64)a1, a2, 0, (__int64)v62, v28, v29, (__m128)0LL, v26) )
      goto LABEL_15;
    if ( sub_C95870(a2, a2, v30, v31) )
    {
      v34 = sub_C95870(a2, a2, v32, v33);
      v39 = sub_1D1B120((__int64)a1, v34, (__m128)0LL, v26, v35, v36, v37, v38);
      if ( !v39 )
      {
LABEL_15:
        v13 = (_QWORD *)(&dword_0 + 1);
LABEL_16:
        sub_169D230((__int64)v62);
        return (__int64)v13;
      }
      *((_QWORD *)&v64 + 1) = v39;
    }
    v74 = 0;
    ptr[0] = v73;
    ptr[1] = (void *)0x800000000LL;
    v40 = *(_QWORD *)a2;
    if ( (*(_QWORD *)a2 & 0x80000) == 0 )
      goto LABEL_34;
    v41 = *(_WORD *)a2 & 0x1FF;
    v42 = 8LL * *(unsigned int *)(a2 + 4);
    v43 = (int *)(a2 + v42 + 80);
    if ( v41 == 24 )
      v43 = (int *)(a2 + v42 + 64);
    v44 = *v43;
    if ( !*v43 )
      goto LABEL_34;
    if ( (v40 & 0x80000) == 0 )
      v44 = 0;
    LODWORD(v74) = v44;
    v45 = 0;
    if ( (v40 & 0x80000) != 0 )
      v45 = v43[1];
    HIDWORD(v74) = v45;
    v46 = 0;
    if ( (v40 & 0x80000) != 0 )
      v46 = v43[3];
    v47 = v40 >> 16;
    if ( (v47 & 8) != 0 )
    {
      if ( v41 == 24 )
      {
        if ( *(_DWORD *)(a2 + v42 + 64) )
        {
          v48 = (const __m128i *)(a2 + v42 + 16LL * ((v47 & 8) != 0) + 64);
          goto LABEL_32;
        }
      }
      else if ( *(_DWORD *)(a2 + v42 + 80) )
      {
        v48 = (const __m128i *)(a2 + v42 + 16LL * ((v47 & 8) != 0) + 80);
        goto LABEL_32;
      }
    }
    v48 = nullptr;
LABEL_32:
    if ( (unsigned __int8)sub_1D25BD0((__int64 **)a1, v48, &v48[2 * v46], (__int64)ptr) )
    {
      v13 = (_QWORD *)(&dword_0 + 1);
LABEL_45:
      if ( ptr[0] != v73 )
        free(ptr[0]);
      goto LABEL_16;
    }
    v40 = *(_QWORD *)a2;
LABEL_34:
    if ( (v40 & 0x80000) == 0 )
      goto LABEL_42;
    v49 = 8LL * *(unsigned int *)(a2 + 4);
    v50 = a2 + v49 + 64;
    v51 = a2 + v49 + 80;
    v52 = (_DWORD *)v50;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
      v52 = (_DWORD *)v51;
    if ( *v52 )
      v58 = ptr;
    else
LABEL_42:
      v58 = nullptr;
    v53 = *(_DWORD *)a2;
    v54 = *(_DWORD *)(a2 + 72);
    v59 = 0;
    *(_OWORD *)v60 = 0;
    v57 = (v53 & 0x100000) != 0;
    v61 = 0;
    sub_15AB8B0((__int64)&v59, v16, v56);
    v13 = sub_19CB370(
            (__m128 *)*a1,
            v17,
            v55,
            v54,
            v57,
            &v59,
            (__m128)0LL,
            v26,
            v20,
            0,
            (__int64)v62,
            (__int64)v58,
            0,
            0,
            nullptr);
    if ( HIDWORD(v60[1]) )
      free(v60[0]);
    goto LABEL_45;
  }
  return 1;
}
