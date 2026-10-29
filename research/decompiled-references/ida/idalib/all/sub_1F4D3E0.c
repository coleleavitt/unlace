__int64 __fastcall sub_1F4D3E0(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v6; // r14
  __int64 v7; // rax
  _QWORD *v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  double v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  _BYTE *v36; // rdi
  _QWORD *v37; // r14
  unsigned __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v43; // r14
  __int64 v44; // rax
  __int64 v45; // r14
  double v46; // r8
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // rdx
  _QWORD *v51; // rax
  __int64 v52; // rdi
  unsigned __int64 v53; // r15
  int v54; // eax
  __int64 v55; // rdi
  __int64 v56; // rax
  double v57; // r8
  __int64 v58; // rax
  __int64 v59; // rax
  double v60[3]; // [rsp+8h] [rbp-120h] BYREF
  void *ptr; // [rsp+20h] [rbp-108h] BYREF
  __int64 v62; // [rsp+28h] [rbp-100h]
  _BYTE v63[248]; // [rsp+30h] [rbp-F8h] BYREF

  v6 = *(_QWORD **)(*a2 + 144);
  v7 = a2[2];
  v8 = *(_QWORD **)(v7 + 8);
  v9 = sub_1EE13A0((__int64)v8, *(_QWORD *)(v7 + 16), (__int64 *)(v7 + 32), (_DWORD *)(v7 + 24));
  v14 = sub_1EDB980(v8, v9, v10, v11, v12, v13);
  if ( v14 )
  {
    v15 = *(double *)&v14;
    if ( (*(_BYTE *)(v14 + 28) & 0x7F) == 0x45 )
    {
      *(_QWORD *)(a3 + 112) = v14 & 0xFFFFFFFFFFFFFFFBLL;
    }
    else
    {
      v31 = a2[2];
      v62 = 0x800000000LL;
      ptr = v63;
      *(_QWORD *)&v60[2] = v63;
      sub_1F18CE0(v31, (__int64 *)&ptr, 0);
      *(_QWORD *)&v60[0] = sub_BC1D90(v6, (const __m128i *)ptr, (unsigned int)v62, v32, v33, v34);
      v35 = sub_1F21B20(v6 + 294, 16, 3u);
      v60[1] = v15;
      *(__m128 *)v35 = _mm_loadh_ps(v60);
      v36 = ptr;
      *(_QWORD *)(a3 + 112) = v35 | 4;
      if ( v36 != v63 )
        free(v36);
    }
  }
  v16 = a2[2];
  v17 = *(unsigned int *)(v16 + 24);
  v18 = *(_QWORD *)(v16 + 32);
  v19 = (unsigned int)(v17 + 1);
  v20 = *(_QWORD *)(v18 + 8 * v17) == 0;
  *(_DWORD *)(v16 + 24) = v19;
  if ( !v20 )
  {
    v51 = (_QWORD *)sub_1F21B20(v6 + 294, 16, 3u);
    v52 = a2[2];
    *v51 = 0;
    v53 = (unsigned __int64)v51;
    v51[1] = 0;
    v54 = sub_1EE7490(v52);
    v55 = a2[2];
    *(_DWORD *)(v53 + 8) = v54;
    *(_DWORD *)(v53 + 12) = sub_1EE7490(v55);
    *(_QWORD *)(a3 + 120) = v53 | 4;
    v16 = a2[2];
    v19 = *(unsigned int *)(v16 + 24);
    v18 = *(_QWORD *)(v16 + 32);
  }
  v20 = *(_QWORD *)(v18 + 8 * v19) == 0;
  *(_DWORD *)(v16 + 24) = v19 + 1;
  if ( !v20 )
  {
    v48 = sub_1F19000(v16);
    v49 = *(_QWORD *)(a3 + 120);
    if ( v49 && (v49 & 4) != 0 && (v50 = (_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF8LL)) != nullptr )
    {
      *v50 = v48;
      v16 = a2[2];
    }
    else
    {
      *(_QWORD *)(a3 + 120) = v48 & 0xFFFFFFFFFFFFFFFBLL;
      v16 = a2[2];
    }
  }
  ptr = v63;
  v62 = 0x800000000LL;
  sub_1F18CE0(v16, (__int64 *)&ptr, 1);
  *(_QWORD *)(a3 + 128) = sub_BC1D90(v6, (const __m128i *)ptr, (unsigned int)v62, v21, v22, v23);
  *(_DWORD *)(a3 + 136) = sub_1EE7490(a2[2]);
  v24 = a2[2];
  v25 = *(unsigned int *)(v24 + 24);
  *(_DWORD *)(v24 + 24) = v25 + 1;
  *(_BYTE *)(a3 + 140) = *(_QWORD *)(*(_QWORD *)(v24 + 32) + 8 * v25) & 7 | *(_BYTE *)(a3 + 140) & 0xF8;
  v26 = a2[2];
  v27 = *(unsigned int *)(v26 + 24);
  *(_DWORD *)(v26 + 24) = v27 + 1;
  *(_BYTE *)(a3 + 140) = (8 * (*(_QWORD *)(*(_QWORD *)(v26 + 32) + 8 * v27) & 1)) | *(_BYTE *)(a3 + 140) & 0xF7;
  sub_1F4CB60(a1, a2, a3);
  v28 = a2[2];
  v29 = *(unsigned int *)(v28 + 24);
  *(_DWORD *)(v28 + 24) = v29 + 1;
  if ( !*(_QWORD *)(*(_QWORD *)(v28 + 32) + 8 * v29) )
    goto LABEL_8;
  v37 = *(_QWORD **)(v28 + 8);
  v38 = sub_1EE13A0((__int64)v37, *(_QWORD *)(v28 + 16), (__int64 *)(v28 + 32), (_DWORD *)(v28 + 24));
  v43 = (_QWORD *)sub_1EDB980(v37, v38, v39, v40, v41, v42);
  if ( a3 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3) )
    goto LABEL_8;
  if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 0x2A )
  {
    *(_QWORD *)&v60[0] = sub_BC3640(v43);
    v56 = sub_2223460(*(_QWORD *)&v60[0] + 8LL, a3 + 104, &off_2B4B380);
    if ( v56 )
    {
      v45 = v56 - 104;
      v57 = v60[0];
      if ( a3 != v56 - 104 )
        goto LABEL_17;
      v58 = *(unsigned int *)(*(_QWORD *)&v60[0] + 32LL);
      if ( v58 + 1 > (unsigned __int64)*(unsigned int *)(*(_QWORD *)&v60[0] + 36LL) )
      {
        sub_2237220(*(_QWORD *)&v60[0] + 24LL, *(_QWORD *)&v60[0] + 40LL, v58 + 1, 8);
        v57 = v60[0];
        v58 = *(unsigned int *)(*(_QWORD *)&v60[0] + 32LL);
      }
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v57 + 24LL) + 8 * v58) = v45;
      ++*(_DWORD *)(*(_QWORD *)&v57 + 32LL);
      goto LABEL_8;
    }
