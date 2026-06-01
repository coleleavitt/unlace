void __fastcall sub_1F45200(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r12
  int v10; // r14d
  __int64 v11; // rax
  _QWORD *v12; // r15
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rbx
  int v37; // r12d
  int v38; // ebx
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // rdx
  unsigned __int64 *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  _QWORD *v44; // r14
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // r15
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  int v56; // r14d
  unsigned __int64 *v57; // rdx
  char v58; // [rsp+8h] [rbp-200h]
  __int64 v59; // [rsp+8h] [rbp-200h]
  __int64 v60; // [rsp+8h] [rbp-200h]
  bool v61; // [rsp+24h] [rbp-1E4h]
  unsigned __int64 v62; // [rsp+28h] [rbp-1E0h]
  void *v63; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v64; // [rsp+38h] [rbp-1D0h]
  _BYTE v65[128]; // [rsp+40h] [rbp-1C8h] BYREF
  void *ptr; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v67; // [rsp+C8h] [rbp-140h]
  _BYTE v68[312]; // [rsp+D0h] [rbp-138h] BYREF

  sub_1F43F90(a1, a2);
  v4 = sub_1F68F80(*(_QWORD *)(a1[2] + 8), *(_QWORD *)(a1[2] + 16));
  v5 = a1[2];
  *(_QWORD *)(a2 + 88) = v4;
  v6 = sub_1F19370(v5);
  v7 = a1[2];
  *(_QWORD *)(a2 + 96) = v6;
  v8 = *(unsigned int *)(v7 + 24);
  *(_DWORD *)(v7 + 24) = v8 + 1;
  v9 = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 8 * v8);
  v63 = v65;
  v64 = 0x1000000000LL;
  if ( (unsigned int)v9 <= 0x10uLL )
  {
    if ( (_DWORD)v9 )
      goto LABEL_3;
LABEL_25:
    v22 = (unsigned int)v64;
    goto LABEL_7;
  }
  sub_2237220(&v63, v65, (unsigned int)v9, 8);
  if ( !(_DWORD)v9 )
    goto LABEL_25;
LABEL_3:
  v10 = 0;
  do
  {
    v11 = a1[2];
    v12 = *(_QWORD **)(v11 + 8);
    v13 = sub_1EE13A0((__int64)v12, *(_QWORD *)(v11 + 16), (__int64 *)(v11 + 32), (_DWORD *)(v11 + 24));
    v18 = sub_1EDB980(v12, v13, v14, v15, v16, v17);
    v19 = (unsigned int)v64;
    v20 = (unsigned int)v64 + 1LL;
    if ( v20 > HIDWORD(v64) )
    {
      v59 = v18;
      sub_2237220(&v63, v65, v20, 8);
      v19 = (unsigned int)v64;
      v21 = v63;
      v18 = v59;
    }
    else
    {
      v21 = v63;
    }
    v21[v19] = v18;
    ++v10;
    v22 = (unsigned int)(v64 + 1);
    LODWORD(v64) = v64 + 1;
  }
  while ( (_DWORD)v9 != v10 );
