void __fastcall sub_1453310(__int64 a1, __int64 a2)
{
  void *v2; // rax
  size_t v3; // rdx
  signed __int64 v4; // rdx
  void *v5; // r12
  size_t v6; // rbp
  char v7; // r14
  char v8; // al
  signed __int64 v9; // r8
  __int64 v10; // r13
  char *v11; // r14
  __int64 v12; // r13
  unsigned int v13; // eax
  __int64 v14; // r9
  __int64 *v15; // r8
  __int64 *v16; // rax
  _QWORD *v17; // rbp
  _BYTE *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  size_t v22; // rdx
  _BYTE *v23; // rcx
  unsigned int v24; // eax
  size_t v25; // rdx
  _BYTE *v26; // rax
  __int64 v27; // rax
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __int64 v30; // r15
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  void *v35; // rdi
  _QWORD *v36; // rax
  __int64 v37; // rsi
  unsigned int v38; // ecx
  char *v39; // rdi
  _QWORD *v40; // rax
  void *v41; // rdi
  __int64 v42; // rax
  int v43; // [rsp+8h] [rbp-1B0h]
  signed __int64 v44; // [rsp+8h] [rbp-1B0h]
  signed __int64 v45; // [rsp+8h] [rbp-1B0h]
  _QWORD *v46; // [rsp+8h] [rbp-1B0h]
  _QWORD *v47; // [rsp+8h] [rbp-1B0h]
  signed __int64 v48; // [rsp+8h] [rbp-1B0h]
  signed __int64 v49; // [rsp+8h] [rbp-1B0h]
  signed __int64 v50; // [rsp+8h] [rbp-1B0h]
  int v51; // [rsp+8h] [rbp-1B0h]
  __int64 *v52; // [rsp+10h] [rbp-1A8h]
  __int64 v53; // [rsp+10h] [rbp-1A8h]
  signed __int64 v54; // [rsp+10h] [rbp-1A8h]
  signed __int64 v55; // [rsp+10h] [rbp-1A8h]
  __int64 *v56; // [rsp+10h] [rbp-1A8h]
  __int64 v57; // [rsp+18h] [rbp-1A0h]
  _QWORD *v58; // [rsp+18h] [rbp-1A0h]
  char *v59; // [rsp+18h] [rbp-1A0h]
  __int64 *v60; // [rsp+28h] [rbp-190h] BYREF
  void *v61; // [rsp+30h] [rbp-188h] BYREF
  size_t v62; // [rsp+38h] [rbp-180h]
  char *v63; // [rsp+40h] [rbp-178h] BYREF
  signed __int64 v64; // [rsp+48h] [rbp-170h]
  int v65[4]; // [rsp+50h] [rbp-168h] BYREF
  __int16 v66; // [rsp+60h] [rbp-158h]
  int v67[4]; // [rsp+70h] [rbp-148h] BYREF
  __int16 v68; // [rsp+80h] [rbp-138h]
  void *src; // [rsp+90h] [rbp-128h] BYREF
  size_t n; // [rsp+98h] [rbp-120h]
  _QWORD v71[8]; // [rsp+A0h] [rbp-118h] BYREF
  void *ptr; // [rsp+E0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-D0h]
  _BYTE v74[192]; // [rsp+F8h] [rbp-C0h] BYREF

  sub_14634E0(a1, a2);
  if ( *(_WORD *)(a2 + 16) != 22 )
  {
    sub_FC70B0((__int64)&ptr, *(_QWORD *)(a1 + 48), *(_DWORD *)a2, 1404);
    sub_AE9DF0((unsigned __int8 **)&ptr, (__int64)"(", 1u);
    sub_AEA040((__int64)&ptr);
    return;
  }
  if ( !(unsigned __int8)sub_1464550(a1, v65, 1) )
  {
    v61 = nullptr;
    v62 = 0;
    ptr = v74;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v66 != 16 )
    {
LABEL_6:
      sub_FC70B0((__int64)&src, *(_QWORD *)(a1 + 48), *(_DWORD *)a2, 1405);
      sub_AEA040((__int64)&src);
      goto LABEL_7;
    }
    v2 = (void *)sub_145C740(a1, v65, &ptr, 0);
    si128.m128i_i64[0] = 0;
    v61 = v2;
    v62 = v3;
    sub_14634E0(a1, a2);
    if ( *(_WORD *)(a2 + 16) != 66 )
    {
      sub_FC70B0((__int64)&src, *(_QWORD *)(a1 + 48), *(_DWORD *)a2, 1404);
      sub_AE9DF0((unsigned __int8 **)&src, (__int64)",", 1u);
      sub_AEA040((__int64)&src);
      goto LABEL_7;
    }
    if ( !(unsigned __int8)sub_1464550(a1, v67, 1) )
    {
      v63 = nullptr;
      v64 = 0;
      if ( v68 != 16 )
        goto LABEL_6;
      v63 = (char *)sub_145C740(a1, v67, &ptr, 0);
      v64 = v4;
      sub_14634E0(a1, a2);
      if ( *(_WORD *)(a2 + 16) != 23 )
      {
        sub_FC70B0((__int64)&src, *(_QWORD *)(a1 + 48), *(_DWORD *)a2, 1404);
        sub_AE9DF0((unsigned __int8 **)&src, (__int64)")", 1u);
        sub_AEA040((__int64)&src);
        goto LABEL_7;
      }
      v5 = v61;
      v6 = v62;
      v7 = sub_141AD20(a1, v65[0], (char **)&v61);
      v8 = sub_141AD20(a1, v67[0], &v63);
      v9 = v64;
      if ( !v62 || !v64 || v7 == v8 )
      {
        v10 = *(_QWORD *)(a1 + 104);
        v11 = v63;
        if ( !*(_QWORD *)(v10 + 600) )
        {
          v44 = v64;
          v27 = operator new(0x78u);
          v28 = _mm_load_si128((const __m128i *)&xmmword_23A9B50);
          v9 = v44;
          *(_QWORD *)v27 = 0;
          *(__m128i *)(v27 + 8) = v28;
          *(_OWORD *)(v27 + 24) = 0;
          v29 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
          *(_QWORD *)(v27 + 40) = v27 + 56;
          *(_QWORD *)(v27 + 88) = v27 + 104;
          *(__m128i *)(v27 + 104) = v29;
          v30 = *(_QWORD *)(v10 + 600);
          *(_QWORD *)(v27 + 48) = 0x400000000LL;
          *(_QWORD *)(v27 + 96) = 0;
          *(_QWORD *)(v10 + 600) = v27;
          if ( v30 )
          {
            if ( *(_DWORD *)(v30 + 12) )
            {
              v31 = *(_DWORD *)(v30 + 8);
              if ( v31 )
              {
                v32 = 0;
                v33 = 8LL * (unsigned int)(v31 - 1) + 8;
                do
                {
                  v34 = *(_QWORD *)(*(_QWORD *)v30 + v32);
                  if ( v34 != -8 )
                  {
                    if ( v34 )
                    {
                      v35 = *(void **)(v34 + 8);
                      if ( v35 != (void *)(v34 + 24) )
                      {
                        v57 = v33;
                        v53 = v32;
                        v45 = v9;
                        operator delete(v35);
                        v33 = v57;
                        v32 = v53;
                        v9 = v45;
                      }
                    }
                  }
                  v32 += 8;
                }
                while ( v32 != v33 );
              }
            }
            v36 = *(_QWORD **)(v30 + 40);
            v58 = &v36[*(unsigned int *)(v30 + 48)];
            if ( v36 != v58 )
            {
              do
              {
                v54 = v9;
                v37 = 0x40000000000LL;
                v38 = (unsigned int)(((__int64)v36 - *(_QWORD *)(v30 + 40)) >> 3) >> 7;
                if ( v38 <= 0x1D )
                  v37 = 4096LL << v38;
                v46 = v36;
                operator delete(*v36, v37, 16);
                v9 = v54;
                v36 = v46 + 1;
              }
              while ( v58 != v46 + 1 );
            }
            v39 = *(char **)(v30 + 88);
            v59 = &v39[16 * *(unsigned int *)(v30 + 96)];
            if ( v39 != v59 )
            {
              v40 = *(_QWORD **)(v30 + 88);
              do
              {
                v55 = v9;
                v47 = v40;
                operator delete(*v40, v40[1], 16);
                v9 = v55;
                v40 = v47 + 2;
              }
              while ( v59 != (char *)(v47 + 2) );
              v39 = *(char **)(v30 + 88);
            }
            if ( v39 != (char *)(v30 + 104) )
            {
              v48 = v9;
              free(v39);
              v9 = v48;
            }
            v41 = *(void **)(v30 + 40);
            if ( v41 != (void *)(v30 + 56) )
            {
              v49 = v9;
              free(v41);
              v9 = v49;
            }
            v50 = v9;
            free(*(void **)v30);
            operator delete((void *)v30, 0x78u);
            v9 = v50;
          }
        }
        src = v71;
        sub_144EF90(&src, v11, (__int64)&v11[v9]);
        v12 = *(_QWORD *)(v10 + 600);
        v13 = sub_2244B30(v5, v6);
        v14 = (unsigned int)sub_2244CB0(v12, v5, v6, v13);
        v15 = (__int64 *)(*(_QWORD *)v12 + 8 * v14);
        if ( *v15 )
        {
          if ( *v15 != -8 )
          {
            sub_11727E0(&v60, v15, 0);
            v16 = v60;
            goto LABEL_22;
          }
          --*(_DWORD *)(v12 + 16);
        }
        v20 = *(_QWORD *)(v12 + 24);
        *(_QWORD *)(v12 + 104) += v6 + 41;
        v21 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v22 = v6 + 41 + v21;
        if ( *(_QWORD *)(v12 + 32) >= v22 && v20 )
        {
          *(_QWORD *)(v12 + 24) = v22;
        }
        else
        {
          v56 = v15;
          v51 = v14;
          v42 = sub_986170(v12 + 24, v6 + 41, v6 + 41, 3, (__int64)v15, v14);
          v15 = v56;
          LODWORD(v14) = v51;
          v21 = v42;
        }
        v23 = (_BYTE *)(v21 + 40);
        if ( v6 )
        {
          v52 = v15;
          v43 = v14;
          v26 = memcpy((void *)(v21 + 40), v5, v6);
          v15 = v52;
          LODWORD(v14) = v43;
          v23 = v26;
        }
        v23[v6] = 0;
        *(_QWORD *)v21 = v6;
        *(_QWORD *)(v21 + 8) = v21 + 24;
        *(_QWORD *)(v21 + 16) = 0;
        *(_BYTE *)(v21 + 24) = 0;
        *v15 = v21;
        ++*(_DWORD *)(v12 + 12);
        v24 = sub_22450D0(v12, (unsigned int)v14);
        sub_11727E0(&v60, (__int64 *)(*(_QWORD *)v12 + 8LL * v24), 0);
        v16 = v60;
LABEL_22:
        v17 = (_QWORD *)*v16;
        v18 = *(_BYTE **)(*v16 + 8);
        if ( src == v71 )
        {
          v25 = n;
          if ( n )
          {
            if ( n == 1 )
              *v18 = v71[0];
            else
              memcpy(v18, src, n);
            v25 = n;
            v18 = (_BYTE *)v17[1];
          }
          v17[2] = v25;
          v18[v25] = 0;
          v18 = src;
          goto LABEL_26;
        }
        if ( v18 == (_BYTE *)(v17 + 3) )
        {
          v17[1] = src;
          v17[2] = n;
          v17[3] = v71[0];
        }
        else
        {
          v17[1] = src;
          v19 = v17[3];
          v17[2] = n;
          v17[3] = v71[0];
          if ( v18 )
          {
            src = v18;
            v71[0] = v19;
            goto LABEL_26;
          }
        }
        v18 = v71;
        src = v71;
LABEL_26:
        n = 0;
        *v18 = 0;
        if ( src != v71 )
          operator delete(src);
        goto LABEL_7;
      }
      sub_FC70B0((__int64)&src, *(_QWORD *)(a1 + 48), v65[0], (v7 == 0) + 1406);
      sub_AEC220((unsigned __int8 **)&src, v61, v62);
      sub_AEC220((unsigned __int8 **)&src, v63, v64);
      sub_AEA040((__int64)&src);
    }
LABEL_7:
    if ( ptr != v74 )
      free(ptr);
  }
}
