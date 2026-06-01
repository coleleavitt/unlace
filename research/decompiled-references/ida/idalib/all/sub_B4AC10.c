__int64 __fastcall sub_B4AC10(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int8 *v4; // r8
  _BYTE *v5; // r9
  __int64 v6; // r13
  unsigned int v7; // eax
  const __m128i *v8; // rcx
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r14
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // eax
  const __m128i *v24; // rdx
  __m128i v25; // xmm0
  unsigned int v26; // eax
  __m128i v27; // xmm0
  __int64 v28; // rdx
  char ***v29; // rbx
  __int64 v30; // r12
  void *v31; // rcx
  char **v33; // rdi
  void *v34; // r15
  char *v35; // rax
  char *v36; // rcx
  char *v37; // rdx
  const char **v38; // rax
  __int64 v39; // r12
  char ***v40; // r9
  __int64 v41; // rcx
  const char **v42; // r8
  __int64 v43; // r15
  const char *v44; // r12
  __int64 v45; // r14
  int v46; // r8d
  int v47; // eax
  __int64 v48; // rdx
  unsigned __int8 *v49; // r8
  _BYTE *v50; // r9
  unsigned int v51; // eax
  __m128i v52; // xmm0
  __int64 v53; // rdx
  unsigned int v54; // eax
  const __m128i *v55; // rcx
  __m128i v56; // xmm0
  __int64 v57; // rcx
  char **v58; // rdi
  void *v59; // r15
  char *v60; // rax
  char *v61; // rcx
  char *v62; // rdx
  void *v63; // rax
  __int64 v64; // rax
  __int64 v65; // [rsp-10h] [rbp-A8h]
  __int64 v66; // [rsp+0h] [rbp-98h]
  char ***v67; // [rsp+0h] [rbp-98h]
  const char **v68; // [rsp+8h] [rbp-90h]
  const char **v69; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int64 v71; // [rsp+18h] [rbp-80h]
  _BYTE v72[120]; // [rsp+20h] [rbp-78h] BYREF

  v6 = sub_B54A20(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 48), *(unsigned int *)(a1 + 56));
  v7 = *(_DWORD *)(a1 + 80);
  if ( !v7 )
  {
    sub_B433F0(*(_QWORD *)a1, a1 + 48, v2, v3, v4, v5, v66);
    v9 = *(unsigned int *)(a1 + 52);
    if ( (_DWORD)v9 != 1 )
      goto LABEL_3;
LABEL_35:
    v54 = *(_DWORD *)(a1 + 80);
    if ( v54 )
    {
      v55 = (const __m128i *)(*(_QWORD *)(a1 + 72) + 24LL * v54 - 24);
      LODWORD(v9) = v55->m128i_i32[1];
      v56 = _mm_loadu_si128(v55);
      v57 = v55[1].m128i_i64[0];
      *(_DWORD *)(a1 + 80) = v54 - 1;
      *(__m128i *)(a1 + 48) = v56;
      *(_QWORD *)(a1 + 64) = v57;
    }
    else
    {
      sub_B433F0(*(_QWORD *)a1, a1 + 48, v9, v11, v4, v5, v66);
      LODWORD(v9) = *(_DWORD *)(a1 + 52);
    }
    goto LABEL_3;
  }
  v8 = (const __m128i *)(*(_QWORD *)(a1 + 72) + 24LL * v7 - 24);
  v9 = v8->m128i_u32[1];
  v10 = _mm_loadu_si128(v8);
  v11 = v8[1].m128i_i64[0];
  *(_DWORD *)(a1 + 80) = v7 - 1;
  *(__m128i *)(a1 + 48) = v10;
  *(_QWORD *)(a1 + 64) = v11;
  if ( (_DWORD)v9 == 1 )
    goto LABEL_35;
LABEL_3:
  ptr = v72;
  v71 = 0x800000000LL;
  v12 = 0;
  while ( (_DWORD)v9 == 7 )
  {
    v16 = sub_B53AA0(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 48), *(_QWORD *)(a1 + 64), *(unsigned int *)(a1 + 56));
    v23 = *(_DWORD *)(a1 + 80);
    if ( v23 )
    {
      v24 = (const __m128i *)(*(_QWORD *)(a1 + 72) + 24LL * v23 - 24);
      v14 = v24->m128i_u32[1];
      v25 = _mm_loadu_si128(v24);
      v15 = v24[1].m128i_i64[0];
      *(_DWORD *)(a1 + 80) = v23 - 1;
      *(__m128i *)(a1 + 48) = v25;
      *(_QWORD *)(a1 + 64) = v15;
    }
    else
    {
      sub_B433F0(*(_QWORD *)a1, a1 + 48, v21, v22, v4, v5, v66);
      v14 = *(unsigned int *)(a1 + 52);
    }
    if ( (_DWORD)v14 == 1 )
    {
      v26 = *(_DWORD *)(a1 + 80);
      if ( v26 )
      {
        v27 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 72) + 24LL * v26 - 24));
        v28 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL * v26 - 24 + 16);
        *(_DWORD *)(a1 + 80) = v26 - 1;
        *(__m128i *)(a1 + 48) = v27;
        *(_QWORD *)(a1 + 64) = v28;
        goto LABEL_7;
      }
      goto LABEL_16;
    }
