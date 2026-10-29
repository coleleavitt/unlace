unsigned __int64 __fastcall sub_6DE400(
        _QWORD *a1,
        unsigned __int64 a2,
        char *a3,
        void **a4,
        char *a5,
        __int64 a6,
        unsigned __int8 a7)
{
  void **v8; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v14; // r15
  void **p_ptr; // rsi
  __int64 v16; // rdi
  __int64 v17; // r9
  void **v18; // rdx
  char *v19; // r8
  __int64 v20; // rcx
  char *v21; // rdx
  char *v22; // rcx
  __int64 v23; // rdi
  __int64 (*v24)(void); // rax
  __int64 v25; // rax
  __int64 v26; // rax
  char *v27; // r15
  __int64 v28; // r9
  __int64 v29; // rax
  _BYTE *v30; // r9
  int v31; // r8d
  __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rsi
  __int64 v38; // r15
  char *v39; // rdi
  __int64 v40; // rsi
  char *v41; // rsi
  char *v42; // r15
  __int64 (__fastcall *v43)(__int64); // rcx
  __int64 v44; // rdi
  __int64 (*v45)(void); // rax
  char *v46; // rsi
  char *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // ebx
  __int64 v51; // rax
  __int64 v52; // rdx
  char *v53; // r12
  __int64 v54; // rdi
  __int64 (__fastcall *v55)(__int64); // rax
  char *v56; // rdx
  __int64 i; // rdi
  char *v58; // r15
  __int64 v59; // rcx
  signed __int64 v60; // rax
  char *v61; // rdi
  __int64 v62; // [rsp-10h] [rbp-1E8h]
  _QWORD *v66; // [rsp+18h] [rbp-1C0h]
  unsigned int v67; // [rsp+2Ch] [rbp-1ACh]
  _DWORD *v68; // [rsp+38h] [rbp-1A0h]
  __int64 v69; // [rsp+40h] [rbp-198h]
  __int64 v70; // [rsp+40h] [rbp-198h]
  size_t na; // [rsp+48h] [rbp-190h]
  __int64 n; // [rsp+48h] [rbp-190h]
  size_t nb; // [rsp+48h] [rbp-190h]
  int v74; // [rsp+50h] [rbp-188h]
  char *v75; // [rsp+50h] [rbp-188h]
  char *v76; // [rsp+50h] [rbp-188h]
  int v77; // [rsp+58h] [rbp-180h]
  char *v78; // [rsp+60h] [rbp-178h]
  char *v79; // [rsp+60h] [rbp-178h]
  char *v80; // [rsp+60h] [rbp-178h]
  char *v81; // [rsp+60h] [rbp-178h]
  char v82; // [rsp+68h] [rbp-170h]
  __int64 (__fastcall *v83)(__int64); // [rsp+70h] [rbp-168h]
  void **v84; // [rsp+70h] [rbp-168h]
  __int64 v85; // [rsp+88h] [rbp-150h] BYREF
  void *v86; // [rsp+90h] [rbp-148h] BYREF
  __int64 v87; // [rsp+98h] [rbp-140h]
  _BYTE v88[32]; // [rsp+A0h] [rbp-138h] BYREF
  void *base; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v90; // [rsp+C8h] [rbp-110h]
  _BYTE v91[64]; // [rsp+D0h] [rbp-108h] BYREF
  void *ptr; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v93; // [rsp+118h] [rbp-C0h]
  _BYTE v94[184]; // [rsp+120h] [rbp-B8h] BYREF

  v8 = a4;
  if ( !((unsigned __int64)a4 | a6) && !a7 )
  {
    v12 = a2;
    v14 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 35 )
      return v12;
    ptr = v94;
    v93 = 0x2000000000LL;
    sub_B158B0((unsigned int)&ptr, a2, (_DWORD)a3, (_DWORD)a4, (_DWORD)a5, a6, 0);
    p_ptr = &ptr;
    v66 = a1 + 85;
    v85 = 0;
    v10 = sub_25AC3A0(a1 + 85, &ptr, &v85, &off_47D07C0);
    v11 = v62;
    if ( v10 )
      goto LABEL_4;
    v68 = (_DWORD *)v14;
    v67 = 0;
LABEL_11:
    v16 = *(_QWORD *)v68;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v68 + 16LL) - 34 > 1
      && ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 > 1
       || (v16 = sub_B0D320(v16)) == 0) )
    {
      if ( !a6 )
      {
        LODWORD(v17) = (_DWORD)a3;
        LODWORD(p_ptr) = 0;
        goto LABEL_75;
      }
      v21 = a3;
      p_ptr = nullptr;
      v17 = (__int64)a3;
      v19 = a3;
      goto LABEL_22;
    }
    v17 = sub_B0DCB0(v16, p_ptr, v11);
    p_ptr = v18;
