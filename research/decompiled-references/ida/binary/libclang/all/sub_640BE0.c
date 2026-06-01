__int64 __fastcall sub_640BE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  _DWORD *v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r12
  __m128i v19; // xmm0
  __m128i *v20; // rax
  unsigned __int8 v21; // dl
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r13
  int v27; // r10d
  int v28; // r11d
  __int64 v29; // rdx
  const char *v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 *v33; // rax
  __int64 v34; // rax
  _DWORD *v35; // rdx
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  _DWORD *v38; // rdx
  __int64 v39; // rax
  _QWORD *v41; // rdx
  __int64 v42; // r12
  __int64 v43; // rcx
  _QWORD *v44; // rdx
  __int64 v45; // r13
  __int64 v46; // rcx
  __int64 v47; // r12
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __m128i v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rsi
  __m128i v59; // rax
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 *v62; // rax
  __int64 v63; // rax
  unsigned __int64 v64; // rdx
  __m128i v65; // xmm0
  const __m128i *p_ptr; // rdx
  __m128i *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdi
  int v70; // eax
  __int64 v71; // rdi
  int v72; // eax
  __int64 v73; // rdi
  int v74; // eax
  __m128i v75; // rax
  _QWORD *v76; // rdx
  __int64 v77; // r12
  __int64 v78; // [rsp-10h] [rbp-1A8h]
  __int64 v79; // [rsp+0h] [rbp-198h]
  __int64 v80; // [rsp+0h] [rbp-198h]
  __int64 v81; // [rsp+0h] [rbp-198h]
  __int64 v82; // [rsp+0h] [rbp-198h]
  __int64 v83; // [rsp+0h] [rbp-198h]
  __int64 v84; // [rsp+0h] [rbp-198h]
  __int64 v85; // [rsp+0h] [rbp-198h]
  __int64 v86; // [rsp+0h] [rbp-198h]
  __int64 v87; // [rsp+0h] [rbp-198h]
  __int64 v88; // [rsp+8h] [rbp-190h]
  __int64 v89; // [rsp+20h] [rbp-178h]
  __int64 v90; // [rsp+20h] [rbp-178h]
  __int64 v91; // [rsp+20h] [rbp-178h]
  __int64 v92; // [rsp+28h] [rbp-170h]
  __int64 v93; // [rsp+28h] [rbp-170h]
  int v94; // [rsp+40h] [rbp-158h]
  int v95; // [rsp+48h] [rbp-150h]
  __int64 v96; // [rsp+50h] [rbp-148h]
  __int64 v97; // [rsp+58h] [rbp-140h]
  unsigned __int64 v98; // [rsp+78h] [rbp-120h] BYREF
  __m128i v99; // [rsp+80h] [rbp-118h] BYREF
  __m128i v100; // [rsp+90h] [rbp-108h] BYREF
  __m128i v101; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v102; // [rsp+B0h] [rbp-E8h]
  __m256i ptr; // [rsp+C0h] [rbp-D8h] BYREF
  __m128i v104; // [rsp+E0h] [rbp-B8h]
  __int64 v105; // [rsp+F0h] [rbp-A8h]

  v3 = a3;
  *(_QWORD *)a1 = a1 + 16;
  v97 = a1 + 16;
  v88 = a2;
  *(_QWORD *)(a1 + 8) = 0x100000000LL;
  v5 = *(_QWORD *)(a3 + 104);
  v6 = *(_QWORD *)(v5 + 96);
  v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v6 & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_5;
  }
  else
  {
    if ( v7 <= 3 || (v6 & 2) == 0 )
      goto LABEL_5;
    v41 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
    v42 = v41[2275];
    if ( !v42 )
    {
      *(_QWORD *)(v5 + 96) = v5 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_5;
    }
    v43 = v41[274];
    v41[284] += 24LL;
    v7 = (v43 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    a2 = v7 + 24;
    if ( v41[275] >= v7 + 24 && v43 )
    {
      v41[274] = a2;
    }
    else
    {
      a2 = 24;
      v86 = v3;
      v7 = sub_63DCB0((__int64)(v41 + 274), 24, 3);
      v3 = v86;
    }
    *(_QWORD *)v7 = v42;
    *(_DWORD *)(v7 + 8) = 0;
    v6 = v7 | 5;
    *(_QWORD *)(v7 + 16) = v5;
    *(_QWORD *)(v5 + 96) = v7 | 5;
    LOBYTE(v7) = v7 & 0xFA | 4;
  }
  if ( (v7 & 4) != 0 )
  {
    v8 = (_DWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v8 )
    {
      v69 = *(_QWORD *)v8;
      v70 = *(_DWORD *)(*(_QWORD *)v8 + 12LL);
      if ( v8[2] != v70 )
      {
        v8[2] = v70;
        a2 = v5;
        v82 = v3;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v69 + 144LL))(v69, v5);
        v3 = v82;
      }
    }
  }