LABEL_7:
    v19 = (unsigned int)v71;
    v20 = (unsigned int)v71 + 1LL;
    if ( v20 > HIDWORD(v71) )
    {
      sub_2237220(&ptr, v72, v20, 8);
      v19 = (unsigned int)v71;
    }
    *((_QWORD *)ptr + v19) = v16;
    LODWORD(v9) = *(_DWORD *)(a1 + 52);
    v12 = v71 + 1;
    LODWORD(v71) = v71 + 1;
  }
  if ( (_DWORD)v9 == 1 )
  {
    v13 = sub_B53AA0(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 48), &byte_22F0C30, 0);
    v15 = *(unsigned int *)(a1 + 80);
    v16 = v13;
    if ( (_DWORD)v15 )
    {
      v17 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 72) + 24LL * (unsigned int)v15 - 24));
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL * (unsigned int)v15 - 24 + 16);
      *(_DWORD *)(a1 + 80) = v15 - 1;
      *(_QWORD *)(a1 + 64) = v18;
      *(__m128i *)(a1 + 48) = v17;
      goto LABEL_7;
    }
LABEL_16:
    sub_B433F0(*(_QWORD *)a1, a1 + 48, v15, v14, v4, v5, v66);
    goto LABEL_7;
  }
  if ( (_DWORD)v9 == 8 )
  {
    v38 = (const char **)sub_B3E290(*(_QWORD *)(a1 + 40), *(_DWORD *)(a1 + 56));
    v39 = (unsigned int)v71;
    v40 = *(char ****)(a1 + 8);
    v41 = 0;
    v42 = v38;
    if ( (_DWORD)v71 )
    {
      v58 = *v40;
      v59 = ptr;
      v60 = **v40;
      v58[10] += 8 * (unsigned int)v71;
      v61 = (char *)((unsigned __int64)(v60 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      v62 = &v61[8 * v39];
      if ( v58[1] >= v62 && v60 )
      {
        *v58 = v62;
      }
      else
      {
        v69 = v42;
        v67 = v40;
        v64 = sub_986170((__int64)v58, 8 * v39, 8 * v39, 3, (__int64)v42, (__int64)v40);
        v40 = v67;
        v42 = v69;
        v61 = (char *)v64;
      }
      v68 = v42;
      v66 = (__int64)v40;
      v63 = memmove(v61, v59, 8 * v39);
      v40 = (char ***)v66;
      v42 = v68;
      v41 = (__int64)v63;
    }
    v43 = v39;
    v44 = *v42;
    v45 = v41;
    v46 = 0;
    if ( v44 )
    {
      v66 = (__int64)v40;
      v47 = strlen(v44);
      LODWORD(v40) = v66;
      v46 = v47;
    }
    sub_B4D3A0((_DWORD)v40, v6, *(_DWORD *)(a1 + 48), (_DWORD)v44, v46, (_DWORD)v40, v45, v43);
    v51 = *(_DWORD *)(a1 + 80);
    if ( v51 )
    {
      v52 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 72) + 24LL * v51 - 24));
      v53 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL * v51 - 24 + 16);
      *(_DWORD *)(a1 + 80) = v51 - 1;
      *(__m128i *)(a1 + 48) = v52;
      *(_QWORD *)(a1 + 64) = v53;
    }
    else
    {
      sub_B433F0(*(_QWORD *)a1, a1 + 48, v48, v65, v49, v50, v66);
    }
  }
  else
  {
    v29 = *(char ****)(a1 + 8);
    v30 = v12;
    if ( v12 )
    {
      v33 = *v29;
      v34 = ptr;
      v35 = **v29;
      v33[10] += 8 * v30;
      v36 = (char *)((unsigned __int64)(v35 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      v37 = &v36[8 * v30];
      if ( v33[1] >= v37 && v35 )
        *v33 = v37;
      else
        v36 = (char *)sub_986170((__int64)v33, 8 * v30, 8 * v30, 3, (__int64)v4, (__int64)v5);
      v31 = memmove(v36, v34, 8 * v30);
    }
    else
    {
      v30 = 0;
      v31 = nullptr;
    }
    sub_B4D3A0((_DWORD)v29, v6, 0, (unsigned int)&byte_22F0C30, 0, (_DWORD)v5, (__int64)v31, v30);
  }
  if ( ptr != v72 )
    free(ptr);
  return v6;
}
