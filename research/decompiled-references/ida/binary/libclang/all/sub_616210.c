__int64 __fastcall sub_616210(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned __int64 v8; // rax
  __int64 *v9; // rax
  _QWORD *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // r13
  __int64 v14; // r12
  __int64 v15; // rdi
  int v16; // esi
  __int64 v17; // r14
  char v18; // dl
  __int64 v19; // rax
  __int64 v20; // r15
  __m128i v21; // xmm1
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 result; // rax
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 i; // r14
  __int64 v29; // r15
  __m128i *v30; // rdi
  __int64 v31; // r14
  unsigned __int64 v32; // r13
  _QWORD *v33; // rsi
  __int64 v34; // rsi
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // r12
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  unsigned __int64 v44; // rsi
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  unsigned __int64 v49; // rdx
  __int64 v50; // r14
  __int64 v51; // r14
  __int64 v52; // r15
  _QWORD *v53; // rdx
  char v54; // al
  int v55; // edx
  unsigned int v56; // eax
  __int64 v57; // rax
  int v58; // esi
  __int32 v59; // edx
  __int64 v60; // rax
  __m128i v61; // xmm0
  __int32 v62; // edx
  __int64 v63; // rax
  __m128i v64; // xmm0
  char v65; // al
  int v66; // edx
  __int64 v67; // r14
  unsigned int v68; // eax
  __int64 v69; // r13
  __int64 v70; // r12
  __int64 (__fastcall *v71)(__int64); // rax
  __int64 v72; // rax
  int v73; // esi
  int v74; // edx
  int v75; // ecx
  int v76; // r8d
  int v77; // r9d
  __int32 v78; // edx
  __int64 v79; // rax
  __m128i v80; // xmm0
  __int64 v81; // [rsp+20h] [rbp-E8h]
  __m128i v82; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v83; // [rsp+50h] [rbp-B8h]
  __m128i v84; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v85; // [rsp+70h] [rbp-98h] BYREF
  __m128i v86; // [rsp+80h] [rbp-88h] BYREF
  __m128i v87; // [rsp+90h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v89[5]; // [rsp+B0h] [rbp-58h] BYREF

  v8 = *(_QWORD *)(a2 + 56);
  if ( (v8 & 4) == 0 )
    goto LABEL_2;
  v49 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  v50 = *(unsigned int *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 16);
  if ( !(_DWORD)v50 )
    goto LABEL_54;
  v51 = 8 * v50;
  v52 = 0;
  do
  {
    if ( (unsigned __int8)sub_61AC60(a1, *(_QWORD *)(*(_QWORD *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 24) + v52)) )
      return 1;
    v52 += 8;
    v8 = *(_QWORD *)(a2 + 56);
  }
  while ( v52 != v51 );
  v49 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v8 & 4) != 0 )
  {
LABEL_54:
    v9 = *(__int64 **)(v49 + 32);
    if ( !v9 )
    {
      v23 = *(_QWORD *)(v49 + 40);
      if ( !v23 )
        goto LABEL_20;
LABEL_19:
      if ( (unsigned __int8)sub_6160A0((__int64)a1, v23) )
        return 1;
      goto LABEL_20;
    }
  }
  else
  {
LABEL_2:
    if ( v8 <= 7 )
      goto LABEL_20;
    v9 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
  }
  v10 = v9 + 1;
  v11 = *v9;
  v12 = v11;
  if ( (v11 & 7) != 0
    || (v11 & 8) == 0
    && (a4 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(a4 + 16) == 39)
    && (v11 = sub_B1B150(v11, v10, v11), v10 = v53, v12 = v11, (v11 & 7) != 0)
    || (v12 & 8) != 0
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
  {
    v13 = nullptr;
    v14 = 0;
  }
  else
  {
    v13 = v10;
    v14 = v12;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(unsigned __int8 *)(v15 + 16);
  if ( (unsigned int)(v16 - 25) > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
      goto LABEL_67;
    v81 = v12;
    v57 = sub_B0D320(v15);
    v12 = v81;
    v15 = v57;
    if ( !v57 )
      goto LABEL_67;
    LOBYTE(v16) = *(_BYTE *)(v57 + 16);
  }
  if ( (_BYTE)v16 != 26 )
  {
LABEL_67:
    if ( v14 )
    {
      if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x23 )
      {
        v19 = *(_QWORD *)(a2 + 56);
        if ( (v19 & 4) != 0 )
        {
          v20 = v14;
          LOBYTE(v17) = 0;
          goto LABEL_13;
        }
        goto LABEL_110;
      }
      goto LABEL_69;
    }
    LOBYTE(v17) = 0;
    goto LABEL_81;
  }
  LOBYTE(v17) = (unsigned __int8)(*(_BYTE *)(v15 + 23) & 0x20) >> 5;
  if ( v14 )
  {
    v18 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( v18 == 35 )
    {
      v19 = *(_QWORD *)(a2 + 56);
      if ( (v19 & 4) == 0 )
        goto LABEL_87;
      goto LABEL_12;
    }
    if ( (*(_BYTE *)(v15 + 23) & 0x20) != 0 )
    {
      v19 = *(_QWORD *)(a2 + 56);
      v17 = (v19 >> 2) & 1;
      if ( ((v19 >> 2) & 1) == 0 )
      {
        v20 = v14;
        LOBYTE(v17) = 1;
        if ( v18 == 34 )
          goto LABEL_88;
        goto LABEL_103;
      }
      goto LABEL_12;
    }
LABEL_69:
    v54 = *(_BYTE *)(v14 + 16);
    if ( v54 == 26 )
    {
      v55 = 8 * ((*(_WORD *)(v14 + 22) & 0x3C0) != 0) + 15;
    }
    else
    {
      v17 = 16;
      if ( v54 == 25 )
      {
LABEL_72:
        v56 = sub_B1AFD0(*(_QWORD *)(v14 + 24));
        LOBYTE(v17) = sub_61B330(
                        a1,
                        *(_QWORD *)(v14 + 24),
                        v56
                      * (((_QWORD *)((char *)v13 + v17) != nullptr)
                       + ((unsigned __int64)v13 + v17 - ((_QWORD *)((char *)v13 + v17) != nullptr)) / v56));
        if ( (_BYTE)v17 )
          return 1;
        v19 = *(_QWORD *)(a2 + 56);
        if ( (v19 & 4) == 0 )
        {
          if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x22 )
          {
            if ( (unsigned __int8)sub_61D3A0(a1, v14, v13, 1) )
              return 1;
            goto LABEL_17;
          }
LABEL_110:
          LOBYTE(v17) = 0;
LABEL_87:
          v62 = *(_DWORD *)(a2 + 24);
          v63 = *(_QWORD *)(a2 + 160);
          v20 = v14;
          v82.m128i_i64[0] = *(_QWORD *)(a2 + 40);
          v82.m128i_i32[2] = v62;
          v83 = v63;
          v64 = _mm_load_si128(&v82);
          if ( (unsigned __int8)sub_61B700(
                                  (_DWORD)a1,
                                  v82.m128i_i32[0],
                                  v62,
                                  a4,
                                  a5,
                                  a6,
                                  v64.m128i_i32[0],
                                  v64.m128i_i32[2],
                                  v63) )
            return 1;
          goto LABEL_88;
        }
LABEL_12:
        v20 = v14;
LABEL_13:
        v21 = _mm_loadu_si128((const __m128i *)(v19 & 0xFFFFFFFFFFFFFFF8LL));
        if ( v21.m128i_i64[0] && (unsigned __int8)sub_61B740(a1, v21.m128i_i64[0], v21.m128i_i64[1]) )
          return 1;
        if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x22 )
        {
LABEL_16:
          if ( !v20 )
            goto LABEL_17;
LABEL_88:
          if ( (unsigned __int8)sub_61D3A0(a1, v14, v13, 1) )
            return 1;
          if ( !(_BYTE)v17 )
            goto LABEL_17;
          v65 = *(_BYTE *)(v20 + 16);
          if ( v65 == 26 )
          {
            v66 = 8 * ((*(_WORD *)(v20 + 22) & 0x3C0) != 0) + 15;
          }
          else
          {
            v67 = 16;
            if ( v65 == 25 )
            {
LABEL_93:
              v68 = sub_B1AFD0(*(_QWORD *)(v20 + 24));
              if ( (unsigned __int8)sub_61B330(
                                      a1,
                                      *(_QWORD *)(v20 + 24),
                                      v68
                                    * (((_QWORD *)((char *)v13 + v67) != nullptr)
                                     + ((unsigned __int64)v13 + v67 - ((_QWORD *)((char *)v13 + v67) != nullptr)) / v68)) )
                return 1;
LABEL_17:
              v22 = *(_QWORD *)(a2 + 56);
              if ( (v22 & 4) == 0 )
                goto LABEL_20;
              v23 = *(_QWORD *)((v22 & 0xFFFFFFFFFFFFFFF8LL) + 40);
              if ( !v23 )
                goto LABEL_20;
              goto LABEL_19;
            }
            v66 = 15;
          }
          v67 = 8 * ((v66 + ((*(_DWORD *)(v20 + 20) >> 3) & 0x7FFF8u)) >> 3) + 8;
          goto LABEL_93;
        }
LABEL_103:
        v78 = *(_DWORD *)(a2 + 24);
        v79 = *(_QWORD *)(a2 + 160);
        v82.m128i_i64[0] = *(_QWORD *)(a2 + 40);
        v82.m128i_i32[2] = v78;
        v83 = v79;
        v80 = _mm_load_si128(&v82);
        if ( (unsigned __int8)sub_61B700(
                                (_DWORD)a1,
                                v82.m128i_i32[0],
                                v78,
                                a4,
                                a5,
                                a6,
                                v80.m128i_i32[0],
                                v80.m128i_i32[2],
                                v79) )
          return 1;
        goto LABEL_16;
      }
      v55 = 15;
    }
    v17 = 8 * ((v55 + ((*(_DWORD *)(v14 + 20) >> 3) & 0x7FFF8u)) >> 3) + 8;
    goto LABEL_72;
  }