LABEL_25:
    v45 = 0;
    goto LABEL_17;
  }
  *(_QWORD *)&v60[0] = sub_BC3640(v43);
  v44 = sub_2223460(*(_QWORD *)&v60[0] + 104LL, a3 + 104, &off_2B4B3E0);
  if ( !v44 )
    goto LABEL_25;
  v45 = v44 - 104;
  v46 = v60[0];
  if ( a3 != v44 - 104 )
  {
LABEL_17:
    v47 = 0;
    if ( *(_BYTE *)(a1 + 16) )
      v47 = *(_QWORD *)(a1 + 8);
    sub_1F3D610(a2 + 1, (unsigned __int64 *)(a3 + 72), v45, v47);
    goto LABEL_8;
  }
  v59 = *(unsigned int *)(*(_QWORD *)&v60[0] + 128LL);
  if ( v59 + 1 > (unsigned __int64)*(unsigned int *)(*(_QWORD *)&v60[0] + 132LL) )
  {
    sub_2237220(*(_QWORD *)&v60[0] + 120LL, *(_QWORD *)&v60[0] + 136LL, v59 + 1, 8);
    v46 = v60[0];
    v59 = *(unsigned int *)(*(_QWORD *)&v60[0] + 128LL);
  }
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v46 + 120LL) + 8 * v59) = v45;
  ++*(_DWORD *)(*(_QWORD *)&v46 + 128LL);
LABEL_8:
  if ( ptr != v63 )
    free(ptr);
  return a1;
}
