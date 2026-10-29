__int64 __fastcall bin_search(unsigned int a1, unsigned int a2, __int64 a3, int a4, _QWORD *a5)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // rdx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // ebx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  _QWORD *v17; // r15
  unsigned __int64 v18; // r13
  size_t v19; // r12
  char v20; // bl
  size_t v21; // rsi
  char v22; // di
  __int64 v23; // rax
  size_t v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rax
  const char *v28; // rsi
  __int64 v29; // rbx
  unsigned int v30; // ebx
  unsigned int v31; // r12d
  __int64 v32; // rbx
  unsigned int v33; // eax
  unsigned int v34; // r13d
  char *v35; // rsi
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // rax
  unsigned int v40; // r10d
  unsigned int v41; // eax
  char v42; // dl
  size_t *v43; // r14
  size_t v44; // rdx
  __int64 v45; // rbx
  unsigned __int8 v46; // al
  __int64 v47; // rdi
  unsigned __int64 v48; // r14
  void *v49; // r15
  __m128i si128; // xmm0
  int v51; // eax
  int v52; // ebp
  unsigned __int64 v53; // rbx
  __int64 *v54; // rax
  __int64 v55; // r8
  __int64 v56; // rcx
  char *v57; // rdi
  char *v58; // rax
  int v59; // edx
  int v60; // esi
  unsigned __int64 v61; // rdx
  unsigned int v62; // eax
  void *v63; // rax
  unsigned int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  _QWORD *v68; // rdi
  unsigned __int64 v70; // [rsp+10h] [rbp-118h]
  char v71; // [rsp+10h] [rbp-118h]
  __int64 v72; // [rsp+18h] [rbp-110h]
  int v73; // [rsp+18h] [rbp-110h]
  size_t n[2]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v75; // [rsp+30h] [rbp-F8h]
  unsigned __int8 v76; // [rsp+3Fh] [rbp-E9h]
  unsigned int v77; // [rsp+40h] [rbp-E8h]
  unsigned int v78; // [rsp+44h] [rbp-E4h]
  unsigned int v79; // [rsp+48h] [rbp-E0h]
  unsigned int addr; // [rsp+4Ch] [rbp-DCh]
  __int64 v81; // [rsp+50h] [rbp-D8h]
  __int64 v82; // [rsp+58h] [rbp-D0h]
  unsigned int v83; // [rsp+60h] [rbp-C8h]
  int v84; // [rsp+64h] [rbp-C4h]
  char *v85; // [rsp+68h] [rbp-C0h]
  const char *v86; // [rsp+70h] [rbp-B8h]
  void **p_ptr; // [rsp+78h] [rbp-B0h]
  char *v88; // [rsp+80h] [rbp-A8h]
  int v89; // [rsp+88h] [rbp-A0h]
  int v90; // [rsp+8Ch] [rbp-9Ch]
  unsigned __int64 v91; // [rsp+90h] [rbp-98h]
  _QWORD *v92; // [rsp+98h] [rbp-90h]
  char v93; // [rsp+A6h] [rbp-82h] BYREF
  unsigned __int8 v94; // [rsp+A7h] [rbp-81h] BYREF
  _DWORD v95[2]; // [rsp+A8h] [rbp-80h] BYREF
  void *src; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v97; // [rsp+B8h] [rbp-70h]
  void *ptr; // [rsp+D0h] [rbp-58h] BYREF
  __m128i v99; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v100; // [rsp+E8h] [rbp-40h]

  v77 = a1;
  v79 = a2;
  v84 = a4;
  v92 = a5;
  v100 = __readfsqword(0x28u);
  if ( a1 >= a2 )
    return (unsigned int)-1;
  v5 = *(_QWORD *)(a3 + 8);
  if ( !v5 )
    return (unsigned int)-1;
  v6 = *(_QWORD *)(a3 + 8);
  src = nullptr;
  v97 = 0;
  v82 = qword_2CA1698;
  src = (void *)qvector_reserve(&src, 0, v6, 8);
  memset((char *)src + 8 * v97, 0, 8 * (v5 - v97));
  *(_QWORD *)&v97 = v5;
  v7 = nbits(a1);
  v8 = v7 + 14;
  v9 = v7 + 7;
  if ( v9 < 0 )
    v9 = v8;
  v78 = v9 >> 3;
  v10 = v9 >> 3;
  LOBYTE(addr) = getinf_flag(3, 64);
  v13 = 0;
  v81 = -1;
  v75 = -1;
  v76 = 1;
  v72 = v10;
  do
  {
    v14 = *(_QWORD *)a3 + 80 * v13;
    v15 = *(_QWORD *)(v14 + 32);
    v16 = *(_QWORD *)(v14 + 8);
    v17 = (_QWORD *)v14;
    if ( v15 )
    {
      if ( v16 != v15 )
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
    v70 = (int)(v78 - 1);
LABEL_22:
    if ( v70 >= v16 )
    {
LABEL_23:
      v70 = -1;
      goto LABEL_24;
    }
LABEL_10:
    v18 = v70;
    v19 = 0;
    while ( 1 )
    {
      if ( v15 )
        v20 = *(_BYTE *)(v17[3] + v18);
      else
        v20 = -1;
      v21 = (int)((__int64 (*)(void))bitcount)();
      v22 = *(_BYTE *)(*v17 + v18);
      v23 = 0;
      if ( v22 != -1 )
      {
        n[0] = v21;
        v23 = (int)bitcount((unsigned __int8)(v22 & v20));
      }
      v24 = v23 + 4 * v21;
      if ( v19 < v24 )
      {
        v70 = v18;
        v19 = v24;
      }
      v18 += v72;
      if ( v18 >= v17[1] )
        break;
      v15 = v17[4];
    }
LABEL_24:
    v25 = v75;
    *((_QWORD *)src + v13) = v70;
    v76 &= v17[7] == 0;
    v26 = v17[1];
    if ( v26 < v25 )
    {
      v81 = v13;
      v75 = v26;
    }
    ++v13;
  }
  while ( v5 != v13 );
  v83 = v84 & 0x10;
  if ( !v75 )
  {
    if ( v92 )
      *v92 = v81;
    if ( v83 )
    {
      addr = v79 - 1;
      if ( !(unsigned __int8)is_mapped(v79 - 1) )
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
      if ( addr < v79 )
        goto LABEL_35;
    }
    addr = -1;
    goto LABEL_35;
  }
  v73 = v76 | v84;
  v28 = (const char *)(v73 & 2);
  v89 = v73 & 2;
  if ( (v73 & 2) == 0 )
    callui(25, (int)v28, (int)&callui, v70, v11, v12);
  v29 = v97;
  ptr = nullptr;
  v99 = 0;
  if ( (_QWORD)v97 )
  {
    ptr = (void *)qalloc_or_throw(8 * v97, v28);
    v99.m128i_i64[1] = v29;
    memcpy(ptr, src, 8 * v29);
    v99.m128i_i64[0] = v29;
  }
  v30 = v79;
  v91 = -1;
  addr = -1;
  v31 = v77;
  v90 = 0;
  LOBYTE(v81) = (v83 >> 4) ^ 1;
  v85 = &v93;
  p_ptr = &ptr;
  v86 = (const char *)v95;
  v88 = (char *)&v94;
  LOBYTE(v84) = (v83 & 0x10) != 0;
  v71 = v73 & 1;
  while ( 2 )
  {
    v95[1] = v30;
    v32 = v82;
    v95[0] = v31;
    v33 = sub_659430(*(_QWORD **)(v82 + 1480), v86, v73, (void **)a3, p_ptr, v85);
    v34 = v33;
    if ( v33 == -1 )
      goto LABEL_83;
    if ( v93 )
    {
      addr = v33;
      goto LABEL_83;
    }
    v35 = v88;
    sub_3B9CB0(*(_QWORD *)(v32 + 1480), v88, v33);
    v76 = v94;
    if ( !v71 )
      v76 = toupper(v94);
    v38 = 0;
    while ( 2 )
    {
      while ( 2 )
      {
        v43 = (size_t *)((char *)ptr + 8 * v38);
        v44 = *v43;
        if ( *v43 == -1 )
          goto LABEL_61;
        v45 = *(_QWORD *)a3 + 80 * v38;
        v35 = *(char **)v45;
        v46 = *(_BYTE *)(*(_QWORD *)v45 + v44);
        if ( !v71 )
        {
          v75 = *(_QWORD *)v45;
          n[0] = v44;
          v46 = toupper(v46);
          v35 = (char *)v75;
          v44 = n[0];
        }
        v47 = *(_QWORD *)(v45 + 32);
        if ( v47 )
        {
          v37 = *(_QWORD *)(v45 + 24);
          LODWORD(v36) = *(unsigned __int8 *)(v37 + (int)v44);
          if ( (v73 & 0x20) != 0 )
          {
            if ( ((unsigned __int8)v36 & (unsigned __int8)(v76 ^ v46)) != 0 )
              goto LABEL_68;
LABEL_49:
            LODWORD(v36) = v78;
            v39 = v44 / v78;
            if ( v34 >= v39 )
            {
              v40 = v34 - v39;
              if ( v34 - (unsigned int)v39 >= v77 || !(_BYTE)v81 )
              {
                v36 = *(_QWORD *)(v45 + 8);
                v41 = v40 + v36;
                if ( v79 >= v40 + (unsigned int)v36 || !(_BYTE)v84 )
                {
                  LODWORD(v37) = v83;
                  if ( v83 )
                  {
                    LOBYTE(v37) = addr == -1;
                    v42 = v37 | (addr < v40);
                  }
                  else
                  {
                    v42 = v40 < addr;
                  }
                  if ( v40 >= v77 && v42 && (LOBYTE(v37) = v79 >= v41, v40 < v79 && v79 >= v41) && v40 < v41 )
                  {
                    v66 = 0;
                    if ( v47 )
                      v66 = *(_QWORD *)(v45 + 24);
                    v67 = (__int64)v35;
                    v68 = *(_QWORD **)(v82 + 1480);
                    v35 = (char *)v40;
                    LODWORD(n[0]) = v40;
                    if ( (unsigned __int8)sub_658B20(v68, v40, v67, v66, v36, v73) )
                    {
                      v91 = v38;
                      v43 = (size_t *)((char *)ptr + 8 * v38);
                      addr = n[0];
                      goto LABEL_60;
                    }
                  }
                  else
                  {
LABEL_60:
                    *v43 = -1;
                  }
                }
              }
            }
LABEL_61:
            if ( ++v38 == v5 )
              goto LABEL_69;
            continue;
          }
          if ( !(_BYTE)v36 )
            goto LABEL_49;
        }
        break;
      }
      LODWORD(v36) = -1;
      if ( v76 == v46 )
        goto LABEL_49;
LABEL_68:
      if ( ++v38 != v5 )
        continue;
      break;
    }
LABEL_69:
    if ( v83 )
    {
      v31 = v77;
      v30 = v34;
      if ( addr != -1 )
        goto LABEL_101;
LABEL_71:
      v48 = v97;
      v49 = nullptr;
      if ( (_QWORD)v97 )
      {
        n[0] = 8 * v97;
        v63 = (void *)qalloc_or_throw(8 * v97, v35);
        LODWORD(v35) = (_DWORD)src;
        v49 = v63;
        memcpy(v63, src, n[0]);
      }
      si128 = _mm_unpacklo_epi64((__m128i)v48, (__m128i)v48);
      if ( ptr )
      {
        *(__m128i *)n = si128;
        v99.m128i_i64[0] = 0;
        qfree(ptr);
        si128 = _mm_load_si128((const __m128i *)n);
      }
      ptr = v49;
      v99 = si128;
LABEL_76:
      if ( (v73 & 8) == 0 )
      {
        v51 = v90 - v34;
        if ( (int)(v90 - v34) < 0 )
          v51 = v34 - v90;
        if ( v51 > 0xFFFF )
        {
          LODWORD(v35) = 0;
          show_auto(v34, 0);
          v90 = v34;
        }
      }
      if ( !v89 )
        callui(27, (int)v35, (int)&callui, 0, v36, v37);
      continue;
    }
    break;
  }
  v30 = v79;
  v31 = v34 + 1;
  if ( addr == -1 )
    goto LABEL_71;
LABEL_101:
  v57 = (char *)ptr + 8 * v99.m128i_i64[0];
  if ( v57 != ptr )
  {
    v58 = (char *)ptr;
    v59 = 0;
    do
    {
      v60 = *(_QWORD *)v58 != -1;
      v58 += 8;
      v59 += v60;
    }
    while ( v57 != v58 );
    if ( v59 )
    {
      if ( v83 )
      {
        v35 = nullptr;
        v64 = -1;
        LODWORD(v37) = addr + 1;
        do
        {
          v65 = *((_QWORD *)ptr + (_QWORD)v35);
          LODWORD(v36) = v64;
          if ( v64 > (int)v37 + (int)v65 )
            v64 = v37 + v65;
          if ( v65 == -1 )
            v64 = v36;
          ++v35;
        }
        while ( (unsigned __int64)v35 < v5 );
        if ( v77 >= v64 )
          v64 = v77;
        v31 = v64;
      }
      else
      {
        v61 = 0;
        v30 = 0;
        do
        {
          v35 = *((char **)ptr + v61);
          v62 = addr + (_DWORD)v35;
          if ( v30 >= addr + (unsigned int)v35 )
            v62 = v30;
          if ( v35 != (char *)-1LL )
            v30 = v62;
          ++v61;
        }
        while ( v61 < v5 );
        if ( v79 <= v30 )
          v30 = v79;
      }
      goto LABEL_76;
    }
  }
LABEL_83:
  if ( addr != -1 && v92 )
  {
    if ( v91 )
    {
      v52 = 0;
      v53 = 0;
      while ( v53 < *(_QWORD *)(a3 + 8) )
      {
        v54 = (__int64 *)(*(_QWORD *)a3 + 80 * v53);
        v55 = v54[1];
        if ( v79 >= v55 + (unsigned __int64)addr )
        {
          v56 = 0;
          if ( v54[4] )
            v56 = v54[3];
          if ( (unsigned __int8)sub_658B20(*(_QWORD **)(v82 + 1480), addr, *v54, v56, v55, v73) )
          {
            v91 = v53;
            goto LABEL_94;
          }
        }
        v53 = ++v52;
        if ( v52 >= v91 )
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

