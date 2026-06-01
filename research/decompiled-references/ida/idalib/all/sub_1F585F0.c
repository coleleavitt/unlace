void __fastcall sub_1F585F0(__int64 *a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rsi
  int v9; // ecx
  int v10; // r11d
  unsigned int v11; // ebp
  int v12; // ebx
  int v13; // ecx
  _QWORD *v14; // rbx
  int v15; // r15d
  int v16; // r13d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rsi
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned int v34; // edx
  unsigned __int64 v35; // rsi
  __int64 v36; // r15
  int v37; // r13d
  int v38; // r12d
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  int v43; // r15d
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r13
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __int64 v49; // rdx
  _QWORD *v50; // r13
  __int64 v51; // rsi
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  int v56; // [rsp+18h] [rbp-2A0h]
  int v57; // [rsp+28h] [rbp-290h]
  int v58; // [rsp+2Ch] [rbp-28Ch]
  __int64 v59; // [rsp+38h] [rbp-280h]
  __int64 v60; // [rsp+38h] [rbp-280h]
  void *v61; // [rsp+40h] [rbp-278h] BYREF
  __int64 v62; // [rsp+48h] [rbp-270h]
  _BYTE v63[128]; // [rsp+50h] [rbp-268h] BYREF
  void *v64; // [rsp+D0h] [rbp-1E8h] BYREF
  __int64 v65; // [rsp+D8h] [rbp-1E0h]
  _BYTE v66[128]; // [rsp+E0h] [rbp-1D8h] BYREF
  void *v67; // [rsp+160h] [rbp-158h] BYREF
  __int64 v68; // [rsp+168h] [rbp-150h]
  _BYTE v69[128]; // [rsp+170h] [rbp-148h] BYREF
  void *ptr; // [rsp+1F0h] [rbp-C8h] BYREF
  __int64 v71; // [rsp+1F8h] [rbp-C0h]
  _BYTE v72[184]; // [rsp+200h] [rbp-B8h] BYREF

  v3 = a2;
  sub_1F58570(a1, a2);
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  *(_DWORD *)(a2 + 80) = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  *(_DWORD *)(a2 + 40) = sub_1EE7490(v4);
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 8);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v7 + 13072))-- - 8);
  v9 = *(_DWORD *)(v3 + 16);
  v10 = *(_DWORD *)(v3 + 20);
  v11 = *(_DWORD *)(v3 + 24);
  *(_QWORD *)(v3 + 48) = v8;
  v64 = v66;
  v12 = *(_DWORD *)(v3 + 80);
  v57 = v9;
  v58 = v10;
  v61 = v63;
  v62 = 0x1000000000LL;
  v65 = 0x1000000000LL;
  v67 = v69;
  v68 = 0x1000000000LL;
  v13 = v10 + v9;
  if ( v13 )
  {
    v56 = v12;
    v14 = (_QWORD *)v7;
    v15 = 0;
    v16 = v13;
    while ( 1 )
    {
      v28 = *(unsigned int *)(v6 + 24);
      v29 = *(_QWORD *)(v6 + 16);
      *(_DWORD *)(v6 + 24) = v28 + 1;
      v30 = sub_1EE0AD0((__int64)v14, v29, *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v28));
      v31 = sub_1EE2910(v14, v30);
      v32 = (unsigned int)v62;
      v33 = (unsigned int)v62 + 1LL;
      if ( v33 > HIDWORD(v62) )
      {
        v59 = v31;
        sub_2237220(&v61, v63, v33, 8);
        v32 = (unsigned int)v62;
        v31 = v59;
      }
      *((_QWORD *)v61 + v32) = v31;
      v17 = *a1;
      LODWORD(v62) = v62 + 1;
      v18 = *(_QWORD *)(v17 + 8);
      v19 = *(_QWORD *)(*(_QWORD *)(v18 + 13064) + 8LL * *(unsigned int *)(v18 + 13072) - 8);
      v20 = HIDWORD(v65);
      --*(_DWORD *)(v18 + 13072);
      v21 = (unsigned int)v65;
      v22 = (unsigned int)v65 + 1LL;
      if ( v22 > v20 )
      {
        sub_2237220(&v64, v66, v22, 8);
        v21 = (unsigned int)v65;
      }
      *((_QWORD *)v64 + v21) = v19;
      v23 = *a1;
      LODWORD(v65) = v65 + 1;
      v24 = *(_QWORD *)(v23 + 8);
      v25 = *(_QWORD *)(*(_QWORD *)(v24 + 13064) + 8LL * *(unsigned int *)(v24 + 13072) - 8);
      v26 = HIDWORD(v68);
      --*(_DWORD *)(v24 + 13072);
      v27 = (unsigned int)v68 + 1LL;
      if ( v27 > v26 )
      {
        ++v15;
        sub_2237220(&v67, v69, v27, 8);
        *((_QWORD *)v67 + (unsigned int)v68) = v25;
        LODWORD(v68) = v68 + 1;
        if ( v16 == v15 )
        {
LABEL_11:
          v12 = v56;
          v6 = *a1;
          break;
        }
      }
      else
      {
        ++v15;
        *((_QWORD *)v67 + (unsigned int)v68) = v25;
        LODWORD(v68) = v68 + 1;
        if ( v16 == v15 )
          goto LABEL_11;
      }
      v6 = *a1;
      v14 = *(_QWORD **)(*a1 + 8);
    }
  }
  v34 = 0;
  v35 = 16;
  ptr = v72;
  v71 = 0x1000000000LL;
  if ( !v11 )
    goto LABEL_19;
  v36 = v3;
  v37 = 0;
  v38 = v12;
  while ( 1 )
  {
    v39 = *(_QWORD *)(v6 + 8);
    v40 = *(_QWORD *)(*(_QWORD *)(v39 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v39 + 13072))-- - 8);
    v41 = v34;
    v42 = v34 + 1LL;
    if ( v42 > v35 )
      break;
    ++v37;
    *((_QWORD *)ptr + v41) = v40;
    v34 = v71 + 1;
    LODWORD(v71) = v71 + 1;
    if ( v37 == v11 )
      goto LABEL_18;
