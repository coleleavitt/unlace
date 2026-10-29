__int64 __fastcall sub_E13B20(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rbp
  __m128i si128; // xmm0
  size_t v6; // rbp
  void *v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // r8
  __int64 *v12; // rax
  __int64 v13; // rax
  unsigned int v14; // r9d
  __int64 *v15; // r8
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // ebp
  __int64 v20; // r8
  _QWORD *v21; // r9
  unsigned int v22; // r15d
  __int64 v23; // rcx
  _QWORD *v24; // r13
  unsigned __int64 v25; // rdi
  unsigned int v26; // r14d
  __int64 v27; // rdx
  _QWORD *v28; // rsi
  __int64 v29; // rax
  int v31; // r8d
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rdx
  _QWORD *v40; // r9
  __int64 v41; // r15
  _QWORD *v42; // rsi
  _QWORD *v43; // rdx
  int i; // r11d
  __int64 v45; // rsi
  unsigned int v46; // r8d
  __int64 v47; // rdi
  __int64 v48; // r10
  int v49; // esi
  int v50; // esi
  int v51; // r8d
  unsigned int v52; // edi
  __int64 v53; // r9
  __int64 v54; // r13
  _QWORD *v55; // rdx
  unsigned __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rdx
  __int64 v60; // r10
  _QWORD *v61; // rsi
  _QWORD *v62; // rdx
  int v63; // r11d
  __int64 v64; // rsi
  unsigned int v65; // r9d
  __int64 v66; // rdi
  __int64 v67; // r8
  int v68; // esi
  int v69; // esi
  int v70; // edi
  unsigned int v71; // r14d
  __int64 v72; // r8
  _QWORD *v73; // r9
  int v74; // r10d
  __int64 v75; // r13
  _QWORD *v76; // rdx
  _QWORD *v77; // r10
  int v78; // r11d
  unsigned int v80; // [rsp+10h] [rbp-148h]
  __int64 v81; // [rsp+10h] [rbp-148h]
  __int64 *v82; // [rsp+18h] [rbp-140h]
  int v83; // [rsp+18h] [rbp-140h]
  __int64 v84; // [rsp+18h] [rbp-140h]
  __int64 v85; // [rsp+20h] [rbp-138h]
  int v86; // [rsp+20h] [rbp-138h]
  __int64 *v87; // [rsp+38h] [rbp-120h] BYREF
  __int64 (__fastcall **v88)(); // [rsp+40h] [rbp-118h] BYREF
  int v89; // [rsp+48h] [rbp-110h]
  __int128 v90; // [rsp+50h] [rbp-108h]
  __int64 v91; // [rsp+60h] [rbp-F8h]
  char v92; // [rsp+68h] [rbp-F0h]
  int v93; // [rsp+6Ch] [rbp-ECh]
  void **p_ptr; // [rsp+70h] [rbp-E8h]
  void *ptr; // [rsp+80h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+88h] [rbp-D0h]
  _BYTE v97[192]; // [rsp+98h] [rbp-C0h] BYREF

  v3 = *(_QWORD *)(sub_B68470(a2 + 72) + 16);
  if ( (v3 & 4) != 0 )
    v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  if ( v4 )
    v4 -= 64LL;
  ptr = v97;
  *(__m128i *)n = si128;
  v90 = 0;
  v88 = &off_2BC1F40;
  v89 = 2;
  v92 = 0;
  v93 = 1;
  v91 = 0;
  p_ptr = &ptr;
  sub_2257B70(&v88, 0, 0, 0);
  (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64 (__fastcall ***)()))(**(_QWORD **)(a1 + 16) + 240LL))(
    *(_QWORD *)(a1 + 16),
    v4,
    &v88);
  v6 = n[0];
  v7 = ptr;
  v8 = sub_2220DF0(ptr, n[0]);
  v9 = (unsigned int)sub_2220F70(a1 + 24, v7, v6, v8);
  v11 = (__int64 *)(*(_QWORD *)(a1 + 24) + 8 * v9);
  if ( *v11 )
  {
    if ( *v11 != -8 )
    {
      sub_E138D0(&v87, v11, 0);
      v12 = v87;
      goto LABEL_12;
    }
    --*(_DWORD *)(a1 + 40);
  }
  v82 = v11;
  v80 = v9;
  v13 = sub_220C370(v6 + 17, 8, v9, v10, v11, v9);
  v14 = v80;
  v15 = v82;
  v16 = v13;
  if ( v6 )
  {
    v85 = v13;
    memcpy((void *)(v13 + 16), v7, v6);
    v16 = v85;
    v15 = v82;
    v14 = v80;
  }
  *(_BYTE *)(v16 + v6 + 16) = 0;
  *(_QWORD *)v16 = v6;
  *(_DWORD *)(v16 + 8) = 0;
  *v15 = v16;
  ++*(_DWORD *)(a1 + 36);
  v17 = sub_2221390(a1 + 24, v14);
  sub_E138D0(&v87, (__int64 *)(*(_QWORD *)(a1 + 24) + 8LL * v17), 0);
  v12 = v87;