LABEL_7:
  sub_B7C580(a2, v63, v22);
  v23 = a1[2];
  v24 = *(unsigned int *)(v23 + 24);
  *(_DWORD *)(v23 + 24) = v24 + 1;
  *(_BYTE *)(a2 + 49) = (32 * (*(_QWORD *)(*(_QWORD *)(v23 + 32) + 8 * v24) != 0)) | *(_BYTE *)(a2 + 49) & 0xDF;
  v25 = a1[2];
  v26 = *(unsigned int *)(v25 + 24);
  *(_DWORD *)(v25 + 24) = v26 + 1;
  *(_BYTE *)(a2 + 49) = ((*(_QWORD *)(*(_QWORD *)(v25 + 32) + 8 * v26) != 0) << 7) | *(_BYTE *)(a2 + 49) & 0x7F;
  v27 = a1[2];
  v28 = *(unsigned int *)(v27 + 24);
  *(_DWORD *)(v27 + 24) = v28 + 1;
  *(_BYTE *)(a2 + 50) = (*(_QWORD *)(*(_QWORD *)(v27 + 32) + 8 * v28) != 0) | *(_BYTE *)(a2 + 50) & 0xFE;
  v29 = a1[2];
  v30 = *(unsigned int *)(v29 + 24);
  *(_DWORD *)(v29 + 24) = v30 + 1;
  *(_BYTE *)(a2 + 50) = (2 * (*(_QWORD *)(*(_QWORD *)(v29 + 32) + 8 * v30) != 0)) | *(_BYTE *)(a2 + 50) & 0xFD;
  v31 = a1[2];
  v32 = *(unsigned int *)(v31 + 24);
  *(_DWORD *)(v31 + 24) = v32 + 1;
  *(_BYTE *)(a2 + 50) = (4 * (*(_QWORD *)(*(_QWORD *)(v31 + 32) + 8 * v32) != 0)) | *(_BYTE *)(a2 + 50) & 0xFB;
  v33 = a1[2];
  v34 = *(unsigned int *)(v33 + 24);
  v35 = *(_QWORD *)(v33 + 32);
  v61 = *(_QWORD *)(v35 + 8 * v34) != 0;
  v36 = *(_QWORD *)(v35 + 8LL * (unsigned int)(*(_DWORD *)(v33 + 24) + 1));
  *(_DWORD *)(v33 + 24) = v34 + 2;
  v37 = v36;
  ptr = v68;
  v67 = 0x1000000000LL;
  if ( (unsigned int)v36 > 0x10uLL )
    sub_2237220(&ptr, v68, (unsigned int)v36, 16);
  if ( (_DWORD)v36 )
  {
    v38 = 0;
    do
    {
      v43 = a1[2];
      v44 = *(_QWORD **)(v43 + 8);
      v45 = sub_1EE13A0((__int64)v44, *(_QWORD *)(v43 + 16), (__int64 *)(v43 + 32), (_DWORD *)(v43 + 24));
      v50 = sub_1EDB980(v44, v45, v46, v47, v48, v49);
      v51 = a1[2];
      v52 = v50;
      v53 = *(unsigned int *)(v51 + 24);
      *(_DWORD *)(v51 + 24) = v53 + 1;
      v54 = *(_QWORD *)(*(_QWORD *)(v51 + 32) + 8 * v53);
      v55 = 0;
      v56 = v54 & 2;
      if ( (v54 & 4) != 0 )
      {
        v58 = v54;
        v55 = sub_1F6A0A0(*(_QWORD *)(v51 + 8), *(_QWORD *)(v51 + 16));
        LOBYTE(v54) = v58;
      }
      v39 = (2 * (v56 | v54 & 1)) | v52 & 0xFFFFFFFFFFFFFFF9LL;
      v40 = (unsigned int)v67 + 1LL;
      if ( v40 > HIDWORD(v67) )
      {
        v62 = v39;
        v60 = v55;
        sub_2237220(&ptr, v68, v40, 16);
        v57 = (unsigned __int64 *)((char *)ptr + 16 * (unsigned int)v67);
        *v57 = v62;
        v57[1] = v60;
      }
      else
      {
        v41 = (unsigned __int64 *)((char *)ptr + 16 * (unsigned int)v67);
        *v41 = v39;
        v41[1] = v55;
      }
      ++v38;
      v42 = (unsigned int)(v67 + 1);
      LODWORD(v67) = v67 + 1;
    }
    while ( v37 != v38 );
  }
  else
  {
    v42 = (unsigned int)v67;
  }
  sub_B7C620(a2, *(_QWORD *)(*a1 + 144), (const __m128i *)ptr, v42, v61);
  if ( ptr != v68 )
    free(ptr);
  if ( v63 != v65 )
    free(v63);
}
