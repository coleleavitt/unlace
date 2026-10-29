void __fastcall sub_18C4CC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8)
{
  __int64 v10; // rbx
  __int64 *v11; // r14
  __int64 v12; // r15
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r9
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  unsigned __int64 v25; // rdx
  __int64 v26; // r10
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rcx
  _BYTE *v30; // rcx
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __m128i *v33; // rdi
  __int64 v34; // rsi
  __int64 *v35; // r13
  __int64 *v36; // r14
  unsigned __int64 v37; // r15
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 *v46; // r14
  __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  _QWORD *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // r12
  const __m128i *v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v60; // [rsp+18h] [rbp-140h]
  __int64 v61; // [rsp+18h] [rbp-140h]
  __int64 v62; // [rsp+18h] [rbp-140h]
  const __m128i *v63; // [rsp+18h] [rbp-140h]
  __int64 v64; // [rsp+20h] [rbp-138h]
  __int64 v65; // [rsp+20h] [rbp-138h]
  __int128 v66; // [rsp+30h] [rbp-128h] BYREF
  void *ptr; // [rsp+40h] [rbp-118h] BYREF
  __int64 v68; // [rsp+48h] [rbp-110h]
  _BYTE v69[64]; // [rsp+50h] [rbp-108h] BYREF
  __int64 v70; // [rsp+90h] [rbp-C8h] BYREF
  _QWORD *v71; // [rsp+98h] [rbp-C0h]

  v10 = sub_15F24E0(a1, a2, a3, a4, a5, a6);
  a2 = (unsigned int)a2;
  v11 = (__int64 *)sub_1E85170(a1, a3);
  v12 = *v11;
  sub_1E535C0(a1, (unsigned int)a2, v11, 20);
  v66 = 0;
  v70 = *v11;
  v71 = v11 + 1;
  v13 = sub_BF48A0(&v70);
  *((_QWORD *)&v66 + 1) = v14;
  v15 = v13;
  *(_QWORD *)&v66 = v13;
  if ( v13 && **((_DWORD **)&v66 + 1) == *(_DWORD *)(*((_QWORD *)&v66 + 1) + 12LL) )
  {
    v53 = sub_BEB490((__int64)&v66);
    v63 = v54;
    v55 = sub_F6C560(v53);
    a2 = v53;
    v11 = sub_A81BC0(*(_QWORD **)(a1 + 248), v53, v55, v56, v57, v58);
    v70 = *v11;
    v71 = v11 + 1;
    sub_F6C7F0((__int64)&v70, v53, v63);
    a8 = 0;
    v15 = 0;
    v66 = 0;
  }
  v16 = v12 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(*(_QWORD *)(v10 + 1528) + 96LL) = v11;
  *(_QWORD *)(v10 + 1544) = v12;
  v17 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  v18 = *(unsigned __int8 *)(v17 + 16);
  v19 = (unsigned int)(v18 - 25);
  if ( (unsigned int)v19 > 1 )
  {
    v17 = sub_F63050(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL), a2, v15, v19);
    v15 = v66;
    v16 = v12 & 0xFFFFFFFFFFFFFFF0LL;
    LOBYTE(v18) = *(_BYTE *)(v17 + 16);
  }
  v20 = *(_QWORD *)(v17 + 24);
  LODWORD(v21) = 0;
  if ( (_BYTE)v18 == 26 )
  {
    v21 = *(_QWORD *)(v17 + 16) >> 24;
    LOBYTE(v21) = (unsigned __int8)v21 >> 7;
  }
  v22 = (unsigned int)(32 * v21);
  *(_BYTE *)(*(_QWORD *)(v10 + 1528) + 49LL) = v22 | *(_BYTE *)(*(_QWORD *)(v10 + 1528) + 49LL) & 0xDF;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19072LL) != v20 )
  {
    v23 = *(_QWORD *)(v10 + 1528);
    *(_QWORD *)(v10 + 1472) = v20;
    *(_BYTE *)(v23 + 49) &= ~0x80u;
    *(_BYTE *)(v10 + 1464) = 0;
  }
  ptr = v69;
  v68 = 0x800000000LL;
  if ( v15 )
  {
    if ( *(_BYTE *)(v15 + 16) != 25 )
    {
      v24 = *(unsigned __int16 *)(v15 + 22);
      if ( *(_WORD *)(v15 + 22) )
      {
        LODWORD(v25) = 0;
        v26 = 8LL * (unsigned int)(v24 - 1) + 24;
        v27 = 16;
        do
        {
          while ( 1 )
          {
            v28 = *(_QWORD *)(*((_QWORD *)&v66 + 1) + v27);
            v29 = *(_QWORD *)(v28 + 40);
            if ( ((v29 & 7) != 0 || (v29 & 0xFFFFFFFFFFFFFFF8LL) == 0)
              && (*(_BYTE *)(v28 + 29) & 2) == 0
              && *(char *)(v28 + 28) >= 0 )
            {
              v30 = *(_BYTE **)(a1 + 232);
              if ( (v30[1] & 8) == 0 && (*v30 & 8) == 0 )
              {
                v65 = v26;
                v61 = v27;
                sub_168B9F0((__int64)&v70, (__int64 *)(a1 + 8), *(_DWORD *)(v28 + 24), 0x1611u, 0);
                sub_15F7200(&v70);
                LODWORD(v25) = v68;
                v26 = v65;
                v27 = v61;
              }
            }
            v31 = (unsigned int)v25;
            v32 = (unsigned int)v25 + 1LL;
            if ( v32 > HIDWORD(v68) )
              break;
            v27 += 8;
            *((_QWORD *)ptr + v31) = v28;
            v25 = (unsigned int)(v68 + 1);
            LODWORD(v68) = v68 + 1;
            if ( v26 == v27 )
              goto LABEL_23;
          }
          v64 = v26;
          v60 = v27;
          sub_2237220(&ptr, v69, v32, 8);
          v26 = v64;
          *((_QWORD *)ptr + (unsigned int)v68) = v28;
          v25 = (unsigned int)(v68 + 1);
          LODWORD(v68) = v68 + 1;
          v27 = v60 + 8;
        }
        while ( v60 + 8 != v64 );
        goto LABEL_23;
      }
    }
LABEL_40:
    v33 = *(__m128i **)(v10 + 1528);
    goto LABEL_25;
  }
  v44 = *(_QWORD *)v16;
  if ( *(_BYTE *)(*(_QWORD *)v16 + 16LL) != 26 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v44 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      goto LABEL_40;
    v52 = sub_F63050(v44, a2, 0, v22);
    if ( !v52 )
    {
      v25 = (unsigned int)v68;
      v33 = *(__m128i **)(v10 + 1528);
      goto LABEL_24;
    }
    v46 = (__int64 *)(v52 + 48);
    v33 = *(__m128i **)(v10 + 1528);
    v25 = (unsigned int)v68;
    v47 = v52 + 48 + 8LL * *(unsigned __int16 *)(v52 + 22);
    if ( v47 == v52 + 48 )
      goto LABEL_24;
    while ( 1 )
    {
LABEL_47:
      if ( v33 )
        v33 = (__m128i *)((char *)v33 + 40);
      v48 = sub_17A5990(a1, (__int64)v33, *(_DWORD *)(a3 + 88), *v46);
      v49 = (unsigned int)v68;
      v50 = (unsigned int)v68 + 1LL;
      if ( v50 > HIDWORD(v68) )
      {
        v62 = v48;
        sub_2237220(&ptr, v69, v50, 8);
        v49 = (unsigned int)v68;
        v51 = ptr;
        v48 = v62;
      }
      else
      {
        v51 = ptr;
      }
      v51[v49] = v48;
      ++v46;
      v25 = (unsigned int)(v68 + 1);
      LODWORD(v68) = v68 + 1;
      if ( v46 == (__int64 *)v47 )
        break;
      v33 = *(__m128i **)(v10 + 1528);
    }
LABEL_23:
    v33 = *(__m128i **)(v10 + 1528);
LABEL_24:
    if ( !(_DWORD)v25 )
      goto LABEL_25;
    sub_B7C580((__int64)v33, ptr, v25);
    sub_16D8D40(a1, *(__int64 **)(*(_QWORD *)(v10 + 1528) + 72LL), *(unsigned int *)(*(_QWORD *)(v10 + 1528) + 80LL), 0);
    goto LABEL_40;
  }
  v45 = *(unsigned __int16 *)(v44 + 22);
  v46 = (__int64 *)(v44 + 48);
  v33 = *(__m128i **)(v10 + 1528);
  v47 = (__int64)&v46[v45];
  if ( v46 != (__int64 *)v47 )
    goto LABEL_47;
LABEL_25:
  sub_1836CB0((__int64 *)a1, a4, v33, (__int64 *)a3, (__m128)0LL, a8);
  v34 = *(_QWORD *)(v10 + 1528);
  v35 = *(__int64 **)(v34 + 72);
  v36 = &v35[*(unsigned int *)(v34 + 80)];
  if ( v36 != v35 )
  {
    while ( 1 )
    {
      v37 = *v35;
      if ( v34 )
        v34 += 40;
      sub_B8C080(*v35, v34);
      v41 = *(_QWORD *)(v37 + 40);
      if ( (v41 & 7) == 0 && (v41 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        sub_17DE630(a1, *(_QWORD *)(v10 + 1536), v37, v38, v39, v40);
        sub_17B7670(a1, v37, *(_QWORD *)(v10 + 1536), 1, v42, v43);
      }
      if ( *(char *)(v37 + 28) >= 0 )
      {
        if ( v36 == ++v35 )
          break;
      }
      else
      {
        ++v35;
        sub_B88650(*(_QWORD *)(v10 + 1528), 1);
        if ( v36 == v35 )
          break;
      }
      v34 = *(_QWORD *)(v10 + 1528);
    }
  }
  if ( ptr != v69 )
    free(ptr);
}
