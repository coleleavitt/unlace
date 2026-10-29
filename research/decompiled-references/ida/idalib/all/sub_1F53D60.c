__int64 __fastcall sub_1F53D60(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  bool v28; // zf
  __int64 v29; // rax
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  _BYTE *v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  _QWORD *v39; // rdx
  _QWORD *v40; // rax
  __int64 v41; // rdi
  unsigned __int64 v42; // r13
  int v43; // eax
  __int64 v44; // rdi
  _QWORD *v45; // r15
  unsigned __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // r15
  __int64 (__fastcall *v52)(__int64); // rax
  __int64 v53; // rax
  char v54; // al
  __int64 v55; // rax
  __int64 v56; // r15
  __int64 *v57; // r8
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  char *v62; // rdx
  __int64 v63; // rax
  __int64 *v64; // r8
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 *v67; // [rsp+8h] [rbp-120h] BYREF
  __int64 v68; // [rsp+10h] [rbp-118h]
  _BYTE *v69; // [rsp+18h] [rbp-110h]
  void *ptr; // [rsp+20h] [rbp-108h] BYREF
  __int64 v71; // [rsp+28h] [rbp-100h]
  _BYTE v72[248]; // [rsp+30h] [rbp-F8h] BYREF

  sub_1F53760(a1, a2, (_BYTE *)a3);
  v6 = *(_QWORD **)(*a2 + 144);
  v7 = a2[2];
  v8 = *(_QWORD **)(v7 + 8);
  v9 = sub_1EE13A0((__int64)v8, *(_QWORD *)(v7 + 16), (__int64 *)(v7 + 32), (_DWORD *)(v7 + 24));
  v14 = sub_1EDB980(v8, v9, v10, v11, v12, v13);
  if ( v14 )
  {
    v15 = v14;
    if ( (*(_BYTE *)(v14 + 28) & 0x7F) == 0x48 )
    {
      *(_QWORD *)(a3 + 152) = v14 & 0xFFFFFFFFFFFFFFFBLL;
    }
    else
    {
      v31 = a2[2];
      v71 = 0x800000000LL;
      ptr = v72;
      v69 = v72;
      sub_1F18CE0(v31, (__int64 *)&ptr, 0);
      v67 = (__int64 *)sub_BC1D90(v6, (const __m128i *)ptr, (unsigned int)v71, v32, v33, v34);
      v35 = sub_1F21B20(v6 + 294, 16, 3u);
      v68 = v15;
      *(__m128 *)v35 = _mm_loadh_ps((const double *)&v67);
      v36 = ptr;
      *(_QWORD *)(a3 + 152) = v35 | 4;
      if ( v36 != v72 )
        free(v36);
    }
  }
  v16 = a2[2];
  ptr = v72;
  v71 = 0x800000000LL;
  sub_1F18CE0(v16, (__int64 *)&ptr, 1);
  *(_QWORD *)(a3 + 168) = sub_BC1D90(v6, (const __m128i *)ptr, (unsigned int)v71, v17, v18, v19);
  *(_DWORD *)(a3 + 176) = sub_1EE7490(a2[2]);
  v20 = a2[2];
  v21 = *(unsigned int *)(v20 + 24);
  *(_DWORD *)(v20 + 24) = v21 + 1;
  *(_BYTE *)(a3 + 180) = *(_QWORD *)(*(_QWORD *)(v20 + 32) + 8 * v21) & 7 | *(_BYTE *)(a3 + 180) & 0xF8;
  v22 = a2[2];
  v23 = *(unsigned int *)(v22 + 24);
  *(_DWORD *)(v22 + 24) = v23 + 1;
  *(_BYTE *)(a3 + 180) = (8 * (*(_QWORD *)(*(_QWORD *)(v22 + 32) + 8 * v23) != 0)) | *(_BYTE *)(a3 + 180) & 0xF7;
  v24 = a2[2];
  v25 = *(unsigned int *)(v24 + 24);
  v26 = *(_QWORD *)(v24 + 32);
  v27 = (unsigned int)(v25 + 1);
  v28 = *(_QWORD *)(v26 + 8 * v25) == 0;
  *(_DWORD *)(v24 + 24) = v27;
  if ( !v28 )
  {
    v45 = *(_QWORD **)(v24 + 8);
    v46 = sub_1EE13A0((__int64)v45, *(_QWORD *)(v24 + 16), (__int64 *)(v24 + 32), (_DWORD *)(v24 + 24));
    v51 = (_QWORD *)sub_1EDB980(v45, v46, v47, v48, v49, v50);
    v52 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL);
    if ( v52 == sub_A01140 )
      v53 = sub_B70A60(a3);
    else
      v53 = v52(a3);
    if ( a3 != v53 )
      goto LABEL_21;
    v54 = *(_BYTE *)(a3 + 28);
    v67 = (__int64 *)(a3 + 144);
    if ( (v54 & 0x7F) == 0x3D )
    {
      v68 = sub_BC3640(v51);
      v55 = sub_2223460(v68 + 104, v67, &off_2B4B400);
      if ( v55 )
      {
        v56 = v55 - 144;
        v57 = (__int64 *)v68;
        if ( a3 == v55 - 144 )
        {
          v66 = *(unsigned int *)(v68 + 128);
          if ( v66 + 1 > (unsigned __int64)*(unsigned int *)(v68 + 132) )
          {
            v67 = (__int64 *)v68;
            sub_2237220(v68 + 120, v68 + 136, v66 + 1, 8);
            v57 = v67;
            v66 = *((unsigned int *)v67 + 32);
          }
          *(_QWORD *)(v57[15] + 8 * v66) = v56;
          v24 = a2[2];
          ++*((_DWORD *)v57 + 32);
          v26 = *(_QWORD *)(v24 + 32);
          v27 = *(unsigned int *)(v24 + 24);
          goto LABEL_5;
        }
        goto LABEL_25;
      }
    }
    else
    {
      v68 = sub_BC3640(v51);
      v63 = sub_2223460(v68 + 8, v67, &off_2B4B3A0);
      if ( v63 )
      {
        v56 = v63 - 144;
        v64 = (__int64 *)v68;
        if ( a3 == v63 - 144 )
        {
          v65 = *(unsigned int *)(v68 + 32);
          if ( v65 + 1 > (unsigned __int64)*(unsigned int *)(v68 + 36) )
          {
            v67 = (__int64 *)v68;
            sub_2237220(v68 + 24, v68 + 40, v65 + 1, 8);
            v64 = v67;
            v65 = *((unsigned int *)v67 + 8);
          }
          *(_QWORD *)(v64[3] + 8 * v65) = v56;
          v24 = a2[2];
          ++*((_DWORD *)v64 + 8);
          v26 = *(_QWORD *)(v24 + 32);
          v27 = *(unsigned int *)(v24 + 24);
          goto LABEL_5;
        }
LABEL_25:
        v58 = 0;
        if ( *(_BYTE *)(a1 + 16) )
          v58 = *(_QWORD *)(a1 + 8);
        v67 = a2 + 1;
        sub_1F3D930(a2 + 1, (unsigned __int64 *)(a3 + 96), v56, v58);
        v62 = *(char **)(a3 + 128);
        if ( v62 )
        {
          if ( !*(_QWORD *)(v56 + 128) )
          {
            *(_QWORD *)(v56 + 128) = v62;
            goto LABEL_31;
          }
          sub_1F3F870(v67, v56, v62, v59, v60, v61);
        }
        v62 = *(char **)(v56 + 128);
LABEL_31:
        *(_QWORD *)(a3 + 128) = v62;
LABEL_21:
        v24 = a2[2];
        v27 = *(unsigned int *)(v24 + 24);
        v26 = *(_QWORD *)(v24 + 32);
        goto LABEL_5;
      }
    }
    v56 = 0;
    goto LABEL_25;
  }