LABEL_5:
  v9 = *(_QWORD *)(v3 + 128);
  if ( (*(_BYTE *)(v9 + 24) & 1) != 0 )
  {
    v81 = v3;
    v68 = sub_7A2E20(v9, a2);
    v3 = v81;
    v10 = v68;
  }
  else
  {
    v10 = *(_QWORD *)(v9 + 24);
  }
  v11 = *(_QWORD *)(v3 + 104);
  v12 = *(_QWORD *)(v11 + 96);
  v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v12 & 1) != 0 )
  {
    if ( v13 )
      goto LABEL_39;
LABEL_62:
    a2 = *(_QWORD *)(v3 + 128);
    v15 = v10 + 24LL * *(unsigned int *)(a2 + 16);
    goto LABEL_63;
  }
  if ( v13 <= 3 )
  {
    if ( v13 )
      goto LABEL_42;
    goto LABEL_62;
  }
  if ( (v12 & 2) == 0 )
  {
    v14 = *(_QWORD *)(v3 + 128);
    v15 = v10 + 24LL * *(unsigned int *)(v14 + 16);
    goto LABEL_11;
  }
  v44 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
  v45 = v44[2275];
  if ( !v45 )
  {
    *(_QWORD *)(v11 + 96) = v11 & 0xFFFFFFFFFFFFFFFALL | 1;
    v11 = *(_QWORD *)(v3 + 104);
    goto LABEL_42;
  }
  v46 = v44[274];
  v44[284] += 24LL;
  v13 = (v46 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v44[275] >= v13 + 24 && v46 )
  {
    v44[274] = v13 + 24;
  }
  else
  {
    v85 = v3;
    v13 = sub_63DCB0((__int64)(v44 + 274), 24, 3);
    v3 = v85;
  }
  *(_QWORD *)v13 = v45;
  *(_DWORD *)(v13 + 8) = 0;
  v12 = v13 | 5;
  *(_QWORD *)(v13 + 16) = v11;
  *(_QWORD *)(v11 + 96) = v13 | 5;
  LOBYTE(v13) = v13 & 0xFA | 4;
LABEL_39:
  if ( (v13 & 4) != 0 )
  {
    v35 = (_DWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v35 )
    {
      v71 = *(_QWORD *)v35;
      v72 = *(_DWORD *)(*(_QWORD *)v35 + 12LL);
      if ( v35[2] != v72 )
      {
        v35[2] = v72;
        v83 = v3;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v71 + 144LL))(v71, v11);
        v3 = v83;
      }
    }
  }
  v11 = *(_QWORD *)(v3 + 104);
LABEL_42:
  a2 = *(_QWORD *)(v3 + 128);
  v36 = *(_QWORD *)(v11 + 96);
  v14 = a2;
  v15 = v10 + 24LL * *(unsigned int *)(a2 + 16);
  v37 = v36 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v36 & 1) != 0 )
  {
    if ( v37 )
      goto LABEL_44;
LABEL_63:
    v14 = a2;
    goto LABEL_11;
  }
  if ( v37 <= 3 )
    goto LABEL_63;
  if ( (v36 & 2) == 0 )
  {
LABEL_11:
    if ( (*(_BYTE *)(v14 + 24) & 1) == 0 )
      goto LABEL_12;
LABEL_47:
    v89 = v3;
    v80 = v15;
    v39 = sub_7A2E20(v14, a2);
    v15 = v80;
    v3 = v89;
    v16 = v39;
    if ( v39 != v80 )
      goto LABEL_13;
    return a1;
  }
  v76 = (_QWORD *)(v36 & 0xFFFFFFFFFFFFFFFCLL);
  v77 = v76[2275];
  if ( !v77 )
  {
    *(_QWORD *)(v11 + 96) = v11 & 0xFFFFFFFFFFFFFFFALL | 1;
    a2 = *(_QWORD *)(v3 + 128);
    v14 = a2;
    goto LABEL_11;
  }
  a2 = v76[274];
  v76[284] += 24LL;
  v37 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v76[275] >= v37 + 24 && a2 )
  {
    v76[274] = v37 + 24;
  }
  else
  {
    a2 = 24;
    v87 = v15;
    v91 = v3;
    v37 = sub_63DCB0((__int64)(v76 + 274), 24, 3);
    v3 = v91;
    v15 = v87;
  }
  *(_QWORD *)v37 = v77;
  *(_DWORD *)(v37 + 8) = 0;
  v36 = v37 | 5;
  *(_QWORD *)(v37 + 16) = v11;
  *(_QWORD *)(v11 + 96) = v37 | 5;
  LOBYTE(v37) = v37 & 0xFA | 4;