LABEL_12:
  v18 = *v12;
  v19 = *(_DWORD *)(v18 + 8) + 1;
  *(_DWORD *)(v18 + 8) = v19;
  v88 = (__int64 (__fastcall **)())&unk_2C4C288;
  sub_2257A60(&v88);
  if ( ptr != v97 )
    free(ptr);
  v22 = *(_DWORD *)(a1 + 144);
  v23 = a1 + 128;
  v24 = *(_QWORD **)(a1 + 128);
  if ( !v22 )
    goto LABEL_26;
  v25 = v22 - 1;
  v26 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
  LODWORD(v27) = v25 & v26;
  v28 = &v24[2 * ((unsigned int)v25 & v26)];
  v29 = *v28;
  if ( *v28 != a2 )
  {
    v31 = 1;
    v21 = nullptr;
    if ( v29 != -4096 )
    {
      while ( 1 )
      {
        if ( !v21 && v29 == -8192 )
          v21 = v28;
        v27 = (unsigned int)v25 & ((_DWORD)v27 + v31);
        v28 = &v24[2 * v27];
        v29 = *v28;
        if ( *v28 == a2 )
          goto LABEL_16;
        if ( v29 == -4096 )
          break;
        ++v31;
      }
      if ( v21 )
        v28 = v21;
    }
    v32 = *(_DWORD *)(a1 + 136) + 1;
    v20 = (unsigned int)(4 * v32);
    if ( (unsigned int)v20 < 3 * v22 )
    {
      v33 = v22 >> 3;
      if ( v22 - *(_DWORD *)(a1 + 140) - v32 > (unsigned int)v33 )
      {
LABEL_22:
        v34 = *v28;
        goto LABEL_23;
      }
      v56 = (((v25 >> 1) | v25 | (((v25 >> 1) | v25) >> 2)) >> 4) | (v25 >> 1) | v25 | (((v25 >> 1) | v25) >> 2);
      v57 = ((((v56 >> 8) | v56) >> 16) | (v56 >> 8) | v56) + 1;
      if ( (unsigned int)v57 < 0x40 )
        LODWORD(v57) = 64;
      *(_DWORD *)(a1 + 144) = v57;
      v58 = sub_220C370(16LL * (unsigned int)v57, 8, 64, v23, v33, v21);
      v23 = a1 + 128;
      *(_QWORD *)(a1 + 128) = v58;
      if ( v24 )
      {
        v59 = (_QWORD *)v58;
        *(_QWORD *)(a1 + 136) = 0;
        v60 = *(unsigned int *)(a1 + 144);
        v61 = (_QWORD *)(v58 + 16 * v60);
        if ( (_QWORD *)v58 != v61 )
        {
          do
          {
            *v59 = -4096;
            v59 += 2;
          }
          while ( v61 != v59 );
        }
        v62 = v24;
        v63 = v60 - 1;
        do
        {
          v64 = *v62;
          if ( *v62 != -4096 && v64 != -8192 )
          {
            if ( !(_DWORD)v60 )
            {
              *(_QWORD *)&dword_0 = *v62;
              BUG();
            }
            v65 = v63 & (((unsigned int)v64 >> 9) ^ ((unsigned int)v64 >> 4));
            v66 = v58 + 16LL * v65;
            v67 = *(_QWORD *)v66;
            if ( v64 != *(_QWORD *)v66 && v67 != -4096 )
            {
              v86 = 1;
              v84 = 0;
              while ( 1 )
              {
                if ( v67 == -8192 )
                {
                  if ( v84 )
                    v66 = v84;
                  v84 = v66;
                }
                v65 = v63 & (v86 + v65);
                v66 = v58 + 16LL * v65;
                v67 = *(_QWORD *)v66;
                if ( v64 == *(_QWORD *)v66 )
                  break;
                if ( v67 == -4096 )
                {
                  if ( v84 )
                    v66 = v84;
                  break;
                }
                ++v86;
              }
            }
            *(_QWORD *)v66 = v64;
            v68 = *((_DWORD *)v62 + 2);
            ++*(_DWORD *)(a1 + 136);
            *(_DWORD *)(v66 + 8) = v68;
          }
          v62 += 2;
        }
        while ( &v24[2 * v22] != v62 );
        operator delete();
        v69 = *(_DWORD *)(a1 + 144);
        v24 = *(_QWORD **)(a1 + 128);
        v23 = a1 + 128;
        v32 = *(_DWORD *)(a1 + 136) + 1;
      }
      else
      {
        v75 = *(unsigned int *)(a1 + 144);
        *(_QWORD *)(a1 + 136) = 0;
        v69 = v75;
        v24 = (_QWORD *)(v58 + 16 * v75);
        if ( (_QWORD *)v58 != v24 )
        {
          v76 = (_QWORD *)v58;
          do
          {
            *v76 = -4096;
            v76 += 2;
          }
          while ( v24 != v76 );
          v24 = (_QWORD *)v58;
        }
        v32 = 1;
      }
      if ( v69 )
      {
        v70 = v69 - 1;
        v71 = (v69 - 1) & v26;
        v34 = a2;
        v28 = &v24[2 * v71];
        v72 = *v28;
        if ( *v28 != a2 )
        {
          if ( v72 != -4096 )
          {
            v73 = &v24[2 * v71];
            v74 = 1;
            v28 = nullptr;
            while ( 1 )
            {
              if ( v72 == -8192 && !v28 )
                v28 = v73;
              v71 = v70 & (v74 + v71);
              v73 = &v24[2 * v71];
              v72 = *v73;
              if ( *v73 == a2 )
              {
                v34 = a2;
                v28 = &v24[2 * v71];
                goto LABEL_23;
              }
              if ( v72 == -4096 )
                break;
              ++v74;
            }
            if ( v28 )
              goto LABEL_22;
            v28 = &v24[2 * v71];
          }
LABEL_42:
          *(_DWORD *)(a1 + 136) = v32;
LABEL_25:
          *((_DWORD *)v28 + 2) = v19;
          v35 = *(unsigned int *)(a1 + 144);
          *v28 = a2;
          sub_B45F90((__m128 *)&ptr, v28, &v24[2 * v35], v23, 1);
          return v19;
        }
        goto LABEL_23;
      }
      goto LABEL_124;
    }
LABEL_26:
    v36 = (((((((2 * v22 - 1) | ((unsigned __int64)(2 * v22 - 1) >> 1)) >> 2)
            | (2 * v22 - 1)
            | ((unsigned __int64)(2 * v22 - 1) >> 1)) >> 4)
          | (((2 * v22 - 1) | ((unsigned __int64)(2 * v22 - 1) >> 1)) >> 2)
          | (2 * v22 - 1)
          | ((unsigned __int64)(2 * v22 - 1) >> 1)) >> 8)
        | (((((2 * v22 - 1) | ((unsigned __int64)(2 * v22 - 1) >> 1)) >> 2)
          | (2 * v22 - 1)
          | ((unsigned __int64)(2 * v22 - 1) >> 1)) >> 4)
        | (((2 * v22 - 1) | ((unsigned __int64)(2 * v22 - 1) >> 1)) >> 2)
        | (2 * v22 - 1)
        | ((unsigned __int64)(2 * v22 - 1) >> 1);
    v37 = ((v36 >> 16) | v36) + 1;
    if ( (unsigned int)v37 < 0x40 )
      LODWORD(v37) = 64;
    *(_DWORD *)(a1 + 144) = v37;
    v38 = sub_220C370(16LL * (unsigned int)v37, 8, 64, v23, v20, v21);
    v23 = a1 + 128;
    *(_QWORD *)(a1 + 128) = v38;
    if ( v24 )
    {
      v39 = (_QWORD *)v38;
      *(_QWORD *)(a1 + 136) = 0;
      v40 = &v24[2 * v22];
      v41 = *(unsigned int *)(a1 + 144);
      v42 = (_QWORD *)(v38 + 16 * v41);
      if ( (_QWORD *)v38 != v42 )
      {
        do
        {
          *v39 = -4096;
          v39 += 2;
        }
        while ( v42 != v39 );
      }
      v43 = v24;
      for ( i = v41 - 1; v40 != v43; v43 += 2 )
      {
        v45 = *v43;
        if ( *v43 != -8192 && v45 != -4096 )
        {
          if ( !(_DWORD)v41 )
          {
            *(_QWORD *)&dword_0 = *v43;
            BUG();
          }
          v46 = i & (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4));
          v47 = v38 + 16LL * v46;
          v48 = *(_QWORD *)v47;
          if ( v45 != *(_QWORD *)v47 && v48 != -4096 )
          {
            v83 = 1;
            v81 = 0;
            while ( 1 )
            {
              if ( v48 == -8192 )
              {
                if ( v81 )
                  v47 = v81;
                v81 = v47;
              }
              v46 = i & (v83 + v46);
              v47 = v38 + 16LL * v46;
              v48 = *(_QWORD *)v47;
              if ( v45 == *(_QWORD *)v47 )
                break;
              if ( v48 == -4096 )
              {
                if ( v81 )
                  v47 = v81;
                break;
              }
              ++v83;
            }
          }
          *(_QWORD *)v47 = v45;
          v49 = *((_DWORD *)v43 + 2);
          ++*(_DWORD *)(a1 + 136);
          *(_DWORD *)(v47 + 8) = v49;
        }
      }
      operator delete();
      v50 = *(_DWORD *)(a1 + 144);
      v24 = *(_QWORD **)(a1 + 128);
      v23 = a1 + 128;
      v32 = *(_DWORD *)(a1 + 136) + 1;
    }
    else
    {
      v54 = *(unsigned int *)(a1 + 144);
      *(_QWORD *)(a1 + 136) = 0;
      v50 = v54;
      v24 = (_QWORD *)(v38 + 16 * v54);
      if ( (_QWORD *)v38 != v24 )
      {
        v55 = (_QWORD *)v38;
        do
        {
          *v55 = -4096;
          v55 += 2;
        }
        while ( v24 != v55 );
        v24 = (_QWORD *)v38;
      }
      v32 = 1;
    }
    if ( v50 )
    {
      v51 = v50 - 1;
      v34 = a2;
      v52 = (v50 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v28 = &v24[2 * v52];
      v53 = *v28;
      if ( *v28 != a2 )
      {
        if ( v53 != -4096 )
        {
          v77 = &v24[2 * (v51 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)))];
          v78 = 1;
          v28 = nullptr;
          while ( 1 )
          {
            if ( !v28 && v53 == -8192 )
              v28 = v77;
            v52 = v51 & (v78 + v52);
            v77 = &v24[2 * v52];
            v53 = *v77;
            if ( *v77 == a2 )
            {
              v34 = a2;
              v28 = &v24[2 * v52];
              goto LABEL_23;
            }
            if ( v53 == -4096 )
              break;
            ++v78;
          }
          if ( v28 )
            goto LABEL_22;
          v28 = &v24[2 * v52];
        }
        goto LABEL_42;
      }
LABEL_23:
      *(_DWORD *)(a1 + 136) = v32;
      if ( v34 != -4096 )
        --*(_DWORD *)(a1 + 140);
      goto LABEL_25;
    }
LABEL_124:
    ++*(_DWORD *)(a1 + 136);
    BUG();
  }
LABEL_16:
  sub_B45F90((__m128 *)&ptr, v28, &v24[2 * v22], v23, 1);
  return v19;
}