LABEL_5:
  v29 = (unsigned int)(v27 + 1);
  v28 = *(_QWORD *)(v26 + 8 * v27) == 0;
  *(_DWORD *)(v24 + 24) = v29;
  if ( !v28 )
  {
    v40 = (_QWORD *)sub_1F21B20(v6 + 294, 16, 3u);
    v41 = a2[2];
    *v40 = 0;
    v42 = (unsigned __int64)v40;
    v40[1] = 0;
    v43 = sub_1EE7490(v41);
    v44 = a2[2];
    *(_DWORD *)(v42 + 8) = v43;
    *(_DWORD *)(v42 + 12) = sub_1EE7490(v44);
    *(_QWORD *)(a3 + 160) = v42 | 4;
    v24 = a2[2];
    v29 = *(unsigned int *)(v24 + 24);
    v26 = *(_QWORD *)(v24 + 32);
  }
  v28 = *(_QWORD *)(v26 + 8 * v29) == 0;
  *(_DWORD *)(v24 + 24) = v29 + 1;
  if ( !v28 )
  {
    v37 = sub_1F19000(v24);
    v38 = *(_QWORD *)(a3 + 160);
    if ( v38 && (v38 & 4) != 0 && (v39 = (_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF8LL)) != nullptr )
      *v39 = v37;
    else
      *(_QWORD *)(a3 + 160) = v37 & 0xFFFFFFFFFFFFFFFBLL;
  }
  if ( ptr != v72 )
    free(ptr);
  return a1;
}
