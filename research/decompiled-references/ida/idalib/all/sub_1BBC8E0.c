__int64 __fastcall sub_1BBC8E0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
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
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int16 v35; // si
  __int64 v36; // rcx
  int *v37; // rdi
  int v38; // r8d
  int v39; // r8d
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  const __m128i *v42; // rsi
  bool v43; // al
  int v44; // r8d
  bool v45; // zf
  unsigned int v46; // r13d
  void **v47; // rax
  __int64 v48; // [rsp+8h] [rbp-260h]
  __int64 v49; // [rsp+10h] [rbp-258h]
  bool v50; // [rsp+27h] [rbp-241h]
  __int64 v51; // [rsp+28h] [rbp-240h]
  __m128i v52; // [rsp+30h] [rbp-238h] BYREF
  void *v53[2]; // [rsp+40h] [rbp-228h]
  __int128 v54; // [rsp+50h] [rbp-218h]
  _QWORD v55[3]; // [rsp+60h] [rbp-208h] BYREF
  __int64 v56; // [rsp+78h] [rbp-1F0h] BYREF
  __int128 v57; // [rsp+B8h] [rbp-1B0h]
  __int64 v58; // [rsp+C8h] [rbp-1A0h]
  __int64 v59; // [rsp+D0h] [rbp-198h]
  __m128 v60; // [rsp+D8h] [rbp-190h]
  __int64 v61; // [rsp+E8h] [rbp-180h]
  __int64 v62; // [rsp+F0h] [rbp-178h]
  __int64 v63; // [rsp+F8h] [rbp-170h]
  __int64 v64; // [rsp+100h] [rbp-168h]
  void *ptr[2]; // [rsp+110h] [rbp-158h] BYREF
  _BYTE v66[256]; // [rsp+120h] [rbp-148h] BYREF
  __int64 v67; // [rsp+220h] [rbp-48h]

  if ( (unsigned __int8)sub_C95850(a2) )
  {
    v17 = nullptr;
    v18 = sub_1BB2C30(a1, *(_QWORD *)(a2 + 64), a3, a4);
    v16 = *(_QWORD *)(a2 + 40);
    v48 = (__int64)v18;
    if ( !v16 )
      goto LABEL_7;
  }
  else
  {
    v9 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 56), v6, a3, a4, v7, v8);
    if ( v9 == 1 )
      return 1;
    v15 = sub_19C4DF0(*a1, (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL), (*(_DWORD *)a2 >> 20) & 1, v10, v11, v12, a3, a4);
    if ( v15 == 1 )
      return 1;
    v16 = *(_QWORD *)(a2 + 40);
    v17 = (_DWORD *)(v15 & 0xFFFFFFFFFFFFFFFELL);
    v48 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFFELL) + 8);
    if ( !v16 )
    {
LABEL_7:
      v49 = 0;
      goto LABEL_10;
    }
  }
  v16 = sub_1BB75E0(a1, v16, *(void **)(a2 + 48), 0, 0);
  v49 = v19;
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
    v55[2] = 0x800000000LL;
    v59 = v25;
    v27 = *(_QWORD *)(a2 + 32);
    v55[1] = &v56;
    v61 = v27;
    v55[0] = 0;
    v57 = 0;
    v58 = 0;
    v60 = v26;
    v62 = 0;
    v63 = 0;
    v64 = 0x101010000LL;
    sub_1A395A0((__int64)v55);
    if ( (unsigned __int8)sub_1B19E70(a1, a2, 0, (__int64)v55) )
      goto LABEL_15;
    if ( sub_C95870(a2, a2, v28, v29) )
    {
      v32 = sub_C95870(a2, a2, v30, v31);
      v33 = sub_1B03C10((__int64)a1, v32);
      if ( !v33 )
      {
LABEL_15:
        v13 = (_QWORD *)(&dword_0 + 1);
LABEL_16:
        sub_169D230((__int64)v55);
        return (__int64)v13;
      }
      *((_QWORD *)&v57 + 1) = v33;
    }
    v67 = 0;
    ptr[0] = v66;
    ptr[1] = (void *)0x800000000LL;
    v34 = *(_QWORD *)a2;
    if ( (*(_QWORD *)a2 & 0x80000) == 0 )
      goto LABEL_39;
    v35 = *(_WORD *)a2 & 0x1FF;
    v36 = 8LL * *(unsigned int *)(a2 + 4);
    v37 = (int *)(a2 + v36 + 80);
    if ( v35 == 24 )
      v37 = (int *)(a2 + v36 + 64);
    v38 = *v37;
    if ( !*v37 )
      goto LABEL_39;
    if ( ((v34 >> 16) & 8) == 0 )
      v38 = 0;
    LODWORD(v67) = v38;
    v39 = 0;
    if ( ((v34 >> 16) & 8) != 0 )
      v39 = v37[1];
    HIDWORD(v67) = v39;
    v40 = 0;
    if ( (v34 & 0x80000) != 0 )
      v40 = (unsigned int)v37[3];
    v41 = v34 >> 16;
    if ( (v41 & 8) == 0 )
      goto LABEL_31;
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
LABEL_32:
      if ( (unsigned __int8)sub_1BB9400(a1, v42, &v42[2 * v40], (__int64)ptr) )
      {
        v13 = (_QWORD *)(&dword_0 + 1);
LABEL_34:
        if ( ptr[0] != v66 )
          free(ptr[0]);
        goto LABEL_16;
      }
LABEL_39:
      v43 = sub_18C0AE0(a2);
      v44 = *(_DWORD *)a2;
      v45 = !v43;
      v46 = *(_DWORD *)(a2 + 72);
      v47 = nullptr;
      if ( !v45 )
        v47 = ptr;
      v52 = 0;
      v51 = (__int64)v47;
      v50 = (v44 & 0x100000) != 0;
      *(_OWORD *)v53 = 0;
      v54 = 0;
      sub_15AB8B0((__int64)&v52, v16, v49);
      v13 = sub_19CB370(
              (__m128 *)*a1,
              v17,
              v48,
              v46,
              v50,
              &v52,
              (__m128)0LL,
              v26,
              v20,
              0,
              (__int64)v55,
              v51,
              0,
              0,
              nullptr);
      if ( HIDWORD(v53[1]) )
        free(v53[0]);
      goto LABEL_34;
    }
LABEL_31:
    v42 = nullptr;
    goto LABEL_32;
  }
  return 1;
}
