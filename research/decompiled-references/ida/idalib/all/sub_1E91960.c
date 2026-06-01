void __fastcall sub_1E91960(__int64 a1, unsigned __int64 p_ptr, __m128 a3, __m128 a4)
{
  __int16 *v5; // rax
  unsigned __int64 v6; // r13
  __int16 v7; // ax
  __int16 v8; // ax
  unsigned int v9; // r8d
  __int64 **v10; // rbx
  __int64 **v11; // r9
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  unsigned int *v20; // rdx
  unsigned int *v21; // rbx
  __int64 v22; // r12
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // r9
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int64 v30; // rdx
  unsigned int v31; // eax
  char v32; // al
  unsigned __int64 *v33; // rbx
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // r13
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax
  __int64 v46; // rbx
  int v47; // r13d
  __int64 v48; // rdx
  __int64 v49; // r14
  int v50; // r12d
  int v51; // eax
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // r15
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // r12
  __int64 v68; // rax
  unsigned int *v69; // rax
  __int64 v70; // rax
  int v71; // r12d
  __int64 v72; // rax
  __int64 i; // r15
  __int64 v74; // rcx
  __int64 v75; // r9
  unsigned __int64 v76; // rdx
  unsigned int v77; // [rsp+0h] [rbp-1A8h]
  __int64 **v78; // [rsp+8h] [rbp-1A0h]
  __int64 v79; // [rsp+8h] [rbp-1A0h]
  __int64 v80; // [rsp+8h] [rbp-1A0h]
  __int64 v81; // [rsp+10h] [rbp-198h]
  __int64 v82; // [rsp+10h] [rbp-198h]
  unsigned int v83; // [rsp+1Ch] [rbp-18Ch]
  unsigned int v84; // [rsp+24h] [rbp-184h] BYREF
  _QWORD *v85; // [rsp+28h] [rbp-180h] BYREF
  __int64 v86; // [rsp+30h] [rbp-178h] BYREF
  unsigned int *v87; // [rsp+38h] [rbp-170h] BYREF
  _BYTE v88[32]; // [rsp+40h] [rbp-168h] BYREF
  _QWORD v89[4]; // [rsp+60h] [rbp-148h] BYREF
  unsigned int v90; // [rsp+80h] [rbp-128h]
  void *v91; // [rsp+88h] [rbp-120h] BYREF
  __int64 v92; // [rsp+90h] [rbp-118h]
  char v93; // [rsp+98h] [rbp-110h] BYREF
  char v94; // [rsp+A0h] [rbp-108h]
  void *v95; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v96; // [rsp+B8h] [rbp-F0h]
  __int64 v97; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v98; // [rsp+C8h] [rbp-E0h]
  __int64 v99; // [rsp+E0h] [rbp-C8h] BYREF
  void *ptr; // [rsp+E8h] [rbp-C0h] BYREF
  __int64 v101; // [rsp+F0h] [rbp-B8h]
  _BYTE v102[176]; // [rsp+F8h] [rbp-B0h] BYREF

  v5 = (__int16 *)sub_BFBAE0(p_ptr);
  if ( (*(_DWORD *)v5 & 0x40000) == 0 )
  {
    v6 = (unsigned __int64)v5;
    v96 = 0x100000000LL;
    v7 = *v5;
    v95 = &v97;
    v8 = v7 & 0x1FF;
    if ( v8 == 6 )
    {
      p_ptr = *(unsigned int *)(v6 + 4);
      v9 = (unsigned __int8)(*(_WORD *)(v6 + 2) >> 3);
      v10 = (__int64 **)(v6 + 56LL * ((((unsigned __int8)BYTE3(*(_QWORD *)v6) >> 3) ^ 1) & 1) + 24);
      v11 = &v10[p_ptr];
      if ( v10 == v11 )
      {
        LODWORD(v99) = (unsigned __int8)(*(_WORD *)(v6 + 2) >> 3);
        v101 = 0x100000000LL;
        ptr = v102;
        v90 = v9;
        v91 = &v93;
        v92 = 0x100000000LL;
        goto LABEL_12;
      }
      v12 = 1;
      v13 = 0;
      while ( 1 )
      {
        v14 = **v10;
        if ( v13 + 1 <= v12 )
        {
          ++v10;
          *((_QWORD *)v95 + v13) = v14;
          v13 = (unsigned int)(v96 + 1);
          LODWORD(v96) = v96 + 1;
          if ( v11 == v10 )
            goto LABEL_10;
        }
        else
        {
          p_ptr = (unsigned __int64)&v97;
          v78 = v11;
          v77 = v9;
          ++v10;
          sub_2237220(&v95, &v97, v13 + 1, 8);
          v11 = v78;
          v9 = v77;
          *((_QWORD *)v95 + (unsigned int)v96) = v14;
          v13 = (unsigned int)(v96 + 1);
          LODWORD(v96) = v96 + 1;
          if ( v78 == v10 )
          {
LABEL_10:
            LODWORD(v99) = v9;
            v101 = 0x100000000LL;
            ptr = v102;
            if ( !(_DWORD)v13 )
            {
              v90 = v9;
              v91 = &v93;
              v92 = 0x100000000LL;
              goto LABEL_12;
            }
            p_ptr = (unsigned __int64)&v95;
            sub_1712470((char ***)&ptr, (char ***)&v95);
            v92 = 0x100000000LL;
            v90 = v99;
            v91 = &v93;
            if ( !(_DWORD)v101 )
              goto LABEL_12;
LABEL_81:
            p_ptr = (unsigned __int64)&ptr;
            sub_1712470((char ***)&v91, (char ***)&ptr);
            goto LABEL_12;
          }
        }
        v12 = HIDWORD(v96);
      }
    }
    if ( v8 == 71 )
    {
      v15 = *(_QWORD *)(v6 + 16);
      v16 = *(_BYTE *)(v15 + 28) & 0x7F;
      if ( (unsigned int)(v16 - 41) <= 1 )
      {
        if ( sub_B8EC80(*(_QWORD *)(v6 + 16)) )
        {
          v17 = *(_QWORD *)(v15 + 40);
          if ( (v17 & 7) != 0 )
            BUG();
          v18 = *(_QWORD **)((v17 & 0xFFFFFFFFFFFFFFF8LL) + 16);
          p_ptr = (unsigned int)*v18;
          if ( (*v18 & 0xFFFFFFFE) != 0 && *(_WORD *)((char *)v18 + p_ptr + 14) == 30303 )
          {
            if ( p_ptr > p_ptr - 2 )
              p_ptr -= 2LL;
            v19 = sub_1E85CD0((__int64)(v18 + 2), p_ptr);
            if ( BYTE4(v19) )
            {
              v20 = *(unsigned int **)(v15 + 128);
              v83 = v19;
              v21 = v20 + 2;
              v22 = (__int64)&v20[6 * *v20 + 2];
              if ( v20 + 2 != (unsigned int *)v22 )
              {
                do
                {
                  v25 = *((_QWORD *)v21 + 1);
                  if ( (*v21 & 0x7FFFFFFF) == 9 )
                  {
                    v26 = v25 + 24LL * v21[1];
                    if ( v25 != v26 )
                    {
                      v27 = v96;
                      do
                      {
                        while ( 1 )
                        {
                          v28 = v27;
                          v29 = *(_QWORD *)(v25 + 8);
                          v30 = v27 + 1LL;
                          if ( v30 > HIDWORD(v96) )
                            break;
                          v25 += 24;
                          *((_QWORD *)v95 + v28) = v29;
                          v27 = v96 + 1;
                          LODWORD(v96) = v96 + 1;
                          if ( v26 == v25 )
                            goto LABEL_32;
                        }
                        v25 += 24;
                        v81 = v29;
                        v79 = v26;
                        sub_2237220(&v95, &v97, v30, 8);
                        v26 = v79;
                        *((_QWORD *)v95 + (unsigned int)v96) = v81;
                        v27 = v96 + 1;
                        LODWORD(v96) = v96 + 1;
                      }
                      while ( v79 != v25 );
                    }
                  }
                  else
                  {
                    v23 = (unsigned int)v96;
                    v24 = (unsigned int)v96 + 1LL;
                    if ( v24 > HIDWORD(v96) )
                    {
                      sub_2237220(&v95, &v97, v24, 8);
                      v23 = (unsigned int)v96;
                    }
                    *((_QWORD *)v95 + v23) = v25;
                    LODWORD(v96) = v96 + 1;
                  }
LABEL_32:
                  v21 += 6;
                }
                while ( (unsigned int *)v22 != v21 );
              }
              p_ptr = v83;
              v101 = 0x100000000LL;
              LODWORD(v99) = v83;
              ptr = v102;
              if ( !(_DWORD)v96 )
              {
                v90 = v83;
                v91 = &v93;
                v92 = 0x100000000LL;
                goto LABEL_12;
              }
              sub_1712470((char ***)&ptr, (char ***)&v95);
              p_ptr = (unsigned int)v101;
              v91 = &v93;
              v90 = v99;
              v92 = 0x100000000LL;
              if ( !(_DWORD)v101 )
                goto LABEL_12;
              goto LABEL_81;
            }
          }
        }
        goto LABEL_42;
      }
      if ( (unsigned int)(v16 - 40) <= 6 && (*(_QWORD *)v6 & 0x80000) != 0 )
      {
        v60 = *(_QWORD *)(v15 + 40);
        if ( (v60 & 7) != 0 )
          BUG();
        v61 = *(_QWORD *)((v60 & 0xFFFFFFFFFFFFFFF8LL) + 16);
        if ( *(_DWORD *)v61 == 5 && *(_DWORD *)(v61 + 16) == 1970037110 && *(_BYTE *)(v61 + 20) == 101 )
        {
          if ( (*(_QWORD *)v6 & 0x80000) == 0 )
            BUG();
          v62 = *(_QWORD *)(v6 + 32);
          if ( ((*(__int64 *)(v62 + 8) >> 1) & 3) == 2 )
          {
            v63 = *(_QWORD *)(v62 + 16);
            if ( v63 )
            {
              v64 = sub_F6A860(v63);
              v65 = v64;
              if ( v64 )
              {
                p_ptr = 0;
                v99 = *(_QWORD *)(v64 + 32);
                v66 = sub_F22BD0(&v99, 0);
                v67 = v66;
                if ( v66 )
                {
                  if ( sub_B8EC80(v66) )
                  {
                    v68 = *(_QWORD *)(v67 + 40);
                    if ( (v68 & 7) != 0 )
                      BUG();
                    v69 = *(unsigned int **)((v68 & 0xFFFFFFFFFFFFFFF8LL) + 16);
                    p_ptr = *v69;
                    v70 = sub_1E85CD0((__int64)(v69 + 4), p_ptr);
                    if ( BYTE4(v70) )
                    {
                      v71 = v70;
                      v72 = v65 + 48;
                      for ( i = v65 + 48 + 24LL * *(unsigned int *)(v65 + 20); i != v72; LODWORD(v96) = v96 + 1 )
                      {
                        v74 = (unsigned int)v96;
                        v75 = *(_QWORD *)(v72 + 8);
                        v76 = (unsigned int)v96 + 1LL;
                        if ( v76 > HIDWORD(v96) )
                        {
                          v82 = v72;
                          v80 = *(_QWORD *)(v72 + 8);
                          sub_2237220(&v95, &v97, v76, 8);
                          v72 = v82;
                          v75 = v80;
                          v74 = (unsigned int)v96;
                        }
                        v72 += 24;
                        *((_QWORD *)v95 + v74) = v75;
                      }
                      LODWORD(v99) = v71;
                      ptr = v102;
                      v101 = 0x100000000LL;
                      if ( (_DWORD)v96 )
                        sub_1712470((char ***)&ptr, (char ***)&v95);
                      p_ptr = 0x100000000LL;
                      v91 = &v93;
                      v90 = v99;
                      v92 = 0x100000000LL;
                      if ( (_DWORD)v101 )
                        goto LABEL_81;
LABEL_12:
                      v94 = 1;
                      if ( ptr != v102 )
                        free(ptr);
                      goto LABEL_14;
                    }
                  }
                }
              }
LABEL_42:
              v94 = 0;
LABEL_14:
              if ( v95 != &v97 )
                free(v95);
              if ( v94 )
              {
                switch ( v90 )
                {
                  case 0x14u:
                    v59 = sub_EEB7E0(v6, p_ptr, *(double *)a3.m128_u64);
                    sub_1E892A0(a1, v59, *(_QWORD *)v91);
                    v32 = v94;
                    goto LABEL_44;
                  case 0x1Au:
                    v58 = sub_EEB7E0(v6, p_ptr, *(double *)a3.m128_u64);
                    sub_1E89E30(a1, v58, *(_QWORD *)v91);
                    v32 = v94;
                    goto LABEL_44;
                  case 0x1Cu:
                    v57 = sub_EEB7E0(v6, p_ptr, *(double *)a3.m128_u64);
                    sub_1E8AAF0(a1, v57, *(_QWORD *)v91);
                    v32 = v94;
                    goto LABEL_44;
                  case 0x24u:
                    v56 = sub_EEB7E0(v6, p_ptr, *(double *)a3.m128_u64);
                    sub_1E903C0((_QWORD *)a1, v56, *(_QWORD *)v91, a3, a4);
                    v32 = v94;
                    goto LABEL_44;
                  case 0x27u:
                    v55 = sub_EEB7E0(v6, p_ptr, *(double *)a3.m128_u64);
                    sub_1E90C40((_QWORD *)a1, v55, *(_QWORD *)v91, a3, a4);
                    v32 = v94;
                    goto LABEL_44;
                  case 0x43u:
                    v33 = (unsigned __int64 *)v91;
                    v84 = sub_EEB7E0(v6, p_ptr, *(double *)a3.m128_u64);
                    v34 = *v33;
                    v35 = v33[1];
                    v85 = sub_F63270(*(_QWORD *)(*v33 & 0xFFFFFFFFFFFFFFF0LL), p_ptr, v36, v37, v38, v39);
                    v87 = &v84;
                    v86 = a1;
                    sub_1E85F40((__int64)v88, (__int64)&v86, (int **)&v87, v34);
                    sub_1E85F40((__int64)v89, (__int64)&v86, (int **)&v87, v35);
                    sub_18C74E0(a1, 0, 0, 4);
                    v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2264LL) + 80LL);
                    v45 = sub_704780((__int64 *)(v40 + 72), v40, v41, v42, v43, v44);
                    v46 = *(_QWORD *)(a1 + 544);
                    v47 = *(_DWORD *)(a1 + 80);
                    if ( v45 )
                      v45 += 5;
                    v48 = *(_QWORD *)(a1 + 9944);
                    v49 = *(_QWORD *)(a1 + 512);
                    v50 = *(_DWORD *)(a1 + 2632);
                    *(_QWORD *)(a1 + 512) = 0;
                    *(_QWORD *)(a1 + 544) = v45;
                    v51 = *(_DWORD *)(a1 + 40);
                    v98 = v48;
                    *(_DWORD *)(a1 + 80) = v51;
                    v52 = *(_DWORD *)(a1 + 3688);
                    *(_QWORD *)(a1 + 9944) = 0;
                    v53 = v84;
                    *(_DWORD *)(a1 + 2632) = v52;
                    sub_1929BB0(a1, 0, v53, 0x15u, (__int64)v88, v89, a3, a4, 0);
                    if ( v85 && *((char *)v85 + 28) >= 0 )
                    {
                      sub_168B9F0((__int64)&v99, (__int64 *)(a1 + 8), *((_DWORD *)v85 + 6), 0x170Bu, 0);
                      sub_184B8A0((__int64)&v99, (__int64 *)&v85);
                      sub_15F7200(&v99);
                    }
                    if ( v46 )
                    {
                      v54 = v98;
                      *(_QWORD *)(a1 + 544) = v46;
                      *(_QWORD *)(a1 + 512) = v49;
                      *(_QWORD *)(a1 + 9944) = v54;
                      *(_DWORD *)(a1 + 80) = v47;
                      *(_DWORD *)(a1 + 2632) = v50;
                    }
                    sub_190D5E0(a1, a3);
                    v32 = v94;
                    goto LABEL_44;
                  case 0x52u:
                    v31 = sub_EEB7E0(v6, p_ptr, *(double *)a3.m128_u64);
                    sub_1E88B80(a1, (int *)v31, (__int64)&v91, *(double *)a3.m128_u64, a4);
                    v32 = v94;
LABEL_44:
                    if ( v32 )
                      goto LABEL_45;
                    return;
                  default:
LABEL_45:
                    if ( v91 != &v93 )
                      free(v91);
                    break;
                }
              }
            }
          }
        }
      }
    }
  }
}