LABEL_14:
    v19 = (char *)(v17 + 8LL * (_QWORD)p_ptr);
    v20 = (8 * (__int64)p_ptr) >> 5;
    if ( v20 > 0 )
    {
      v21 = (char *)v17;
      v22 = (char *)(v17 + 32 * v20);
      while ( (*(_QWORD *)(*(_QWORD *)v21 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v21 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) )
      {
        if ( (*(_QWORD *)(*((_QWORD *)v21 + 1) & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v21 + 1) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) )
        {
          v21 += 8;
          break;
        }
        if ( (*(_QWORD *)(*((_QWORD *)v21 + 2) & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v21 + 2) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) )
        {
          v21 += 16;
          break;
        }
        if ( (*(_QWORD *)(*((_QWORD *)v21 + 3) & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v21 + 3) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) )
        {
          v21 += 24;
          break;
        }
        v21 += 32;
        if ( v21 == v22 )
          goto LABEL_98;
      }
LABEL_21:
      if ( !a6 )
      {
        if ( v19 != v21 )
        {
          v82 = 1;
          v86 = v88;
          v87 = 0x400000000LL;
LABEL_27:
          if ( (unsigned __int64)p_ptr > 4 )
          {
            v80 = v19;
            nb = v17;
            sub_25D6060(&v86, v88, p_ptr, 8);
            v17 = nb;
            v19 = v80;
            LODWORD(p_ptr) = v87;
            v26 = (unsigned int)v87;
          }
          else
          {
            LODWORD(p_ptr) = 0;
            v26 = 0;
          }
          if ( (char *)v17 != v19 )
          {
            v27 = (char *)v17;
            do
            {
              while ( 1 )
              {
                v28 = *(_QWORD *)&byte_8[*(_QWORD *)v27 & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)v27 & 7LL;
                if ( HIDWORD(v87) < (unsigned __int64)(v26 + 1) )
                  break;
                v27 += 8;
                *((_QWORD *)v86 + v26) = v28;
                v26 = (unsigned int)(v87 + 1);
                LODWORD(v87) = v87 + 1;
                if ( v19 == v27 )
                  goto LABEL_34;
              }
              v78 = v19;
              na = *(_QWORD *)&byte_8[*(_QWORD *)v27 & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)v27 & 7LL;
              v27 += 8;
              sub_25D6060(&v86, v88, v26 + 1, 8);
              v19 = v78;
              *((_QWORD *)v86 + (unsigned int)v87) = na;
              v26 = (unsigned int)(v87 + 1);
              LODWORD(v87) = v87 + 1;
            }
            while ( v78 != v27 );
LABEL_34:
            LODWORD(p_ptr) = v26;
          }
          LODWORD(v17) = (_DWORD)v86;
LABEL_36:
          v74 = v17;
          base = v91;
          v77 = (int)p_ptr;
          v90 = 0x800000000LL;
          v29 = 8 * a6;
          n = 8 * a6;
          if ( v82 )
          {
            LODWORD(v30) = (_DWORD)a5;
            v31 = a6;
LABEL_38:
            v32 = sub_6DE400((_DWORD)a1, v68[2] | (unsigned int)(a2 & 7), v74, v77, (_DWORD)v30, v31, v67);
            goto LABEL_39;
          }
          v38 = v29 >> 3;
          if ( (unsigned __int64)v29 > 0x40 )
          {
            sub_25D6060(&base, v91, v29 >> 3, 8);
            v61 = (char *)base + 8 * (unsigned int)v90;
          }
          else
          {
            if ( !n )
            {
              LODWORD(v90) = 0;
              v39 = v91;
              v40 = 0;
LABEL_50:
              v41 = &v39[v40];
              if ( v41 == v39 )
              {
                v30 = v39;
              }
              else
              {
                v42 = v39;
                v43 = sub_6A67A0;
                do
                {
                  while ( 1 )
                  {
                    v44 = *(_QWORD *)v42;
                    v45 = *(__int64 (**)(void))(**(_QWORD **)v42 + 32LL);
                    if ( (char *)v45 != (char *)v43 )
                      break;
                    v42 += 8;
                    *((_QWORD *)v42 - 1) = *(_QWORD *)(v44 + 96);
                    if ( v41 == v42 )
                      goto LABEL_54;
                  }
                  v83 = v43;
                  v42 += 8;
                  v48 = v45();
                  v43 = v83;
                  *((_QWORD *)v42 - 1) = v48;
                }
                while ( v41 != v42 );
LABEL_54:
                v30 = base;
                v46 = (char *)base + 8 * (unsigned int)v90;
                v39 = (char *)base;
                if ( base != v46 )
                {
                  while ( 1 )
                  {
                    v47 = v39;
                    v39 += 8;
                    if ( v46 == v39 )
                      break;
                    if ( *((_QWORD *)v39 - 1) == *((_QWORD *)v47 + 1) )
                    {
                      if ( v46 == v47 )
                      {
                        v39 = (char *)base + 8 * (unsigned int)v90;
                      }
                      else
                      {
                        v56 = v47 + 16;
                        if ( v46 != v47 + 16 )
                        {
                          for ( i = *(_QWORD *)v47; ; i = v59 )
                          {
                            v59 = *(_QWORD *)v56;
                            if ( *(_QWORD *)v56 == i )
                            {
                              v56 += 8;
                              if ( v46 == v56 )
                                break;
                            }
                            else
                            {
                              v56 += 8;
                              *((_QWORD *)v47 + 1) = v59;
                              v58 = v47 + 8;
                              if ( v56 == v46 )
                                goto LABEL_86;
                              v47 += 8;
                            }
                          }
                        }
                        v58 = v47;
LABEL_86:
                        v39 = v58 + 8;
                      }
                      break;
                    }
                  }
                }
              }
              LODWORD(v90) = (v39 - v30) >> 3;
              v31 = v90;
              goto LABEL_38;
            }
            v61 = v91;
          }
          memcpy(v61, a5, n);
          v39 = (char *)base;
          LODWORD(v90) = v38 + v90;
          v40 = 8LL * (unsigned int)v90;
          if ( (unsigned int)v90 > 1uLL )
          {
            qsort(base, v40 >> 3, 8u, sub_6A6C10);
            v39 = (char *)base;
            v40 = 8LL * (unsigned int)v90;
          }
          goto LABEL_50;
        }
        goto LABEL_75;
      }
LABEL_22:
      v23 = *(_QWORD *)a5;
      v24 = *(__int64 (**)(void))(**(_QWORD **)a5 + 32LL);
      if ( (char *)v24 == (char *)sub_6A67A0 )
      {
        v25 = *(_QWORD *)(v23 + 96);
      }
      else
      {
        v76 = v21;
        v81 = v19;
        v70 = v17;
        v25 = v24();
        v21 = v76;
        v19 = v81;
        v23 = *(_QWORD *)a5;
        v17 = v70;
      }
      if ( v25 != v23 )
      {
LABEL_25:
        v82 = 0;
        goto LABEL_26;
      }
      if ( a6 != 1 )
      {
        v49 = 1;
        v50 = 1;
        v69 = v17;
        v79 = v19;
        v75 = v21;
        v84 = v8;
        while ( 1 )
        {
          v53 = &a5[8 * v49];
          if ( sub_790B40(*(_QWORD *)(v23 + 40), *(_QWORD *)(*(_QWORD *)v53 + 40LL)) >= 0
            || ((v54 = *(_QWORD *)v53,
                 v55 = *(__int64 (__fastcall **)(__int64))(**(_QWORD **)v53 + 32LL),
                 v55 == sub_6A67A0)
              ? (v51 = *(_QWORD *)(v54 + 96))
              : (v51 = ((__int64 (*)(void))v55)(), v54 = *(_QWORD *)v53),
                v51 != v54) )
          {
            v17 = v69;
            v19 = v79;
            v21 = v75;
            v8 = v84;
            goto LABEL_25;
          }
          v49 = v50 + 1;
          if ( v49 == a6 )
            break;
          v52 = v50++;
          v23 = *(_QWORD *)&a5[8 * v52];
        }
        v17 = v69;
        v19 = v79;
        v21 = v75;
        v8 = v84;
      }
      if ( v21 != v19 )
      {
        v82 = 1;
LABEL_26:
        v86 = v88;
        v87 = 0x400000000LL;
        if ( v21 == v19 )
          goto LABEL_36;
        goto LABEL_27;
      }
LABEL_75:
      if ( (*(_QWORD *)v68 & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)v68 + 8LL) )
      {
        v33 = 0;
        LODWORD(n) = 8 * a6;
LABEL_43:
        v34 = (unsigned int)(n + 8 * (_DWORD)v8 + 48);
        v35 = a1[274];
        a1[284] += v34;
        v36 = (v35 + 15) & 0xFFFFFFFFFFFFFFF0LL;
        if ( a1[275] >= (unsigned __int64)(v34 + v36) && v35 )
          a1[274] = v34 + v36;
        else
          v36 = sub_6A76A0((__int64)(a1 + 274), v34, 4);
        sub_B07940(v36, v33, a2, a3, v8, v67, a5, a6);
        *(_QWORD *)(v36 + 40) = 0;
        sub_6D95F0((__int64)(a1 + 1), v36);
        v37 = v36 + 40;
        v12 = v36 & 0xFFFFFFFFFFFFFFF0LL;
        sub_25AC200(v66, v37, v85, &off_47D07C0);
        goto LABEL_5;
      }
      v86 = v88;
      v87 = 0x400000000LL;
      base = v91;
      v90 = 0x800000000LL;
      LODWORD(n) = 8 * a6;
      v32 = sub_6DE400((_DWORD)a1, v68[2] | (unsigned int)(a2 & 7), v17, (_DWORD)p_ptr, (_DWORD)a5, a6, v67);
LABEL_39:
      v33 = v32;
      sub_25AC3A0(v66, &ptr, &v85, &off_47D07C0);
      if ( base != v91 )
        free(base);
      if ( v86 != v88 )
        free(v86);
      goto LABEL_43;
    }
    v22 = (char *)v17;
