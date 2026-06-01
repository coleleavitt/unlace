__int64 __fastcall sub_E37860(__int64 a1, __int64 a2)
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
  __int64 v40; // r14
  _QWORD *v41; // r9
  __int64 v42; // r15
  _QWORD *v43; // rsi
  _QWORD *v44; // rdx
  int i; // r11d
  __int64 v46; // rsi
  unsigned int v47; // r8d
  __int64 v48; // rdi
  __int64 v49; // r10
  int v50; // esi
  int v51; // esi
  int v52; // r8d
  unsigned int v53; // edi
  __int64 v54; // r9
  __int64 v55; // r13
  _QWORD *v56; // rdx
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rdx
  __int64 v61; // r10
  _QWORD *v62; // rsi
  _QWORD *v63; // rdx
  int v64; // r11d
  __int64 v65; // rsi
  unsigned int v66; // r9d
  __int64 v67; // rdi
  __int64 v68; // r8
  int v69; // esi
  int v70; // esi
  int v71; // edi
  unsigned int v72; // r14d
  __int64 v73; // r8
  _QWORD *v74; // r9
  int v75; // r10d
  __int64 v76; // r13
  _QWORD *v77; // rdx
  _QWORD *v78; // r10
  int v79; // r11d
  unsigned int v81; // [rsp+10h] [rbp-148h]
  __int64 v82; // [rsp+10h] [rbp-148h]
  __int64 v83; // [rsp+10h] [rbp-148h]
  __int64 *v84; // [rsp+18h] [rbp-140h]
  int v85; // [rsp+18h] [rbp-140h]
  __int64 v86; // [rsp+18h] [rbp-140h]
  __int64 v87; // [rsp+20h] [rbp-138h]
  int v88; // [rsp+20h] [rbp-138h]
  __int64 *v89; // [rsp+38h] [rbp-120h] BYREF
  __int64 (__fastcall **v90)(); // [rsp+40h] [rbp-118h] BYREF
  int v91; // [rsp+48h] [rbp-110h]
  __int128 v92; // [rsp+50h] [rbp-108h]
  __int64 v93; // [rsp+60h] [rbp-F8h]
  char v94; // [rsp+68h] [rbp-F0h]
  int v95; // [rsp+6Ch] [rbp-ECh]
  void **p_ptr; // [rsp+70h] [rbp-E8h]
  void *ptr; // [rsp+80h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+88h] [rbp-D0h]
  _BYTE v99[192]; // [rsp+98h] [rbp-C0h] BYREF

  v3 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
  if ( (v3 & 4) != 0 )
    v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v4 )
    v4 -= 64LL;
  ptr = v99;
  *(__m128i *)n = si128;
  v92 = 0;
  v90 = &off_2BEBEE0;
  v91 = 2;
  v94 = 0;
  v95 = 1;
  v93 = 0;
  p_ptr = &ptr;
  sub_227B8B0(&v90, 0, 0, 0);
  (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64 (__fastcall ***)()))(**(_QWORD **)(a1 + 16) + 240LL))(
    *(_QWORD *)(a1 + 16),
    v4,
    &v90);
  v6 = n[0];
  v7 = ptr;
  v8 = sub_2244B30(ptr, n[0]);
  v9 = (unsigned int)sub_2244CB0(a1 + 24, v7, v6, v8);
  v11 = (__int64 *)(*(_QWORD *)(a1 + 24) + 8 * v9);
  if ( *v11 )
  {
    if ( *v11 != -8 )
    {
      sub_E37610(&v89, v11, 0);
      v12 = v89;
      goto LABEL_12;
    }
    --*(_DWORD *)(a1 + 40);
  }
  v84 = v11;
  v81 = v9;
  v13 = sub_22300B0(v6 + 17, 8, v9, v10, v11, v9);
  v14 = v81;
  v15 = v84;
  v16 = v13;
  if ( v6 )
  {
    v87 = v13;
    memcpy((void *)(v13 + 16), v7, v6);
    v16 = v87;
    v15 = v84;
    v14 = v81;
  }
  *(_BYTE *)(v16 + v6 + 16) = 0;
  *(_QWORD *)v16 = v6;
  *(_DWORD *)(v16 + 8) = 0;
  *v15 = v16;
  ++*(_DWORD *)(a1 + 36);
  v17 = sub_22450D0(a1 + 24, v14);
  sub_E37610(&v89, (__int64 *)(*(_QWORD *)(a1 + 24) + 8LL * v17), 0);
  v12 = v89;
