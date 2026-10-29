__int64 __fastcall sub_1D9E730(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, char a5, double a6, __m128 a7)
{
  __int64 v9; // rax
  __int64 *v10; // r10
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // r13
  __int64 v15; // r15
  __m128 v16; // xmm0
  __int64 *v17; // r13
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r9
  char v20; // al
  _QWORD *v21; // rdi
  unsigned __int64 v22; // r8
  unsigned int v23; // eax
  int v24; // edx
  int v26; // eax
  char *v27; // r13
  __int64 v28; // r9
  unsigned int v29; // r8d
  __int64 v30; // rdi
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rax
  __m128 v34; // xmm0
  __int64 v35; // r9
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r14
  __int64 *v40; // rdi
  int v41; // edx
  __int64 v42; // rdx
  int v43; // eax
  __m128 v44; // xmm0
  _QWORD *v45; // rdi
  __int64 v46; // r12
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rax
  char v51; // r12
  unsigned __int64 v52; // r15
  char v53; // al
  __int64 v54; // r14
  char v55; // al
  char v56; // r12
  __int16 v57; // ax
  unsigned __int8 v58; // al
  __int64 v59; // [rsp+0h] [rbp-128h] BYREF
  unsigned __int64 v60; // [rsp+8h] [rbp-120h] BYREF
  __int64 v61; // [rsp+10h] [rbp-118h]
  __int64 *v62; // [rsp+18h] [rbp-110h]
  __int64 v63; // [rsp+20h] [rbp-108h]
  unsigned int v64; // [rsp+28h] [rbp-100h]
  int v65; // [rsp+2Ch] [rbp-FCh]
  __int64 v66; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v67; // [rsp+38h] [rbp-F0h]
  __int64 v68; // [rsp+40h] [rbp-E8h]
  unsigned int v69; // [rsp+48h] [rbp-E0h]
  __m128 v70; // [rsp+50h] [rbp-D8h]
  __int64 v71; // [rsp+60h] [rbp-C8h]
  __int64 v72; // [rsp+68h] [rbp-C0h]
  __int64 v73; // [rsp+70h] [rbp-B8h]
  int v74; // [rsp+78h] [rbp-B0h]
  __m128 v75; // [rsp+80h] [rbp-A8h]
  __int128 v76; // [rsp+90h] [rbp-98h]
  char v77; // [rsp+A0h] [rbp-88h]
  void *v78; // [rsp+A8h] [rbp-80h]
  __int64 v79; // [rsp+B0h] [rbp-78h]
  _BYTE v80[16]; // [rsp+B8h] [rbp-70h] BYREF
  void *ptr; // [rsp+C8h] [rbp-60h]
  __int64 v82; // [rsp+D0h] [rbp-58h]
  _BYTE v83[16]; // [rsp+D8h] [rbp-50h] BYREF
  char v84; // [rsp+E8h] [rbp-40h]

  v9 = *(_QWORD *)(a2 + 56);
  v59 = a3;
  v60 = a4;
  v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v9 & 4) != 0 )
    v10 = (__int64 *)v10[4];
  v11 = *v10;
  v12 = *a1;
  if ( !(*v10 & 7 | (*v10 >> 3) & 1) && *(_BYTE *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38 && v11 )
  {
    v26 = *(_DWORD *)(v12 + 12632);
    v27 = (char *)v10 + 12;
    v62 = v10;
    *(_DWORD *)(v12 + 12632) = 1;
    v28 = *(_QWORD *)(a2 + 40);
    v29 = *(_DWORD *)(a2 + 24);
    v30 = *(_QWORD *)(v11 + 32);
    v65 = v26;
    v31 = *a1;
    v63 = v28;
    v64 = v29;
    v61 = v31;
    v32 = sub_F6C520(v30);
    v33 = sub_1DD3670(
            v61,
            *(_QWORD *)(v11 + 32),
            v32 * ((unsigned __int64)&v27[-(v27 != nullptr)] / v32 + (v27 != nullptr)),
            v59,
            v64,
            v63);
    v14 = v33;
    if ( !v33 )
    {
      *(_DWORD *)(v12 + 12632) = v65;
      return v14;
    }
    v14 = sub_1E509C0(*a1, v33);
    *(_DWORD *)(v12 + 12632) = v65;
  }
  else
  {
    v14 = sub_1DD4AE0(*a1, v10, v59, *(unsigned int *)(a2 + 24), *(_QWORD *)(a2 + 40), 0);
  }
  if ( v14 )
  {
    v15 = *a1;
    if ( !a5 )
    {
      v59 = a1[2];
      v66 = v15;
      v67 = 0;
      v68 = 0;
      v16 = _mm_loadh_ps((const double *)&v59);
      v69 = 0;
      v71 = 0;
      v84 = 0;
      v70 = v16;
LABEL_10:
      v17 = sub_1D99A60(&v66, v14, v16, a7);
      if ( v84 )
      {
        if ( ptr != v83 )
          free(ptr);
        if ( v78 != v80 )
          free(v78);
        *(_DWORD *)(v73 + 12632) = v74;
      }
      v18 = 0;
      operator delete(v67, 16LL * v69, 8);
      if ( sub_B74820(a2) )
      {
        v66 = *v17;
        v51 = 1;
        v59 = sub_B74790(a2);
        v52 = sub_F67970(&v66, *(_QWORD *)(*a1 + 248));
        v53 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                       + 16LL);
        if ( v53 != 43 )
          v51 = 2 * (v53 == 44);
        v54 = sub_EEE9A0(24, *(_QWORD **)(*a1 + 248), 8u);
        *(_WORD *)v54 = *(_WORD *)v54 & 0xFE00 | 0x1A;
        if ( unk_2CD7484 )
          sub_EE9B50(26);
        v55 = 2 * v51;
        v56 = *(_BYTE *)(v54 + 1);
        *(_QWORD *)(v54 + 8) = v52;
        *(_QWORD *)(v54 + 16) = 0;
        *(_BYTE *)(v54 + 1) = v55 | v56 & 0xF9;
        v57 = *(_WORD *)(v54 + 1) & 0xF807;
        *(_WORD *)(v54 + 1) = v57;
        *(_BYTE *)(v54 + 2) = HIBYTE(v57) & 0xF7;
        *(_DWORD *)(v54 + 4) = v59;
        v58 = sub_B62360(v54);
        *(_BYTE *)(v54 + 1) = (v58 << 6) | *(_BYTE *)(v54 + 1) & 0x3F;
        *(_BYTE *)(v54 + 2) = *(_BYTE *)(v54 + 2) & 0xF8 | (v58 >> 2) & 7;
        v18 = v54 & 0xFFFFFFFFFFFFFFFELL;
      }
      v19 = *v17;
      v20 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v17 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                     + 16LL);
      v21 = *(_QWORD **)(*a1 + 248);
      if ( (unsigned __int8)(v20 - 25) <= 1u || (unsigned __int8)(v20 - 2) <= 4u )
      {
        v19 = sub_A75D20(v21, *v17);
        v21 = *(_QWORD **)(*a1 + 248);
      }
      v22 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
        v22 = 0;
      v14 = sub_B74530(
              (__int64)v21,
              a1[3],
              *(_DWORD *)(a2 + 64),
              *(_DWORD *)(a2 + 24),
              v22,
              v19,
              (__int64)v17,
              *(_BYTE *)(a2 + 96) & 7,
              v18);
      v23 = (unsigned __int8)(*(_WORD *)(a2 + 98) >> 4);
      if ( v23 == 255 )
        v23 = sub_B74880(a2);
      LOBYTE(v24) = 0;
      if ( (*(_BYTE *)(a2 + 97) & 0x10) == 0 )
        v24 = (*(_DWORD *)(a2 + 96) >> 13) & 0x7F;
      *(_DWORD *)(v14 + 96) = *(_DWORD *)(v14 + 96) & 0xFFF01FFF | ((v24 & 0x7F) << 13);
      if ( v23 > 0xFE )
        sub_B74850(v14, v23);
      else
        *(_WORD *)(v14 + 98) = *(_WORD *)(v14 + 98) & 0xF00F | (16 * (unsigned __int8)v23);
      sub_1DC20B0(*(_QWORD *)(*a1 + 11280), a2, v14);
      return v14;
    }
    v60 = a1[2];
    v66 = v15;
    v67 = 0;
    v34 = _mm_loadh_ps((const double *)&v60);
    v69 = 0;
    v68 = 0;
    v70 = v34;
    v71 = v59;
    v84 = 0;
    v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 248) + 2264LL) + 80LL);
    v36 = *(_QWORD *)(v35 + 72);
    if ( (v36 & 1) != 0 )
    {
      v37 = v36 & 0xFFFFFFFFFFFFFFFELL;
    }
    else
    {
      v45 = (_QWORD *)(v36 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v36 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        v39 = 0;
        goto LABEL_43;
      }
      v39 = v36 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v36 & 2) == 0 )
        goto LABEL_41;
      v46 = v45[2295];
      v47 = v35 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v46 )
      {
        v48 = v45[294];
        v45[304] += 24LL;
        v49 = (v48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v45[295] >= v49 + 24 && v48 )
        {
          v45[294] = v49 + 24;
          v50 = (v48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v60 = v35;
          v50 = sub_986170((__int64)(v45 + 294), 24, 24, 3, v13, v35);
          v35 = v60;
          v49 = v50 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v50 = v46;
        v47 = v49 | 4;
        *(_DWORD *)(v50 + 8) = 0;
        *(_QWORD *)(v50 + 16) = v35;
      }
      v37 = v47 & 0xFFFFFFFFFFFFFFFELL;
      v36 = v37 | 1;
      *(_QWORD *)(v35 + 72) = v37 | 1;
    }
    v38 = v36 & 0xFFFFFFFFFFFFFFF8LL;
    v39 = v38;
    if ( !v37 || (v37 & 4) == 0 )
      goto LABEL_35;
    if ( v38 )
    {
      v40 = *(__int64 **)v38;
      v41 = *(_DWORD *)(*(_QWORD *)v38 + 12LL);
      if ( *(_DWORD *)(v38 + 8) != v41 )
      {
        *(_DWORD *)(v38 + 8) = v41;
        v42 = *v40;
        v60 = v38;
        (*(void (__fastcall **)(__int64 *, __int64))(v42 + 152))(v40, v35);
        v38 = v60;
      }
      v39 = *(_QWORD *)(v38 + 16);
LABEL_35:
      if ( v84 )
      {
LABEL_36:
        v84 = 0;
        if ( ptr != v83 )
          free(ptr);
        if ( v78 != v80 )
          free(v78);
        *(_DWORD *)(v73 + 12632) = v74;
      }
LABEL_41:
      if ( v39 )
        v39 += 40LL;
      goto LABEL_43;
    }
    if ( v84 )
      goto LABEL_36;
LABEL_43:
    v72 = v15;
    v43 = *(_DWORD *)(v15 + 12632);
    v60 = v39;
    v74 = v43;
    v44 = _mm_loadh_ps((const double *)&v59);
    v78 = v80;
    v75 = v44;
    v16 = 0;
    v73 = v15;
    v76 = 0;
    v77 = 1;
    v79 = 0x100000000LL;
    ptr = v83;
    v82 = 0x100000000LL;
    v84 = 1;
    goto LABEL_10;
  }
  return v14;
}