LABEL_15:
    v6 = *a1;
    v35 = HIDWORD(v71);
  }
  ++v37;
  sub_2237220(&ptr, v72, v42, 8);
  *((_QWORD *)ptr + (unsigned int)v71) = v40;
  v34 = v71 + 1;
  LODWORD(v71) = v71 + 1;
  if ( v11 != v37 )
    goto LABEL_15;
LABEL_18:
  v6 = *a1;
  v12 = v38;
  v3 = v36;
LABEL_19:
  if ( !v12 )
    goto LABEL_28;
  v43 = 0;
  while ( 2 )
  {
    v49 = *(unsigned int *)(v6 + 24);
    v50 = *(_QWORD **)(v6 + 8);
    v51 = *(_QWORD *)(v6 + 16);
    *(_DWORD *)(v6 + 24) = v49 + 1;
    v52 = sub_1EE0AD0((__int64)v50, v51, *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v49));
    v53 = sub_1EE2910(v50, v52);
    v54 = (unsigned int)v62;
    v55 = (unsigned int)v62 + 1LL;
    if ( v55 > HIDWORD(v62) )
    {
      v60 = v53;
      sub_2237220(&v61, v63, v55, 8);
      v54 = (unsigned int)v62;
      v53 = v60;
    }
    *((_QWORD *)v61 + v54) = v53;
    v44 = *a1;
    LODWORD(v62) = v62 + 1;
    v45 = *(_QWORD *)(v44 + 8);
    v46 = *(_QWORD *)(*(_QWORD *)(v45 + 13064) + 8LL * *(unsigned int *)(v45 + 13072) - 8);
    v47 = HIDWORD(v68);
    --*(_DWORD *)(v45 + 13072);
    v48 = (unsigned int)v68 + 1LL;
    if ( v48 <= v47 )
    {
      ++v43;
      *((_QWORD *)v67 + (unsigned int)v68) = v46;
      LODWORD(v68) = v68 + 1;
      if ( v43 == v12 )
        break;
      goto LABEL_23;
    }
    ++v43;
    sub_2237220(&v67, v69, v48, 8);
    *((_QWORD *)v67 + (unsigned int)v68) = v46;
    LODWORD(v68) = v68 + 1;
    if ( v12 != v43 )
    {
LABEL_23:
      v6 = *a1;
      continue;
    }
    break;
  }
  v6 = *a1;
LABEL_28:
  sub_EEFD10(v3, *(_QWORD **)(*(_QWORD *)(v6 + 8) + 144LL), v61, v64, v67, v57, v58, v12, ptr, v11);
  if ( ptr != v72 )
    free(ptr);
  if ( v67 != v69 )
    free(v67);
  if ( v64 != v66 )
    free(v64);
  if ( v61 != v63 )
    free(v61);
}