LABEL_12:
  v18 = *v12;
  v19 = *(_DWORD *)(v18 + 8) + 1;
  *(_DWORD *)(v18 + 8) = v19;
  v90 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v90);
  if ( ptr != v99 )
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
      v57 = (((v25 >> 1) | v25 | (((v25 >> 1) | v25) >> 2)) >> 4) | (v25 >> 1) | v25 | (((v25 >> 1) | v25) >> 2);
      v58 = ((((v57 >> 8) | v57) >> 16) | (v57 >> 8) | v57) + 1;
      if ( (unsigned int)v58 < 0x40 )
        LODWORD(v58) = 64;
      *(_DWORD *)(a1 + 144) = v58;
      v59 = sub_22300B0(16LL * (unsigned int)v58, 8, 64, v23, v33, v21);
      v23 = a1 + 128;
      *(_QWORD *)(a1 + 128) = v59;
      if ( v24 )
      {
        v60 = (_QWORD *)v59;
        *(_QWORD *)(a1 + 136) = 0;
        v82 = 2LL * v22;
        v61 = *(unsigned int *)(a1 + 144);
        v62 = (_QWORD *)(v59 + 16 * v61);
        if ( (_QWORD *)v59 != v62 )
        {
          do
          {
            *v60 = -4096;
            v60 += 2;
          }
          while ( v62 != v60 );
        }
        v63 = v24;
        v64 = v61 - 1;
        do
        {
          v65 = *v63;
          if ( *v63 != -4096 && v65 != -8192 )
          {
            if ( !(_DWORD)v61 )
            {
              *(_QWORD *)&dword_0 = *v63;
              BUG();
            }
            v66 = v64 & (((unsigned int)v65 >> 9) ^ ((unsigned int)v65 >> 4));
            v67 = v59 + 16LL * v66;
            v68 = *(_QWORD *)v67;
            if ( v65 != *(_QWORD *)v67 && v68 != -4096 )
            {
              v88 = 1;
              v86 = 0;
              while ( 1 )
              {
                if ( v68 == -8192 )
                {
                  if ( v86 )
                    v67 = v86;
                  v86 = v67;
                }
                v66 = v64 & (v88 + v66);
                v67 = v59 + 16LL * v66;
                v68 = *(_QWORD *)v67;
                if ( v65 == *(_QWORD *)v67 )
                  break;
                if ( v68 == -4096 )
                {
                  if ( v86 )
                    v67 = v86;
                  break;
                }
                ++v88;
              }
            }
            *(_QWORD *)v67 = v65;
            v69 = *((_DWORD *)v63 + 2);
            ++*(_DWORD *)(a1 + 136);
            *(_DWORD *)(v67 + 8) = v69;
          }
          v63 += 2;
        }
        while ( &v24[v82] != v63 );
        operator delete(v24, v82 * 8, 8);
        v70 = *(_DWORD *)(a1 + 144);
        v24 = *(_QWORD **)(a1 + 128);
        v23 = a1 + 128;
        v32 = *(_DWORD *)(a1 + 136) + 1;
      }
      else
      {
        v76 = *(unsigned int *)(a1 + 144);
        *(_QWORD *)(a1 + 136) = 0;
        v70 = v76;
        v24 = (_QWORD *)(v59 + 16 * v76);
        if ( (_QWORD *)v59 != v24 )
        {
          v77 = (_QWORD *)v59;
          do
          {
            *v77 = -4096;
            v77 += 2;
          }
          while ( v24 != v77 );
          v24 = (_QWORD *)v59;
        }
        v32 = 1;
      }
      if ( v70 )
      {
        v71 = v70 - 1;
        v72 = (v70 - 1) & v26;
        v34 = a2;
        v28 = &v24[2 * v72];
        v73 = *v28;
        if ( *v28 != a2 )
        {
          if ( v73 != -4096 )
          {
            v74 = &v24[2 * v72];
            v75 = 1;
            v28 = nullptr;
            while ( 1 )
            {
              if ( v73 == -8192 && !v28 )
                v28 = v74;
              v72 = v71 & (v75 + v72);
              v74 = &v24[2 * v72];
              v73 = *v74;
              if ( *v74 == a2 )
              {
                v34 = a2;
                v28 = &v24[2 * v72];
                goto LABEL_23;
              }
              if ( v73 == -4096 )
                break;
              ++v75;
            }
            if ( v28 )
              goto LABEL_22;
            v28 = &v24[2 * v72];
          }
LABEL_42:
          *(_DWORD *)(a1 + 136) = v32;
LABEL_25:
          *((_DWORD *)v28 + 2) = v19;
          v35 = *(unsigned int *)(a1 + 144);
          *v28 = a2;
          sub_B69CD0((__m128 *)&ptr, v28, &v24[2 * v35], v23, 1);
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
    v38 = sub_22300B0(16LL * (unsigned int)v37, 8, 64, v23, v20, v21);
    v23 = a1 + 128;
    *(_QWORD *)(a1 + 128) = v38;
    if ( v24 )
    {
      v39 = (_QWORD *)v38;
      *(_QWORD *)(a1 + 136) = 0;
      v40 = 2LL * v22;
      v41 = &v24[v40];
      v42 = *(unsigned int *)(a1 + 144);
      v43 = (_QWORD *)(v38 + 16 * v42);
      if ( (_QWORD *)v38 != v43 )
      {
        do
        {
          *v39 = -4096;
          v39 += 2;
        }
        while ( v43 != v39 );
      }
      v44 = v24;
      for ( i = v42 - 1; v41 != v44; v44 += 2 )
      {
        v46 = *v44;
        if ( *v44 != -8192 && v46 != -4096 )
        {
          if ( !(_DWORD)v42 )
          {
            *(_QWORD *)&dword_0 = *v44;
            BUG();
          }
          v47 = i & (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4));
          v48 = v38 + 16LL * v47;
          v49 = *(_QWORD *)v48;
          if ( v46 != *(_QWORD *)v48 && v49 != -4096 )
          {
            v85 = 1;
            v83 = 0;
            while ( 1 )
            {
              if ( v49 == -8192 )
              {
                if ( v83 )
                  v48 = v83;
                v83 = v48;
              }
              v47 = i & (v85 + v47);
              v48 = v38 + 16LL * v47;
              v49 = *(_QWORD *)v48;
              if ( v46 == *(_QWORD *)v48 )
                break;
              if ( v49 == -4096 )
              {
                if ( v83 )
                  v48 = v83;
                break;
              }
              ++v85;
            }
          }
          *(_QWORD *)v48 = v46;
          v50 = *((_DWORD *)v44 + 2);
          ++*(_DWORD *)(a1 + 136);
          *(_DWORD *)(v48 + 8) = v50;
        }
      }
      operator delete(v24, v40 * 8, 8);
      v51 = *(_DWORD *)(a1 + 144);
      v24 = *(_QWORD **)(a1 + 128);
      v23 = a1 + 128;
      v32 = *(_DWORD *)(a1 + 136) + 1;
    }
    else
    {
      v55 = *(unsigned int *)(a1 + 144);
      *(_QWORD *)(a1 + 136) = 0;
      v51 = v55;
      v24 = (_QWORD *)(v38 + 16 * v55);
      if ( (_QWORD *)v38 != v24 )
      {
        v56 = (_QWORD *)v38;
        do
        {
          *v56 = -4096;
          v56 += 2;
        }
        while ( v24 != v56 );
        v24 = (_QWORD *)v38;
      }
      v32 = 1;
    }
    if ( v51 )
    {
      v52 = v51 - 1;
      v34 = a2;
      v53 = (v51 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v28 = &v24[2 * v53];
      v54 = *v28;
      if ( *v28 != a2 )
      {
        if ( v54 != -4096 )
        {
          v78 = &v24[2 * (v52 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)))];
          v79 = 1;
          v28 = nullptr;
          while ( 1 )
          {
            if ( !v28 && v54 == -8192 )
              v28 = v78;
            v53 = v52 & (v79 + v53);
            v78 = &v24[2 * v53];
            v54 = *v78;
            if ( *v78 == a2 )
            {
              v34 = a2;
              v28 = &v24[2 * v53];
              goto LABEL_23;
            }
            if ( v54 == -4096 )
              break;
            ++v79;
          }
          if ( v28 )
            goto LABEL_22;
          v28 = &v24[2 * v53];
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
  sub_B69CD0((__m128 *)&ptr, v28, &v24[2 * v22], v23, 1);
  return v19;
}
