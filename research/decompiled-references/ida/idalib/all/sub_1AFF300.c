void __fastcall sub_1AFF300(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  void **p_ptr; // rsi
  __int64 *p_dest; // rdi
  __int16 v5; // dx
  signed __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 *v8; // rcx
  int v9; // edx
  _WORD *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 *v14; // r15
  __int64 v15; // r12
  __int64 v16; // rbx
  int v17; // ebp
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  void **v25; // r8
  __int64 v26; // r9
  __int64 v27; // r13
  __int64 v28; // rbx
  unsigned int v29; // r12d
  _QWORD *v30; // rbp
  unsigned int v31; // edi
  unsigned int v32; // edx
  void *v33; // rax
  __int64 v34; // rax
  int v35; // ecx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  void *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // rbp
  __int64 *v43; // rax
  unsigned __int64 v44; // rdi
  unsigned __int64 v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rcx
  __int64 v50; // rsi
  _QWORD *v51; // rdx
  _QWORD *v52; // r8
  __int64 v53; // rcx
  int v54; // r9d
  int v55; // r9d
  unsigned int v56; // edi
  __int64 v57; // rdx
  __int64 v58; // r10
  int v59; // ecx
  int v60; // ecx
  __int64 v61; // rdi
  int v62; // r10d
  void **v63; // r9
  void **v64; // r8
  __int64 v65; // rdx
  unsigned __int64 v66; // rdi
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rdx
  _QWORD *v70; // rcx
  __int64 v71; // rsi
  _QWORD *v72; // r10
  _QWORD *v73; // rdx
  _QWORD *i; // r8
  __int64 v75; // rcx
  int v76; // r9d
  int v77; // r9d
  unsigned int v78; // edi
  __int64 v79; // rdx
  __int64 v80; // r11
  int v81; // ecx
  int v82; // edi
  __int64 v83; // rcx
  int v84; // r10d
  void **v85; // r9
  __int64 v86; // rbp
  _QWORD *v87; // rdx
  __int64 v88; // rbp
  _QWORD *v89; // rdx
  __int64 v90; // r12
  __int64 v91; // r12
  __int64 *v92; // [rsp+0h] [rbp-D8h]
  __int64 v93; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v94; // [rsp+8h] [rbp-D0h]
  unsigned int v97; // [rsp+2Ch] [rbp-ACh]
  int v98; // [rsp+2Ch] [rbp-ACh]
  __int64 *v99; // [rsp+30h] [rbp-A8h]
  int v100; // [rsp+40h] [rbp-98h]
  __m128 v101; // [rsp+50h] [rbp-88h] BYREF
  void *ptr; // [rsp+60h] [rbp-78h] BYREF
  __int64 v103; // [rsp+68h] [rbp-70h]
  __int64 dest; // [rsp+70h] [rbp-68h] BYREF
  __int64 v105; // [rsp+78h] [rbp-60h] BYREF

  v2 = sub_EF5B90(a2);
  if ( v2 )
  {
    p_ptr = &ptr;
    p_dest = &dest;
    v103 = 0x600000000LL;
    v5 = *(_WORD *)v2 & 0x1FF;
    ptr = &dest;
    if ( v5 == 249 )
    {
      v6 = 8LL * *(unsigned int *)(v2 + 4);
      v7 = v6 >> 3;
      if ( (unsigned __int64)v6 > 0x30 )
      {
        v93 = v2;
        sub_2237220(&ptr, &dest, (8LL * *(unsigned int *)(v2 + 4)) >> 3, 8);
        p_dest = (__int64 *)ptr;
        v9 = v103;
        v2 = v93;
        v8 = (__int64 *)((char *)ptr + 8 * (unsigned int)v103);
      }
      else
      {
        v8 = &dest;
        v9 = 0;
      }
      p_ptr = (void **)(v2 + 16);
      if ( v2 + 16 != v2 + v6 + 16 )
      {
        memcpy(v8, p_ptr, v6);
        p_dest = (__int64 *)ptr;
        v9 = v103;
      }
      LODWORD(v103) = v7 + v9;
      v99 = &p_dest[(unsigned int)(v7 + v9)];
      if ( v99 == p_dest )
      {
LABEL_8:
        if ( p_dest != &dest )
          free(p_dest);
        return;
      }
    }
    else
    {
      dest = v2;
      LODWORD(v103) = 1;
      v99 = &v105;
    }
    v92 = p_dest;
    while ( 1 )
    {
      v10 = (_WORD *)*v92;
      if ( (*(_WORD *)*v92 & 0x1FF) != 0xF5 )
        goto LABEL_26;
      v11 = *((_QWORD *)v10 + 1);
      if ( (v11 & 1) != 0 )
        break;
      v12 = (unsigned __int64)(v10 + 8);
      v13 = (unsigned __int64)(v10 + 4);
      v94 = v12;
      if ( v11 )
      {
LABEL_16:
        if ( v13 != v94 )
        {
          v14 = (__int64 *)v13;
          while ( 1 )
          {
            v15 = *v14;
            v16 = *(_QWORD *)(*v14 + 48);
            v17 = *(_DWORD *)(a2 + 12);
            v18 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(v18 + 16) - 43 <= 1
              || (v65 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                         + 16LL)
                      - 43,
                  (unsigned int)v65 <= 1)
              && (v18 = sub_F63050(*(_QWORD *)(*(_QWORD *)(*v14 + 48) & 0xFFFFFFFFFFFFFFF0LL), p_ptr, v65, v12)) != 0 )
            {
              while ( 1 )
              {
                v16 = *(_QWORD *)(v18 + 32);
                if ( (*(_BYTE *)(v18 + 18) & 0x10) == 0 )
                  break;
                while ( 1 )
                {
                  v19 = v16 & 0xFFFFFFFFFFFFFFF0LL;
                  v18 = *(_QWORD *)v19;
                  v20 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v19 + 16LL) - 43;
                  if ( (unsigned int)v20 <= 1 )
                    break;
                  v21 = sub_F63050(v18, p_ptr, v20, v12);
                  v16 = *(_QWORD *)(v21 + 32);
                  if ( (*(_BYTE *)(v21 + 18) & 0x10) == 0 )
                    goto LABEL_22;
                }
              }
            }
LABEL_22:
            v22 = *a1;
            *(_BYTE *)(v15 + 29) |= 8u;
            sub_B8C4D0(v15, *(_QWORD *)(v22 + 248));
            v27 = sub_C09130(*(_QWORD **)(v22 + 248), 0, 0, 0, v15, 0, v17, v16, 1, 0, 0, 0);
            v28 = a1[1];
            v29 = *(_DWORD *)(v28 + 16);
            v30 = *(_QWORD **)v28;
            if ( !v29 )
              goto LABEL_63;
            v31 = v29 - 1;
            v97 = ((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4);
            v32 = (v29 - 1) & v97;
            p_ptr = (void **)&v30[2 * v32];
            v33 = *p_ptr;
            if ( (void *)v27 != *p_ptr )
              break;
LABEL_24:
            sub_1AFF290(&v101, p_ptr, &v30[2 * v29], v28, 1);
            v34 = *(unsigned int *)(v101.m128_u64[0] + 8);
LABEL_25:
            ++v14;
            *(_QWORD *)(*(_QWORD *)(v28 + 24) + 16 * v34 + 8) = v27;
            if ( (__int64 *)v94 == v14 )
              goto LABEL_26;
          }
          v35 = 1;
          v25 = nullptr;
          if ( v33 != (void *)-4096LL )
          {
            while ( 1 )
            {
              if ( !v25 && v33 == (void *)-8192LL )
                v25 = p_ptr;
              v26 = (unsigned int)(v35 + 1);
              v32 = v31 & (v35 + v32);
              p_ptr = (void **)&v30[2 * v32];
              v33 = *p_ptr;
              if ( (void *)v27 == *p_ptr )
                goto LABEL_24;
              if ( v33 == (void *)-4096LL )
                break;
              ++v35;
            }
            if ( v25 )
              p_ptr = v25;
          }
          v23 = 3 * v29;
          v36 = *(_DWORD *)(v28 + 8) + 1;
          v24 = (unsigned int)(4 * v36);
          if ( (unsigned int)v24 >= (unsigned int)v23 )
          {
LABEL_63:
            v66 = (((((((2 * v29 - 1) | ((unsigned __int64)(2 * v29 - 1) >> 1)) >> 2)
                    | (2 * v29 - 1)
                    | ((unsigned __int64)(2 * v29 - 1) >> 1)) >> 4)
                  | (((2 * v29 - 1) | ((unsigned __int64)(2 * v29 - 1) >> 1)) >> 2)
                  | (2 * v29 - 1)
                  | ((unsigned __int64)(2 * v29 - 1) >> 1)) >> 8)
                | (((((2 * v29 - 1) | ((unsigned __int64)(2 * v29 - 1) >> 1)) >> 2)
                  | (2 * v29 - 1)
                  | ((unsigned __int64)(2 * v29 - 1) >> 1)) >> 4)
                | (((2 * v29 - 1) | ((unsigned __int64)(2 * v29 - 1) >> 1)) >> 2)
                | (2 * v29 - 1)
                | ((unsigned __int64)(2 * v29 - 1) >> 1);
            v67 = ((v66 >> 16) | v66) + 1;
            if ( (unsigned int)v67 < 0x40 )
              LODWORD(v67) = 64;
            *(_DWORD *)(v28 + 16) = v67;
            v68 = sub_22300B0(16LL * (unsigned int)v67, 8, v23, v24, v25, v26);
            *(_QWORD *)v28 = v68;
            if ( v30 )
            {
              v69 = *(unsigned int *)(v28 + 16);
              *(_QWORD *)(v28 + 8) = 0;
              v70 = (_QWORD *)v68;
              v71 = 2LL * v29;
              v72 = &v30[v71];
              v73 = (_QWORD *)(v68 + 16 * v69);
              if ( (_QWORD *)v68 != v73 )
              {
                do
                {
                  *v70 = -4096;
                  v70 += 2;
                }
                while ( v73 != v70 );
              }
              for ( i = v30; v72 != i; i += 2 )
              {
                v75 = *i;
                if ( *i != -4096 && v75 != -8192 )
                {
                  v76 = *(_DWORD *)(v28 + 16);
                  if ( !v76 )
                  {
                    *(_QWORD *)&dword_0 = *i;
                    BUG();
                  }
                  v77 = v76 - 1;
                  v78 = v77 & (((unsigned int)v75 >> 9) ^ ((unsigned int)v75 >> 4));
                  v79 = v68 + 16LL * v78;
                  v80 = *(_QWORD *)v79;
                  if ( *(_QWORD *)v79 != v75 && v80 != -4096 )
                  {
                    v98 = 1;
                    v90 = 0;
                    while ( 1 )
                    {
                      if ( !v90 && v80 == -8192 )
                        v90 = v79;
                      v78 = v77 & (v98 + v78);
                      v79 = v68 + 16LL * v78;
                      v80 = *(_QWORD *)v79;
                      if ( v75 == *(_QWORD *)v79 )
                        break;
                      if ( v80 == -4096 )
                      {
                        if ( v90 )
                          v79 = v90;
                        break;
                      }
                      ++v98;
                    }
                  }
                  *(_QWORD *)v79 = v75;
                  *(_DWORD *)(v79 + 8) = *((_DWORD *)i + 2);
                  ++*(_DWORD *)(v28 + 8);
                }
              }
              operator delete(v30, v71 * 8, 8);
              v30 = *(_QWORD **)v28;
              v81 = *(_DWORD *)(v28 + 16);
              v36 = *(_DWORD *)(v28 + 8) + 1;
            }
            else
            {
              v86 = *(unsigned int *)(v28 + 16);
              *(_QWORD *)(v28 + 8) = 0;
              v81 = v86;
              v30 = (_QWORD *)(v68 + 16 * v86);
              if ( (_QWORD *)v68 != v30 )
              {
                v87 = (_QWORD *)v68;
                do
                {
                  *v87 = -4096;
                  v87 += 2;
                }
                while ( v30 != v87 );
                v30 = (_QWORD *)v68;
              }
              v36 = 1;
            }
            if ( !v81 )
            {
LABEL_135:
              ++*(_DWORD *)(v28 + 8);
              BUG();
            }
            v82 = v81 - 1;
            LODWORD(v83) = (v81 - 1) & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
            p_ptr = (void **)&v30[2 * (unsigned int)v83];
            v39 = *p_ptr;
            if ( (void *)v27 == *p_ptr )
              goto LABEL_32;
            v84 = 1;
            v85 = nullptr;
            if ( v39 != (void *)-4096LL )
            {
              while ( 1 )
              {
                if ( v85 || v39 != (void *)-8192LL )
                  p_ptr = v85;
                v83 = v82 & (unsigned int)(v83 + v84);
                v64 = (void **)&v30[2 * v83];
                v39 = *v64;
                if ( (void *)v27 == *v64 )
                  goto LABEL_56;
                if ( v39 == (void *)-4096LL )
                {
LABEL_118:
                  if ( p_ptr )
                    goto LABEL_31;
                  p_ptr = v64;
                  break;
                }
                ++v84;
                v85 = p_ptr;
                p_ptr = (void **)&v30[2 * v83];
              }
            }
LABEL_79:
            *(_DWORD *)(v28 + 8) = v36;
          }
          else
          {
            v37 = v29 - *(_DWORD *)(v28 + 12) - v36;
            v38 = v29 >> 3;
            if ( (unsigned int)v37 > (unsigned int)v38 )
            {
LABEL_31:
              v39 = *p_ptr;
              goto LABEL_32;
            }
            v44 = ((v31 | ((unsigned __int64)v31 >> 1)) >> 2) | v31 | ((unsigned __int64)v31 >> 1);
            v45 = (((v44 >> 4) | v44) >> 8) | (v44 >> 4) | v44;
            v46 = ((v45 >> 16) | v45) + 1;
            if ( (unsigned int)v46 < 0x40 )
              LODWORD(v46) = 64;
            *(_DWORD *)(v28 + 16) = v46;
            v47 = sub_22300B0(16LL * (unsigned int)v46, 8, v37, v38, v25, v26);
            *(_QWORD *)v28 = v47;
            if ( v30 )
            {
              v48 = *(unsigned int *)(v28 + 16);
              *(_QWORD *)(v28 + 8) = 0;
              v49 = (_QWORD *)v47;
              v50 = 2LL * v29;
              v51 = (_QWORD *)(v47 + 16 * v48);
              if ( (_QWORD *)v47 != v51 )
              {
                do
                {
                  *v49 = -4096;
                  v49 += 2;
                }
                while ( v51 != v49 );
              }
              v52 = v30;
              do
              {
                v53 = *v52;
                if ( *v52 != -4096 && v53 != -8192 )
                {
                  v54 = *(_DWORD *)(v28 + 16);
                  if ( !v54 )
                  {
                    *(_QWORD *)&dword_0 = *v52;
                    BUG();
                  }
                  v55 = v54 - 1;
                  v56 = v55 & (((unsigned int)v53 >> 9) ^ ((unsigned int)v53 >> 4));
                  v57 = v47 + 16LL * v56;
                  v58 = *(_QWORD *)v57;
                  if ( v53 != *(_QWORD *)v57 && v58 != -4096 )
                  {
                    v100 = 1;
                    v91 = 0;
                    while ( 1 )
                    {
                      if ( !v91 && v58 == -8192 )
                        v91 = v57;
                      v56 = v55 & (v100 + v56);
                      v57 = v47 + 16LL * v56;
                      v58 = *(_QWORD *)v57;
                      if ( v53 == *(_QWORD *)v57 )
                        break;
                      if ( v58 == -4096 )
                      {
                        if ( v91 )
                          v57 = v91;
                        break;
                      }
                      ++v100;
                    }
                  }
                  *(_QWORD *)v57 = v53;
                  *(_DWORD *)(v57 + 8) = *((_DWORD *)v52 + 2);
                  ++*(_DWORD *)(v28 + 8);
                }
                v52 += 2;
              }
              while ( &v30[v50] != v52 );
              operator delete(v30, v50 * 8, 8);
              v30 = *(_QWORD **)v28;
              v59 = *(_DWORD *)(v28 + 16);
              v36 = *(_DWORD *)(v28 + 8) + 1;
            }
            else
            {
              v88 = *(unsigned int *)(v28 + 16);
              *(_QWORD *)(v28 + 8) = 0;
              v59 = v88;
              v30 = (_QWORD *)(v47 + 16 * v88);
              if ( (_QWORD *)v47 != v30 )
              {
                v89 = (_QWORD *)v47;
                do
                {
                  *v89 = -4096;
                  v89 += 2;
                }
                while ( v30 != v89 );
                v30 = (_QWORD *)v47;
              }
              v36 = 1;
            }
            if ( !v59 )
              goto LABEL_135;
            v60 = v59 - 1;
            LODWORD(v61) = v60 & v97;
            p_ptr = (void **)&v30[2 * (v60 & v97)];
            v39 = *p_ptr;
            if ( (void *)v27 != *p_ptr )
            {
              v62 = 1;
              v63 = nullptr;
              if ( v39 != (void *)-4096LL )
              {
                while ( 1 )
                {
                  if ( v39 != (void *)-8192LL || v63 )
                    p_ptr = v63;
                  v61 = v60 & (unsigned int)(v61 + v62);
                  v64 = (void **)&v30[2 * v61];
                  v39 = *v64;
                  if ( (void *)v27 == *v64 )
                    break;
                  if ( v39 == (void *)-4096LL )
                    goto LABEL_118;
                  ++v62;
                  v63 = p_ptr;
                  p_ptr = (void **)&v30[2 * v61];
                }
LABEL_56:
                p_ptr = v64;
                goto LABEL_32;
              }
              goto LABEL_79;
            }
LABEL_32:
            *(_DWORD *)(v28 + 8) = v36;
            if ( v39 != (void *)-4096LL )
              --*(_DWORD *)(v28 + 12);
          }
          *((_DWORD *)p_ptr + 2) = 0;
          v40 = *(unsigned int *)(v28 + 16);
          *p_ptr = (void *)v27;
          sub_1AFF290(&v101, p_ptr, &v30[2 * v40], v28, 1);
          v41 = *(unsigned int *)(v28 + 32);
          v12 = *(unsigned int *)(v28 + 36);
          v42 = v101.m128_u64[0];
          if ( v41 + 1 > v12 )
          {
            p_ptr = (void **)(v28 + 40);
            sub_2237220(v28 + 24, v28 + 40, v41 + 1, 16);
            v41 = *(unsigned int *)(v28 + 32);
          }
          v43 = (__int64 *)(*(_QWORD *)(v28 + 24) + 16 * v41);
          *v43 = v27;
          v43[1] = 0;
          v34 = *(unsigned int *)(v28 + 32);
          *(_DWORD *)(v28 + 32) = v34 + 1;
          *(_DWORD *)(v42 + 8) = v34;
          goto LABEL_25;
        }
LABEL_26:
        if ( v99 == ++v92 )
          goto LABEL_27;
      }
      else if ( v99 == ++v92 )
      {
LABEL_27:
        p_dest = (__int64 *)ptr;
        goto LABEL_8;
      }
    }
    v12 = (v11 & 0xFFFFFFFFFFFFFFFELL) + 8LL * *(unsigned int *)(v11 & 0xFFFFFFFFFFFFFFFELL) + 8;
    v13 = (v11 & 0xFFFFFFFFFFFFFFFELL) + 8;
    v94 = v12;
    goto LABEL_16;
  }
}
