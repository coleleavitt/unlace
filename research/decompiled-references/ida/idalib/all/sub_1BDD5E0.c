__int64 __fastcall sub_1BDD5E0(__int64 *a1, _QWORD *a2, unsigned int a3, __int64 **a4)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 **v11; // rbx
  __int64 **v12; // r12
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 **v15; // rax
  __int64 **v16; // r13
  __int64 **v17; // r12
  __int64 *v18; // rbp
  char v19; // al
  unsigned int v20; // ebp
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 *v24; // r12
  __int64 **v25; // r14
  __int64 *v26; // rbp
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // r13
  __int64 v30; // rsi
  _QWORD *v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdi
  _BYTE *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int8 v46; // al
  __int64 v47; // rdi
  __int64 v48; // rsi
  _QWORD *v49; // rcx
  _QWORD *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned int v54; // edx
  __int64 v55; // rsi
  unsigned int v56; // edx
  __int64 v57; // rsi
  char v58; // cl
  int v59; // r13d
  __int64 v60; // rax
  __int64 v61; // rbp
  unsigned __int64 v62; // rdx
  __int64 **v63; // rbx
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v71; // [rsp+28h] [rbp-1A0h]
  char v72; // [rsp+28h] [rbp-1A0h]
  char v73; // [rsp+28h] [rbp-1A0h]
  __int64 **v74; // [rsp+38h] [rbp-190h]
  unsigned __int64 v75; // [rsp+40h] [rbp-188h]
  __int64 v76; // [rsp+40h] [rbp-188h]
  __int64 v77; // [rsp+40h] [rbp-188h]
  unsigned __int64 v78; // [rsp+40h] [rbp-188h]
  __int64 v79; // [rsp+40h] [rbp-188h]
  unsigned __int64 v80; // [rsp+48h] [rbp-180h]
  __int64 v81; // [rsp+48h] [rbp-180h]
  void *v82; // [rsp+70h] [rbp-158h] BYREF
  unsigned int v83; // [rsp+78h] [rbp-150h]
  char v84; // [rsp+7Ch] [rbp-14Ch]
  void *v85; // [rsp+80h] [rbp-148h] BYREF
  unsigned int v86; // [rsp+88h] [rbp-140h]
  char v87; // [rsp+8Ch] [rbp-13Ch]
  void *v88; // [rsp+90h] [rbp-138h] BYREF
  unsigned int v89; // [rsp+98h] [rbp-130h]
  void *v90; // [rsp+A0h] [rbp-128h] BYREF
  unsigned int v91; // [rsp+A8h] [rbp-120h]
  unsigned int v92; // [rsp+ACh] [rbp-11Ch]
  _QWORD v93[4]; // [rsp+B0h] [rbp-118h] BYREF
  void *v94; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 v95; // [rsp+D8h] [rbp-F0h]
  _BYTE v96[32]; // [rsp+E0h] [rbp-E8h] BYREF
  void *ptr; // [rsp+100h] [rbp-C8h] BYREF
  __int64 v98; // [rsp+108h] [rbp-C0h]
  _BYTE v99[184]; // [rsp+110h] [rbp-B8h] BYREF

  v6 = *((unsigned int *)a1 + 2);
  ptr = v99;
  v98 = 0x1000000000LL;
  if ( v6 > 0x10 )
  {
    sub_2237220(&ptr, v99, v6, 8);
    v6 = *((unsigned int *)a1 + 2);
  }
  v7 = *a1;
  v8 = *a1 + 168 * v6;
  v9 = (unsigned int)v98;
  if ( v8 != *a1 )
  {
    do
    {
      if ( v9 + 1 > (unsigned __int64)HIDWORD(v98) )
      {
        sub_2237220(&ptr, v99, v9 + 1, 8);
        *((_QWORD *)ptr + (unsigned int)v98) = v7;
      }
      else
      {
        *((_QWORD *)ptr + v9) = v7;
      }
      v7 += 168;
      v9 = (unsigned int)(v98 + 1);
      LODWORD(v98) = v98 + 1;
    }
    while ( v8 != v7 );
  }
  v10 = a2[29];
  if ( (*(_BYTE *)(v10 + 60) & 0x10) != 0 && (*(_BYTE *)(v10 + 96) & 2) == 0 )
  {
    v94 = (void *)sub_15F1640((__int64)a2, 1);
    v63 = (__int64 **)((char *)ptr + 8 * (unsigned int)v98);
    if ( v63 != sub_1BCB310((__int64 **)ptr, (__int64)v63, (__int64)a2, (__int64 *)&v94, v64, v65) )
      sub_1BC96A0((__int64)&ptr, (__int64)a2, (__int64 *)&v94, v66, v67, v68);
  }
  v11 = (__int64 **)ptr;
  v12 = (__int64 **)((char *)ptr + 8 * (unsigned int)v98);
  v13 = 168LL * *((unsigned int *)a1 + 2);
  v14 = (__int64 *)(v13 + *a1);
  *a4 = v14;
  if ( v11 != v12 )
  {
    v15 = a4;
    v16 = v12;
    v17 = v15;
    do
    {
      v18 = *v11;
      v19 = *((_BYTE *)*v11 + 104);
      *((_BYTE *)*v11 + 104) = v19 & 0xFD;
      if ( (v19 & 1) != 0 )
      {
        if ( *v17 == (__int64 *)(*a1 + 168LL * *((unsigned int *)a1 + 2))
          || (unsigned __int8)sub_1BD5DB0(a2, v18, *v17, a3, *((unsigned int *)a1 + 743), 0) )
        {
          *v17 = v18;
        }
      }
      else if ( (v18[13] & 0x3FC00) == 0xC00 && *((_BYTE *)v18 + 112) == 15 && *(_BYTE *)(v18[15] + 137) )
      {
        v11 = (__int64 **)ptr;
        v20 = 1;
        *v17 = (__int64 *)(*a1 + 168LL * *((unsigned int *)a1 + 2));
        goto LABEL_19;
      }
      ++v11;
    }
    while ( v16 != v11 );
    v14 = *v17;
    a4 = v17;
    v11 = (__int64 **)ptr;
    v13 = 168LL * *((unsigned int *)a1 + 2);
  }
  if ( v14 == (__int64 *)(*a1 + v13) )
  {
    v20 = 1;
    goto LABEL_19;
  }
  v92 = 4;
  v95 = 0x400000000LL;
  v20 = 1;
  v22 = v93;
  v94 = v96;
  *((_BYTE *)v14 + 104) |= 2u;
  v90 = v93;
  v93[0] = v14;
  v74 = a4;
  while ( 1 )
  {
    v23 = v20--;
    v24 = (__int64 *)v22[v23 - 1];
    v91 = v20;
    v25 = &v11[(unsigned int)v98];
    if ( v11 != v25 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v26 = *v11;
          if ( ((*v11)[13] & 3) == 1 && !(unsigned __int8)sub_1BD5DB0(a2, v24, *v11, a3, *((unsigned int *)a1 + 743), 0) )
            break;
LABEL_28:
          if ( v25 == ++v11 )
            goto LABEL_44;
        }
        v27 = v91;
        v28 = v91 + 1LL;
        if ( v28 > v92 )
        {
          sub_2237220(&v90, v93, v28, 8);
          v27 = v91;
        }
        *((_QWORD *)v90 + v27) = v26;
        ++v91;
        v29 = *v26;
        *((_BYTE *)v26 + 104) |= 2u;
        v30 = *v24;
        v71 = *v24;
        if ( v29 && (*(_BYTE *)(v29 + 28) & 0x7Fu) - 26 <= 0x1A && v30 && (*(_BYTE *)(v30 + 28) & 0x7Fu) - 26 <= 0x1A )
        {
          v31 = (_QWORD *)(*(_QWORD *)(v29 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v29 + 16) & 4) != 0 )
            v31 = (_QWORD *)*v31;
          v75 = sub_B8EAA0((__int64)v31);
          v32 = *(_QWORD *)(v71 + 16);
          v33 = (v32 & 4) != 0 ? *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF8LL) : v32 & 0xFFFFFFFFFFFFFFF8LL;
          v80 = sub_B8EAA0(v33);
          if ( v80 )
          {
            v76 = sub_B91570(v75, v30, v34, v35, v36, v37);
            if ( v76 == sub_B91570(v80, v30, v80, v38, v39, v40) )
            {
              v43 = *(_QWORD *)(v29 + 8) & 7LL;
              if ( *(char *)(v29 + 29) < 0 )
              {
                v44 = 0;
                if ( v43 )
                  v44 = sub_B8C660(v29);
              }
              else
              {
                v44 = v43 ? *(_QWORD *)(v29 - 8) : 0LL;
              }
              v77 = *(_QWORD *)(v71 + 8);
              if ( *(char *)(v71 + 29) < 0 )
              {
                v45 = 0;
                if ( (v77 & 7) != 0 )
                {
                  v79 = v44;
                  v45 = sub_B8C660(v71);
                  v44 = v79;
                }
              }
              else
              {
                v45 = (v77 & 7) != 0 ? *(_QWORD *)(v71 - 8) : 0LL;
              }
              if ( v45 != v44 )
              {
                v46 = sub_B81B70(v29);
                if ( !v46 )
                  goto LABEL_111;
                if ( v46 > 3u )
                  goto LABEL_102;
                v46 = sub_B81B70(v71);
                if ( !v46 )
                  goto LABEL_111;
                if ( v46 > 3u )
                {
LABEL_102:
                  if ( v46 > 6u )
LABEL_111:
                    BUG();
                }
                else
                {
                  v47 = *(_QWORD *)&byte_8[*(_QWORD *)(v29 + 48) & 0xFFFFFFFFFFFFFFF0LL];
                  v48 = *(_QWORD *)&byte_8[*(_QWORD *)(v71 + 48) & 0xFFFFFFFFFFFFFFF0LL];
                  if ( (v47 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v47 | (unsigned __int8)*(_QWORD *)(v29 + 48)) & 7) == (v48 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v48 | (unsigned __int8)*(_QWORD *)(v71 + 48)) & 7) )
                    goto LABEL_96;
                  if ( (*(_BYTE *)(v29 + 28) & 0x7F) == 0x21 && (*(_BYTE *)(v71 + 28) & 0x7F) == 0x21 )
                  {
                    v49 = (_QWORD *)(*(_QWORD *)(v29 + 16) & 0xFFFFFFFFFFFFFFF8LL);
                    if ( (*(_QWORD *)(v29 + 16) & 4) != 0 )
                      v49 = (_QWORD *)*v49;
                    if ( v49 )
                      v49 -= 8;
                    v50 = (_QWORD *)(*(_QWORD *)(v71 + 16) & 0xFFFFFFFFFFFFFFF8LL);
                    if ( (*(_QWORD *)(v71 + 16) & 4) != 0 )
                      v50 = (_QWORD *)*v50;
                    if ( v50 )
                      v50 -= 8;
                    if ( !v49[5] )
                    {
                      v51 = v49[15];
                      if ( ((v51 & 4) != 0 || (v51 & 0xFFFFFFFFFFFFFFF8LL) == 0) && !v50[5] )
                      {
                        v52 = v50[15];
                        if ( (v52 & 4) != 0 || (v52 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                        {
                          v81 = (__int64)v49;
                          v78 = sub_6F3660((__int64)v50);
                          v53 = sub_6F3660(v81);
                          if ( (*(_QWORD *)&byte_8[v53 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                              | ((unsigned __int8)*(_QWORD *)&byte_8[v53 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v53)
                              & 7) == (*(_QWORD *)&byte_8[v78 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                                     | ((unsigned __int8)*(_QWORD *)&byte_8[v78 & 0xFFFFFFFFFFFFFFF0LL]
                                      | (unsigned __int8)v78)
                                     & 7) )
                          {
                            v54 = *(_DWORD *)(v71 + 64);
                            v55 = *(_QWORD *)(v71 + 56);
                            v72 = *(_BYTE *)(v71 + 80);
                            sub_1BC6F10((__int64)&v88, v55, v54);
                            v56 = *(_DWORD *)(v29 + 64);
                            v57 = *(_QWORD *)(v29 + 56);
                            v83 = v89;
                            v84 = v72;
                            v58 = *(_BYTE *)(v29 + 80);
                            v82 = v88;
                            v73 = v58;
                            sub_1BC6F10((__int64)&v88, v57, v56);
                            v87 = v73;
                            v86 = v89;
                            v85 = v88;
                            v59 = sub_98E2D0((__int64 *)&v85, (__int64 *)&v82);
                            if ( v86 > 0x40 && v85 )
                              operator delete[](v85);
                            if ( v83 > 0x40 && v82 )
                              operator delete[](v82);
                            if ( !v59 )
                            {
LABEL_96:
                              v60 = (unsigned int)v95;
                              v61 = *v26;
                              v62 = (unsigned int)v95 + 1LL;
                              if ( v62 > HIDWORD(v95) )
                              {
                                sub_2237220(&v94, v96, v62, 8);
                                v60 = (unsigned int)v95;
                              }
                              *((_QWORD *)v94 + v60) = v61;
                              LODWORD(v95) = v95 + 1;
                              goto LABEL_28;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        ++v11;
        *v74 = (__int64 *)(*a1 + 168LL * *((unsigned int *)a1 + 2));
        if ( v25 == v11 )
        {
LABEL_44:
          v20 = v91;
          break;
        }
      }
    }
    if ( !v20 )
      break;
    v22 = v90;
    v11 = (__int64 **)ptr;
  }
  if ( *v74 == (__int64 *)(*a1 + 168LL * *((unsigned int *)a1 + 2)) )
  {
    v42 = v94;
    v20 = 2;
  }
  else
  {
    *((_BYTE *)*v74 + 104) |= 2u;
    v41 = **v74;
    if ( v41 && (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 32LL))(v41) + 82) & 0x40) != 0 )
      v20 = 3;
    v42 = v94;
    if ( (_DWORD)v95 )
    {
      sub_1BDD0B0((__int64)a2, a3, **v74, (__int64 *)v94, (unsigned int)v95);
      v42 = v94;
    }
  }
  if ( v42 != v96 )
    free(v42);
  if ( v90 != v93 )
    free(v90);
  v11 = (__int64 **)ptr;
LABEL_19:
  if ( v11 != (__int64 **)v99 )
    free(v11);
  return v20;
}