LABEL_98:
    v60 = v19 - v22;
    if ( v19 - v22 != 16 )
    {
      if ( v60 != 24 )
      {
        if ( v60 != 8 )
          goto LABEL_102;
LABEL_101:
        if ( (*(_QWORD *)(*(_QWORD *)v22 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) )
        {
LABEL_102:
          v21 = (char *)(v17 + 8LL * (_QWORD)p_ptr);
          if ( !a6 )
            goto LABEL_75;
          goto LABEL_22;
        }
LABEL_105:
        v21 = v22;
        goto LABEL_21;
      }
      if ( (*(_QWORD *)(*(_QWORD *)v22 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) )
        goto LABEL_105;
      v22 += 8;
    }
    if ( (*(_QWORD *)(*(_QWORD *)v22 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22 & 0xFFFFFFFFFFFFFFF0LL)
                                                                                                  + 8LL) )
      goto LABEL_105;
    v22 += 8;
    goto LABEL_101;
  }
  v67 = a7;
  ptr = v94;
  v93 = 0x2000000000LL;
  sub_B158B0((unsigned int)&ptr, a2, (_DWORD)a3, (_DWORD)a4, (_DWORD)a5, a6, a7);
  v66 = a1 + 85;
  v85 = 0;
  v10 = sub_25AC3A0(a1 + 85, &ptr, &v85, &off_47D07C0);
  if ( !v10 )
  {
    v17 = (__int64)a3;
    p_ptr = v8;
    v68 = (_DWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    if ( v8 )
      goto LABEL_14;
    goto LABEL_11;
  }
LABEL_4:
  v12 = (v10 - 40) & 0xFFFFFFFFFFFFFFF0LL;
LABEL_5:
  if ( ptr != v94 )
    free(ptr);
  return v12;
}