LABEL_44:
  if ( (v37 & 4) == 0 )
  {
    a2 = *(_QWORD *)(v3 + 128);
    goto LABEL_63;
  }
  v38 = (_DWORD *)(v36 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v38 )
  {
    v73 = *(_QWORD *)v38;
    v74 = *(_DWORD *)(*(_QWORD *)v38 + 12LL);
    if ( v38[2] != v74 )
    {
      v38[2] = v74;
      a2 = v11;
      v90 = v3;
      v84 = v15;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v73 + 144LL))(v73, v11);
      v3 = v90;
      v15 = v84;
      v14 = *(_QWORD *)(v90 + 128);
      goto LABEL_11;
    }
  }
  v14 = *(_QWORD *)(v3 + 128);
  if ( (*(_BYTE *)(v14 + 24) & 1) != 0 )
    goto LABEL_47;
LABEL_12:
  v16 = *(_QWORD *)(v14 + 24);
  if ( v16 != v15 )
  {
LABEL_13:
    v79 = v15;
    v96 = v3;
    do
    {
      v21 = *(_BYTE *)(v16 + 12);
      v22 = (v21 >> 2) & 3;
      if ( (~v21 & 0xC) == 0 )
        v22 = v21 & 2;
      if ( v22 )
        goto LABEL_19;
      v23 = *(_QWORD *)(**(_QWORD **)(v16 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      v24 = *(_QWORD *)(v23 + 8);
      if ( (v24 & 7) != 0 || (v24 & 8) != 0 )
        v23 = sub_B0CF30(**(_QWORD **)(v16 + 16), a2);
      v25 = sub_B0D8A0(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL));
      v26 = v25;
      if ( v25 )
      {
        ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
        *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
        sub_11240B0(v25, &ptr);
        a2 = sub_FC8D80(*(_QWORD *)(v88 + 8), ptr.m256i_i64[0], ptr.m256i_i64[1]);
        if ( a2 )
        {
          sub_FC8C20(&v99, a2);
        }
        else
        {
          v27 = 0;
          v28 = 0;
          if ( (*(_BYTE *)(v26 + 28) & 0x7Fu) - 16 <= 0x3E )
          {
            v29 = *(_QWORD *)(v26 + 40);
            v30 = &byte_3B9466E;
            if ( (v29 & 7) == 0 )
            {
              v31 = v29 & 0xFFFFFFFFFFFFFFF8LL;
              v27 = v31;
              if ( v31 )
              {
                v30 = *(const char **)(v31 + 16);
                v27 = *(_DWORD *)v30;
                LODWORD(v30) = (_DWORD)v30 + 16;
              }
            }
            v28 = v27;
            v27 = (int)v30;
          }
          v92 = *(_QWORD *)(v88 + 8);
          if ( *(char *)(v26 + 29) < 0
            && (*(_BYTE *)(v26 + 8) & 7) != 0
            && (v94 = v27, v95 = v28, v32 = sub_794640(v26), v27 = v94, v28 = v95, v32) )
          {
            v33 = (__int64 *)sub_C92EB0(v32, 0);
            v27 = v94;
            v28 = v95;
            a2 = *v33;
            v34 = v33[1];
          }
          else
          {
            v34 = 0;
          }
          v78 = a2;
          a2 = v92;
          sub_FC8F70((unsigned int)&v99, v92, v27, v28, ptr.m256i_i32[0], ptr.m256i_i32[2], v78, v34);
        }
      }
      else
      {
        v102 = 0;
        v100 = 0;
        v101 = 0;
        v47 = *(_QWORD *)(v88 + 8);
        v48 = *(_QWORD *)(**(_QWORD **)(v16 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        v49 = *(_QWORD *)(v48 + 8);
        if ( (v49 & 7) != 0 || (v49 & 8) != 0 )
          v48 = sub_B0CF30(**(_QWORD **)(v16 + 16), a2);
        v98 = v48 & 0xFFFFFFFFFFFFFFF0LL;
        v50 = sub_798D40(v96);
        sub_B2AE60(&ptr, &v98, v50 + 17304);
        a2 = ptr.m256i_i64[0];
        v51.m128i_i64[0] = sub_FC8E80(v47, ptr.m256i_i64[0], ptr.m256i_i64[1]);
        v99 = v51;
        if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
        {
          a2 = ptr.m256i_i64[2] + 1;
          operator delete((void *)ptr.m256i_i64[0], ptr.m256i_i64[2] + 1);
        }
        v52 = *(_QWORD *)(**(_QWORD **)(v16 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        v53 = *(_QWORD *)(v52 + 8);
        if ( (v53 & 7) != 0 || (v53 & 8) != 0 )
          v52 = sub_B0CF30(**(_QWORD **)(v16 + 16), a2);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 49 )
          goto LABEL_17;
        v54 = *(_QWORD *)(**(_QWORD **)(v16 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        v55 = *(_QWORD *)(v54 + 8);
        if ( (v55 & 7) != 0 || (v55 & 8) != 0 )
          v54 = sub_B0CF30(**(_QWORD **)(v16 + 16), a2);
        v56 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v56 + 16) != 49 )
          BUG();
        if ( !*(_QWORD *)(v56 + 32) )
          goto LABEL_17;
        v57 = *(_QWORD *)(v56 + 32);
        *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
        ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
        sub_11240B0(v57, &ptr);
        v58 = ptr.m256i_i64[0];
        v59.m128i_i64[0] = sub_FC8E80(*(_QWORD *)(v88 + 8), ptr.m256i_i64[0], ptr.m256i_i64[1]);
        v100 = v59;
        v60 = *(_QWORD *)(v88 + 8);
        if ( *(char *)(v57 + 29) < 0
          && (*(_BYTE *)(v57 + 8) & 7) != 0
          && (v93 = *(_QWORD *)(v88 + 8), v61 = sub_794640(v57), v60 = v93, v61) )
        {
          v62 = (__int64 *)sub_C92EB0(v61, v58);
          v60 = v93;
          v26 = *v62;
          v63 = v62[1];
        }
        else
        {
          v63 = 0;
        }
        a2 = v26;
        v75.m128i_i64[0] = sub_FC8E80(v60, v26, v63);
        v101 = v75;
      }
      if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[3] )
        free((void *)ptr.m256i_i64[0]);
LABEL_17:
      v17 = *(unsigned int *)(a1 + 8);
      v18 = *(_QWORD *)a1;
      v19 = _mm_load_si128(&v99);
      v20 = (__m128i *)(*(_QWORD *)a1 + 56 * v17);
      if ( v17 >= *(unsigned int *)(a1 + 12) )
      {
        *(__m128i *)ptr.m256i_i8 = v19;
        v64 = v17 + 1;
        v65 = _mm_load_si128(&v100);
        v105 = v102;
        *(__m128i *)&ptr.m256i_u64[2] = v65;
        v104 = _mm_load_si128(&v101);
        if ( (unsigned __int64)&ptr >= v18 && &ptr < (__m256i *)v20 )
        {
          sub_25D6060(a1, v97, v64, 56);
          a2 = *(_QWORD *)a1;
          p_ptr = (const __m128i *)&ptr.m256i_i8[*(_QWORD *)a1 - v18];
        }
        else
        {
          sub_25D6060(a1, v97, v64, 56);
          a2 = *(_QWORD *)a1;
          p_ptr = (const __m128i *)&ptr;
        }
        v67 = (__m128i *)(a2 + 56LL * *(unsigned int *)(a1 + 8));
        *v67 = _mm_loadu_si128(p_ptr);
        v67[1] = _mm_loadu_si128(p_ptr + 1);
        v67[2] = _mm_loadu_si128(p_ptr + 2);
        v67[3].m128i_i64[0] = p_ptr[3].m128i_i64[0];
        ++*(_DWORD *)(a1 + 8);
      }
      else
      {
        *v20 = v19;
        v20[1] = _mm_load_si128(&v100);
        v20[2] = _mm_load_si128(&v101);
        v20[3].m128i_i64[0] = v102;
        ++*(_DWORD *)(a1 + 8);
      }
LABEL_19:
      v16 += 24;
    }
    while ( v79 != v16 );
  }
  return a1;
}

