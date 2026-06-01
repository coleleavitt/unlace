__int64 __fastcall sub_1D01BF0(unsigned int *a1, __int64 a2, __m128 a3, __m128 a4)
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
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __m128 v26; // xmm1
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int16 v35; // si
  __int64 v36; // rdx
  int *v37; // rdi
  int v38; // ecx
  int v39; // ecx
  unsigned int v40; // ecx
  unsigned __int64 v41; // rax
  const __m128i *v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  _DWORD *v46; // rax
  int v47; // r8d
  unsigned int v48; // r13d
  __int64 v49; // [rsp+8h] [rbp-260h]
  __int64 v50; // [rsp+10h] [rbp-258h]
  bool v51; // [rsp+18h] [rbp-250h]
  void **v52; // [rsp+28h] [rbp-240h]
  __m128i v53; // [rsp+30h] [rbp-238h] BYREF
  void *v54[2]; // [rsp+40h] [rbp-228h]
  __int128 v55; // [rsp+50h] [rbp-218h]
  _QWORD v56[3]; // [rsp+60h] [rbp-208h] BYREF
  __int64 v57; // [rsp+78h] [rbp-1F0h] BYREF
  __int128 v58; // [rsp+B8h] [rbp-1B0h]
  __int64 v59; // [rsp+C8h] [rbp-1A0h]
  __int64 v60; // [rsp+D0h] [rbp-198h]
  __m128 v61; // [rsp+D8h] [rbp-190h]
  __int64 v62; // [rsp+E8h] [rbp-180h]
  __int64 v63; // [rsp+F0h] [rbp-178h]
  __int64 v64; // [rsp+F8h] [rbp-170h]
  __int64 v65; // [rsp+100h] [rbp-168h]
  void *ptr[2]; // [rsp+110h] [rbp-158h] BYREF
  _BYTE v67[256]; // [rsp+120h] [rbp-148h] BYREF
  __int64 v68; // [rsp+220h] [rbp-48h]

  if ( (unsigned __int8)sub_C95850(a2) )
  {
    v17 = nullptr;
    v18 = sub_1CF6840(a1, *(_QWORD *)(a2 + 64), a3, a4);
    v16 = *(_QWORD *)(a2 + 40);
    v49 = v18;
    if ( !v16 )
      goto LABEL_7;
  }
  else
  {
    v9 = sub_1CE88F0((__int64 *)a1, *(unsigned __int16 **)(a2 + 56), a3, a4, v6, v7, v8);
    if ( v9 == 1 )
      return 1;
    v15 = sub_19C4DF0(
            *(_QWORD *)a1,
            (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL),
            (*(_DWORD *)a2 >> 20) & 1,
            v10,
            v11,
            v12,
            a3,
            a4);
    if ( v15 == 1 )
      return 1;
    v16 = *(_QWORD *)(a2 + 40);
    v17 = (_DWORD *)(v15 & 0xFFFFFFFFFFFFFFFELL);
    v49 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFFELL) + 8);
    if ( !v16 )
    {
LABEL_7:
      v50 = 0;
      goto LABEL_10;
    }
  }
  v16 = sub_1CFE3D0((__int64)a1, v16, *(void **)(a2 + 48), 0, 0);
  v50 = v19;
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
    v25 = *(_QWORD *)a1;
    v26 = (__m128)_mm_loadu_si128((const __m128i *)(a2 + 16));
    v56[2] = 0x800000000LL;
    v60 = v25;
    v27 = *(_QWORD *)(a2 + 32);
    v56[1] = &v57;
    v62 = v27;
    v56[0] = 0;
    v58 = 0;
    v59 = 0;
    v61 = v26;
    v63 = 0;
    v64 = 0;
    v65 = 0x101010000LL;
    sub_1A395A0((__int64)v56);
    if ( (unsigned __int8)sub_1CBB1D0((__int64)a1, a2, 0, (__int64)v56) )
      goto LABEL_15;
    if ( sub_C95870(a2, a2, v28, v29) )
    {
      v32 = sub_C95870(a2, a2, v30, v31);
      v33 = sub_1CB9120((__int64)a1, v32);
      if ( !v33 )
      {
LABEL_15:
        v13 = (_QWORD *)(&dword_0 + 1);
LABEL_16:
        sub_169D230((__int64)v56);
        return (__int64)v13;
      }
      *((_QWORD *)&v58 + 1) = v33;
    }
    v68 = 0;
    ptr[0] = v67;
    ptr[1] = (void *)0x800000000LL;
    v34 = *(_QWORD *)a2;
    if ( (*(_QWORD *)a2 & 0x80000) == 0 )
      goto LABEL_34;
    v35 = *(_WORD *)a2 & 0x1FF;
    v36 = 8LL * *(unsigned int *)(a2 + 4);
    v37 = (int *)(a2 + v36 + 80);
    if ( v35 == 24 )
      v37 = (int *)(a2 + v36 + 64);
    v38 = *v37;
    if ( !*v37 )
      goto LABEL_34;
    if ( (v34 & 0x80000) == 0 )
      v38 = 0;
    LODWORD(v68) = v38;
    v39 = 0;
    if ( (v34 & 0x80000) != 0 )
      v39 = v37[1];
    HIDWORD(v68) = v39;
    v40 = 0;
    if ( (v34 & 0x80000) != 0 )
      v40 = v37[3];
    v41 = v34 >> 16;
    if ( (v41 & 8) != 0 )
    {
      if ( v35 == 24 )
      {
        if ( *(_DWORD *)(a2 + v36 + 64) )
        {
          v42 = (const __m128i *)(a2 + v36 + 16LL * ((v41 & 8) != 0) + 64);
          goto LABEL_32;
        }
      }
      else if ( *(_DWORD *)(a2 + v36 + 80) )
      {
        v42 = (const __m128i *)(a2 + v36 + 16LL * ((v41 & 8) != 0) + 80);
        goto LABEL_32;
      }
    }
    v42 = nullptr;
LABEL_32:
    if ( (unsigned __int8)sub_1D004D0(a1, v42, &v42[2 * v40], (__int64)ptr) )
    {
      v13 = (_QWORD *)(&dword_0 + 1);
LABEL_45:
      if ( ptr[0] != v67 )
        free(ptr[0]);
      goto LABEL_16;
    }
    v34 = *(_QWORD *)a2;
LABEL_34:
    if ( (v34 & 0x80000) == 0 )
      goto LABEL_42;
    v43 = 8LL * *(unsigned int *)(a2 + 4);
    v44 = a2 + v43 + 64;
    v45 = a2 + v43 + 80;
    v46 = (_DWORD *)v44;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
      v46 = (_DWORD *)v45;
    if ( *v46 )
      v52 = ptr;
    else
LABEL_42:
      v52 = nullptr;
    v47 = *(_DWORD *)a2;
    v48 = *(_DWORD *)(a2 + 72);
    v53 = 0;
    *(_OWORD *)v54 = 0;
    v51 = (v47 & 0x100000) != 0;
    v55 = 0;
    sub_15AB8B0((__int64)&v53, v16, v50);
    v13 = sub_19CB370(
            *(__m128 **)a1,
            v17,
            v49,
            v48,
            v51,
            &v53,
            (__m128)0LL,
            v26,
            v20,
            0,
            (__int64)v56,
            (__int64)v52,
            0,
            0,
            nullptr);
    if ( HIDWORD(v54[1]) )
      free(v54[0]);
    goto LABEL_45;
  }
  return 1;
}