LABEL_81:
  v58 = v12;
  if ( (unsigned __int8)sub_61B330(a1, v12, v10) )
    return 1;
  v19 = *(_QWORD *)(a2 + 56);
  if ( (v19 & 4) != 0 )
  {
    v20 = 0;
    goto LABEL_13;
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x22 )
  {
    v59 = *(_DWORD *)(a2 + 24);
    v60 = *(_QWORD *)(a2 + 160);
    v82.m128i_i64[0] = *(_QWORD *)(a2 + 40);
    v82.m128i_i32[2] = v59;
    v83 = v60;
    v61 = _mm_load_si128(&v82);
    if ( (unsigned __int8)sub_61B700(
                            (_DWORD)a1,
                            v58,
                            v59,
                            v82.m128i_i32[0],
                            a5,
                            a6,
                            v61.m128i_i32[0],
                            v61.m128i_i32[2],
                            v60) )
      return 1;
    goto LABEL_17;
  }
LABEL_20:
  if ( (*(_BYTE *)(a2 + 83) & 8) != 0 )
    return 0;
  result = *(_BYTE *)(a2 + 128) & 1;
  if ( (*(_BYTE *)(a2 + 128) & 1) == 0 && !*(_QWORD *)(a2 + 128) )
    return result;
  if ( (*(_BYTE *)(a2 + 83) & 0x40) != 0 )
    return 0;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x24 )
  {
    ptr[0] = v89;
    ptr[1] = (void *)0x400000000LL;
    v25 = sub_7A62D0(a2) + 8LL * (unsigned __int16)(*(_DWORD *)(a2 + 84) >> 13);
    v26 = sub_7A62D0(a2);
    v27 = LODWORD(ptr[1]);
    for ( i = v26; v25 != i; i += 8 )
    {
      v29 = *(_QWORD *)i;
      if ( (*(_BYTE *)(*(_QWORD *)i + 28LL) & 4) != 0 )
      {
        if ( HIDWORD(ptr[1]) < (unsigned __int64)(v27 + 1) )
        {
          sub_25D6060(ptr, v89, v27 + 1, 8);
          v27 = LODWORD(ptr[1]);
        }
        *((_QWORD *)ptr[0] + v27) = v29;
        v27 = (unsigned int)++LODWORD(ptr[1]);
      }
    }
    v30 = (__m128i *)ptr[0];
    if ( (unsigned int)v27 > 1uLL )
    {
      qsort(ptr[0], (8LL * (unsigned int)v27) >> 3, 8u, (__compar_fn_t)compar);
      v27 = LODWORD(ptr[1]);
      v30 = (__m128i *)ptr[0];
    }
    if ( (_DWORD)v27 )
    {
      v31 = 8 * v27;
      v32 = 0;
      while ( 1 )
      {
        v39 = v30->m128i_i64[v32 / 8];
        v40 = *(_QWORD *)v39;
        v41 = *(_QWORD *)v39 & 6LL;
        if ( v41 == 2 )
          break;
        if ( v41 == 4 )
        {
          v42 = *a1;
          v43 = *(unsigned int *)(v39 + 16);
          v44 = *(_QWORD *)(*(_QWORD *)((v40 & 0xFFFFFFFFFFFFFFF8LL) + 56)
                          + 8LL * *(unsigned int *)((v40 & 0xFFFFFFFFFFFFFFF8LL) + 64)
                          - 8);
LABEL_44:
          sub_639E30(&v84, v44, v43, v42);
          if ( (unsigned __int8)sub_619180(
                                  (_DWORD)a1,
                                  v44,
                                  v45,
                                  v46,
                                  v47,
                                  v48,
                                  (__int128)_mm_load_si128(&v84),
                                  (__int128)_mm_load_si128(&v85)) )
            goto LABEL_45;
          goto LABEL_39;
        }
        if ( v40 )
        {
          if ( !v41 )
          {
            v33 = (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v33 )
            {
              if ( (unsigned __int8)sub_61B330(a1, *v33, v33 + 1) )
              {
LABEL_45:
                if ( ptr[0] != v89 )
                  free(ptr[0]);
                return 1;
              }
            }
          }
        }
LABEL_39:
        v34 = *(_QWORD *)(v39 + 8);
        if ( v34 )
        {
          sub_639270(&v86, v34, a2, *a1, *(_QWORD *)((char *)a1 + 84));
          if ( (unsigned __int8)sub_619180(
                                  (_DWORD)a1,
                                  v34,
                                  v35,
                                  v36,
                                  v37,
                                  v38,
                                  (__int128)_mm_load_si128(&v86),
                                  (__int128)_mm_load_si128(&v87)) )
            goto LABEL_45;
        }
        v32 += 8LL;
        v30 = (__m128i *)ptr[0];
        if ( v32 == v31 )
          goto LABEL_95;
      }
      v42 = *a1;
      v43 = *(unsigned int *)(v39 + 16);
      v44 = v40 & 0xFFFFFFFFFFFFFFF8LL;
      goto LABEL_44;
    }
LABEL_95:
    if ( v30 != v89 )
      free(v30);
  }
  v69 = *a1;
  v70 = a1[6];
  v71 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
  if ( v71 == sub_5F7E00 )
    v72 = sub_78BC30(a2, ptr);
  else
    v72 = v71(a2);
  v73 = v72;
  sub_639270(ptr, v72, v70, v69, *(_QWORD *)((char *)a1 + 84));
  return sub_619180(
           (_DWORD)a1,
           v73,
           v74,
           v75,
           v76,
           v77,
           (__int128)_mm_load_si128((const __m128i *)ptr),
           (__int128)_mm_load_si128(v89));
}

