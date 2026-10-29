unsigned __int64 __fastcall bin_search(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // rdx
  int v7; // eax
  int v8; // edx
  bool v9; // sf
  int v10; // eax
  size_t v11; // rsi
  int v12; // ebx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  _QWORD *v19; // r15
  unsigned __int64 v20; // r13
  size_t v21; // r12
  char v22; // bl
  char v23; // di
  __int64 v24; // rax
  size_t v25; // rax
  unsigned __int64 v26; // rax
  __int64 v28; // rbx
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // r12
  __int64 v31; // rbx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // rsi
  __int64 v35; // r8
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // r12
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r10
  unsigned __int64 v40; // rax
  char v41; // dl
  size_t *v42; // r14
  size_t v43; // rdx
  unsigned __int64 *v44; // rbx
  unsigned __int8 v45; // al
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // r14
  void *v48; // r15
  __m128i si128; // xmm0
  __int64 v50; // rax
  int v51; // ebp
  unsigned __int64 v52; // rbx
  __int64 *v53; // rax
  __int64 v54; // r8
  __int64 v55; // rcx
  char *v56; // rdi
  char *v57; // rax
  int v58; // edx
  int v59; // esi
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rax
  void *v62; // rax
  unsigned __int64 v63; // rsi
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 *v68; // rdi
  unsigned __int64 v70; // [rsp+10h] [rbp-138h]
  char v71; // [rsp+10h] [rbp-138h]
  __int64 v72; // [rsp+18h] [rbp-130h]
  int v73; // [rsp+18h] [rbp-130h]
  size_t n[2]; // [rsp+20h] [rbp-128h] BYREF
  unsigned __int64 v75; // [rsp+30h] [rbp-118h]
  unsigned __int8 v76; // [rsp+3Fh] [rbp-109h]
  unsigned __int64 v77; // [rsp+40h] [rbp-108h]
  unsigned __int64 v78; // [rsp+48h] [rbp-100h]
  unsigned __int64 addr; // [rsp+50h] [rbp-F8h]
  unsigned int v80; // [rsp+58h] [rbp-F0h]
  unsigned int v81; // [rsp+5Ch] [rbp-ECh]
  __int64 v82; // [rsp+60h] [rbp-E8h]
  __int64 v83; // [rsp+68h] [rbp-E0h]
  char *v84; // [rsp+70h] [rbp-D8h]
  unsigned __int64 *v85; // [rsp+78h] [rbp-D0h]
  void **p_ptr; // [rsp+80h] [rbp-C8h]
  unsigned __int8 *v87; // [rsp+88h] [rbp-C0h]
  int v88; // [rsp+90h] [rbp-B8h]
  int v89; // [rsp+94h] [rbp-B4h]
  __int64 v90; // [rsp+98h] [rbp-B0h]
  unsigned __int64 v91; // [rsp+A0h] [rbp-A8h]
  _QWORD *v92; // [rsp+A8h] [rbp-A0h]
  char v93; // [rsp+BEh] [rbp-8Ah] BYREF
  unsigned __int8 v94; // [rsp+BFh] [rbp-89h] BYREF
  _QWORD v95[2]; // [rsp+C0h] [rbp-88h] BYREF
  void *src; // [rsp+D0h] [rbp-78h] BYREF
  __int128 v97; // [rsp+D8h] [rbp-70h]
  void *ptr; // [rsp+F0h] [rbp-58h] BYREF
  __m128i v99; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v100; // [rsp+108h] [rbp-40h]

  v77 = a1;
  v78 = a2;
  v88 = a4;
  v92 = a5;
  v100 = __readfsqword(0x28u);
  if ( a1 >= a2 )
    return -1;
  v5 = *(_QWORD *)(a3 + 8);
  if ( !v5 )
    return -1;
  v6 = *(_QWORD *)(a3 + 8);
  src = nullptr;
  v97 = 0;
  v83 = qword_2CCB598;
  src = (void *)qvector_reserve(&src, 0, v6, 8);
  memset((char *)src + 8 * v97, 0, 8 * (v5 - v97));
  *(_QWORD *)&v97 = v5;
  v7 = nbits(a1);
  v8 = v7 + 14;
  v9 = v7 + 7 < 0;
  v10 = v7 + 7;
  LODWORD(v11) = 64;
  if ( v9 )
    v10 = v8;
  v80 = v10 >> 3;
  v12 = v10 >> 3;
  LOBYTE(addr) = getinf_flag(3, 64);
  v15 = 0;
  v82 = -1;
  v75 = -1;
  v76 = 1;
  v72 = v12;
  do
  {
    v16 = *(_QWORD *)a3 + 80 * v15;
    v17 = *(_QWORD *)(v16 + 32);
    v18 = *(_QWORD *)(v16 + 8);
    v19 = (_QWORD *)v16;
    if ( v17 )
    {
      if ( v18 != v17 )
        goto LABEL_23;
      if ( !(_BYTE)addr )
      {
        v70 = 0;
        goto LABEL_10;
      }
    }
    else
    {
      v70 = 0;
      if ( !(_BYTE)addr )
        goto LABEL_22;
    }
    LODWORD(v11) = v80 - 1;
    v70 = (int)(v80 - 1);
LABEL_22:
    if ( v70 >= v18 )
    {
LABEL_23:
      v70 = -1;
      goto LABEL_24;
    }
LABEL_10:
    v20 = v70;
    v21 = 0;
    while ( 1 )
    {
      if ( v17 )
        v22 = *(_BYTE *)(v19[3] + v20);
      else
        v22 = -1;
      v11 = (int)((__int64 (*)(void))bitcount)();
      v23 = *(_BYTE *)(*v19 + v20);
      v24 = 0;
      if ( v23 != -1 )
      {
        n[0] = v11;
        v24 = (int)bitcount((unsigned __int8)(v23 & v22));
      }
      v25 = v24 + 4 * v11;
      if ( v21 < v25 )
      {
        v70 = v20;
        v21 = v25;
      }
      v20 += v72;
      if ( v20 >= v19[1] )
        break;
      v17 = v19[4];
    }
LABEL_24:
    *((_QWORD *)src + v15) = v70;
    v76 &= v19[7] == 0;
    v26 = v19[1];
    if ( v26 < v75 )
    {
      v82 = v15;
      v75 = v26;
    }
    ++v15;
  }
  while ( v5 != v15 );
  v81 = v88 & 0x10;
  if ( !v75 )
  {
    if ( v92 )
      *v92 = v82;
    if ( v81 )
    {
      addr = v78 - 1;
      if ( !(unsigned __int8)is_mapped(v78 - 1) )
        addr = prev_addr(addr);
      if ( addr >= v77 )
        goto LABEL_35;
    }
    else
    {
      addr = v77;
      if ( (unsigned __int8)is_mapped(v77) )
        goto LABEL_35;
      addr = next_addr(v77);
      if ( addr < v78 )
        goto LABEL_35;
    }
    addr = -1;
    goto LABEL_35;
  }
  v73 = v76 | v88;
  v89 = v73 & 2;
  if ( (v73 & 2) == 0 )
    callui(25, v11, (int)&callui, v73 & 2, v13, v14);
  v28 = v97;
  ptr = nullptr;
  v99 = 0;
  if ( (_QWORD)v97 )
  {
    ptr = (void *)qalloc_or_throw(8 * v97);
    v99.m128i_i64[1] = v28;
    memcpy(ptr, src, 8 * v28);
    v99.m128i_i64[0] = v28;
  }
  v91 = -1;
  addr = -1;
  v29 = v78;
  v30 = v77;
  v90 = 0;
  LOBYTE(v82) = (v81 >> 4) ^ 1;
  v84 = &v93;
  p_ptr = &ptr;
  v85 = v95;
  v87 = &v94;
  LOBYTE(v88) = (v81 & 0x10) != 0;
  v71 = v73 & 1;
  while ( 2 )
  {
    v95[1] = v29;
    v31 = v83;
    v95[0] = v30;
    v32 = sub_6773B0(
            *(__int64 (__fastcall ***)(_QWORD, __int128 *, __int64))(v83 + 1672),
            v85,
            v73,
            (void **)a3,
            p_ptr,
            v84);
    v33 = v32;
    if ( v32 == -1 )
      goto LABEL_83;
    if ( v93 )
    {
      addr = v32;
      goto LABEL_83;
    }
    LODWORD(v34) = (_DWORD)v87;
    sub_3BEB30(*(_QWORD **)(v31 + 1672), v87, v32);
    v76 = v94;
    if ( !v71 )
      v76 = toupper(v94);
    v37 = 0;
    while ( 2 )
    {
      while ( 2 )
      {
        v42 = (size_t *)((char *)ptr + 8 * v37);
        v43 = *v42;
        if ( *v42 == -1 )
          goto LABEL_61;
        v44 = (unsigned __int64 *)(*(_QWORD *)a3 + 80 * v37);
        v34 = *v44;
        v45 = *(_BYTE *)(*v44 + v43);
        if ( !v71 )
        {
          v75 = *v44;
          n[0] = v43;
          v45 = toupper(v45);
          v34 = v75;
          v43 = n[0];
        }
        v46 = v44[4];
        if ( v46 )
        {
          v36 = v44[3];
          LODWORD(v35) = *(unsigned __int8 *)(v36 + (int)v43);
          if ( (v73 & 0x20) != 0 )
          {
            if ( ((unsigned __int8)v35 & (unsigned __int8)(v76 ^ v45)) != 0 )
              goto LABEL_68;
LABEL_49:
            LODWORD(v35) = v80;
            v38 = v43 / v80;
            if ( v33 >= v38 )
            {
              v39 = v33 - v38;
              if ( v33 - v38 >= v77 || !(_BYTE)v82 )
              {
                v35 = v44[1];
                v40 = v39 + v35;
                if ( v78 >= v39 + v35 || !(_BYTE)v88 )
                {
                  LODWORD(v36) = v81;
                  if ( v81 )
                  {
                    LOBYTE(v36) = addr == -1;
                    v41 = v36 | (addr < v39);
                  }
                  else
                  {
                    v41 = v39 < addr;
                  }
                  if ( v39 >= v77 && v41 && (LOBYTE(v36) = v78 >= v40, v39 < v78 && v78 >= v40) && v39 < v40 )
                  {
                    v66 = 0;
                    if ( v46 )
                      v66 = v44[3];
                    v67 = v34;
                    v68 = *(__int64 **)(v83 + 1672);
                    LODWORD(v34) = v39;
                    n[0] = v39;
                    if ( (unsigned __int8)sub_676A90(v68, v39, v67, v66, v35, v73) )
                    {
                      v91 = v37;
                      v42 = (size_t *)((char *)ptr + 8 * v37);
                      addr = n[0];
                      goto LABEL_60;
                    }
                  }
                  else
                  {
LABEL_60:
                    *v42 = -1;
                  }
                }
              }
            }
LABEL_61:
            if ( ++v37 == v5 )
              goto LABEL_69;
            continue;
          }
          if ( !(_BYTE)v35 )
            goto LABEL_49;
        }
        break;
      }
      LODWORD(v35) = -1;
      if ( v76 == v45 )
        goto LABEL_49;
LABEL_68:
      if ( ++v37 != v5 )
        continue;
      break;
    }
LABEL_69:
    if ( v81 )
    {
      v30 = v77;
      v29 = v33;
      if ( addr != -1 )
        goto LABEL_101;
LABEL_71:
      v47 = v97;
      v48 = nullptr;
      if ( (_QWORD)v97 )
      {
        n[0] = 8 * v97;
        v62 = (void *)qalloc_or_throw(8 * v97);
        LODWORD(v34) = (_DWORD)src;
        v48 = v62;
        memcpy(v62, src, n[0]);
      }
      si128 = _mm_unpacklo_epi64((__m128i)v47, (__m128i)v47);
      if ( ptr )
      {
        *(__m128i *)n = si128;
        v99.m128i_i64[0] = 0;
        qfree(ptr);
        si128 = _mm_load_si128((const __m128i *)n);
      }
      ptr = v48;
      v99 = si128;
LABEL_76:
      if ( (v73 & 8) == 0 )
      {
        v50 = v90 - v33;
        if ( (__int64)(v90 - v33) < 0 )
          v50 = v33 - v90;
        if ( v50 > 0xFFFF )
        {
          LODWORD(v34) = 0;
          show_auto(v33, 0);
          v90 = v33;
        }
      }
      if ( !v89 )
        callui(27, v34, (int)&callui, 0, v35, v36);
      continue;
    }
    break;
  }
  v29 = v78;
  v30 = v33 + 1;
  if ( addr == -1 )
    goto LABEL_71;
LABEL_101:
  v56 = (char *)ptr + 8 * v99.m128i_i64[0];
  if ( v56 != ptr )
  {
    v57 = (char *)ptr;
    v58 = 0;
    do
    {
      v59 = *(_QWORD *)v57 != -1;
      v57 += 8;
      v58 += v59;
    }
    while ( v56 != v57 );
    if ( v58 )
    {
      if ( v81 )
      {
        v63 = 0;
        v64 = -1;
        v36 = addr + 1;
        do
        {
          v65 = *((_QWORD *)ptr + v63);
          v35 = v64;
          if ( v64 > v36 + v65 )
            v64 = v36 + v65;
          if ( v65 == -1 )
            v64 = v35;
          ++v63;
        }
        while ( v63 < v5 );
        LODWORD(v34) = v77;
        if ( v77 >= v64 )
          v64 = v77;
        v30 = v64;
      }
      else
      {
        v60 = 0;
        v29 = 0;
        do
        {
          v34 = *((_QWORD *)ptr + v60);
          v61 = addr + v34;
          if ( v29 >= addr + v34 )
            v61 = v29;
          if ( v34 != -1 )
            v29 = v61;
          ++v60;
        }
        while ( v60 < v5 );
        if ( v78 <= v29 )
          v29 = v78;
      }
      goto LABEL_76;
    }
  }
LABEL_83:
  if ( addr != -1 && v92 )
  {
    if ( v91 )
    {
      v51 = 0;
      v52 = 0;
      while ( v52 < *(_QWORD *)(a3 + 8) )
      {
        v53 = (__int64 *)(*(_QWORD *)a3 + 80 * v52);
        v54 = v53[1];
        if ( v78 >= addr + v54 )
        {
          v55 = 0;
          if ( v53[4] )
            v55 = v53[3];
          if ( (unsigned __int8)sub_676A90(*(__int64 **)(v83 + 1672), addr, *v53, v55, v54, v73) )
          {
            v91 = v52;
            goto LABEL_94;
          }
        }
        v52 = ++v51;
        if ( v51 >= v91 )
          goto LABEL_94;
      }
      addr = -1;
    }
    else
    {
LABEL_94:
      *v92 = v91;
    }
  }
  if ( ptr )
  {
    v99.m128i_i64[0] = 0;
    qfree(ptr);
  }
LABEL_35:
  if ( src )
  {
    *(_QWORD *)&v97 = 0;
    qfree(src);
  }
  return addr;
}
